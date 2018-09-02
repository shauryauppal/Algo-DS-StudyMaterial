var contestData = new Array();

$(document).ready(function() {
	/**
	 * Inject Selectyze
	 */
	(function($) {
		$.fn.Selectyze = function(opt) {
			var defaults = {
				theme:'css3',
				effectOpen : 'slide',
				effectClose : 'slide',
				preventClose : false
			}; 

			if(this.length)
			return this.each(function() {

				/** vars **/
				var 
					opts = $.extend(defaults, opt),
					$this = $(this),
					optionselected = $this.find('option').filter(':selected'),
					DivSelect = $('<div>', {'class' : 'DivSelectyze '+opts.theme+''}),
					UlSelect = $('<ul>',{'class':'UlSelectize'}),
					liHtml = '';

				zIndex = 9999;

				/** DOM construction && manipulation **/
				constructList($this);
				$this.hide();
				$this.after(DivSelect);
				DivSelect.html('<a href="#" rel="'+optionselected.val()+'" class="selectyzeValue">'+optionselected.text()+'</a>');

				UlSelect.appendTo(DivSelect).html(liHtml);
				$('.DivSelectyze').each(function(i,el){
					$(this).css('z-index',zIndex);
					zIndex -= 10;
				});

				/** Actions **/
				n=false;
				DivSelect.mouseenter(function() {n =false;}).mouseleave(function() {n = true;});

				DivSelect.find('a.selectyzeValue').click(function(e){
					e.preventDefault();
					closeList($('ul.UlSelectize').not($(this).next()));
					openList($(this).next('ul.UlSelectize'));
				});

				UlSelect.find('a').click(function(e){
					e.preventDefault();
					DivSelect.find('a.selectyzeValue').text($(this).text());
					$this.val($(this).attr('rel'));           
					$this.trigger('change');         
					if (!opts.preventClose) {
						closeList($this.next().find('.UlSelectize'));
					}
				});

				$(document).click(function(e){if(n) closeList($('.UlSelectize').not(':hidden'));});

				/** Construct HTML list ul/li **/
				function constructList(el){
					/** Creat list content **/
					if(el.has('optgroup').length)
					{
						el.find('optgroup').each(function(i,el){
							liHtml += '<li><span class="optgroupTitle">'+$(this).attr('label')+'</span><ul>';
							$(this).children().each(function(i,el){
								liHtml += '<li><a rel="'+$(this).val()+'" href="#">'+$(this).text()+'</a></li>';
							});
							liHtml += '</ul></li>';
						});
					}
					else
					{
						el.find('option').each(function(i,el){
							liHtml += '<li><a rel="'+$(this).val()+'" href="#">'+$(this).text()+'</a></li>';
						});
					}
				}

				/** Effect Open list **/
				function openList(el) {
					switch (opts.effectOpen) {
						case 'slide' :
							if(!el.is(':hidden')) el.stop(true,true).slideUp('fast');	
							else el.stop(true,true).slideDown('fast');	
						break;
						case 'fade':
							if(!el.is(':hidden')) el.stop(true,true).fadeOut('fast');	
							else el.stop(true,true).fadeIn('fast');	
						break;
						default :
							if(!el.is(':hidden')) el.stop(true,true).hide();	
							else el.stop(true,true).show();	
					}
				}

				/** Effect Close list **/
				function closeList(el) {
					switch (opts.effectClose) {
						case 'slide' :
							el.stop(true,true).slideUp('fast');
						break;
						case 'fade':
							el.stop(true,true).fadeOut('fast');
						break;
						default :
							el.hide();	
					}
				}

			});
		}
	})(jQuery);
	/**
	 * Inject Selectyze
	 */
	 
	$(".selectyze").Selectyze({theme : 'grey'});

	$(".coderAchievementTable tbody tr:nth-child(even)").css("background-color","#eeeeee");
	
//	$(".search_contests_widget .inputBox input").inputTips();

	// search submit action
	$(".search_contests_widget .btnSearch").click(function(){
		$('.btnSubmit',$(this).parents('.search_contests_widget:first')).click();
	});
	  
	/**
	* Start of js get contest ajax 
	*/	
	
		
	$("#activeContest").on("click",".contestPageNumber", function() {
		var page = parseInt($(this).html());
		var contestMainDivId = $(this).parent().parent().attr('id');
		contestTableGoToPage(""+contestMainDivId,page);
	});
	$("#activeContest").on("click",".contestNext", function() {
		var page = parseInt($(this).parent().parent().find(".activePage").html());
		var pageCount = $(this).parent().parent().find(".contestPageNumber").length;
		
		var nextPage = page+1;
		var contestMainDivId = $(this).parent().parent().attr('id');
		if( page < pageCount ) {
			contestTableGoToPage(""+contestMainDivId,nextPage);
		}
	});
	$("#activeContest").on("click",".contestPrev", function() {
		var page = parseInt($(this).parent().parent().find(".activePage").html());
		var pageCount = $(this).parent().parent().find(".contestPageNumber").length;
		
		var prev = page-1;
		var contestMainDivId = $(this).parent().parent().attr('id');
		if( prev > 0 ) {
			contestTableGoToPage(""+contestMainDivId,prev);
		}
	});
		
	

	
	/**
	* End of js get contest ajax 
	*/

});

