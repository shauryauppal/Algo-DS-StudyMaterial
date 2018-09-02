/*! Sidr - v1.2.1 - 2013-11-06
 * https://github.com/artberri/sidr
 * Copyright (c) 2013 Alberto Varela; Licensed MIT */

(function($) {

 (function(e){var t=!1,i=!1,n={isUrl:function(e){var t=RegExp("^(https?:\\/\\/)?((([a-z\\d]([a-z\\d-]*[a-z\\d])*)\\.)+[a-z]{2,}|((\\d{1,3}\\.){3}\\d{1,3}))(\\:\\d+)?(\\/[-a-z\\d%_.~+]*)*(\\?[;&a-z\\d%_.~+=-]*)?(\\#[-a-z\\d_]*)?$","i");return t.test(e)?!0:!1},loadContent:function(e,t){e.html(t)},addPrefix:function(e){var t=e.attr("id"),i=e.attr("class");"string"==typeof t&&""!==t&&e.attr("id",t.replace(/([A-Za-z0-9_.\-]+)/g,"sidr-id-$1")),"string"==typeof i&&""!==i&&"sidr-inner"!==i&&e.attr("class",i.replace(/([A-Za-z0-9_.\-]+)/g,"sidr-class-$1")),e.removeAttr("style")},execute:function(n,s,a){"function"==typeof s?(a=s,s="sidr"):s||(s="sidr");var r,d,l,c=e("#"+s),u=e(c.data("body")),f=e("html"),p=c.outerWidth(!0),g=c.data("speed"),h=c.data("side"),m=c.data("displace"),v=c.data("onOpen"),y=c.data("onClose"),x="sidr"===s?"sidr-open":"sidr-open "+s+"-open";if("open"===n||"toggle"===n&&!c.is(":visible")){if(c.is(":visible")||t)return;if(i!==!1)return o.close(i,function(){o.open(s)}),void 0;t=!0,"left"===h?(r={left:p+"px"},d={left:"0px"}):(r={right:p+"px"},d={right:"0px"}),u.is("body")&&(l=f.scrollTop(),f.css("overflow-x","hidden").scrollTop(l)),m?u.addClass("sidr-animating").css({width:u.width(),position:"absolute"}).animate(r,g,function(){e(this).addClass(x)}):setTimeout(function(){e(this).addClass(x)},g),c.css("display","block").animate(d,g,function(){t=!1,i=s,"function"==typeof a&&a(s),u.removeClass("sidr-animating")}),v()}else{if(!c.is(":visible")||t)return;t=!0,"left"===h?(r={left:0},d={left:"-"+p+"px"}):(r={right:0},d={right:"-"+p+"px"}),u.is("body")&&(l=f.scrollTop(),f.removeAttr("style").scrollTop(l)),u.addClass("sidr-animating").animate(r,g).removeClass(x),c.animate(d,g,function(){c.removeAttr("style").hide(),u.removeAttr("style"),e("html").removeAttr("style"),t=!1,i=!1,"function"==typeof a&&a(s),u.removeClass("sidr-animating")}),y()}}},o={open:function(e,t){n.execute("open",e,t)},close:function(e,t){n.execute("close",e,t)},toggle:function(e,t){n.execute("toggle",e,t)},toogle:function(e,t){n.execute("toggle",e,t)}};e.sidr=function(t){return o[t]?o[t].apply(this,Array.prototype.slice.call(arguments,1)):"function"!=typeof t&&"string"!=typeof t&&t?(e.error("Method "+t+" does not exist on jQuery.sidr"),void 0):o.toggle.apply(this,arguments)},e.fn.sidr=function(t){var i=e.extend({name:"sidr",speed:200,side:"left",source:null,renaming:!0,body:"body",displace:!0,onOpen:function(){},onClose:function(){}},t),s=i.name,a=e("#"+s);if(0===a.length&&(a=e("<div />").attr("id",s).appendTo(e("body"))),a.addClass("sidr").addClass(i.side).data({speed:i.speed,side:i.side,body:i.body,displace:i.displace,onOpen:i.onOpen,onClose:i.onClose}),"function"==typeof i.source){var r=i.source(s);n.loadContent(a,r)}else if("string"==typeof i.source&&n.isUrl(i.source))e.get(i.source,function(e){n.loadContent(a,e)});else if("string"==typeof i.source){var d="",l=i.source.split(",");if(e.each(l,function(t,i){d+='<div class="sidr-inner">'+e(i).html()+"</div>"}),i.renaming){var c=e("<div />").html(d);c.find("*").each(function(t,i){var o=e(i);n.addPrefix(o)}),d=c.html()}n.loadContent(a,d)}else null!==i.source&&e.error("Invalid Sidr Source");return this.each(function(){var t=e(this),i=t.data("sidr");i||(t.data("sidr",s),"ontouchstart"in document.documentElement?(t.bind("touchstart",function(e){e.originalEvent.touches[0],this.touched=e.timeStamp}),t.bind("touchend",function(e){var t=Math.abs(e.timeStamp-this.touched);200>t&&(e.preventDefault(),o.toggle(s))})):t.click(function(e){e.preventDefault(),o.toggle(s)}))})}})(jQuery);

})(jQuery);
;/**/
// Avoid `console` errors in browsers that lack a console.x
//
//(function($) {
//
//(function() {
//    var method;
//    var noop = function () {};
//    var methods = [
//        'assert', 'clear', 'count', 'debug', 'dir', 'dirxml', 'error',
//        'exception', 'group', 'groupCollapsed', 'groupEnd', 'info', 'log',
//        'markTimeline', 'profile', 'profileEnd', 'table', 'time', 'timeEnd',
//        'timeline', 'timelineEnd', 'timeStamp', 'trace', 'warn'
//    ];
//    var length = methods.length;
//    var console = (window.console = window.console || {});
//
//    while (length--) {
//        method = methods[length];
//
//        // Only stub undefined methods.
//        if (!console[method]) {
//            console[method] = noop;
//        }
//    }
//}());
//
//})(jQuery);


