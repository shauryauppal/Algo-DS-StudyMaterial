(function() {
    if (typeof jQuery === "undefined") {
        var script_tag = document.createElement('script');
        script_tag.setAttribute("type", "text/javascript");
        script_tag.setAttribute("src", "//cdn.mailerlite.com/ajax/libs/jquery/1.7.1/jquery.min.js");
        script_tag.onload = ml_load_libs;
        script_tag.onreadystatechange = function () {
            if (this.readyState == 'complete' || this.readyState == 'loaded') ml_load_libs();
        }
        document.getElementsByTagName("head")[0].appendChild(script_tag);
    } else {
        ml_load_libs();
    }

    function ml_load_libs() {
        var libs = ["//static.mailerlite.com/js/w/jquery.inputmask.bundle.min.js"];

        for (var i in libs) {
            if (libs.hasOwnProperty(i)) {
                var script_tag = document.createElement('script');
                script_tag.setAttribute("type", "text/javascript");
                script_tag.setAttribute("src", libs[i]);

                if (i == libs.length - 1) {
                    script_tag.onload = ml_webform_embed;
                    script_tag.onreadystatechange = function () {
                        if (this.readyState == 'complete' || this.readyState == 'loaded') ml_webform_embed();
                    };
                }
                document.getElementsByTagName("head")[0].appendChild(script_tag);
            }
        }
    }

    function ml_webform_embed() {
        jQuery('.ml-subscribe-form form').each(function () {
            var $form = jQuery(this);
            var $wrapper = jQuery(this).closest('.ml-subscribe-form');

            var code = $form.data('code');
            var webform_data = window.webform_data && window.webform_data[code] ? window.webform_data[code] : {};

            var submit_primary = jQuery(this).find('button.primary');
            var submit_loading = jQuery(this).find('button.loading');
            var submit_loading_enabled = submit_loading.length > 0;

            $form.find('.ml-validate-date input').inputmask(undefined, {
                oncomplete: function () {
                    jQuery(this).closest('.ml-validate-date').addClass('ml-validate-date-valid');
                }, onincomplete: function () {
                    jQuery(this).closest('.ml-validate-date').removeClass('ml-validate-date-valid');
                }, oncleared: function () {
                    jQuery(this).closest('.ml-validate-date').removeClass('ml-validate-date-valid');
                }, onKeyValidation: function (result, opts) {
                    jQuery(this).closest('.ml-validate-date').removeClass('ml-validate-date-valid');
                }
            });

            $form.find('.ml-validate-phone input').inputmask(undefined, {
                oncomplete: function () {
                    jQuery(this).closest('.ml-validate-phone').addClass('ml-validate-phone-valid');
                }, onincomplete: function () {
                    jQuery(this).closest('.ml-validate-phone').removeClass('ml-validate-phone-valid');
                }, oncleared: function () {
                    jQuery(this).closest('.ml-validate-phone').removeClass('ml-validate-phone-valid');
                }, onKeyValidation: function (result, opts) {
                    jQuery(this).closest('.ml-validate-phone').removeClass('ml-validate-phone-valid');
                }
            });

            if ($form.data('ml-submit-bound') === undefined || !$form.data('ml-submit-bound')) {
                $form.data('ml-submit-bound', 1);

                $wrapper.find('.ml-block-success').bind('click', function () {
                    $wrapper.find('.ml-block-success').hide();
                    $wrapper.find('.ml-block-form').find('input[type="text"]').val('');
                    var $checkboxes = $wrapper.find('.ml-block-form').find('input[type="checkbox"]');
                    if ($checkboxes.prop !== undefined) {
                        $checkboxes.prop('checked', false);
                    } else {
                        $checkboxes.attr('checked', false);
                    }

                    $wrapper.find('.ml-block-form').show();
                });

                $form.bind('submit', function (e) {
                    e.preventDefault();

                    //nuvalom visus error'us
                    $form.find('.ml-error').removeClass('ml-error');

                    if (ml_validate_form($form)) {
                        if (submit_loading_enabled) {
                            submit_primary.hide();
                            submit_loading.show();
                        }

                        var form_data = $form.serialize();
                        form_data = form_data + '&ajax=1';

                        var form_url = $form.attr('action');


                        jQuery.ajax({
                            type: 'GET',
                            url: form_url,
                            data: form_data,
                            dataType: 'jsonp',
                            success: function (result) {
                                if (submit_loading_enabled) {
                                    submit_primary.show();
                                    submit_loading.hide();
                                }

                                if (result.success) {
                                    var successFnName = 'ml_webform_success_' + $wrapper.attr('id').substr(5);
                                    if (typeof window[successFnName] === 'function') {
                                        window[successFnName]();
                                    } else {
                                        $wrapper.find('.ml-block-success').show();
                                        $wrapper.find('.ml-block-form').hide();
                                    }

                                    if (window != window.parent) {
                                        window.parent.postMessage('mlWebformSubmitSuccess-' + $wrapper.attr('id').substr(5), "*");
                                    }

                                } else {

                                    if (result.errors !== undefined) {
                                        if (result.errors.groups !== undefined && result.errors.groups) {
                                            $form.find('.ml-block-groups').addClass('ml-error');
                                        }
                                        if (result.errors.fields !== undefined && result.errors.fields) {
                                            jQuery.each(result.errors.fields, function (field, value) {
                                                $form.find('.ml-field-' + field).addClass('ml-error');
                                            });
                                        }
                                    }
                                }

                            },
                            error: function (responseData, textStatus, errorThrown) {
                                if (submit_loading_enabled) {
                                    submit_primary.show();
                                    submit_loading.hide();
                                }

                                //TODO:
                            }
                        });

                    }
                });

                // Track webform view
                var webform_id = $wrapper.attr('id').substr(5);
                var webform_code = $form.data('code');
                (new Image()).src = 'https://track.mailerlite.com/webforms/o/' + webform_id + '/' + webform_code + '?v' + Math.floor(Date.now() / 1000);

            }

            if (window != window.parent) {
                jQuery(document).on('click', '.overlay, .ml-subscribe-close', function () {
                    window.parent.postMessage('mlCloseIframe-' + $form.data('code'), "*");
                });

                jQuery('.ml-subscribe-form').bind('click', function (e) {
                    var target = e.target || e.srcElement;
                    if (jQuery(target).is('div.ml-subscribe-close')) {
                        return;
                    }

                    e.stopPropagation();
                });
            }
        });
    }

    function ml_validate_form($form) {
        var form_valid = true;

        $form.find('.ml-validate-required').each(function (index, w) {
            var element_valid = false;
            jQuery(w).find('input[type="text"], input[type="email"]').each(function (i, v) {
                if (jQuery(v).val() !== undefined && jQuery(v).val() !== '') {
                    element_valid = true;
                }
            });
            jQuery(w).find('input[type="checkbox"]').each(function (i, v) {
                if (jQuery(v).prop !== undefined) {
                    if (jQuery(v).prop('checked')) {
                        element_valid = true;
                    }
                } else {
                    if (jQuery(v).attr('checked')) {
                        element_valid = true;
                    }
                }
            });

            if (!element_valid) {
                jQuery(w).addClass('ml-error');
                form_valid = false;
            }
        });

        $form.find('.ml-validate-email').each(function (index, w) {
            var element_valid = true;
            jQuery(w).find('input[type="text"], input[type="email"]').each(function (i, v) {
                if (jQuery(v).val() !== undefined && jQuery(v).val() !== '' && !ml_valid_email(jQuery(v).val())) {
                    element_valid = false;
                }
            });

            if (!element_valid) {
                jQuery(w).addClass('ml-error');
                form_valid = false;
            }
        });

        $form.find('.ml-validate-date').each(function (index, w) {
            var element_valid = true;
            jQuery(w).find('input[type="text"]').each(function (i, v) {
                if (jQuery(v).val() !== undefined && jQuery(v).val() !== '' && !jQuery(w).hasClass('ml-validate-date-valid')) {
                    element_valid = false;
                }
            });

            if (!element_valid) {
                jQuery(w).addClass('ml-error');
                form_valid = false;
            }
        });

        $form.find('.ml-validate-phone').each(function (index, w) {
            var element_valid = true;
            jQuery(w).find('input[type="text"]').each(function (i, v) {
                if (jQuery(v).val() !== undefined && jQuery(v).val() !== '' && !jQuery(w).hasClass('ml-validate-phone-valid')) {
                    element_valid = false;
                }
            });

            if (!element_valid) {
                jQuery(w).addClass('ml-error');
                form_valid = false;
            }
        });

        return form_valid;
    }

    function ml_valid_email(email) {
        var regex = /^([a-zA-Z0-9_.+-])+\@(([a-zA-Z0-9-])+\.)+([a-zA-Z0-9]){2,40}$/;
        return regex.test(email.trim());
    }
})();