/**
* Start of js get contest ajax 
*/	
function listActiveContest(contestId,contestType,contest_track,sortColumn,sortOrder) {
	var url = ajaxUrl;
	var action;
	/* 
		switch contest type 
	*/
	switch (contestType)
	{
		case "activeContest":
		  action="get_active_contest";
		  break;
		case "pastContest":
		  action="get_past_contest";
		  break;
		case "reviewOpportunities":
		  action="get_review_opportunities";
		  break;
	}
	app.setLoading();
	$("#"+contestId+" .pagingWrapper").empty();
	$('#'+contestId+' .contestTable tbody').empty();
	$('#'+contestId+' .contestTable thead .head td').unbind('click');
	
	$.ajax({
		type: "GET",
		url: url,
		data: {"action":action,"contest_type":contest_track,"sortColumn":sortColumn,"sortOrder":sortOrder},
		dataType: 'json',
		success: function(data) {
			hideLoader(contestId);
			if(data!="Error in processing request or Member dosen't exist") {
				contestData[""+contestId] = data;
				contestTableGoToPage(contestId,contestType,1);
				generatePagingButton(contestId);
			}
		},
		error: function() {
			alert('error');
		}
	});
	
}

/* 
	Go to page function
	contestId = The div id of contest table
	contestType = Assembly, Development, etc
	navPage = is the navigation page to go
*/
function contestTableGoToPage(contestId,contestType,navPage) {
	var page = navPage;
	
	$('#'+contestId+' .contestTable tbody').empty();
	var postPerPage = $("#"+contestId).find(".postPerPage").val();
	var tempContestData = contestData[""+contestId];
	
	if(tempContestData!=null) {
		var postCount = tempContestData.length;
		
		var pageCount = parseInt(( postCount / postPerPage ));
		if( ( postCount % postPerPage ) != 0 ) pageCount++;
		
		if(page==1) $("#"+contestId+" .contestPrev").hide();
		else $("#"+contestId+" .contestPrev").show(); 
		
		if(page==pageCount) $("#"+contestId+" .contestNext").hide();
		else $("#"+contestId+" .contestNext").show(); 
		
		var start = (navPage-1) * postPerPage;
		var end = (navPage * postPerPage) - 1;
		
		var headers = $('#'+contestId+' .contestTable thead .head').children();
		
		// if activeContest and past contest create table body
		if(contestType == "activeContest" || contestType == "pastContest") {
			var count = 0;
			// add sort click to columns
			$(headers[0]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "contestName")});
			$(headers[1]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "type")});
			$(headers[2]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "firstPrize")});
			$(headers[3]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "submissionEndDate")});
			for(var i=0;i<postCount;i++) {
				if( i>= start && i<= end ) {
					var cls = '';
					if (count % 2 == 0) {
						cls = "odd";
					}
					var item = tempContestData[i];
					var contestLink = siteurl+"/contest-details/"+item.contestId;
					var firstPrice = contestType == "activeContest" ? item.firstPrize : item.prize[0];
					var html = '<tr class="'+cls+'"><td><a href="'+contestLink+'">'+item.contestName+' </a></td>';
					html += '<td>'+item.type+'</td>';
					html += '<td align="center"> $'+firstPrice+'</td>';
					html += '<td align="center">'+item.submissionEndDate+'</td></tr>';
					$("#"+contestId+' .contestTable tbody').append(html);
					count++;
				}
			}
		}
		else if(contestType == "reviewOpportunities") {
			// review opportunities create table body
			var count = 0;
			// add sort click to columns
			$(headers[0]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "contestName")});
			$(headers[1]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "primaryReviewerPayment")});
			// $(headers[2]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "submissionsNumber")}); // sorting on this column is not available in API
			$(headers[3]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "reviewStart")});
			$(headers[4]).unbind('click').click(function(){listActiveContest(contestId, contestType, "", "numberOfReviewPositionsAvailable")});
			for(var i=0;i<postCount;i++) {
				if( i>= start && i<= end ) {
					var cls = '';
					if (count % 2 == 0) {
						cls = "odd";
					}
					var item = tempContestData[i];
					var contestLink = siteurl+"/contest-details/"+item.contestId;
					
					var html = '<tr class="'+cls+'"><td>'+item.contestName+'</td>';
					html += '<td align="right"> $'+item.primaryReviewerPayment+'</td>';
					html += '<td align="center">'+item.submissionsNumber+'</td>';
					html += '<td align="center">'+item.reviewStart+'</td>';
					html += '<td align="center">'+item.numberOfReviewPositionsAvailable+'</td></tr>';
					
					$("#"+contestId+' .contestTable tbody').append(html);
					count++;
				}
			}
		}
	}
	$("#"+contestId+" .contestPageNumber").removeClass("activePage");
	$("#"+contestId+" .contestPageNumber"+page).addClass("activePage");
	$("#"+contestId+' .contestTable tbody tr:even').addClass('odd');
}

