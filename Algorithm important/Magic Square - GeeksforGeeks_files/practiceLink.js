( function($) {

        $.ajax({
                url: "http://auth.geeksforgeeks.org/gfgLink.php",
                type: 'GET',
                dataType: "jsonp",
                data: {'link': window.location.href},
                success: function (responseData,textStatus,jqXHR) {
                $("#practice").html(responseData.markup);
                $("#company_tags").html(responseData.tags);
                },
                error: function (jqXHR, textStatus, errorThrown) {
                console.log('Response: ' + jqXHR);
                }
        });
})(jQuery);
