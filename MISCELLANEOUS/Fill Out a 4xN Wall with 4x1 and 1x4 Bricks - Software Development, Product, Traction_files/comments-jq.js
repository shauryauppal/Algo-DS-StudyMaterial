

//
// WARNING: none of the Prototype-esque utilities are available !!!
// (showCommentForm-v2.php doesn't include jquery_utils.js)
//


(function($) {


var ajax = '/weebly/publicBackend.php';
var comment = { };


window.submitComment = function() {

	if ($('#commentSubmit').hasClass('disabled')) {
		return;
	}

	if ($('#commentName').val()) {

		$('#errorMessage').empty();

		comment.postId = $('#commentPostId').val();
		comment.name = $('#commentName').val();
		comment.email = $('#commentEmail').val() || '';
		comment.website = $('#commentWebsite').val() || '';
		comment.comment = $('#commentComment').val();
		comment.userId = $('#userId').val();
		comment.parentId = $('#parentId').val();
		comment.notify = $('#commentNotify').prop('checked') ? '1' : '0';
		comment.blogId = $('#blogId').val();

		if ($('#captchaMarkup').css('display') != 'none') {
			comment.captchaResponse = $('#recaptcha_response_field').val();
			comment.captchaChallenge = $('#recaptcha_challenge_field').val();
		}

		if (CAPTCHA_REQUIRED == true && $('#captchaMarkup').css('display') == 'none') {
			// Show the CAPTCHA markup
			showCaptchaMarkup();
		}
		else {
			$('#commentSubmit').prop('disabled', true);
			doPost(comment);
		}

	}
	else {

		$('#errorMessage').html("You must enter your name. Please try again.");
		$('#commentName').effect('highlight', { color: '#dd0000' }, 1000);

	}

};


function doPost(comment) {
	disableCommentFields();
	$.ajax(ajax, {
		type: 'POST',
		data: {
			pos: 'postcomment',
			postid: comment.postId,
			user_id: comment.userId,
			cookie: document.cookie,
			name: comment.name,
			email: comment.email,
			website: comment.website,
			commentv2: comment.comment,
			parentId: comment.parentId,
			notify: comment.notify,
			blogId: comment.blogId,
			recaptcha_response_field: comment.captchaResponse,
			recaptcha_challenge_field: comment.captchaChallenge
		},
		success: function(response) {
			if (typeof response == 'object') { // returned a content-type text/json and already parsed
				if (response.result == false) {
					if (response.error == 'captcha') {
						showCaptchaError();
					}
				}
			}
			else { // a string
				handlerSubmitComment(response);
			}
		},
		error: function() {
			enableCommentFields();
			errFunc();
		}
	});
}


function enableCommentFields() {
	toggleCommentFields(true);
}


function disableCommentFields() {
	toggleCommentFields(false);
}


function toggleCommentFields(enable) {
	enable = enable || false;

	$('#commentName,#commentEmail,#commentWebsite,#commentComment,#commentNotify')
		.each(function(i, node) {
			var element = $(node);
			var field = element.parent().parent();
			if (enable) {
				field.removeClass('field-disabled');
				element.prop('disabled', false);
			}
			else {
				field.addClass('field-disabled');
				element.prop('disabled', true);
			}
		});

	if (enable) {
		$('#commentSubmit')
			.removeClass('disabled')
			.find('span:first')
				.html(_W.utl('html.weebly.images.common.comments-jq_1'));
	}
	else {
		$('#commentSubmit')
			.addClass('disabled')
			.find('span:first')
				.html(_W.utl('html.weebly.images.common.comments-jq_2'));
	}
}


function handlerSubmitComment(responseText) {

	if (responseText.match("%%SUCCESS%%") || responseText.match("%%MODERATE%%")) {

		$('#commentName').val('');
		$('#commentEmail').val('');
		$('#commentWebsite').val('');
		$('#commentNotify').prop('checked', false);
		$('#commentComment').val('');

		$('#commentSubmit').prop('disabled', false);

		if (responseText.match("%%MODERATE%%")) {

			enableCommentFields();
			$('#errorMessage')
				.html("<b style='color: black;'>This comment is currently being held for moderation awaiting approval.</b>");

		}
		else {

			// Logged in site owner/user
			if ($('#commentUserInfo').length) {
				window.top.location.href = document.referrer;
			}
			else {
				$('#commentPostArea').slideToggle();
				$('#errorMessage')
					.html("<b style='color: black;'>Your comment was successfully posted.</b>");
			}

		}

	}
	else {

		enableCommentFields();

		$('#commentSubmit').prop('disabled', false);

		if (responseText.match("ERROR:")) {
			$('#errorMessage').html(responseText.replace("ERROR:", ""));
		}
		else {
			$('#errorMessage').html("There was an error submitting your comment. Please try again");
		}
	}

}


function errFunc() {
	$('#errorMessage').html("There was an error submitting your comment. Please try again");
}


function showCaptchaMarkup() {
	var captchaOptions = {
		theme: 'custom',
		custom_theme_widge: 'blogCommentCaptcha'
	};
	$('#commentInputs').hide();
	$('#commentCancelCaptcha').show();
	$('#commentUserInfo').hide();
	Recaptcha.create('6Lf4O9USAAAAAOSa9cF4SEtxBcjrwrLe1_yP00ke', 'captchaMarkup', captchaOptions);
}


function hideCaptchaMarkup() {
	$('#captchaMarkup').hide();
	$('#commentInputs').show();
	$('#commentCancelCaptcha').hide();
}
window.hideCaptchaMarkup = hideCaptchaMarkup; // showCommentForm-v2.php needs it


function showCaptchaError() {
	if ($('#captchaMarkup').css('display') != 'none') {
		$('#errorMessage').text('Please try again.');
		Recaptcha.reload();
		enableCommentFields();
		$('#commentSubmit').prop('disabled', false);
	}
	else {
		showCaptchaMarkup();
		enableCommentFields();
	}
}


})(jQuery);