/*
	Generating paging button
*/
function generatePagingButton(contestId) {
	var tempContestData = contestData[""+contestId];
	var postPerPage = $("#"+contestId).find(".postPerPage").val();
	
	if(tempContestData!=null) {
		var postCount = tempContestData.length;
		var pageCount = parseInt(( postCount / postPerPage ));
		if( ( postCount % postPerPage ) != 0 ) pageCount++;
		if(pageCount>1) {
			$("#"+contestId+" .pagingWrapper").append('<a href="javascript:;" class="contestPrev"><< Prev</a>');
			$("#"+contestId+" .contestPrev").hide();
			for(var i=1;i<=pageCount;i++) {
				$("#"+contestId+" .pagingWrapper").append('<a href="javascript:;" class="contestPageNumber contestPageNumber'+i+'">'+i+'</a>');
			}
			$("#"+contestId+" .contestPageNumber1").addClass("activePage");
			$("#"+contestId+" .pagingWrapper").append('<a href="javascript:;" class="contestNext">Next >></a>');
		}
	}
}

/*
	Get member details ajax
*/
function get_member_details(handle) {
	var url = ajaxUrl;
	var action = "get_member_profile";
	app.setLoading();//showLoader("memberProfileContainer");
	$.ajax({
		type: "GET",
		url: url,
		data: {"action":action,"handle":handle},
		dataType: 'json',
		success: function(data) {
			if(data!="Error in processing request or Member dosen't exist") {
				var quote = data.quote == "" ? "Member of the world largest global competitive community." : data.quote;
				var memberSince = data.memberSince;
				var arrRating = data.ratingsSummary;
				var copilotObj = data.isCopilot;
				$("#memberQuote").html(quote);
				$("#handle").html(data.handle);
				var ratingColor="";
				var rating=0;
				for(var i=0;i<arrRating.length;i++) {
					if( arrRating[i].rating > rating ) {
						ratingColor = arrRating[i].colorStyle;
						rating = arrRating[i].rating;
					}
				}
				if(ratingColor!="") {
					var handleColor = ratingColor.substring(7,14);
					$(".memberProfile .handle").css("color",handleColor);
				}	
				if(data.photoLink!=null) {
					var photoUrl = "http://www.topcoder.com"+data.photoLink;
					$(".memberProfilePicture img").attr("src",photoUrl);
				}
				$("#memberSince .alignRight").html(memberSince.substring(0,10));
				$("#country .alignCenter").html(data.country);
				get_user_achievements(handle,copilotObj.value);
			}
		},
		error: function() {
			alert('error');
		}
	});
	
}