// Place any jQuery/helper plugins in here.
;/**/
/* Source and licensing information for the line(s) below can be found at http://www.programiz.com/sites/all/themes/Ultimate/js/main.js. */
(function($){$(document).ready(function(){$(".search-icon").click(function(e){e.preventDefault();$("#search-area").fadeIn(400);var headerHeight=$('#programiz-header').height();var searchFormHeight=$('#search-area form').height();var marginTop=(headerHeight-searchFormHeight)/2;$("#search-area").css({'position':'fixed','width':'100%','background':'#DDD !important','top':'0','z-index':'100','height':'126px'});$("#search-area form").css({'margin':'0 auto','margin-top':marginTop});$("#search-area .gsc-input input").focus();});$("#search-area span").click(function(e){e.preventDefault();$("#search-area").hide();$("#search-area").css('position','static');});var relativeURL=window.location.pathname;$("#programiz-left-sidebar a[href= '"+relativeURL+"']").addClass("currentPage");$(".submenu a").click(function(){$("topmenu ").find(".currentPage").removeClass("currentPage");$(this).parent().addClass("currentPage");});$(".submenu a").each(function(){var href=$(this).attr('href');if(href.indexOf(relativeURL)>0){$(this).parent().addClass("currentPage");return false;}});$(".submenu").not(':has(.currentPage)').addClass('visuallyhidden');$(".submenu:has(.currentPage)").addClass('visuallynothidden');$('.visuallyhidden').prev().append('<span class="indicator_hide"></span>');$('.visuallynothidden').prev().append('<span class="indicator_show"></span>');$(".topmenu h3").click(function(){$(this).next().toggleClass("visuallyhidden visuallynothidden");$(".indicator_hide").remove();$(".indicator_show").remove();$('.visuallyhidden').prev().append('<span class="indicator_hide"></span>');$('.visuallynothidden').prev().append('<span class="indicator_show"></span>');});width=$(window).width();changeWidth(width);$(window).resize(function(){width=$(window).width();if($(this).width()!=width){width=$(this).width();}
changeWidth(width);});function changeWidth(width){$(window).off('scroll');if(width<900){$('.main-nav li').removeClass('current-nav-li');var classFoundInUrl=false;var relativeURL=window.location.pathname;$('.main-nav ul a').each(function(){var className=$(this).attr('class').split(" ")[0];if(relativeURL.indexOf(className)>-1){$(this).parent().addClass('current-nav-li');classFoundInUrl=true;return false;}});if(classFoundInUrl==false)
$(".home-icon").parent().addClass('current-nav-li');$(".current-nav-li").parent().children().hide();$(".current-nav-li").show();$(".home-icon").parent().show();$(".main-nav").show();if($(".mobile-menu").length==0){$(".current-nav-li").parent().prepend("<li class='mobile-menu'><a class='material-icons' href='' style='font-size: 26px;'>menu</a></li>");}
else{$(".mobile-menu").show();}}
else{$(".current-nav-li").parent().children().show();$(".mobile-menu").hide();}
if(width<1366){}}
target={};$('.mobile-menu').sidr({name:'sidr-left',source:'.header-list-menu',onOpen:onOpenCallback,onClose:onCloseCallback});function onOpenCallback(){$(document).bind('touchend',enableMenuClose);$(document).bind('mouseup',enableMenuClose);}
function enableMenuClose(e){var container=$("#sidr-left");if(!container.is(e.target)&&container.has(e.target).length===0)
{target=$(e.target);target.bind('click',disableClick);$.sidr('close','sidr-left');}}
function disableClick(e){e.preventDefault();return false;}
function onCloseCallback(){$(document).unbind('touchend',enableMenuClose);$(document).unbind('mouseup',enableMenuClose);setTimeout(function(){target.unbind('click',disableClick);target={};});}});Drupal.behaviors.ultimate={attach:function(context){$('.views-submit-button',context).css('float','none');$('.views-exposed-widget',context).css('float','none');}};})(jQuery);;;
/* Source and licensing information for the above line(s) can be found at http://www.programiz.com/sites/all/themes/Ultimate/js/main.js. */