/*
	Get user achievement ajax
*/
function get_user_achievements(handle,isCopilot) {
	var url = ajaxUrl;
	var action = "get_user_achievement";
	$.ajax({
		type: "GET",
		url: url,
		data: {"action":action,"handle":handle},
		dataType: 'json',
		success: function(data) {
			if(data!="Error in processing request or Member dosen't exist") {
				$.each(data, function(index, obj) {
					var date = obj.date;
					date = date.substring(0,10);
					var badgeLink = obj.badgeLink;
					var badgeImg = badgeLink.url;
					var top = badgeLink.topOffset;
					var left = badgeLink.leftOffset;
					var desc = obj.description;
					var tr = "<tr><td class=\"date\">"+date+"</td><td><span class=\"icon\" style=\"background:url('"+badgeImg+"') no-repeat "+left+"px "+top+"px;\"></span><span class=\"desc\">"+desc+"</span></td></tr>";
					$(".coderAchievementTable tbody").append(tr);
					$(".coderAchievementTable tbody tr:nth-child(even)").css("background-color","#eeeeee");
				});

				hideLoader("memberProfileContainer");
				if(isCopilot) {
					get_copilot_stats(handle);
				}
			}
		},
		error: function() {
			alert('error');
		}
	});
	
}

/*
	Get copilot stats
*/
function get_copilot_stats(handle) {
	var url = ajaxUrl;
	var action = "get_copilot_stats";
	showLoader("memberProfileContainer");
	$.ajax({
		type: "GET",
		url: url,
		data: {"action":action,"handle":handle},
		dataType: 'json',
		success: function(data) {
			if(data!="Error in processing request or Member dosen't exist") {
				$.each(data, function(index, obj) {
					var track = obj.contestType;
					var active = index == 0 ? " active" : "";
					var controller = "<div class='controller"+active+"' id='ctype"+index+"' onclick=\"copilotAchievementsGoTo("+index+")\"><div class='controllerWrapper'><span>"+track+"</span><span class='arrow'></span></div></div>";
					$("#copilotStats .palisade .leftControlMask").append(controller);
					
					var display = index==0 ? "table" : "none";
					var table = "<table class='ctype"+index+"' style='display: "+display+";'>";
					table += "<tr>";
					table += "	<td>Number of Contests:</td>";
					table += "	<td class='number b'>"+obj.numContests+"</td>";
					table += "</tr>";
					table += "<tr>";
					table += "	<td>Number of Reposts:</td>";
					table += "	<td class='number b'>"+obj.numReposts+"</td>";
					table += "</tr>";
					table += "<tr>";
					table += "	<td>Number of Failures:</td>";
					table += "	<td class='number b'>"+obj.numFailures+"</td>";
					table += "</tr>";
					table += "</tbody></table>";
					
					$("#copilotStats .palisade .right-area").append(table);
										
				});
				copilotAchievementsGoTo(0);
				$(".copilotAchivementAjax").show();
			}
			hideLoader("memberProfileContainer");
		},
		error: function() {
			alert('error');
		}
	});
}

/*
	Show loading
*/
function showLoader(contestId) {
	$("#"+contestId+" .loadingOverlay").show();

	var windowWidth = $("#"+contestId+" .loadingOverlay").width();
	var windowHeight = $("#"+contestId+" .loadingOverlay").height();
	var loadingWidth = 144;
	var loadingHeight = 14;
	
	var left = (windowWidth - loadingWidth)/2;
	var top = (windowHeight - loadingHeight)/2;
	$("#"+contestId+" .loadingGif").css({
		"top":top+"px",
		"left":left+"px"
	});
}

/*
	Hide Loading
*/
function hideLoader(contestId) {
	$("#"+contestId+" .loadingOverlay").hide();
}

/*
	Copilot achivement table tab
*/
function copilotAchievementsGoTo(index) {
	$(".palisade .right-area table").hide();
	$(".palisade .left-control .controller").removeClass("active");
	$("#ctype"+index).addClass("active");
	$(".palisade .right-area table.ctype"+index).show();
}
 
/**
* End of js get contest ajax 
*/

// Input Tips
    $.fn.inputTips = function() {
        return this.each(function() {
            var currentVal = $.trim($(this).val());
            if (currentVal == "" || currentVal == $(this).attr("data-placeholder")) {
                $(this).val($(this).attr("data-placeholder"));
            }
            $(this).data("tips", $(this).attr("data-placeholder"));
            $(this).unbind("focusin.inputtips");
            $(this).unbind("focusout.inputtips");
            $(this).bind("focusin.inputtips", function() {
                var value = $.trim($(this).val());
                if (value == "" || value == $(this).attr("data-placeholder")) {
                    $(this).removeClass("tipIt").val("");
                }
            });
            $(this).bind("focusout.inputtips", function() {
                var value = $.trim($(this).val());
                if (value == "" || value == $(this).attr("data-placeholder")) {
                    $(this).addClass("tipIt").val($(this).attr("data-placeholder"));
                }
            });
            $(this).trigger("focusout.inputtips");
        })
    };
