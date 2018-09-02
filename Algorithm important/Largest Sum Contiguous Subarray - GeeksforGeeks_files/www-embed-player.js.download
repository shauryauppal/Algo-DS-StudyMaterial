(function(){var k;function ba(a,b){function c(){}
c.prototype=b.prototype;a.prototype=new c;a.prototype.constructor=a;for(var d in b)if(Object.defineProperties){var e=Object.getOwnPropertyDescriptor(b,d);e&&Object.defineProperty(a,d,e)}else a[d]=b[d]}
for(var ca="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(c.get||c.set)throw new TypeError("ES3 does not support getters and setters.");a!=Array.prototype&&a!=Object.prototype&&(a[b]=c.value)},da="undefined"!=typeof window&&window===this?this:"undefined"!=typeof global&&null!=global?global:this,ea=["String",
"prototype","startsWith"],fa=0;fa<ea.length-1;fa++){var ha=ea[fa];ha in da||(da[ha]={});da=da[ha]}
var ia=ea[ea.length-1],ja=da[ia],ka=ja?ja:function(a,b){var c;if(null==this)throw new TypeError("The 'this' value for String.prototype.startsWith must not be null or undefined");if(a instanceof RegExp)throw new TypeError("First argument to String.prototype.startsWith must not be a regular expression");c=this+"";a+="";for(var d=c.length,e=a.length,f=Math.max(0,Math.min(b|0,c.length)),g=0;g<e&&f<d;)if(c[f++]!=a[g++])return!1;return g>=e};
ka!=ja&&null!=ka&&ca(da,ia,{configurable:!0,writable:!0,value:ka});var m=this;function p(a){return void 0!==a}
function q(a,b,c){a=a.split(".");c=c||m;a[0]in c||!c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)!a.length&&p(b)?c[d]=b:c[d]&&Object.prototype.hasOwnProperty.call(c,d)?c=c[d]:c=c[d]={}}
function r(a,b){for(var c=a.split("."),d=b||m,e;e=c.shift();)if(null!=d[e])d=d[e];else return null;return d}
function la(){}
function ma(a){a.na=void 0;a.getInstance=function(){return a.na?a.na:a.na=new a}}
function pa(a){var b=typeof a;if("object"==b)if(a){if(a instanceof Array)return"array";if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==c)return"object";if("[object Array]"==c||"number"==typeof a.length&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("splice"))return"array";if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("call"))return"function"}else return"null";
else if("function"==b&&"undefined"==typeof a.call)return"object";return b}
function qa(a){return"array"==pa(a)}
function ra(a){var b=pa(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function t(a){return"string"==typeof a}
function sa(a){return"function"==pa(a)}
function ta(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function ua(a){return a[va]||(a[va]=++wa)}
var va="closure_uid_"+(1E9*Math.random()>>>0),wa=0;function xa(a,b,c){return a.call.apply(a.bind,arguments)}
function ya(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var c=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(c,d);return a.apply(b,c)}}return function(){return a.apply(b,arguments)}}
function u(a,b,c){u=Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?xa:ya;return u.apply(null,arguments)}
function za(a,b){var c=Array.prototype.slice.call(arguments,1);return function(){var b=c.slice();b.push.apply(b,arguments);return a.apply(this,b)}}
function Aa(a,b){for(var c in b)a[c]=b[c]}
var v=Date.now||function(){return+new Date};
function w(a,b){function c(){}
c.prototype=b.prototype;a.B=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.pb=function(a,c,f){for(var d=Array(arguments.length-2),e=2;e<arguments.length;e++)d[e-2]=arguments[e];return b.prototype[c].apply(a,d)}}
;function Ba(a,b,c){this.i=c;this.g=a;this.j=b;this.f=0;this.b=null}
Ba.prototype.get=function(){var a;0<this.f?(this.f--,a=this.b,this.b=a.next,a.next=null):a=this.g();return a};
function Ca(a,b){a.j(b);a.f<a.i&&(a.f++,b.next=a.b,a.b=b)}
;function Da(a){if(Error.captureStackTrace)Error.captureStackTrace(this,Da);else{var b=Error().stack;b&&(this.stack=b)}a&&(this.message=String(a))}
w(Da,Error);Da.prototype.name="CustomError";function Ea(a,b){for(var c in a)b.call(void 0,a[c],c,a)}
function Fa(a){var b=Ga,c;for(c in b)if(a.call(void 0,b[c],c,b))return c}
function Ha(){var a=Ia,b;for(b in a)return!1;return!0}
function Ja(a,b){if(null!==a&&b in a)throw Error('The object already contains the key "'+b+'"');a[b]=!0}
function Ka(a){var b={},c;for(c in a)b[c]=a[c];return b}
var La="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function Ma(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<La.length;f++)c=La[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;var Na=String.prototype.trim?function(a){return a.trim()}:function(a){return a.replace(/^[\s\xa0]+|[\s\xa0]+$/g,"")};
function Oa(a,b){return a<b?-1:a>b?1:0}
function Pa(a){for(var b=0,c=0;c<a.length;++c)b=31*b+a.charCodeAt(c)>>>0;return b}
;var Qa={};function Ra(a){return Qa[a]||(Qa[a]=String(a).replace(/\-([a-z])/g,function(a,c){return c.toUpperCase()}))}
function Sa(a,b){return a?a.dataset?a.dataset[Ra(b)]:a.getAttribute("data-"+b):null}
function Ta(a){a&&(a.dataset?a.dataset[Ra("loaded")]="true":a.setAttribute("data-loaded","true"))}
;var Ua=window.performance&&window.performance.timing&&window.performance.now?function(){return window.performance.timing.navigationStart+window.performance.now()}:function(){return(new Date).getTime()},Va="Microsoft Internet Explorer"==navigator.appName;
function Wa(a,b){if(1<b.length)a[b[0]]=b[1];else{var c=b[0],d;for(d in c)a[d]=c[d]}}
;function x(){this.f=this.f;this.G=this.G}
x.prototype.f=!1;x.prototype.dispose=function(){this.f||(this.f=!0,this.o())};
function Xa(a,b){a.f?p(void 0)?b.call(void 0):b():(a.G||(a.G=[]),a.G.push(p(void 0)?u(b,void 0):b))}
x.prototype.o=function(){if(this.G)for(;this.G.length;)this.G.shift()()};
function Ya(a){a&&"function"==typeof a.dispose&&a.dispose()}
function Za(a){for(var b=0,c=arguments.length;b<c;++b){var d=arguments[b];ra(d)?Za.apply(null,d):Ya(d)}}
;var y;a:{var $a=m.navigator;if($a){var ab=$a.userAgent;if(ab){y=ab;break a}}y=""}function z(a){return-1!=y.indexOf(a)}
;var bb=window.yt&&window.yt.config_||window.ytcfg&&window.ytcfg.data_||{};q("yt.config_",bb,void 0);function A(a){Wa(bb,arguments)}
function C(a,b){return a in bb?bb[a]:b}
;var cb=Array.prototype.indexOf?function(a,b,c){return Array.prototype.indexOf.call(a,b,c)}:function(a,b,c){c=null==c?0:0>c?Math.max(0,a.length+c):c;
if(t(a))return t(b)&&1==b.length?a.indexOf(b,c):-1;for(;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},D=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e=t(a)?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},db=Array.prototype.map?function(a,b,c){return Array.prototype.map.call(a,b,c)}:function(a,b,c){for(var d=a.length,e=Array(d),f=t(a)?a.split(""):a,g=0;g<d;g++)g in f&&(e[g]=b.call(c,f[g],g,a));
return e};
function eb(a,b){var c;a:{c=a.length;for(var d=t(a)?a.split(""):a,e=0;e<c;e++)if(e in d&&b.call(void 0,d[e],e,a)){c=e;break a}c=-1}return 0>c?null:t(a)?a.charAt(c):a[c]}
function fb(a,b){var c=cb(a,b);0<=c&&Array.prototype.splice.call(a,c,1)}
function gb(a){var b=a.length;if(0<b){for(var c=Array(b),d=0;d<b;d++)c[d]=a[d];return c}return[]}
function hb(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(ra(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
function ib(a,b,c,d){return Array.prototype.splice.apply(a,jb(arguments,1))}
function jb(a,b,c){return 2>=arguments.length?Array.prototype.slice.call(a,b):Array.prototype.slice.call(a,b,c)}
;function kb(){this.f=this.b=null}
var mb=new Ba(function(){return new lb},function(a){a.reset()},100);
kb.prototype.remove=function(){var a=null;this.b&&(a=this.b,this.b=this.b.next,this.b||(this.f=null),a.next=null);return a};
function lb(){this.next=this.scope=this.b=null}
lb.prototype.set=function(a,b){this.b=a;this.scope=b;this.next=null};
lb.prototype.reset=function(){this.next=this.scope=this.b=null};function E(a,b){var c=r("yt.logging.errors.log");c?c(a,b,void 0,void 0,void 0):(c=C("ERRORS",[]),c.push([a,b,void 0,void 0,void 0]),A("ERRORS",c))}
function nb(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){E(b)}}:a}
;function ob(){this.b="";this.f=pb}
ob.prototype.ma=!0;ob.prototype.la=function(){return this.b};
var pb={};function qb(){return(z("Chrome")||z("CriOS"))&&!z("Edge")}
;function F(a,b){sa(a)&&(a=nb(a));return window.setTimeout(a,b)}
;function rb(a){m.setTimeout(function(){throw a;},0)}
var sb;
function tb(){var a=m.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!z("Presto")&&(a=function(){var a=document.createElement("IFRAME");a.style.display="none";a.src="";document.documentElement.appendChild(a);var b=a.contentWindow,a=b.document;a.open();a.write("");a.close();var c="callImmediate"+Math.random(),d="file:"==b.location.protocol?"*":b.location.protocol+"//"+b.location.host,a=u(function(a){if(("*"==d||a.origin==d)&&a.data==
c)this.port1.onmessage()},this);
b.addEventListener("message",a,!1);this.port1={};this.port2={postMessage:function(){b.postMessage(c,d)}}});
if("undefined"!==typeof a&&!z("Trident")&&!z("MSIE")){var b=new a,c={},d=c;b.port1.onmessage=function(){if(p(c.next)){c=c.next;var a=c.ua;c.ua=null;a()}};
return function(a){d.next={ua:a};d=d.next;b.port2.postMessage(0)}}return"undefined"!==typeof document&&"onreadystatechange"in document.createElement("SCRIPT")?function(a){var b=document.createElement("SCRIPT");
b.onreadystatechange=function(){b.onreadystatechange=null;b.parentNode.removeChild(b);b=null;a();a=null};
document.documentElement.appendChild(b)}:function(a){m.setTimeout(a,0)}}
;function ub(){this.b="";this.f=vb}
ub.prototype.ma=!0;ub.prototype.la=function(){return this.b};
function wb(a){return a instanceof ub&&a.constructor===ub&&a.f===vb?a.b:"type_error:SafeUrl"}
var xb=/^(?:(?:https?|mailto|ftp):|[^&:/?#]*(?:[/?#]|$))/i;function yb(a){if(a instanceof ub)return a;a=a.ma?a.la():String(a);xb.test(a)||(a="about:invalid#zClosurez");return zb(a)}
var vb={};function zb(a){var b=new ub;b.b=a;return b}
zb("about:blank");function Ab(a,b,c){isNaN(c)&&(c=void 0);var d=r("yt.scheduler.instance.addJob");return d?d(a,b,c):void 0===c?(a(),NaN):F(a,c||0)}
function Bb(a,b){return Ab(a,1,b)}
;function Cb(a,b){Db||Eb();Fb||(Db(),Fb=!0);var c=Gb,d=mb.get();d.set(a,b);c.f?c.f.next=d:c.b=d;c.f=d}
var Db;function Eb(){if(-1!=String(m.Promise).indexOf("[native code]")){var a=m.Promise.resolve(void 0);Db=function(){a.then(Hb)}}else Db=function(){var a=Hb;
!sa(m.setImmediate)||m.Window&&m.Window.prototype&&!z("Edge")&&m.Window.prototype.setImmediate==m.setImmediate?(sb||(sb=tb()),sb(a)):m.setImmediate(a)}}
var Fb=!1,Gb=new kb;function Hb(){for(var a;a=Gb.remove();){try{a.b.call(a.scope)}catch(b){rb(b)}Ca(mb,a)}Fb=!1}
;function Ib(){this.b=""}
Ib.prototype.ma=!0;Ib.prototype.la=function(){return this.b};
function Jb(a){var b=new Ib;b.b=a;return b}
Jb("<!DOCTYPE html>");Jb("");Jb("<br>");function Kb(a,b){var c;c=b instanceof ub?b:yb(b);a.href=wb(c)}
;function G(a){x.call(this);this.l=1;this.i=[];this.j=0;this.b=[];this.g={};this.w=!!a}
w(G,x);k=G.prototype;k.subscribe=function(a,b,c){var d=this.g[a];d||(d=this.g[a]=[]);var e=this.l;this.b[e]=a;this.b[e+1]=b;this.b[e+2]=c;this.l=e+3;d.push(e);return e};
function Lb(a,b,c,d){if(b=a.g[b]){var e=a.b;(b=eb(b,function(a){return e[a+1]==c&&e[a+2]==d}))&&a.L(b)}}
k.L=function(a){var b=this.b[a];if(b){var c=this.g[b];0!=this.j?(this.i.push(a),this.b[a+1]=la):(c&&fb(c,a),delete this.b[a],delete this.b[a+1],delete this.b[a+2])}return!!b};
k.X=function(a,b){var c=this.g[a];if(c){for(var d=Array(arguments.length-1),e=1,f=arguments.length;e<f;e++)d[e-1]=arguments[e];if(this.w)for(e=0;e<c.length;e++){var g=c[e];Mb(this.b[g+1],this.b[g+2],d)}else{this.j++;try{for(e=0,f=c.length;e<f;e++)g=c[e],this.b[g+1].apply(this.b[g+2],d)}finally{if(this.j--,0<this.i.length&&0==this.j)for(;c=this.i.pop();)this.L(c)}}return 0!=e}return!1};
function Mb(a,b,c){Cb(function(){a.apply(b,c)})}
k.clear=function(a){if(a){var b=this.g[a];b&&(D(b,this.L,this),delete this.g[a])}else this.b.length=0,this.g={}};
k.o=function(){G.B.o.call(this);this.clear();this.i.length=0};var Nb=r("yt.pubsub.instance_")||new G;G.prototype.subscribe=G.prototype.subscribe;G.prototype.unsubscribeByKey=G.prototype.L;G.prototype.publish=G.prototype.X;G.prototype.clear=G.prototype.clear;q("yt.pubsub.instance_",Nb,void 0);var Ob=r("yt.pubsub.subscribedKeys_")||{};q("yt.pubsub.subscribedKeys_",Ob,void 0);var Pb=r("yt.pubsub.topicToKeys_")||{};q("yt.pubsub.topicToKeys_",Pb,void 0);var Qb=r("yt.pubsub.isSynchronous_")||{};q("yt.pubsub.isSynchronous_",Qb,void 0);
var Rb=r("yt.pubsub.skipSubId_")||null;q("yt.pubsub.skipSubId_",Rb,void 0);function Sb(a,b){var c=Tb();if(c){var d=c.subscribe(a,function(){if(!Rb||Rb!=d){var c=arguments,f;f=function(){Ob[d]&&b.apply(window,c)};
try{Qb[a]?f():F(f,0)}catch(g){E(g)}}},void 0);
Ob[d]=!0;Pb[a]||(Pb[a]=[]);Pb[a].push(d);return d}return 0}
function Ub(a){var b=Tb();b&&("number"==typeof a?a=[a]:"string"==typeof a&&(a=[parseInt(a,10)]),D(a,function(a){b.unsubscribeByKey(a);delete Ob[a]}))}
function Vb(a,b){var c=Tb();return c?c.publish.apply(c,arguments):!1}
function Wb(a){Pb[a]&&(a=Pb[a],D(a,function(a){Ob[a]&&delete Ob[a]}),a.length=0)}
function Xb(a){var b=Tb();if(b)if(b.clear(a),a)Wb(a);else for(var c in Pb)Wb(c)}
function Tb(){return r("yt.pubsub.instance_")}
;var Yb=/\.vflset|-vfl[a-zA-Z0-9_+=-]+/,Zb=/-[a-zA-Z]{2,3}_[a-zA-Z]{2,3}(?=(\/|$))/;function $b(a,b){var c=ac(a),d=document.getElementById(c),e=d&&Sa(d,"loaded"),f=d&&!e;if(e)b&&b();else{if(b){var e=Sb(c,b),g=""+ua(b);bc[g]=e}f||(d=cc(a,c,function(){Sa(d,"loaded")||(Ta(d),Vb(c),F(za(Xb,c),0))}))}}
function cc(a,b,c){var d=document.createElement("script");d.id=b;d.onload=function(){c&&setTimeout(c,0)};
d.onreadystatechange=function(){switch(d.readyState){case "loaded":case "complete":d.onload()}};
d.src=a;a=document.getElementsByTagName("head")[0]||document.body;a.insertBefore(d,a.firstChild);return d}
function dc(a,b){if(a&&b){var c=""+ua(b);(c=bc[c])&&Ub(c)}}
function ac(a){var b=document.createElement("a");Kb(b,a);a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"js-"+Pa(a)}
var bc={};function ec(a,b){if(window.spf){var c="";if(a){var d=a.indexOf("jsbin/"),e=a.lastIndexOf(".js"),f=d+6;-1<d&&-1<e&&e>f&&(c=a.substring(f,e),c=c.replace(Yb,""),c=c.replace(Zb,""),c=c.replace("debug-",""),c=c.replace("tracing-",""))}spf.script.load(a,c,b)}else $b(a,b)}
;var fc=null;function gc(){var a=C("BG_I",null),b=C("BG_IU",null),c=C("BG_P",void 0);b?ec(b,function(){fc=new botguard.bg(c)}):a&&(eval(a),fc=new botguard.bg(c))}
function hc(){return null!=fc}
function ic(){return fc?fc.invoke():null}
;var jc=[],kc=!1;function lc(){function a(){kc=!0;"google_ad_status"in window?A("DCLKSTAT",1):A("DCLKSTAT",2)}
ec("//static.doubleclick.net/instream/ad_status.js",a);jc.push(Bb(function(){kc||"google_ad_status"in window||(dc("//static.doubleclick.net/instream/ad_status.js",a),A("DCLKSTAT",3))},5E3))}
function mc(){return parseInt(C("DCLKSTAT",0),10)}
;function nc(a){if(!a)return"";a=a.split("#")[0].split("?")[0];a=a.toLowerCase();0==a.indexOf("//")&&(a=window.location.protocol+a);/^[\w\-]*:\/\//.test(a)||(a=window.location.href);var b=a.substring(a.indexOf("://")+3),c=b.indexOf("/");-1!=c&&(b=b.substring(0,c));a=a.substring(0,a.indexOf("://"));if("http"!==a&&"https"!==a&&"chrome-extension"!==a&&"file"!==a&&"android-app"!==a&&"chrome-search"!==a)throw Error("Invalid URI scheme in origin");var c="",d=b.indexOf(":");if(-1!=d){var e=b.substring(d+
1),b=b.substring(0,d);if("http"===a&&"80"!==e||"https"===a&&"443"!==e)c=":"+e}return a+"://"+b+c}
;function oc(){function a(){e[0]=1732584193;e[1]=4023233417;e[2]=2562383102;e[3]=271733878;e[4]=3285377520;B=n=0}
function b(a){for(var b=g,c=0;64>c;c+=4)b[c/4]=a[c]<<24|a[c+1]<<16|a[c+2]<<8|a[c+3];for(c=16;80>c;c++)a=b[c-3]^b[c-8]^b[c-14]^b[c-16],b[c]=(a<<1|a>>>31)&4294967295;a=e[0];for(var d=e[1],f=e[2],h=e[3],l=e[4],n,J,c=0;80>c;c++)40>c?20>c?(n=h^d&(f^h),J=1518500249):(n=d^f^h,J=1859775393):60>c?(n=d&f|h&(d|f),J=2400959708):(n=d^f^h,J=3395469782),n=((a<<5|a>>>27)&4294967295)+n+l+J+b[c]&4294967295,l=h,h=f,f=(d<<30|d>>>2)&4294967295,d=a,a=n;e[0]=e[0]+a&4294967295;e[1]=e[1]+d&4294967295;e[2]=e[2]+f&4294967295;
e[3]=e[3]+h&4294967295;e[4]=e[4]+l&4294967295}
function c(a,c){if("string"===typeof a){a=unescape(encodeURIComponent(a));for(var d=[],e=0,g=a.length;e<g;++e)d.push(a.charCodeAt(e));a=d}c||(c=a.length);d=0;if(0==n)for(;d+64<c;)b(a.slice(d,d+64)),d+=64,B+=64;for(;d<c;)if(f[n++]=a[d++],B++,64==n)for(n=0,b(f);d+64<c;)b(a.slice(d,d+64)),d+=64,B+=64}
function d(){var a=[],d=8*B;56>n?c(h,56-n):c(h,64-(n-56));for(var g=63;56<=g;g--)f[g]=d&255,d>>>=8;b(f);for(g=d=0;5>g;g++)for(var l=24;0<=l;l-=8)a[d++]=e[g]>>l&255;return a}
for(var e=[],f=[],g=[],h=[128],l=1;64>l;++l)h[l]=0;var n,B;a();return{reset:a,update:c,digest:d,Ia:function(){for(var a=d(),b="",c=0;c<a.length;c++)b+="0123456789ABCDEF".charAt(Math.floor(a[c]/16))+"0123456789ABCDEF".charAt(a[c]%16);return b}}}
;/*
 gapi.loader.OBJECT_CREATE_TEST_OVERRIDE &&*/
var pc=window,qc=document,rc=pc.location;function sc(){}
var tc=/\[native code\]/;function H(a,b,c){return a[b]=a[b]||c}
function uc(a){for(var b=0;b<this.length;b++)if(this[b]===a)return b;return-1}
function vc(a){a=a.sort();for(var b=[],c=void 0,d=0;d<a.length;d++){var e=a[d];e!=c&&b.push(e);c=e}return b}
function I(){var a;if((a=Object.create)&&tc.test(a))a=a(null);else{a={};for(var b in a)a[b]=void 0}return a}
var wc=H(pc,"gapi",{});function xc(a){return/^\s*$/.test(a)?!1:/^[\],:{}\s\u2028\u2029]*$/.test(a.replace(/\\["\\\/bfnrtu]/g,"@").replace(/(?:"[^"\\\n\r\u2028\u2029\x00-\x08\x0a-\x1f]*"|true|false|null|-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?)[\s\u2028\u2029]*(?=:|,|]|}|$)/g,"]").replace(/(?:^|:|,)(?:[\s\u2028\u2029]*\[)+/g,""))}
function yc(a){a=String(a);if(xc(a))try{return eval("("+a+")")}catch(b){}throw Error("Invalid JSON string: "+a);}
function zc(a){return eval("("+a+")")}
function Ac(a){var b=[];Bc(new Cc,a,b);return b.join("")}
function Cc(){}
function Bc(a,b,c){if(null==b)c.push("null");else{if("object"==typeof b){if(qa(b)){var d=b;b=d.length;c.push("[");for(var e="",f=0;f<b;f++)c.push(e),e=d[f],Bc(a,e,c),e=",";c.push("]");return}if(b instanceof String||b instanceof Number||b instanceof Boolean)b=b.valueOf();else{c.push("{");f="";for(d in b)Object.prototype.hasOwnProperty.call(b,d)&&(e=b[d],"function"!=typeof e&&(c.push(f),Dc(d,c),c.push(":"),Bc(a,e,c),f=","));c.push("}");return}}switch(typeof b){case "string":Dc(b,c);break;case "number":c.push(isFinite(b)&&
!isNaN(b)?String(b):"null");break;case "boolean":c.push(String(b));break;case "function":c.push("null");break;default:throw Error("Unknown type: "+typeof b);}}}
var Ec={'"':'\\"',"\\":"\\\\","/":"\\/","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\x0B":"\\u000b"},Fc=/\uffff/.test("\uffff")?/[\\\"\x00-\x1f\x7f-\uffff]/g:/[\\\"\x00-\x1f\x7f-\xff]/g;function Dc(a,b){b.push('"',a.replace(Fc,function(a){var b=Ec[a];b||(b="\\u"+(a.charCodeAt(0)|65536).toString(16).substr(1),Ec[a]=b);return b}),'"')}
;function Gc(a,b){this.width=a;this.height=b}
k=Gc.prototype;k.aspectRatio=function(){return this.width/this.height};
k.isEmpty=function(){return!(this.width*this.height)};
k.ceil=function(){this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};
k.floor=function(){this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
k.round=function(){this.width=Math.round(this.width);this.height=Math.round(this.height);return this};function Hc(a){this.b=a||{cookie:""}}
var Ic=/\s*;\s*/;k=Hc.prototype;k.isEnabled=function(){return navigator.cookieEnabled};
k.set=function(a,b,c,d,e,f){if(/[;=\s]/.test(a))throw Error('Invalid cookie name "'+a+'"');if(/[;\r\n]/.test(b))throw Error('Invalid cookie value "'+b+'"');p(c)||(c=-1);e=e?";domain="+e:"";d=d?";path="+d:"";f=f?";secure":"";c=0>c?"":0==c?";expires="+(new Date(1970,1,1)).toUTCString():";expires="+(new Date(v()+1E3*c)).toUTCString();this.b.cookie=a+"="+b+e+d+c+f};
k.get=function(a,b){for(var c=a+"=",d=(this.b.cookie||"").split(Ic),e=0,f;f=d[e];e++){if(0==f.lastIndexOf(c,0))return f.substr(c.length);if(f==a)return""}return b};
k.remove=function(a,b,c){var d=p(this.get(a));this.set(a,"",0,b,c);return d};
k.isEmpty=function(){return!this.b.cookie};
k.clear=function(){for(var a=(this.b.cookie||"").split(Ic),b=[],c=[],d,e,f=0;e=a[f];f++)d=e.indexOf("="),-1==d?(b.push(""),c.push(e)):(b.push(e.substring(0,d)),c.push(e.substring(d+1)));for(a=b.length-1;0<=a;a--)this.remove(b[a])};
var Jc=new Hc("undefined"==typeof document?null:document);Jc.f=3950;function Kc(a){a.prototype.then=a.prototype.then;a.prototype.$goog_Thenable=!0}
;function Lc(a){Lc[" "](a);return a}
Lc[" "]=la;function Mc(a,b){var c=Nc;return Object.prototype.hasOwnProperty.call(c,a)?c[a]:c[a]=b(a)}
;function Oc(){}
;function Pc(a){this.type="";this.state=this.source=this.data=this.currentTarget=this.relatedTarget=this.target=null;this.charCode=this.keyCode=0;this.shiftKey=this.ctrlKey=this.altKey=!1;this.clientY=this.clientX=0;this.changedTouches=null;if(a=a||window.event){this.event=a;for(var b in a)b in Qc||(this[b]=a[b]);(b=a.target||a.srcElement)&&3==b.nodeType&&(b=b.parentNode);this.target=b;if(b=a.relatedTarget)try{b=b.nodeName?b:null}catch(c){b=null}else"mouseover"==this.type?b=a.fromElement:"mouseout"==
this.type&&(b=a.toElement);this.relatedTarget=b;this.clientX=void 0!=a.clientX?a.clientX:a.pageX;this.clientY=void 0!=a.clientY?a.clientY:a.pageY;this.keyCode=a.keyCode?a.keyCode:a.which;this.charCode=a.charCode||("keypress"==this.type?this.keyCode:0);this.altKey=a.altKey;this.ctrlKey=a.ctrlKey;this.shiftKey=a.shiftKey}}
Pc.prototype.preventDefault=function(){this.event&&(this.event.returnValue=!1,this.event.preventDefault&&this.event.preventDefault())};
Pc.prototype.stopPropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopPropagation&&this.event.stopPropagation())};
Pc.prototype.stopImmediatePropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopImmediatePropagation&&this.event.stopImmediatePropagation())};
var Qc={stopImmediatePropagation:1,stopPropagation:1,preventMouseEvent:1,preventManipulation:1,preventDefault:1,layerX:1,layerY:1,screenX:1,screenY:1,scale:1,rotation:1,webkitMovementX:1,webkitMovementY:1};function Rc(a,b,c,d){this.f=a;this.i=b;this.g=c;this.b=d}
var Sc=1;function Tc(a){var b={};void 0!==a.f?b.trackingParams=a.f:(b.veType=a.i,null!=a.g&&(b.veCounter=a.g));void 0!==a.b&&(b.dataElement=Tc(a.b));return b}
;var Uc=null;"undefined"!=typeof XMLHttpRequest?Uc=function(){return new XMLHttpRequest}:"undefined"!=typeof ActiveXObject&&(Uc=function(){return new ActiveXObject("Microsoft.XMLHTTP")});
function Vc(a){switch(a&&"status"in a?a.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:return!0;default:return!1}}
;function Xc(a){this.b=a}
Xc.prototype.set=function(a,b){p(b)?this.b.set(a,Ac(b)):this.b.remove(a)};
Xc.prototype.get=function(a){var b;try{b=this.b.get(a)}catch(c){return}if(null!==b)try{return yc(b)}catch(c){throw"Storage: Invalid value was encountered";}};
Xc.prototype.remove=function(a){this.b.remove(a)};var K;K=H(pc,"___jsl",I());H(K,"I",0);H(K,"hel",10);function Yc(){var a=rc.href,b;if(K.dpo)b=K.h;else{b=K.h;var c=RegExp("([#].*&|[#])jsh=([^&#]*)","g"),d=RegExp("([?#].*&|[?#])jsh=([^&#]*)","g");if(a=a&&(c.exec(a)||d.exec(a)))try{b=decodeURIComponent(a[2])}catch(e){}}return b}
function Zc(a){var b=H(K,"PQ",[]);K.PQ=[];var c=b.length;if(0===c)a();else for(var d=0,e=function(){++d===c&&a()},f=0;f<c;f++)b[f](e)}
function $c(a){return H(H(K,"H",I()),a,I())}
;function ad(){return z("iPhone")&&!z("iPod")&&!z("iPad")}
;function bd(a){this.b=a}
w(bd,Xc);function cd(a){this.data=a}
function dd(a){return!p(a)||a instanceof cd?a:new cd(a)}
bd.prototype.set=function(a,b){bd.B.set.call(this,a,dd(b))};
bd.prototype.f=function(a){a=bd.B.get.call(this,a);if(!p(a)||a instanceof Object)return a;throw"Storage: Invalid value was encountered";};
bd.prototype.get=function(a){if(a=this.f(a)){if(a=a.data,!p(a))throw"Storage: Invalid value was encountered";}else a=void 0;return a};var ed=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^/?#]*)@)?([^/#?]*?)(?::([0-9]+))?(?=[/#?]|$))?([^?#]+)?(?:\?([^#]*))?(?:#([\s\S]*))?$/;function L(a){return a.match(ed)}
function fd(a){return a?decodeURI(a):a}
function gd(a){if(a[1]){var b=a[0],c=b.indexOf("#");0<=c&&(a.push(b.substr(c)),a[0]=b=b.substr(0,c));c=b.indexOf("?");0>c?a[1]="?":c==b.length-1&&(a[1]=void 0)}return a.join("")}
function hd(a,b,c){if(qa(b))for(var d=0;d<b.length;d++)hd(a,String(b[d]),c);else null!=b&&c.push("&",a,""===b?"":"=",encodeURIComponent(String(b)))}
function id(a,b,c){for(c=c||0;c<b.length;c+=2)hd(b[c],b[c+1],a);return a}
function jd(a,b){for(var c in b)hd(c,b[c],a);return a}
function kd(a,b){return gd(2==arguments.length?id([a],arguments[1],0):id([a],arguments,1))}
;function M(a){return C("EXPERIMENT_FLAGS",{})[a]}
;function ld(a){a={client:{hl:a.Ra,gl:a.Qa,clientName:a.Pa,clientVersion:a.innertubeContextClientVersion}};C("DELEGATED_SESSION_ID")&&(a.user={onBehalfOfUser:C("DELEGATED_SESSION_ID")});return a}
function md(){return{apiaryHost:C("APIARY_HOST",void 0),Ga:C("APIARY_HOST_FIRSTPARTY",void 0),gapiHintOverride:!!C("GAPI_HINT_OVERRIDE",void 0),gapiHintParams:C("GAPI_HINT_PARAMS",void 0),innertubeApiKey:C("INNERTUBE_API_KEY",void 0),innertubeApiVersion:C("INNERTUBE_API_VERSION",void 0),Pa:C("INNERTUBE_CONTEXT_CLIENT_NAME","WEB"),innertubeContextClientVersion:C("INNERTUBE_CONTEXT_CLIENT_VERSION",void 0),Ra:C("INNERTUBE_CONTEXT_HL",void 0),Qa:C("INNERTUBE_CONTEXT_GL",void 0),nb:C("XHR_APIARY_HOST",
void 0)}}
;function nd(a,b,c){var d=[],e=[];if(1==(qa(c)?2:1))return e=[b,a],D(d,function(a){e.push(a)}),od(e.join(" "));
var f=[],g=[];D(c,function(a){g.push(a.key);f.push(a.value)});
c=Math.floor((new Date).getTime()/1E3);e=0==f.length?[c,b,a]:[f.join(":"),c,b,a];D(d,function(a){e.push(a)});
a=od(e.join(" "));a=[c,a];0==g.length||a.push(g.join(""));return a.join("_")}
function od(a){var b=oc();b.update(a);return b.Ia().toLowerCase()}
;var pd=H(K,"perf",I());H(pd,"g",I());var qd=H(pd,"i",I());H(pd,"r",[]);I();I();function rd(a,b,c){b&&0<b.length&&(b=sd(b),c&&0<c.length&&(b+="___"+sd(c)),28<b.length&&(b=b.substr(0,28)+(b.length-28)),c=b,b=H(qd,"_p",I()),H(b,c,I())[a]=(new Date).getTime(),b=pd.r,"function"===typeof b?b(a,"_p",c):b.push([a,"_p",c]))}
function sd(a){return a.join("__").replace(/\./g,"_").replace(/\-/g,"_").replace(/\,/g,"_")}
;function td(a){this.b=a}
w(td,bd);td.prototype.set=function(a,b,c){if(b=dd(b)){if(c){if(c<v()){td.prototype.remove.call(this,a);return}b.expiration=c}b.creation=v()}td.B.set.call(this,a,b)};
td.prototype.f=function(a,b){var c=td.B.f.call(this,a);if(c){var d;if(d=!b){d=c.creation;var e=c.expiration;d=!!e&&e<v()||!!d&&d>v()}if(d)td.prototype.remove.call(this,a);else return c}};function ud(a){"?"==a.charAt(0)&&(a=a.substr(1));a=a.split("&");for(var b={},c=0,d=a.length;c<d;c++){var e=a[c].split("=");if(1==e.length&&e[0]||2==e.length){var f=decodeURIComponent((e[0]||"").replace(/\+/g," ")),e=decodeURIComponent((e[1]||"").replace(/\+/g," "));f in b?qa(b[f])?hb(b[f],e):b[f]=[b[f],e]:b[f]=e}}return b}
function vd(a,b){var c=a.split("#",2);a=c[0];var c=1<c.length?"#"+c[1]:"",d=a.split("?",2);a=d[0];var d=ud(d[1]||""),e;for(e in b)d[e]=b[e];return gd(jd([a],d))+c}
function wd(a){a=jd([],a);a[0]="";return a.join("")}
;var xd=I(),yd=[];function N(a){throw Error("Bad hint"+(a?": "+a:""));}
yd.push(["jsl",function(a){for(var b in a)if(Object.prototype.hasOwnProperty.call(a,b)){var c=a[b];"object"==typeof c?K[b]=H(K,b,[]).concat(c):H(K,b,c)}if(b=a.u)a=H(K,"us",[]),a.push(b),(b=/^https:(.*)$/.exec(b))&&a.push("http:"+b[1])}]);
var zd=/^(\/[a-zA-Z0-9_\-]+)+$/,Ad=[/\/amp\//,/\/amp$/,/^\/amp$/],Bd=/^[a-zA-Z0-9\-_\.,!]+$/,Cd=/^gapi\.loaded_[0-9]+$/,Dd=/^[a-zA-Z0-9,._-]+$/;function Ed(a,b,c,d){var e=a.split(";"),f=e.shift(),g=xd[f],h=null;g?h=g(e,b,c,d):N("no hint processor for: "+f);h||N("failed to generate load url");b=h;c=b.match(Fd);(d=b.match(Gd))&&1===d.length&&Hd.test(b)&&c&&1===c.length||N("failed sanity: "+a);return h}
function Id(a,b,c,d){function e(a){return encodeURIComponent(a).replace(/%2C/g,",")}
a=Jd(a);Cd.test(c)||N("invalid_callback");b=Kd(b);d=d&&d.length?Kd(d):null;return[encodeURIComponent(a.ab).replace(/%2C/g,",").replace(/%2F/g,"/"),"/k=",e(a.version),"/m=",e(b),d?"/exm="+e(d):"","/rt=j/sv=1/d=1/ed=1",a.ta?"/am="+e(a.ta):"",a.Aa?"/rs="+e(a.Aa):"",a.Ea?"/t="+e(a.Ea):"","/cb=",e(c)].join("")}
function Jd(a){"/"!==a.charAt(0)&&N("relative path");for(var b=a.substring(1).split("/"),c=[];b.length;){a=b.shift();if(!a.length||0==a.indexOf("."))N("empty/relative directory");else if(0<a.indexOf("=")){b.unshift(a);break}c.push(a)}a={};for(var d=0,e=b.length;d<e;++d){var f=b[d].split("="),g=decodeURIComponent(f[0]),h=decodeURIComponent(f[1]);2==f.length&&g&&h&&(a[g]=a[g]||h)}b="/"+c.join("/");zd.test(b)||N("invalid_prefix");c=0;for(d=Ad.length;c<d;++c)Ad[c].test(b)&&N("invalid_prefix");c=Ld(a,
"k",!0);d=Ld(a,"am");e=Ld(a,"rs");a=Ld(a,"t");return{ab:b,version:c,ta:d,Aa:e,Ea:a}}
function Kd(a){for(var b=[],c=0,d=a.length;c<d;++c){var e=a[c].replace(/\./g,"_").replace(/-/g,"_");Dd.test(e)&&b.push(e)}return b.join(",")}
function Ld(a,b,c){a=a[b];!a&&c&&N("missing: "+b);if(a){if(Bd.test(a))return a;N("invalid: "+b)}return null}
var Hd=/^https?:\/\/[a-z0-9_.-]+\.google\.com(:\d+)?\/[a-zA-Z0-9_.,!=\-\/]+$/,Gd=/\/cb=/g,Fd=/\/\//g;function Md(){var a=Yc();if(!a)throw Error("Bad hint");return a}
xd.m=function(a,b,c,d){(a=a[0])||N("missing_hint");return"https://apis.google.com"+Id(a,b,c,d)};
var Nd=decodeURI("%73cript"),Od=/^[-+_0-9\/A-Za-z]+={0,2}$/;function Pd(a,b){for(var c=[],d=0;d<a.length;++d){var e=a[d];e&&0>uc.call(b,e)&&c.push(e)}return c}
function Qd(){var a=K.nonce;if(void 0!==a)return a&&a===String(a)&&a.match(Od)?a:K.nonce=null;var b=H(K,"us",[]);if(!b||!b.length)return K.nonce=null;for(var c=qc.getElementsByTagName(Nd),d=0,e=c.length;d<e;++d){var f=c[d];if(f.src&&(a=String(f.nonce||f.getAttribute("nonce")||"")||null)){for(var g=0,h=b.length;g<h&&b[g]!==f.src;++g);if(g!==h&&a&&a===String(a)&&a.match(Od))return K.nonce=a}}return null}
function Rd(a){if("loading"!=qc.readyState)Sd(a);else{var b=Qd(),c="";null!==b&&(c=' nonce="'+b+'"');qc.write("<"+Nd+' src="'+encodeURI(a)+'"'+c+"></"+Nd+">")}}
function Sd(a){var b=qc.createElement(Nd);b.setAttribute("src",a);a=Qd();null!==a&&b.setAttribute("nonce",a);b.async="true";(a=qc.getElementsByTagName(Nd)[0])?a.parentNode.insertBefore(b,a):(qc.head||qc.body||qc.documentElement).appendChild(b)}
function Td(a,b){var c=b&&b._c;if(c)for(var d=0;d<yd.length;d++){var e=yd[d][0],f=yd[d][1];f&&Object.prototype.hasOwnProperty.call(c,e)&&f(c[e],a,b)}}
function Ud(a,b,c){Vd(function(){var c;c=b===Yc()?H(wc,"_",I()):I();c=H($c(b),"_",c);a(c)},c)}
function Wd(a,b){var c=b||{};"function"==typeof b&&(c={},c.callback=b);Td(a,c);var d=a?a.split(":"):[],e=c.h||Md(),f=H(K,"ah",I());if(f["::"]&&d.length){for(var g=[],h=null;h=d.shift();){var l=h.split("."),l=f[h]||f[l[1]&&"ns:"+l[0]||""]||e,n=g.length&&g[g.length-1]||null,B=n;n&&n.hint==l||(B={hint:l,features:[]},g.push(B));B.features.push(h)}var J=g.length;if(1<J){var ga=c.callback;ga&&(c.callback=function(){0==--J&&ga()})}for(;d=g.shift();)Xd(d.features,c,d.hint)}else Xd(d||[],c,e)}
function Xd(a,b,c){function d(a,b){if(J)return 0;pc.clearTimeout(B);ga.push.apply(ga,aa);var d=((wc||{}).config||{}).update;d?d(f):f&&H(K,"cu",[]).push(f);if(b){rd("me0",a,Z);try{Ud(b,c,n)}finally{rd("me1",a,Z)}}return 1}
a=vc(a)||[];var e=b.callback,f=b.config,g=b.timeout,h=b.ontimeout,l=b.onerror,n=void 0;"function"==typeof l&&(n=l);var B=null,J=!1;if(g&&!h||!g&&h)throw"Timeout requires both the timeout parameter and ontimeout parameter to be set";var l=H($c(c),"r",[]).sort(),ga=H($c(c),"L",[]).sort(),Z=[].concat(l);0<g&&(B=pc.setTimeout(function(){J=!0;h()},g));
var aa=Pd(a,ga);if(aa.length){var aa=Pd(a,l),na=H(K,"CP",[]),oa=na.length;na[oa]=function(a){function b(){var a=na[oa+1];a&&a()}
function c(b){na[oa]=null;d(aa,a)&&Zc(function(){e&&e();b()})}
if(!a)return 0;rd("ml1",aa,Z);0<oa&&na[oa-1]?na[oa]=function(){c(b)}:c(b)};
if(aa.length){var Wc="loaded_"+K.I++;wc[Wc]=function(a){na[oa](a);wc[Wc]=null};
a=Ed(c,aa,"gapi."+Wc,l);l.push.apply(l,aa);rd("ml0",aa,Z);b.sync||pc.___gapisync?Rd(a):Sd(a)}else na[oa](sc)}else d(aa)&&e&&e()}
function Vd(a,b){if(K.hee&&0<K.hel)try{return a()}catch(c){b&&b(c),K.hel--,Wd("debug_error",function(){try{window.___jsl.hefn(c)}catch(d){throw c;}})}else try{return a()}catch(c){throw b&&b(c),c;
}}
wc.load=function(a,b){return Vd(function(){return Wd(a,b)})};var Yd="StopIteration"in m?m.StopIteration:{message:"StopIteration",stack:""};function Zd(){}
Zd.prototype.next=function(){throw Yd;};
Zd.prototype.da=function(){return this};
function $d(a){if(a instanceof Zd)return a;if("function"==typeof a.da)return a.da(!1);if(ra(a)){var b=0,c=new Zd;c.next=function(){for(;;){if(b>=a.length)throw Yd;if(b in a)return a[b++];b++}};
return c}throw Error("Not implemented");}
function ae(a,b){if(ra(a))try{D(a,b,void 0)}catch(c){if(c!==Yd)throw c;}else{a=$d(a);try{for(;;)b.call(void 0,a.next(),void 0,a)}catch(c){if(c!==Yd)throw c;}}}
function be(a){if(ra(a))return gb(a);a=$d(a);var b=[];ae(a,function(a){b.push(a)});
return b}
;function ce(a,b){this.b=p(a)?a:0;this.f=p(b)?b:0}
ce.prototype.equals=function(a){return a instanceof ce&&(this==a?!0:this&&a?this.b==a.b&&this.f==a.f:!1)};
ce.prototype.ceil=function(){this.b=Math.ceil(this.b);this.f=Math.ceil(this.f);return this};
ce.prototype.floor=function(){this.b=Math.floor(this.b);this.f=Math.floor(this.f);return this};
ce.prototype.round=function(){this.b=Math.round(this.b);this.f=Math.round(this.f);return this};var de=z("Opera"),O=z("Trident")||z("MSIE"),ee=z("Edge"),fe=z("Gecko")&&!(-1!=y.toLowerCase().indexOf("webkit")&&!z("Edge"))&&!(z("Trident")||z("MSIE"))&&!z("Edge"),ge=-1!=y.toLowerCase().indexOf("webkit")&&!z("Edge"),he=z("Macintosh"),ie=z("Windows"),je=z("Android"),ke=ad(),le=z("iPad"),me=z("iPod");function ne(){var a=m.document;return a?a.documentMode:void 0}
var oe;a:{var pe="",qe=function(){var a=y;if(fe)return/rv\:([^\);]+)(\)|;)/.exec(a);if(ee)return/Edge\/([\d\.]+)/.exec(a);if(O)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(ge)return/WebKit\/(\S+)/.exec(a);if(de)return/(?:Version)[ \/]?(\S+)/.exec(a)}();
qe&&(pe=qe?qe[1]:"");if(O){var re=ne();if(null!=re&&re>parseFloat(pe)){oe=String(re);break a}}oe=pe}var se=oe,Nc={};
function P(a){return Mc(a,function(){for(var b=0,c=Na(String(se)).split("."),d=Na(String(a)).split("."),e=Math.max(c.length,d.length),f=0;0==b&&f<e;f++){var g=c[f]||"",h=d[f]||"";do{g=/(\d*)(\D*)(.*)/.exec(g)||["","","",""];h=/(\d*)(\D*)(.*)/.exec(h)||["","","",""];if(0==g[0].length&&0==h[0].length)break;b=Oa(0==g[1].length?0:parseInt(g[1],10),0==h[1].length?0:parseInt(h[1],10))||Oa(0==g[2].length,0==h[2].length)||Oa(g[2],h[2]);g=g[3];h=h[3]}while(0==b)}return 0<=b})}
var te;var ue=m.document;te=ue&&O?ne()||("CSS1Compat"==ue.compatMode?parseInt(se,10):5):void 0;!fe&&!O||O&&9<=Number(te)||fe&&P("1.9.1");O&&P("9");function ve(a){this.b=a}
w(ve,td);function we(){}
w(we,Oc);we.prototype.clear=function(){var a=be(this.da(!0)),b=this;D(a,function(a){b.remove(a)})};var xe=z("Firefox"),ye=ad()||z("iPod"),ze=z("iPad"),Ae=z("Android")&&!(qb()||z("Firefox")||z("Opera")||z("Silk")),Be=qb(),Ce=z("Safari")&&!(qb()||z("Coast")||z("Opera")||z("Edge")||z("Silk")||z("Android"))&&!(ad()||z("iPad")||z("iPod"));function De(a){Ee();var b=new ob;b.b=a;return b}
var Ee=la;function Q(a,b){this.b=0;this.w=void 0;this.i=this.f=this.g=null;this.j=this.l=!1;if(a!=la)try{var c=this;a.call(b,function(a){Fe(c,2,a)},function(a){Fe(c,3,a)})}catch(d){Fe(this,3,d)}}
function Ge(){this.next=this.context=this.f=this.g=this.b=null;this.i=!1}
Ge.prototype.reset=function(){this.context=this.f=this.g=this.b=null;this.i=!1};
var He=new Ba(function(){return new Ge},function(a){a.reset()},100);
function Ie(a,b,c){var d=He.get();d.g=a;d.f=b;d.context=c;return d}
function Je(a){if(a instanceof Q)return a;var b=new Q(la);Fe(b,2,a);return b}
function Ke(a){return new Q(function(b,c){c(a)})}
Q.prototype.then=function(a,b,c){return Le(this,sa(a)?a:null,sa(b)?b:null,c)};
Kc(Q);Q.prototype.cancel=function(a){0==this.b&&Cb(function(){var b=new Me(a);Ne(this,b)},this)};
function Ne(a,b){if(0==a.b)if(a.g){var c=a.g;if(c.f){for(var d=0,e=null,f=null,g=c.f;g&&(g.i||(d++,g.b==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.b&&1==d?Ne(c,b):(f?(d=f,d.next==c.i&&(c.i=d),d.next=d.next.next):Oe(c),Pe(c,e,3,b)))}a.g=null}else Fe(a,3,b)}
function Qe(a,b){a.f||2!=a.b&&3!=a.b||Re(a);a.i?a.i.next=b:a.f=b;a.i=b}
function Le(a,b,c,d){var e=Ie(null,null,null);e.b=new Q(function(a,g){e.g=b?function(c){try{var e=b.call(d,c);a(e)}catch(n){g(n)}}:a;
e.f=c?function(b){try{var e=c.call(d,b);!p(e)&&b instanceof Me?g(b):a(e)}catch(n){g(n)}}:g});
e.b.g=a;Qe(a,e);return e.b}
Q.prototype.C=function(a){this.b=0;Fe(this,2,a)};
Q.prototype.G=function(a){this.b=0;Fe(this,3,a)};
function Fe(a,b,c){if(0==a.b){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.b=1;var d;a:{var e=c,f=a.C,g=a.G;if(e instanceof Q)Qe(e,Ie(f||la,g||null,a)),d=!0;else{var h;if(e)try{h=!!e.$goog_Thenable}catch(n){h=!1}else h=!1;if(h)e.then(f,g,a),d=!0;else{if(ta(e))try{var l=e.then;if(sa(l)){Se(e,l,f,g,a);d=!0;break a}}catch(n){g.call(a,n);d=!0;break a}d=!1}}}d||(a.w=c,a.b=b,a.g=null,Re(a),3!=b||c instanceof Me||Te(a,c))}}
function Se(a,b,c,d,e){function f(a){h||(h=!0,d.call(e,a))}
function g(a){h||(h=!0,c.call(e,a))}
var h=!1;try{b.call(a,g,f)}catch(l){f(l)}}
function Re(a){a.l||(a.l=!0,Cb(a.D,a))}
function Oe(a){var b=null;a.f&&(b=a.f,a.f=b.next,b.next=null);a.f||(a.i=null);return b}
Q.prototype.D=function(){for(var a;a=Oe(this);)Pe(this,a,this.b,this.w);this.l=!1};
function Pe(a,b,c,d){if(3==c&&b.f&&!b.i)for(;a&&a.j;a=a.g)a.j=!1;if(b.b)b.b.g=null,Ue(b,c,d);else try{b.i?b.g.call(b.context):Ue(b,c,d)}catch(e){Ve.call(null,e)}Ca(He,b)}
function Ue(a,b,c){2==b?a.g.call(a.context,c):a.f&&a.f.call(a.context,c)}
function Te(a,b){a.j=!0;Cb(function(){a.j&&Ve.call(null,b)})}
var Ve=rb;function Me(a){Da.call(this,a)}
w(Me,Da);Me.prototype.name="cancel";function We(a){this.b=a}
w(We,we);k=We.prototype;k.isAvailable=function(){if(!this.b)return!1;try{return this.b.setItem("__sak","1"),this.b.removeItem("__sak"),!0}catch(a){return!1}};
k.set=function(a,b){try{this.b.setItem(a,b)}catch(c){if(0==this.b.length)throw"Storage mechanism: Storage disabled";throw"Storage mechanism: Quota exceeded";}};
k.get=function(a){a=this.b.getItem(a);if(!t(a)&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
k.remove=function(a){this.b.removeItem(a)};
k.da=function(a){var b=0,c=this.b,d=new Zd;d.next=function(){if(b>=c.length)throw Yd;var d=c.key(b++);if(a)return d;d=c.getItem(d);if(!t(d))throw"Storage mechanism: Invalid value was encountered";return d};
return d};
k.clear=function(){this.b.clear()};
k.key=function(a){return this.b.key(a)};function Xe(a){var b=document;return t(a)?b.getElementById(a):a}
function Ye(a){if(!a)return null;if(a.firstChild)return a.firstChild;for(;a&&!a.nextSibling;)a=a.parentNode;return a?a.nextSibling:null}
function Ze(a){if(!a)return null;if(!a.previousSibling)return a.parentNode;for(a=a.previousSibling;a&&a.lastChild;)a=a.lastChild;return a}
function $e(a,b){for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null}
;function af(){var a=null;try{a=window.localStorage||null}catch(b){}this.b=a}
w(af,We);function bf(){var a=null;try{a=window.sessionStorage||null}catch(b){}this.b=a}
w(bf,We);function cf(a){this.b=a||md();df||(df=ef(this.b))}
var df=null;function ef(a){return(new Q(function(b){try{var c={gapiHintOverride:a.gapiHintOverride,_c:{jsl:{h:a.gapiHintParams}},callback:b},d=sa(c)?{callback:c}:c||{};d._c&&d._c.jsl&&d._c.jsl.h||Ma(d,{_c:{jsl:{h:C("GAPI_HINT_PARAMS",void 0)}}});if(d.gapiHintOverride||C("GAPI_HINT_OVERRIDE")){var e;var f=document.location.href;if(-1!=f.indexOf("?")){var f=(f||"").split("#")[0],g=f.split("?",2);e=ud(1<g.length?g[1]:g[0])}else e={};var h=e.gapi_jsh;h&&Ma(d,{_c:{jsl:{h:h}}})}Wd("client",d)}catch(l){E(l)}})).then(function(){})}
cf.prototype.i=function(){var a=r("gapi.config.update");a("googleapis.config/auth/useFirstPartyAuth",!0);var b=this.b.apiaryHost;/^[\s\xa0]*$/.test(null==b?"":String(b))||a("googleapis.config/root",(-1==b.indexOf("://")?"//":"")+b);b=this.b.Ga;/^[\s\xa0]*$/.test(null==b?"":String(b))||a("googleapis.config/root-1p",(-1==b.indexOf("://")?"//":"")+b);b=C("SESSION_INDEX");a("googleapis.config/sessionIndex",b);r("gapi.client.setApiKey")(this.b.innertubeApiKey)};
cf.prototype.f=function(){return{context:ld(this.b)}};
cf.prototype.g=function(a,b,c){var d,e=!1;0<c.timeout&&(d=F(function(){e||(e=!0,c.N&&c.N())},c.timeout));
ff(this,a,b,function(a){if(!e)if(e=!0,d&&window.clearTimeout(d),a)c.F&&c.F(a);else if(c.onError)c.onError()})};
function ff(a,b,c,d){var e={path:"/youtubei/"+a.b.innertubeApiVersion+"/"+b,headers:{"X-Goog-Visitor-Id":C("VISITOR_DATA")},method:"POST",body:Ac(c)},f=u(a.i,a);df.then(function(){f();r("gapi.client.request")(e).execute(d||la)})}
;var gf=0,hf=r("yt.dom.dom.getNextId")||function(){return++gf};
q("yt.dom.dom.getNextId",hf,void 0);var jf={log_event:"events",log_interaction:"interactions"},kf={},lf={},mf=0,Ia=r("yt.logging.transport.logsQueue_")||{};q("yt.logging.transport.logsQueue_",Ia,void 0);function nf(a,b){Ia[a.endpoint]=Ia[a.endpoint]||[];var c=Ia[a.endpoint];c.push(a.xa);lf[a.endpoint]=b;var d=Number(M("web_logging_max_batch")||0)||20;c.length>=d?of():pf()}
function of(){window.clearTimeout(mf);if(!Ha()){for(var a in Ia){var b=kf[a];if(!b){b=lf[a];if(!b)continue;b=new b;kf[a]=b}var c=b.f();c.requestTimeMs=Math.round(Ua());c[jf[a]]=Ia[a];b.g(a,c,{});delete Ia[a]}Ha()||pf()}}
function pf(){window.clearTimeout(mf);mf=F(of,C("LOGGING_BATCH_TIMEOUT",1E4))}
;function qf(){if(!rf&&!sf||!window.JSON)return null;var a;try{a=rf.get("yt-player-two-stage-token")}catch(b){}if(!t(a))try{a=sf.get("yt-player-two-stage-token")}catch(b){}if(!t(a))return null;try{a=JSON.parse(a,void 0)}catch(b){}return a}
var sf,tf=new af;sf=tf.isAvailable()?new ve(tf):null;var rf,uf=new bf;rf=uf.isAvailable()?new ve(uf):null;var Ga=r("yt.events.events.listeners_")||{};q("yt.events.events.listeners_",Ga,void 0);var vf=r("yt.events.events.counter_")||{count:0};q("yt.events.events.counter_",vf,void 0);function wf(a,b,c){a.addEventListener&&("mouseenter"!=b||"onmouseenter"in document?"mouseleave"!=b||"onmouseenter"in document?"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"):b="mouseout":b="mouseover");return Fa(function(d){return d[0]==a&&d[1]==b&&d[2]==c&&0==d[4]})}
function xf(a,b,c){if(!a||!a.addEventListener&&!a.attachEvent)return"";var d=wf(a,b,c);if(d)return d;var d=++vf.count+"",e=!("mouseenter"!=b&&"mouseleave"!=b||!a.addEventListener||"onmouseenter"in document),f;f=e?function(d){d=new Pc(d);if(!$e(d.relatedTarget,function(b){return b==a}))return d.currentTarget=a,d.type=b,c.call(a,d)}:function(b){b=new Pc(b);
b.currentTarget=a;return c.call(a,b)};
f=nb(f);a.addEventListener?("mouseenter"==b&&e?b="mouseover":"mouseleave"==b&&e?b="mouseout":"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"),a.addEventListener(b,f,!1)):a.attachEvent("on"+b,f);Ga[d]=[a,b,c,f,!1];return d}
function yf(a){a&&("string"==typeof a&&(a=[a]),D(a,function(a){if(a in Ga){var b=Ga[a],d=b[0],e=b[1],f=b[3],b=b[4];d.removeEventListener?d.removeEventListener(e,f,b):d.detachEvent&&d.detachEvent("on"+e,f);delete Ga[a]}}))}
;function zf(a,b,c,d,e,f,g){function h(){4==(l&&"readyState"in l?l.readyState:0)&&b&&nb(b)(l)}
var l=Uc&&Uc();if(!("open"in l))return null;"onloadend"in l?l.addEventListener("loadend",h,!1):l.onreadystatechange=h;c=(c||"GET").toUpperCase();d=d||"";l.open(c,a,!0);f&&(l.responseType=f);g&&(l.withCredentials=!0);f="POST"==c;if(e=Af(a,e))for(var n in e)l.setRequestHeader(n,e[n]),"content-type"==n.toLowerCase()&&(f=!1);f&&l.setRequestHeader("Content-Type","application/x-www-form-urlencoded");l.send(d);return l}
function Af(a,b){b=b||{};var c;c=void 0;c=window.location.href;var d=L(a)[1]||null,e=fd(L(a)[3]||null);d&&e?(d=c,c=L(a),d=L(d),c=c[3]==d[3]&&c[1]==d[1]&&c[4]==d[4]):c=e?fd(L(c)[3]||null)==e&&(Number(L(c)[4]||null)||null)==(Number(L(a)[4]||null)||null):!0;for(var f in Bf){if((e=d=C(Bf[f]))&&!(e=c)){var g=a,e=f,h=C("CORS_HEADER_WHITELIST")||{};e=(g=fd(L(g)[3]||null))?(h=h[g])?0<=cb(h,e):!1:!0}e&&(b[f]=d)}return b}
function Cf(a,b){b.method="POST";b.A||(b.A={});Df(a,b)}
function Ef(a,b){var c=C("XSRF_FIELD_NAME",void 0),d;b.headers&&(d=b.headers["Content-Type"]);return!b.rb&&(!fd(L(a)[3]||null)||b.withCredentials||fd(L(a)[3]||null)==document.location.hostname)&&"POST"==b.method&&(!d||"application/x-www-form-urlencoded"==d)&&!(b.A&&b.A[c])}
function Df(a,b){var c=b.format||"JSON";b.Oa&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var d=C("XSRF_FIELD_NAME",void 0),e=C("XSRF_TOKEN",void 0),f=b.pa;f&&(f[d]&&delete f[d],a=vd(a,f||{}));var g=b.postBody||"",f=b.A;Ef(a,b)&&(f||(f={}),f[d]=e);f&&t(g)&&(d=ud(g),Ma(d,f),g=b.ya&&"JSON"==b.ya?JSON.stringify(d):wd(d));var h=!1,l,n=zf(a,function(a){if(!h){h=!0;l&&window.clearTimeout(l);var d=Vc(a),e=null;if(d||400<=a.status&&
500>a.status)e=Ff(c,a,b.qb);if(d)a:if(204==a.status)d=!0;else{switch(c){case "XML":d=0==parseInt(e&&e.return_code,10);break a;case "RAW":d=!0;break a}d=!!e}var e=e||{},f=b.context||m;d?b.F&&b.F.call(f,a,e):b.onError&&b.onError.call(f,a,e);b.oa&&b.oa.call(f,a,e)}},b.method,g,b.headers,b.responseType,b.withCredentials);
b.N&&0<b.timeout&&(l=F(function(){h||(h=!0,n.abort(),window.clearTimeout(l),b.N.call(b.context||m,n))},b.timeout))}
function Ff(a,b,c){var d=null;switch(a){case "JSON":a=b.responseText;b=b.getResponseHeader("Content-Type")||"";a&&0<=b.indexOf("json")&&(d=zc(a));break;case "XML":if(b=(b=b.responseXML)?Gf(b):null)d={},D(b.getElementsByTagName("*"),function(a){d[a.tagName]=Hf(a)})}c&&If(d);
return d}
function If(a){if(ta(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);if(c){c=b;var d;d=Jb(a[b]);a[c]=d}else If(a[b])}}
function Gf(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function Hf(a){var b="";D(a.childNodes,function(a){b+=a.nodeValue});
return b}
var Bf={"X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL","X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM"};function Jf(a,b,c,d,e){c={name:c||C("INNERTUBE_CONTEXT_CLIENT_NAME",1),version:d||C("INNERTUBE_CONTEXT_CLIENT_VERSION",void 0)};e=window&&window.yterr||e||!1;if(a&&e&&!(5<=Kf)){e=a.stacktrace;d=a.columnNumber;var f=r("window.location.href");if(t(a))a={message:a,name:"Unknown error",lineNumber:"Not available",fileName:f,stack:"Not available"};else{var g,h,l=!1;try{g=a.lineNumber||a.line||"Not available"}catch(J){g="Not available",l=!0}try{h=a.fileName||a.filename||a.sourceURL||m.$googDebugFname||f}catch(J){h=
"Not available",l=!0}a=!l&&a.lineNumber&&a.fileName&&a.stack&&a.message&&a.name?a:{message:a.message||"Not available",name:a.name||"UnknownError",lineNumber:g,fileName:h,stack:a.stack||"Not available"}}e=e||a.stack;g=a.lineNumber.toString();isNaN(g)||isNaN(d)||(g=g+":"+d);if(!(Lf[a.message]||0<=e.indexOf("/YouTubeCenter.js")||0<=e.indexOf("/mytube.js"))){h=a.fileName;b={pa:{a:"logerror",t:"jserror",type:a.name,msg:a.message.substr(0,1E3),line:g,level:b||"ERROR"},A:{url:C("PAGE_NAME",window.location.href),
file:h},method:"POST"};e&&(b.A.stack=e);for(var n in c)b.A["client."+n]=c[n];if(n=C("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS",void 0))for(var B in n)b.A[B]=n[B];Df("/error_204",b);Lf[a.message]=!0;Kf++}}}
var Lf={},Kf=0;function Mf(){this.b=md()}
Mf.prototype.f=function(){return{context:ld(this.b)}};
Mf.prototype.g=function(a,b,c){b={headers:{"Content-Type":"application/json","X-Goog-Visitor-Id":C("VISITOR_DATA")},A:b,ya:"JSON",N:c.N,F:c.F,onError:c.onError,timeout:c.timeout,withCredentials:!0};a:{c=[];var d=nc(String(m.location.href)),e=m.__OVERRIDE_SID;null==e&&(e=(new Hc(document)).get("SID"));if(e&&(d=(e=0==d.indexOf("https:")||0==d.indexOf("chrome-extension:"))?m.__SAPISID:m.__APISID,null==d&&(d=(new Hc(document)).get(e?"SAPISID":"APISID")),d)){var e=e?"SAPISIDHASH":"APISIDHASH",f=String(m.location.href);
c=f&&d&&e?[e,nd(nc(f),d,c||null)].join(" "):null;break a}c=null}c&&(b.headers.Authorization=c,b.headers["X-Goog-AuthUser"]=C("SESSION_INDEX",0));c=this.b.nb;c.startsWith("http")||(c="//"+c);Cf(c+("/youtubei/"+this.b.innertubeApiVersion+"/"+a)+"?alt=json&key="+this.b.innertubeApiKey,b)};function Nf(){if(null==r("_lact",window)){var a=parseInt(C("LACT"),10),a=isFinite(a)?v()-Math.max(a,0):-1;q("_lact",a,window);-1==a&&Of();xf(document,"keydown",Of);xf(document,"keyup",Of);xf(document,"mousedown",Of);xf(document,"mouseup",Of);Sb("page-mouse",Of);Sb("page-scroll",Of);Sb("page-resize",Of)}}
function Of(){null==r("_lact",window)&&(Nf(),r("_lact",window));var a=v();q("_lact",a,window);Vb("USER_ACTIVE")}
function Pf(){var a=r("_lact",window);return null==a?-1:Math.max(v()-a,0)}
;function Qf(a,b,c,d){var e={};e.eventTimeMs=Math.round(d||Ua());e[a]=b;M("web_gel_lact")&&(e.context={lastActivityMs:Pf()});nf({endpoint:"log_event",xa:e},c)}
;function Rf(a,b,c,d){Sf(a,{attachChild:{csn:b,parentVisualElement:Tc(c),visualElements:[Tc(d)]}},void 0)}
function Tf(a,b,c){c=db(c,function(a){return Tc(a)});
Sf(a,{visibilityUpdate:{csn:b,visualElements:c}})}
function Sf(a,b,c){b.eventTimeMs=Math.round(Ua());b.lactMs=Pf();c&&(b.clientData=Uf(c));nf({endpoint:"log_interaction",xa:b},a)}
function Uf(a){var b={};a.analyticsChannelData&&(b.analyticsDatas=db(a.analyticsChannelData,function(a){return{tabName:a.tabName,cardName:a.cardName,isChannelScreen:a.isChannelScreen,insightId:a.insightId,externalChannelId:a.externalChannelId,externalContentOwnerId:a.externalContentOwnerId}}));
return{playbackData:{clientPlaybackNonce:a.clientPlaybackNonce},analyticsChannelData:b,externalLinkData:a.externalLinkData}}
;function Vf(){return M("enable_youtubei_innertube")?Mf:cf}
;var Wf=r("yt.logging.latency.usageStats_")||{};q("yt.logging.latency.usageStats_",Wf,void 0);var Xf=0;function Yf(a){Wf[a]=Wf[a]||{count:0};var b=Wf[a];b.count++;b.time=Ua();Xf||(Xf=Ab(Zf,0,5E3));return 10<b.count?(11==b.count&&Jf(Error("CSI data exceeded logging limit with key: "+a)),!0):!1}
function Zf(){var a=Ua(),b;for(b in Wf)6E4<a-Wf[b].time&&delete Wf[b];Xf=0}
;function $f(){var a=C("ROOT_VE_TYPE",void 0);return a?new Rc(void 0,a,void 0):null}
function ag(){var a=C("client-screen-nonce",void 0);a||(a=C("EVENT_ID",void 0));return a}
;var bg=window.yt&&window.yt.msgs_||window.ytcfg&&window.ytcfg.msgs||{};q("yt.msgs_",bg,void 0);function cg(a){Wa(bg,arguments)}
;var dg=v().toString();function eg(a,b,c){b=void 0===b?{}:b;c=void 0===c?!1:c;var d=C("EVENT_ID");d&&(b.ei||(b.ei=d));if(b){var d=a,e=C("VALID_SESSION_TEMPDATA_DOMAINS",[]),f=fd(L(window.location.href)[3]||null);f&&e.push(f);f=fd(L(d)[3]||null);if(0<=cb(e,f)||!f&&0==d.lastIndexOf("/",0))if(M("autoescape_tempdata_url")&&(e=document.createElement("a"),Kb(e,d),d=e.href),d){var f=L(d),d=f[5],e=f[6],f=f[7],g="";d&&(g+=d);e&&(g+="?"+e);f&&(g+="#"+f);d=g;e=d.indexOf("#");if(d=0>e?d:d.substr(0,e)){if(b.itct||b.ved)b.csn=b.csn||
ag();d="ST-"+Pa(d).toString(36);e=b?wd(b):"";Jc.set(""+d,e,5,"/","youtube.com");b&&(b=b.itct||b.ved,d=r("yt.logging.screen.storeParentElement"),b&&d&&d(new Rc(b)))}}}if(c)return!1;if((window.ytspf||{}).enabled)spf.navigate(a);else{var h,l;h=void 0===h?{}:h;l=void 0===l?"":l;c=window.location;a=gd(jd([a],h))+l;a=a instanceof ub?a:yb(a);c.href=wb(a)}return!0}
;function fg(a){a=a||{};this.url=a.url||"";this.urlV9As2=a.url_v9as2||"";this.args=a.args||Ka(gg);this.assets=a.assets||{};this.attrs=a.attrs||Ka(hg);this.params=a.params||Ka(ig);this.minVersion=a.min_version||"8.0.0";this.fallback=a.fallback||null;this.fallbackMessage=a.fallbackMessage||null;this.html5=!!a.html5;this.disable=a.disable||{};this.loaded=!!a.loaded;this.messages=a.messages||{}}
var gg={enablejsapi:1},hg={},ig={allowscriptaccess:"always",allowfullscreen:"true",bgcolor:"#000000"};function jg(a){a instanceof fg||(a=new fg(a));return a}
function kg(a){var b=new fg,c;for(c in a)if(a.hasOwnProperty(c)){var d=a[c];b[c]="object"==pa(d)?Ka(d):d}return b}
;function lg(){this.g=this.f=this.b=0;this.i="";var a=r("window.navigator.plugins"),b=r("window.navigator.mimeTypes"),a=a&&a["Shockwave Flash"],b=b&&b["application/x-shockwave-flash"],b=a&&b&&b.enabledPlugin&&a.description||"";if(a=b){var c=a.indexOf("Shockwave Flash");0<=c&&(a=a.substr(c+15));for(var c=a.split(" "),d="",a="",e=0,f=c.length;e<f;e++)if(d)if(a)break;else a=c[e];else d=c[e];d=d.split(".");c=parseInt(d[0],10)||0;d=parseInt(d[1],10)||0;e=0;if("r"==a.charAt(0)||"d"==a.charAt(0))e=parseInt(a.substr(1),
10)||0;a=[c,d,e]}else a=[0,0,0];this.i=b;b=a;this.b=b[0];this.f=b[1];this.g=b[2];if(0>=this.b){var g,h,l,n;if(Va)try{g=new ActiveXObject("ShockwaveFlash.ShockwaveFlash")}catch(B){g=null}else l=document.body,n=document.createElement("object"),n.setAttribute("type","application/x-shockwave-flash"),g=l.appendChild(n);if(g&&"GetVariable"in g)try{h=g.GetVariable("$version")}catch(B){h=""}l&&n&&l.removeChild(n);(g=h||"")?(g=g.split(" ")[1].split(","),g=[parseInt(g[0],10)||0,parseInt(g[1],10)||0,parseInt(g[2],
10)||0]):g=[0,0,0];this.b=g[0];this.f=g[1];this.g=g[2]}}
ma(lg);function mg(a,b,c,d){b="string"==typeof b?b.split("."):[b,c,d];b[0]=parseInt(b[0],10)||0;b[1]=parseInt(b[1],10)||0;b[2]=parseInt(b[2],10)||0;return a.b>b[0]||a.b==b[0]&&a.f>b[1]||a.b==b[0]&&a.f==b[1]&&a.g>=b[2]}
;function ng(){x.call(this);this.b=new G;Xa(this,za(Ya,this.b))}
w(ng,x);ng.prototype.subscribe=function(a,b,c){return this.f?0:this.b.subscribe(a,b,c)};
ng.prototype.L=function(a){return this.f?!1:this.b.L(a)};
ng.prototype.j=function(a,b){this.f||this.b.X.apply(this.b,arguments)};function og(a){"number"==typeof a&&(a=Math.round(a)+"px");return a}
;var pg=/cssbin\/(?:debug-)?([a-zA-Z0-9_-]+?)(?:-2x|-web|-rtl|-vfl|.css)/;function qg(a){if(window.spf){var b=a.match(pg);spf.style.load(a,b?b[1]:"",void 0)}else rg(a)}
function rg(a){var b=sg(a),c=document.getElementById(b),d=c&&Sa(c,"loaded");d||c&&!d||(c=tg(a,b,function(){Sa(c,"loaded")||(Ta(c),Vb(b),F(za(Xb,b),0))}))}
function tg(a,b,c){var d=document.createElement("link");d.id=b;d.onload=function(){c&&setTimeout(c,0)};
a=De(a);d.rel="stylesheet";d.href=a instanceof ob&&a.constructor===ob&&a.f===pb?a.b:"type_error:TrustedResourceUrl";(document.getElementsByTagName("head")[0]||document.body).appendChild(d);return d}
function sg(a){var b=document.createElement("a");Kb(b,a);a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"css-"+Pa(a)}
;var ug={},vg=0;function wg(a,b){a&&(C("USE_NET_AJAX_FOR_PING_TRANSPORT",!1)?zf(a,b):xg(a,b))}
function xg(a,b){var c=new Image,d=""+vg++;ug[d]=c;c.onload=c.onerror=function(){b&&ug[d]&&b();delete ug[d]};
c.src=a}
;function yg(){var a=Ka(zg);return new Q(function(b,c){a.F=function(a){Vc(a)?b(a):c(new Ag("Request failed, status="+a.status,"net.badstatus"))};
a.onError=function(){c(new Ag("Unknown request error","net.unknown"))};
a.N=function(){c(new Ag("Request timed out","net.timeout"))};
Df("//googleads.g.doubleclick.net/pagead/id",a)})}
function Ag(a,b){Da.call(this,a+", errorCode="+b);this.errorCode=b;this.name="PromiseAjaxError"}
ba(Ag,Da);var Bg;var Cg=y,Cg=Cg.toLowerCase();if(-1!=Cg.indexOf("android")){var Dg=Cg.match(/android\D*(\d\.\d)[^\;|\)]*[\;\)]/);if(Dg)Bg=Number(Dg[1]);else{var Eg={cupcake:1.5,donut:1.6,eclair:2,froyo:2.2,gingerbread:2.3,honeycomb:3,"ice cream sandwich":4,jellybean:4.1,kitkat:4.4,lollipop:5.1,marshmallow:6,nougat:7.1},Fg=[],Gg=0,Hg;for(Hg in Eg)Fg[Gg++]=Hg;var Ig=Cg.match("("+Fg.join("|")+")");Bg=Ig?Eg[Ig[0]]:0}}else Bg=void 0;var Jg=y,Kg=Jg.match(/\((BB10|PlayBook|BlackBerry);/);!Kg||2>Kg.length||Jg.match(/Version\/(\d+\.\d+)/);y.match(/Mozilla\/[\d\.]+ \(Mobile;.* rv:([\d\.]+)\) Gecko\/[\d\.]+ Firefox\/[\d\.]+/);var Lg;var Mg=y,Ng=Mg.match(/\((iPad|iPhone|iPod)( Simulator)?;/);if(!Ng||2>Ng.length)Lg=void 0;else{var Og=Mg.match(/\((iPad|iPhone|iPod)( Simulator)?; (U; )?CPU (iPhone )?OS (\d+_\d)[_ ]/);Lg=Og&&6==Og.length?Number(Og[5].replace("_",".")):0}0<=Lg&&0<=y.search("Safari")&&y.search("Version");var Pg=['video/mp4; codecs="avc1.42001E, mp4a.40.2"','video/webm; codecs="vp8.0, vorbis"'],Qg=['audio/mp4; codecs="mp4a.40.2"'];O&&P("9");!ge||P("528");fe&&P("1.9b")||O&&P("8")||de&&P("9.5")||ge&&P("528");fe&&!P("8")||O&&P("9");function Rg(a){x.call(this);this.b=[];this.g=a||this}
w(Rg,x);function Sg(a,b,c,d){d=nb(u(d,a.g));d={target:b,name:c,ia:d};b.addEventListener(c,d.ia,void 0);a.b.push(d)}
function Tg(a){for(;a.b.length;){var b=a.b.pop();b.target.removeEventListener(b.name,b.ia)}}
Rg.prototype.o=function(){Tg(this);Rg.B.o.call(this)};function Ug(a,b,c,d){x.call(this);this.i=b||null;this.C="*";this.j=c||null;this.b=null;this.channel=d||null;this.K=!!a;this.D=u(this.J,this);window.addEventListener("message",this.D)}
ba(Ug,x);Ug.prototype.J=function(a){if(!("*"!=this.j&&a.origin!=this.j||this.i&&a.source!=this.i)&&t(a.data)){var b;try{b=yc(a.data)}catch(c){return}if(!(null==b||this.K&&(this.b&&this.b!=b.id||this.channel&&this.channel!=b.channel))&&b)switch(b.event){case "listening":"null"!=a.origin?this.j=this.C=a.origin:E(Error("MessageEvent origin is null"),"WARNING");this.i=a.source;this.b=b.id;this.g&&(this.g(),this.g=null);break;case "command":this.l&&(this.w&&!(0<=cb(this.w,b.func))||this.l(b.func,b.args))}}};
Ug.prototype.sendMessage=function(a,b){var c=b||this.i;if(c){this.b&&(a.id=this.b);this.channel&&(a.channel=this.channel);try{var d=Ac(a);c.postMessage(d,this.C)}catch(e){E(e,"WARNING")}}};
Ug.prototype.o=function(){window.removeEventListener("message",this.D);x.prototype.o.call(this)};function Vg(a,b,c){Ug.call(this,a,b,c||C("POST_MESSAGE_ORIGIN",void 0)||window.document.location.protocol+"//"+window.document.location.hostname,"widget");this.w=this.g=this.l=null}
ba(Vg,Ug);function R(a,b){this.version=a;this.args=b}
function Wg(a){if(!a.Ca){var b={};a.call(b);a.Ca=b.version}return a.Ca}
function Xg(a,b){function c(){a.apply(this,b.args)}
if(!b.args||!b.version)throw Error("yt.pubsub2.Data.deserialize(): serializedData is incomplete.");var d;try{d=Wg(a)}catch(e){}if(!d||b.version!=d)throw Error("yt.pubsub2.Data.deserialize(): serializedData version is incompatible.");c.prototype=a.prototype;try{return new c}catch(e){throw e.message="yt.pubsub2.Data.deserialize(): "+e.message,e;}}
function S(a,b){this.topic=a;this.b=b}
S.prototype.toString=function(){return this.topic};var Yg=window.performance||window.mozPerformance||window.msPerformance||window.webkitPerformance||{};function Zg(a){R.call(this,1,arguments)}
w(Zg,R);var $g=new S("timing-sent",Zg);var ah=r("yt.pubsub2.instance_")||new G;G.prototype.subscribe=G.prototype.subscribe;G.prototype.unsubscribeByKey=G.prototype.L;G.prototype.publish=G.prototype.X;G.prototype.clear=G.prototype.clear;q("yt.pubsub2.instance_",ah,void 0);var bh=r("yt.pubsub2.subscribedKeys_")||{};q("yt.pubsub2.subscribedKeys_",bh,void 0);var ch=r("yt.pubsub2.topicToKeys_")||{};q("yt.pubsub2.topicToKeys_",ch,void 0);var dh=r("yt.pubsub2.isAsync_")||{};q("yt.pubsub2.isAsync_",dh,void 0);q("yt.pubsub2.skipSubKey_",null,void 0);
function T(a,b){var c=eh();c&&c.publish.call(c,a.toString(),a,b)}
function U(a,b){var c=eh();if(!c)return 0;var d=c.subscribe(a.toString(),function(c,f){if(!window.yt.pubsub2.skipSubKey_||window.yt.pubsub2.skipSubKey_!=d){var e=function(){if(bh[d])try{if(f&&a instanceof S&&a!=c)try{f=Xg(a.b,f)}catch(h){throw h.message="yt.pubsub2 cross-binary conversion error for "+a.toString()+": "+h.message,h;}b.call(window,f)}catch(h){E(h)}};
dh[a.toString()]?r("yt.scheduler.instance")?Bb(e):F(e,0):e()}});
bh[d]=!0;ch[a.toString()]||(ch[a.toString()]=[]);ch[a.toString()].push(d);return d}
function fh(a){var b=eh();b&&("number"==typeof a&&(a=[a]),D(a,function(a){b.unsubscribeByKey(a);delete bh[a]}))}
function eh(){return r("yt.pubsub2.instance_")}
;function gh(a,b,c){x.call(this);this.b=a;this.j=b||0;this.g=c;this.i=u(this.Ja,this)}
w(gh,x);k=gh.prototype;k.W=0;k.o=function(){gh.B.o.call(this);this.stop();delete this.b;delete this.g};
k.start=function(a){this.stop();var b=this.i;a=p(a)?a:this.j;if(!sa(b))if(b&&"function"==typeof b.handleEvent)b=u(b.handleEvent,b);else throw Error("Invalid listener argument");this.W=2147483647<Number(a)?-1:m.setTimeout(b,a||0)};
k.stop=function(){this.isActive()&&m.clearTimeout(this.W);this.W=0};
k.isActive=function(){return 0!=this.W};
k.Ja=function(){this.W=0;this.b&&this.b.call(this.g)};var hh={vc:!0},ih={ad_at:"adType",cpn:"clientPlaybackNonce",csn:"clientScreenNonce",is_nav:"isNavigation",yt_lt:"loadType",yt_ad:"isMonetized",yt_ad_pr:"prerollAllowed",yt_red:"isRedSubscriber",yt_vis:"isVisible",docid:"videoId",plid:"videoId"},jh="ap c cver ei yt_fss yt_li".split(" "),kh=["isNavigation","isMonetized","prerollAllowed","isRedSubscriber","isVisible"],lh=u(Yg.clearResourceTimings||Yg.webkitClearResourceTimings||Yg.mozClearResourceTimings||Yg.msClearResourceTimings||Yg.oClearResourceTimings||
la,Yg);
function mh(a,b){if(!b&&"_"!=a[0]){var c=a;Yg.mark&&(0==c.lastIndexOf("mark_",0)||(c="mark_"+c),Yg.mark(c))}var c=nh(),d=b||Ua();c[a]&&(c["_"+a]=c["_"+a]||[c[a]],c["_"+a].push(d));c[a]=d;(oh()["tick_"+a]=b)||Ua();M("csi_on_gel")?(c=ph(),"_start"==a?Yf("baseline_"+c)||Qf("latencyActionBaselined",{clientActionNonce:c},Mf,b):Yf("tick_"+a+"_"+c)||Qf("latencyActionTicked",{tickName:a,clientActionNonce:c},Mf,b),c=!0):c=!1;if(c=!c)c=!r("yt.timing.pingSent_");if(c&&(d=C("TIMING_ACTION",void 0),c=nh(),r("yt.timing.ready_")&&
d&&c._start&&qh())){var d=!0,e=C("TIMING_WAIT",[]);if(e.length)for(var f=0,g=e.length;f<g;++f)if(!(e[f]in c)){d=!1;break}d&&rh()}}
function sh(){var a=th().info.yt_lt="hot_bg";oh().info_yt_lt=a;if(M("csi_on_gel"))if("yt_lt"in ih){var b={},c=ih.yt_lt;0<=cb(kh,c)&&(a=!!a);b[c]=a;a=ph();c=Object.keys(b).join("");Yf("info_"+c+"_"+a)||(b.clientActionNonce=a,Qf("latencyActionInfo",b,Mf))}else"yt_lt"in jh||E(Error("Unknown label yt_lt logged with GEL CSI."))}
function qh(){var a=nh();if(a.aft)return a.aft;for(var b=C("TIMING_AFT_KEYS",["ol"]),c=b.length,d=0;d<c;d++){var e=a[b[d]];if(e)return e}return NaN}
function rh(){if(!M("csi_on_gel")){var a=nh(),b=th().info,c=a._start,d;for(d in a)if(0==d.lastIndexOf("_",0)&&qa(a[d])){var e=d.slice(1);if(e in hh){var f=db(a[d],function(a){return Math.round(a-c)});
b["all_"+e]=f.join()}delete a[d]}e=!!b.ap;if(f=r("yt.timing.reportbuilder_")){if(f=f(a,b,void 0))uh(f,e),vh(),lh(),wh(!1,void 0),C("TIMING_ACTION")&&A("PREVIOUS_ACTION",C("TIMING_ACTION")),A("TIMING_ACTION","")}else{var g=C("CSI_SERVICE_NAME","youtube"),f={v:2,s:g,action:C("TIMING_ACTION",void 0)},h=b.srt;void 0!==a.srt&&delete b.srt;if(b.h5jse){var l=window.location.protocol+r("ytplayer.config.assets.js");(l=Yg.getEntriesByName?Yg.getEntriesByName(l)[0]:null)?b.h5jse=Math.round(b.h5jse-l.responseEnd):
delete b.h5jse}a.aft=qh();xh()&&"youtube"==g&&(sh(),g=a.vc,l=a.pbs,delete a.aft,b.aft=Math.round(l-g));for(var n in b)"_"!=n.charAt(0)&&(f[n]=b[n]);a.ps=Ua();b={};n=[];for(d in a)"_"!=d.charAt(0)&&(g=Math.round(a[d]-c),b[d]=g,n.push(d+"."+g));f.rt=n.join(",");(a=r("ytdebug.logTiming"))&&a(f,b);uh(f,e,void 0);T($g,new Zg(b.aft+(h||0)))}}}
function uh(a,b,c){if(M("debug_csi_data")){var d=r("yt.timing.csiData");d||(d=[],q("yt.timing.csiData",d,void 0));d.push({page:location.href,time:new Date,args:a})}var d="",e;for(e in a)d+="&"+e+"="+a[e];a="/csi_204?"+d.substring(1);if(window.navigator&&window.navigator.sendBeacon&&b)try{window.navigator&&window.navigator.sendBeacon&&window.navigator.sendBeacon(a,"")||wg(a,void 0)}catch(f){wg(a,void 0)}else wg(a);wh(!0,c)}
function ph(){var a=th().nonce;if(!a){var b;a:{if(window.crypto&&window.crypto.getRandomValues)try{var c=Array(16),d=new Uint8Array(16);window.crypto.getRandomValues(d);for(a=0;a<c.length;a++)c[a]=d[a];b=c;break a}catch(e){}b=Array(16);for(c=0;16>c;c++){d=v();for(a=0;a<d%23;a++)b[c]=Math.random();b[c]=Math.floor(256*Math.random())}if(dg)for(c=1,d=0;d<dg.length;d++)b[c%16]=b[c%16]^b[(c-1)%16]/4^dg.charCodeAt(d),c++}c=[];for(d=0;d<b.length;d++)c.push("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_".charAt(b[d]&
63));a=c.join("");th().nonce=a}return a}
function nh(){return th().tick}
function oh(){var a=th();"gel"in a||(a.gel={});return a.gel}
function th(){return r("ytcsi.data_")||vh()}
function vh(){var a={tick:{},info:{}};q("ytcsi.data_",a,void 0);return a}
function wh(a,b){q("yt.timing."+(b||"")+"pingSent_",a,void 0)}
function xh(){var a=nh(),b=a.pbr,c=a.vc,a=a.pbs;return b&&c&&a&&b<c&&c<a&&1==th().info.yt_pvis}
;new gh(yh,1E3);function yh(){mh("vptl",0);mh("vpl",0)}
;var zh={"api.invalidparam":2,auth:150,"drm.auth":150,"heartbeat.net":150,"heartbeat.servererror":150,"heartbeat.stop":150,"html5.unsupportedads":5,"fmt.noneavailable":5,"fmt.decode":5,"fmt.unplayable":5,"html5.missingapi":5,"html5.unsupportedlive":5,"drm.unavailable":5};function Ah(a,b){x.call(this);this.w=this.l=a;this.U=b;this.C=!1;this.g={};this.aa=this.T=null;this.V=new G;Xa(this,za(Ya,this.V));this.j={};this.J=this.ba=this.i=this.ha=this.b=null;this.Y=!1;this.K=this.D=this.P=this.R=null;this.ca={};this.Fa=["onReady"];this.Z=new Rg(this);Xa(this,za(Ya,this.Z));this.fa=null;this.ra=NaN;this.$={};Bh(this);this.H("onDetailedError",u(this.Va,this));this.H("onTabOrderChange",u(this.Ha,this));this.H("onTabAnnounce",u(this.sa,this));this.H("WATCH_LATER_VIDEO_ADDED",
u(this.Wa,this));this.H("WATCH_LATER_VIDEO_REMOVED",u(this.Xa,this));xe||(this.H("onMouseWheelCapture",u(this.Ta,this)),this.H("onMouseWheelRelease",u(this.Ua,this)));this.H("onAdAnnounce",u(this.sa,this));this.M=new Rg(this);Xa(this,za(Ya,this.M));this.ga=!1;this.ea=null}
w(Ah,x);var Ch=["drm.unavailable","fmt.noneavailable","html5.missingapi","html5.unsupportedads","html5.unsupportedlive"];k=Ah.prototype;k.qa=function(a,b){this.f||(Dh(this,a),Eh(this,b),this.C&&Fh(this))};
function Dh(a,b){a.ha=b;a.b=kg(b);a.i=a.b.attrs.id||a.i;"video-player"==a.i&&(a.i=a.U,a.b.attrs.id=a.U);a.w.id==a.i&&(a.i+="-player",a.b.attrs.id=a.i);a.b.args.enablejsapi="1";a.b.args.playerapiid=a.U;a.ba||(a.ba=Gh(a,a.b.args.jsapicallback||"onYouTubePlayerReady"));a.b.args.jsapicallback=null;var c=a.b.attrs.width;c&&(a.w.style.width=og(Number(c)||c));if(c=a.b.attrs.height)a.w.style.height=og(Number(c)||c)}
k.La=function(){return this.ha};
function Fh(a){a.b.loaded||(a.b.loaded=!0,"0"!=a.b.args.autoplay?a.g.loadVideoByPlayerVars(a.b.args):a.g.cueVideoByPlayerVars(a.b.args))}
function Hh(a){if(!p(a.b.disable.flash)){var b=a.b.disable,c;c=mg(lg.getInstance(),a.b.minVersion);b.flash=!c}return!a.b.disable.flash}
function Ih(a,b){if((!b||(5!=(zh[b.errorCode]||5)?0:-1!=Ch.indexOf(b.errorCode)))&&Hh(a)){var c=Jh(a);c&&c.stopVideo&&c.stopVideo();var d=a.b;c&&c.getUpdatedConfigurationData&&(c=c.getUpdatedConfigurationData(),d=jg(c));d.args.autoplay=1;d.args.html5_unavailable="1";Dh(a,d);Eh(a,"flash")}}
function Eh(a,b){if(!a.f){if(!b){var c;if(!(c=!a.b.html5&&Hh(a))){if(!p(a.b.disable.html5)){var d;c=!0;void 0!=a.b.args.deviceHasDisplay&&(c=a.b.args.deviceHasDisplay);if(2.2==Bg)d=!0;else{a:{var e=c;c=r("yt.player.utils.videoElement_");c||(c=document.createElement("VIDEO"),q("yt.player.utils.videoElement_",c,void 0));try{if(c.canPlayType)for(var e=e?Pg:Qg,f=0;f<e.length;f++)if(c.canPlayType(e[f])){d=null;break a}d="fmt.noneavailable"}catch(g){d="html5.missingapi"}}d=!d}d&&(d=Kh(a)||a.b.assets.js);
a.b.disable.html5=!d;d||(a.b.args.html5_unavailable="1")}c=!!a.b.disable.html5}b=c?Hh(a)?"flash":"unsupported":"html5"}("flash"==b?a.lb:a.mb).call(a)}}
function Kh(a){var b=!0,c=Jh(a);c&&a.b&&(a=a.b,b=Sa(c,"version")==a.assets.js);return b&&!!r("yt.player.Application.create")}
k.mb=function(){if(!this.Y){var a=Kh(this);a&&"html5"==Lh(this)?(this.J="html5",this.C||this.O()):(Mh(this),this.J="html5",a&&this.P?(this.l.appendChild(this.P),this.O()):(this.b.loaded=!0,this.R=u(function(){var a=this.l,c=kg(this.b);r("yt.player.Application.create")(a,c);this.O()},this),this.Y=!0,a?this.R():(ec(this.b.assets.js,this.R),qg(this.b.assets.css))))}};
k.lb=function(){var a=kg(this.b);if(!this.D){var b=Jh(this);b&&(this.D=document.createElement("SPAN"),this.D.tabIndex=0,Sg(this.Z,this.D,"focus",this.va),this.K=document.createElement("SPAN"),this.K.tabIndex=0,Sg(this.Z,this.K,"focus",this.va),b.parentNode&&b.parentNode.insertBefore(this.D,b),b.parentNode&&b.parentNode.insertBefore(this.K,b.nextSibling))}a.attrs.width=a.attrs.width||"100%";a.attrs.height=a.attrs.height||"100%";if("flash"==Lh(this))this.J="flash",this.C||this.O();else{Mh(this);this.J=
"flash";this.b.loaded=!0;var b=lg.getInstance(),c=(-1<b.i.indexOf("Gnash")&&-1==b.i.indexOf("AVM2")||9==b.b&&1==b.f||9==b.b&&0==b.f&&1==b.g?0:9<=b.b)||-1<navigator.userAgent.indexOf("Sony/COM2")&&!mg(b,9,1,58)?a.url:a.urlV9As2;window!=window.top&&document.referrer&&(a.args.framer=document.referrer.substring(0,128));b=this.l;if(c){var b=t(b)?Xe(b):b,d=Ka(a.attrs);d.tabindex=0;var e=Ka(a.params);e.flashvars=wd(a.args);if(Va){d.classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000";e.movie=c;var a=document.createElement("object"),
f;for(f in d)a.setAttribute(f,d[f]);for(var g in e)f=document.createElement("param"),f.setAttribute("name",g),f.setAttribute("value",e[g]),a.appendChild(f)}else{d.type="application/x-shockwave-flash";d.src=c;a=document.createElement("embed");a.setAttribute("name",d.id);for(var h in d)a.setAttribute(h,d[h]);for(var l in e)a.setAttribute(l,e[l])}g=document.createElement("div");g.appendChild(a);b.innerHTML=g.innerHTML}this.O()}};
k.va=function(){Jh(this).focus()};
function Jh(a){var b=Xe(a.i);!b&&a.w&&a.w.querySelector&&(b=a.w.querySelector("#"+a.i));return b}
k.O=function(){if(!this.f){var a=Jh(this),b=!1;try{a&&a.getApiInterface&&a.getApiInterface()&&(b=!0)}catch(f){}if(b)if(this.Y=!1,a.isNotServable&&a.isNotServable(this.b.args.video_id))Ih(this);else{Bh(this);this.C=!0;a=Jh(this);a.addEventListener&&(this.T=Nh(this,a,"addEventListener"));a.removeEventListener&&(this.aa=Nh(this,a,"removeEventListener"));for(var b=a.getApiInterface(),b=b.concat(a.getInternalApiInterface()),c=0;c<b.length;c++){var d=b[c];this.g[d]||(this.g[d]=Nh(this,a,d))}for(var e in this.j)this.T(e,
this.j[e]);Fh(this);this.ba&&this.ba(this.g);this.V.X("onReady",this.g)}else this.ra=F(u(this.O,this),50)}};
function Nh(a,b,c){var d=b[c];return function(){try{return a.fa=null,d.apply(b,arguments)}catch(e){"Bad NPObject as private data!"!=e.message&&"sendAbandonmentPing"!=c&&(e.message+=" ("+c+")",a.fa=e,E(e,"WARNING"))}}}
function Bh(a){a.C=!1;if(a.aa)for(var b in a.j)a.aa(b,a.j[b]);for(var c in a.$)window.clearTimeout(parseInt(c,10));a.$={};a.T=null;a.aa=null;for(var d in a.g)a.g[d]=null;a.g.addEventListener=u(a.H,a);a.g.removeEventListener=u(a.cb,a);a.g.destroy=u(a.dispose,a);a.g.getLastError=u(a.Ma,a);a.g.getPlayerType=u(a.Na,a);a.g.getCurrentVideoConfig=u(a.La,a);a.g.loadNewVideoConfig=u(a.qa,a);a.g.isReady=u(a.ob,a)}
k.ob=function(){return this.C};
k.H=function(a,b){if(!this.f){var c=Gh(this,b);if(c){if(!(0<=cb(this.Fa,a)||this.j[a])){var d=Oh(this,a);this.T&&this.T(a,d)}this.V.subscribe(a,c);"onReady"==a&&this.C&&F(za(c,this.g),0)}}};
k.cb=function(a,b){if(!this.f){var c=Gh(this,b);c&&Lb(this.V,a,c)}};
function Gh(a,b){var c=b;if("string"==typeof b){if(a.ca[b])return a.ca[b];c=function(){var a=r(b);a&&a.apply(m,arguments)};
a.ca[b]=c}return c?c:null}
function Oh(a,b){var c="ytPlayer"+b+a.U;a.j[b]=c;m[c]=function(c){var d=F(function(){if(!a.f){a.V.X(b,c);var e=a.$,g=String(d);g in e&&delete e[g]}},0);
Ja(a.$,String(d))};
return c}
k.Ha=function(a){a=a?Ze:Ye;for(var b=a(document.activeElement);b&&(1!=b.nodeType||b==this.D||b==this.K||(b.focus(),b!=document.activeElement));)b=a(b)};
k.sa=function(a){Vb("a11y-announce",a)};
k.Va=function(a){Ih(this,a)};
k.Wa=function(a){Vb("WATCH_LATER_VIDEO_ADDED",a)};
k.Xa=function(a){Vb("WATCH_LATER_VIDEO_REMOVED",a)};
k.Ta=function(){if(!this.ga){if(Be){var a=document,b=a.scrollingElement?a.scrollingElement:ge||"CSS1Compat"!=a.compatMode?a.body||a.documentElement:a.documentElement,a=a.parentWindow||a.defaultView;this.ea=O&&P("10")&&a.pageYOffset!=b.scrollTop?new ce(b.scrollLeft,b.scrollTop):new ce(a.pageXOffset||b.scrollLeft,a.pageYOffset||b.scrollTop);Sg(this.M,window,"scroll",this.$a);Sg(this.M,this.l,"touchmove",this.Za)}else Sg(this.M,this.l,"mousewheel",this.wa),Sg(this.M,this.l,"wheel",this.wa);this.ga=!0}};
k.Ua=function(){Tg(this.M);this.ga=!1};
k.wa=function(a){a=a||window.event;a.returnValue=!1;a.preventDefault&&a.preventDefault()};
k.$a=function(){window.scrollTo(this.ea.b,this.ea.f)};
k.Za=function(a){a.preventDefault()};
k.Na=function(){return this.J||Lh(this)};
k.Ma=function(){return this.fa};
function Lh(a){return(a=Jh(a))?"div"==a.tagName.toLowerCase()?"html5":"flash":null}
function Mh(a){mh("dcp");a.cancel();Bh(a);a.J=null;a.b&&(a.b.loaded=!1);var b=Jh(a);"html5"==Lh(a)?a.P=b:b&&b.destroy&&b.destroy();for(var b=a.l,c;c=b.firstChild;)b.removeChild(c);Tg(a.Z);a.D=null;a.K=null}
k.cancel=function(){this.R&&dc(this.b.assets.js,this.R);window.clearTimeout(this.ra);this.Y=!1};
k.o=function(){Mh(this);if(this.P&&this.b)try{this.P.destroy()}catch(b){E(b)}this.ca=null;for(var a in this.j)m[this.j[a]]=null;this.ha=this.b=this.g=null;delete this.l;delete this.w;Ah.B.o.call(this)};var Ph={},Qh="player_uid_"+(1E9*Math.random()>>>0);function Rh(a,b){a=t(a)?Xe(a):a;b=jg(b);var c=Qh+"_"+ua(a),d=Ph[c];if(d)return d.qa(b),d.g;d=new Ah(a,c);Ph[c]=d;Vb("player-added",d.g);Xa(d,za(Sh,d));F(function(){d.qa(b)},0);
return d.g}
function Sh(a){Ph[a.U]=null}
function Th(a){a=Xe(a);if(!a)return null;var b=Qh+"_"+ua(a),c=Ph[b];c||(c=new Ah(a,b),Ph[b]=c);return c.g}
;var Uh=r("yt.abuse.botguardInitialized")||hc;q("yt.abuse.botguardInitialized",Uh,void 0);var Vh=r("yt.abuse.invokeBotguard")||ic;q("yt.abuse.invokeBotguard",Vh,void 0);var Wh=r("yt.abuse.dclkstatus.checkDclkStatus")||mc;q("yt.abuse.dclkstatus.checkDclkStatus",Wh,void 0);var Xh=r("yt.player.exports.navigate")||eg;q("yt.player.exports.navigate",Xh,void 0);var Yh=r("yt.player.embed")||Rh;q("yt.player.embed",Yh,void 0);var Zh=r("yt.player.getPlayerByElement")||Th;q("yt.player.getPlayerByElement",Zh,void 0);
var $h=r("yt.util.activity.init")||Nf;q("yt.util.activity.init",$h,void 0);var ai=r("yt.util.activity.getTimeSinceActive")||Pf;q("yt.util.activity.getTimeSinceActive",ai,void 0);var bi=r("yt.util.activity.setTimestamp")||Of;q("yt.util.activity.setTimestamp",bi,void 0);function ci(a){return(0==a.search("cue")||0==a.search("load"))&&"loadModule"!=a}
function di(a,b,c){t(a)&&(a={mediaContentUrl:a,startSeconds:b,suggestedQuality:c});b=/\/([ve]|embed)\/([^#?]+)/.exec(a.mediaContentUrl);a.videoId=b&&b[2]?b[2]:null;return ei(a)}
function ei(a,b,c){if(ta(a)){b="endSeconds startSeconds mediaContentUrl suggestedQuality videoId two_stage_token".split(" ");c={};for(var d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}return{videoId:a,startSeconds:b,suggestedQuality:c}}
function fi(a,b,c,d){if(ta(a)&&!qa(a)){b="playlist list listType index startSeconds suggestedQuality".split(" ");c={};for(d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}c={index:b,startSeconds:c,suggestedQuality:d};t(a)&&16==a.length?c.list="PL"+a:c.playlist=a;return c}
function gi(a){var b=a.video_id||a.videoId;if(t(b)){var c=qf()||{},d=qf()||{};p(void 0)?d[b]=void 0:delete d[b];var e=v()+3E5,f=sf;if(f&&window.JSON){t(d)||(d=JSON.stringify(d,void 0));try{f.set("yt-player-two-stage-token",d,e)}catch(g){f.remove("yt-player-two-stage-token")}}(b=c[b])&&(a.two_stage_token=b)}}
;function hi(a){R.call(this,1,arguments);this.b=a}
w(hi,R);function V(a){R.call(this,1,arguments);this.b=a}
w(V,R);function ii(a,b,c){R.call(this,3,arguments);this.g=a;this.f=b;this.b=null!=c?!!c:null}
w(ii,R);function ji(a,b,c,d,e){R.call(this,2,arguments);this.f=a;this.b=b;this.i=c||null;this.g=d||null;this.source=e||null}
w(ji,R);function ki(a,b,c){R.call(this,1,arguments);this.b=a;this.subscriptionId=b}
w(ki,R);function li(a,b,c,d,e,f,g){R.call(this,1,arguments);this.f=a;this.subscriptionId=b;this.b=c;this.i=e||null;this.g=f||null;this.source=g||null}
w(li,R);
var mi=new S("subscription-batch-subscribe",hi),ni=new S("subscription-batch-unsubscribe",hi),oi=new S("subscription-subscribe",ji),pi=new S("subscription-subscribe-loading",V),qi=new S("subscription-subscribe-loaded",V),ri=new S("subscription-subscribe-success",ki),si=new S("subscription-subscribe-external",ji),ti=new S("subscription-unsubscribe",li),ui=new S("subscription-unsubscirbe-loading",V),vi=new S("subscription-unsubscribe-loaded",V),wi=new S("subscription-unsubscribe-success",V),xi=new S("subscription-external-unsubscribe",
li),yi=new S("subscription-enable-ypc",V),zi=new S("subscription-prefs",ii),Ai=new S("subscription-prefs-success",ii),Bi=new S("subscription-prefs-failure",ii);function Ci(a){var b=kd("/signin?context=popup","next",document.location.protocol+"//"+document.domain+"/post_login"),b=kd(b,"feature","sub_button");if(b=window.open(b,"loginPopup","width=375,height=440,resizable=yes,scrollbars=yes",!0)){var c=Sb("LOGGED_IN",function(b){Ub(C("LOGGED_IN_PUBSUB_KEY",void 0));A("LOGGED_IN",!0);a(b)});
A("LOGGED_IN_PUBSUB_KEY",c);b.moveTo((screen.width-375)/2,(screen.height-440)/2)}}
q("yt.pubsub.publish",Vb,void 0);var W=null,Di=[];function Ei(a){return{externalChannelId:a.externalChannelId,Sa:!!a.isChannelPaid,source:a.source,subscriptionId:a.subscriptionId}}
function Fi(a){a&&a.externalChannelId&&Gi(Ei(a))}
function Gi(a){var b=C("PLAYER_CONFIG");b&&b.args&&void 0!==b.args.authuser||C("SESSION_INDEX")||C("LOGGED_IN")?(T(oi,new ji(a.externalChannelId,a.Sa?{itemType:"U",itemId:a.externalChannelId}:null)),a=wd({event:"subscribe",source:a.source}),wg("/gen_204?"+a,void 0)):Hi(a)}
function Hi(a){Ci(function(b){b.subscription_ajax&&Gi(a)})}
function Ii(a){a=Ei(a);T(ti,new li(a.externalChannelId,a.subscriptionId,null));a=wd({event:"unsubscribe",source:a.source});wg("/gen_204?"+a,void 0)}
function Ji(a){W&&W.channelSubscribed(a.b,a.subscriptionId)}
function Ki(a){W&&W.channelUnsubscribed(a.b)}
;function Li(a){x.call(this);this.g=a;this.g.subscribe("command",this.za,this);this.i={};this.j=!1}
w(Li,x);k=Li.prototype;k.start=function(){this.j||this.f||(this.j=!0,Mi(this.g,"RECEIVING"))};
k.za=function(a,b){if(this.j&&!this.f){var c=b||{};switch(a){case "addEventListener":if(t(c.event)&&(c=c.event,!(c in this.i))){var d=u(this.fb,this,c);this.i[c]=d;this.addEventListener(c,d)}break;case "removeEventListener":t(c.event)&&Ni(this,c.event);break;default:this.b.isReady()&&this.b[a]&&(c=Oi(a,b||{}),c=this.b[a].apply(this.b,c),(c=Pi(a,c))&&this.j&&!this.f&&Mi(this.g,a,c))}}};
k.fb=function(a,b){this.j&&!this.f&&Mi(this.g,a,this.ja(a,b))};
k.ja=function(a,b){if(null!=b)return{value:b}};
function Ni(a,b){b in a.i&&(a.removeEventListener(b,a.i[b]),delete a.i[b])}
k.o=function(){var a=this.g;a.f||Lb(a.b,"command",this.za,this);this.g=null;for(var b in this.i)Ni(this,b);Li.B.o.call(this)};function Qi(a,b,c){ng.call(this);this.g=a;this.i=b;this.l=c}
w(Qi,ng);function Mi(a,b,c){if(!a.f){var d=a.g;d.f||a.i!=d.b||(a={id:a.l,command:b},c&&(a.data=c),d.b.postMessage(Ac(a),d.i))}}
Qi.prototype.o=function(){this.i=this.g=null;Qi.B.o.call(this)};new G;function Ri(){var a=!!C("WIDGET_ID_ENFORCE"),a=this.f=new Vg(a),b=u(this.bb,this);a.l=b;a.w=null;this.f.channel="widget";if(a=C("WIDGET_ID"))this.f.b=a;this.i=[];this.l=!1;this.j={}}
k=Ri.prototype;k.bb=function(a,b){if("addEventListener"==a&&b){var c=b[0];this.j[c]||"onReady"==c||(this.addEventListener(c,Si(this,c)),this.j[c]=!0)}else this.Da(a,b)};
k.Da=function(){};
function Si(a,b){return u(function(a){this.sendMessage(b,a)},a)}
k.addEventListener=function(){};
k.Ka=function(){this.l=!0;this.sendMessage("initialDelivery",this.ka());this.sendMessage("onReady");D(this.i,this.Ba,this);this.i=[]};
k.ka=function(){return null};
function Ti(a,b){a.sendMessage("infoDelivery",b)}
k.Ba=function(a){this.l?this.f.sendMessage(a):this.i.push(a)};
k.sendMessage=function(a,b){this.Ba({event:a,info:void 0==b?null:b})};
k.dispose=function(){this.f=null};function Ui(a,b,c){x.call(this);this.b=a;this.i=c;this.j=xf(window,"message",u(this.l,this));this.g=new Qi(this,a,b);Xa(this,za(Ya,this.g))}
w(Ui,x);Ui.prototype.l=function(a){var b;if(b=!this.f)if(b=a.origin==this.i)a:{b=this.b;do{var c;b:{c=a.source;do{if(c==b){c=!0;break b}if(c==c.parent)break;c=c.parent}while(null!=c);c=!1}if(c){b=!0;break a}b=b.opener}while(null!=b);b=!1}if(b&&(a=a.data,t(a))){try{a=yc(a)}catch(d){return}a.command&&(b=this.g,b.f||b.j("command",a.command,a.data))}};
Ui.prototype.o=function(){yf(this.j);this.b=null;Ui.B.o.call(this)};function Vi(a,b){Li.call(this,b);this.b=a;this.start()}
w(Vi,Li);Vi.prototype.addEventListener=function(a,b){this.b.addEventListener(a,b)};
Vi.prototype.removeEventListener=function(a,b){this.b.removeEventListener(a,b)};
function Oi(a,b){switch(a){case "loadVideoById":return b=ei(b),gi(b),[b];case "cueVideoById":return b=ei(b),gi(b),[b];case "loadVideoByPlayerVars":return gi(b),[b];case "cueVideoByPlayerVars":return gi(b),[b];case "loadPlaylist":return b=fi(b),gi(b),[b];case "cuePlaylist":return b=fi(b),gi(b),[b];case "seekTo":return[b.seconds,b.allowSeekAhead];case "playVideoAt":return[b.index];case "setVolume":return[b.volume];case "setPlaybackQuality":return[b.suggestedQuality];case "setPlaybackRate":return[b.suggestedRate];
case "setLoop":return[b.loopPlaylists];case "setShuffle":return[b.shufflePlaylist];case "getOptions":return[b.module];case "getOption":return[b.module,b.option];case "setOption":return[b.module,b.option,b.value];case "handleGlobalKeyDown":return[b.keyCode,b.shiftKey]}return[]}
function Pi(a,b){switch(a){case "isMuted":return{muted:b};case "getVolume":return{volume:b};case "getPlaybackRate":return{playbackRate:b};case "getAvailablePlaybackRates":return{availablePlaybackRates:b};case "getVideoLoadedFraction":return{videoLoadedFraction:b};case "getPlayerState":return{playerState:b};case "getCurrentTime":return{currentTime:b};case "getPlaybackQuality":return{playbackQuality:b};case "getAvailableQualityLevels":return{availableQualityLevels:b};case "getDuration":return{duration:b};
case "getVideoUrl":return{videoUrl:b};case "getVideoEmbedCode":return{videoEmbedCode:b};case "getPlaylist":return{playlist:b};case "getPlaylistIndex":return{playlistIndex:b};case "getOptions":return{options:b};case "getOption":return{option:b}}}
Vi.prototype.ja=function(a,b){switch(a){case "onReady":return;case "onStateChange":return{playerState:b};case "onPlaybackQualityChange":return{playbackQuality:b};case "onPlaybackRateChange":return{playbackRate:b};case "onError":return{errorCode:b}}return Vi.B.ja.call(this,a,b)};
Vi.prototype.o=function(){Vi.B.o.call(this);delete this.b};function Wi(a){Ri.call(this);this.b=a;this.g=[];this.addEventListener("onReady",u(this.Ya,this));this.addEventListener("onVideoProgress",u(this.jb,this));this.addEventListener("onVolumeChange",u(this.kb,this));this.addEventListener("onApiChange",u(this.eb,this));this.addEventListener("onPlaybackQualityChange",u(this.gb,this));this.addEventListener("onPlaybackRateChange",u(this.hb,this));this.addEventListener("onStateChange",u(this.ib,this))}
w(Wi,Ri);k=Wi.prototype;k.Da=function(a,b){if(this.b[a]){b=b||[];if(0<b.length&&ci(a)){var c;c=b;if(ta(c[0])&&!qa(c[0]))c=c[0];else{var d={};switch(a){case "loadVideoById":case "cueVideoById":d=ei.apply(window,c);break;case "loadVideoByUrl":case "cueVideoByUrl":d=di.apply(window,c);break;case "loadPlaylist":case "cuePlaylist":d=fi.apply(window,c)}c=d}gi(c);b.length=1;b[0]=c}this.b[a].apply(this.b,b);ci(a)&&Ti(this,this.ka())}};
k.Ya=function(){var a=u(this.Ka,this);this.f.g=a};
k.addEventListener=function(a,b){this.g.push({eventType:a,listener:b});this.b.addEventListener(a,b)};
k.ka=function(){if(!this.b)return null;var a=this.b.getApiInterface();fb(a,"getVideoData");for(var b={apiInterface:a},c=0,d=a.length;c<d;c++){var e=a[c],f=e;if(0==f.search("get")||0==f.search("is")){var f=e,g=0;0==f.search("get")?g=3:0==f.search("is")&&(g=2);f=f.charAt(g).toLowerCase()+f.substr(g+1);try{var h=this.b[e]();b[f]=h}catch(l){}}}b.videoData=this.b.getVideoData();b.currentTimeLastUpdated_=v()/1E3;return b};
k.ib=function(a){a={playerState:a,currentTime:this.b.getCurrentTime(),duration:this.b.getDuration(),videoData:this.b.getVideoData(),videoStartBytes:0,videoBytesTotal:this.b.getVideoBytesTotal(),videoLoadedFraction:this.b.getVideoLoadedFraction(),playbackQuality:this.b.getPlaybackQuality(),availableQualityLevels:this.b.getAvailableQualityLevels(),videoUrl:this.b.getVideoUrl(),playlist:this.b.getPlaylist(),playlistIndex:this.b.getPlaylistIndex(),currentTimeLastUpdated_:v()/1E3,playbackRate:this.b.getPlaybackRate(),
mediaReferenceTime:this.b.getMediaReferenceTime()};this.b.getProgressState&&(a.progressState=this.b.getProgressState());this.b.getStoryboardFormat&&(a.storyboardFormat=this.b.getStoryboardFormat());Ti(this,a)};
k.gb=function(a){Ti(this,{playbackQuality:a})};
k.hb=function(a){Ti(this,{playbackRate:a})};
k.eb=function(){for(var a=this.b.getOptions(),b={namespaces:a},c=0,d=a.length;c<d;c++){var e=a[c],f=this.b.getOptions(e);b[e]={options:f};for(var g=0,h=f.length;g<h;g++){var l=f[g],n=this.b.getOption(e,l);b[e][l]=n}}this.sendMessage("apiInfoDelivery",b)};
k.kb=function(){Ti(this,{muted:this.b.isMuted(),volume:this.b.getVolume()})};
k.jb=function(a){a={currentTime:a,videoBytesLoaded:this.b.getVideoBytesLoaded(),videoLoadedFraction:this.b.getVideoLoadedFraction(),currentTimeLastUpdated_:v()/1E3,playbackRate:this.b.getPlaybackRate(),mediaReferenceTime:this.b.getMediaReferenceTime()};this.b.getProgressState&&(a.progressState=this.b.getProgressState());Ti(this,a)};
k.dispose=function(){Wi.B.dispose.call(this);for(var a=0;a<this.g.length;a++){var b=this.g[a];this.b.removeEventListener(b.eventType,b.listener)}this.g=[]};var Xi=document,X=window;function Yi(){var a=Zi;try{var b;if(b=!!a&&null!=a.location.href)a:{try{Lc(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(c){return!1}}
function $i(a,b,c){for(var d in a)Object.prototype.hasOwnProperty.call(a,d)&&b.call(c,a[d],d,a)}
;var aj=!1,bj="";function cj(a){a=a.match(/[\d]+/g);if(!a)return"";a.length=3;return a.join(".")}
(function(){if(navigator.plugins&&navigator.plugins.length){var a=navigator.plugins["Shockwave Flash"];if(a&&(aj=!0,a.description)){bj=cj(a.description);return}if(navigator.plugins["Shockwave Flash 2.0"]){aj=!0;bj="2.0.0.11";return}}if(navigator.mimeTypes&&navigator.mimeTypes.length&&(a=navigator.mimeTypes["application/x-shockwave-flash"],aj=!(!a||!a.enabledPlugin))){bj=cj(a.enabledPlugin.description);return}try{var b=new ActiveXObject("ShockwaveFlash.ShockwaveFlash.7");aj=!0;bj=cj(b.GetVariable("$version"));
return}catch(c){}try{b=new ActiveXObject("ShockwaveFlash.ShockwaveFlash.6");aj=!0;bj="6.0.21";return}catch(c){}try{b=new ActiveXObject("ShockwaveFlash.ShockwaveFlash"),aj=!0,bj=cj(b.GetVariable("$version"))}catch(c){}})();
var dj=aj,ej=bj;(function(){var a;return ie?(a=/Windows NT ([0-9.]+)/,(a=a.exec(y))?a[1]:"0"):he?(a=/10[_.][0-9_.]+/,(a=a.exec(y))?a[0].replace(/_/g,"."):"10"):je?(a=/Android\s+([^\);]+)(\)|;)/,(a=a.exec(y))?a[1]:""):ke||le||me?(a=/(?:iPhone|CPU)\s+OS\s+(\S+)/,(a=a.exec(y))?a[1].replace(/_/g,"."):""):""})();function fj(a){return(a=a.exec(y))?a[1]:""}
(function(){if(xe)return fj(/Firefox\/([0-9.]+)/);if(O||ee||de)return se;if(Be)return fj(/Chrome\/([0-9.]+)/);if(Ce&&!(ad()||z("iPad")||z("iPod")))return fj(/Version\/([0-9.]+)/);if(ye||ze){var a=/Version\/(\S+).*Mobile\/(\S+)/.exec(y);if(a)return a[1]+"."+a[2]}else if(Ae)return(a=fj(/Android\s+([0-9.]+)/))?a:fj(/Version\/([0-9.]+)/);return""})();var gj=function(){var a=!1;try{var b=Object.defineProperty({},"passive",{get:function(){a=!0}});
m.addEventListener("test",null,b)}catch(c){}return a}();var hj=!!window.google_async_iframe_id,Zi=hj&&window.parent||window;function ij(a,b,c){var d=jj();this.label=a;this.type=b;this.eventId=c;this.value=d;this.duration=0}
;function kj(a,b){this.events=[];this.j={};this.b={};this.g=b||m;b&&(b.google_js_reporting_queue=b.google_js_reporting_queue||[],this.events=b.google_js_reporting_queue);this.f=null!=this.g.google_measure_js_timing?this.g.google_measure_js_timing:Math.random()<a}
function jj(){var a=m.performance;return a&&a.now?a.now():v()}
function lj(a){return"goog_"+a.label+"_"+a.type+"_"+a.eventId}
function mj(a,b){var c=a.g;c.performance&&c.performance.mark&&c.performance.mark(b)}
function nj(){var a=oj;D(a.events,a.i,a);$i(a.b,function(a){D(a,this.i,this)},a);
a.b={};a.events.length=0;a.f=!1}
kj.prototype.i=function(a){a=lj(a);var b=this.g.performance;b&&b.clearMarks&&(b.clearMarks(a+"_start"),b.clearMarks(a+"_end"))};
kj.prototype.start=function(a,b){if(!this.f)return null;var c=(this.j[a]||0)+1;this.j[a]=c;var c=new ij(a,b,c),d=a+"_"+b;this.b[d]?this.b[d].push(c):this.b[d]=[c];mj(this,lj(c)+"_start");return c};
kj.prototype.end=function(a,b){if(this.f){var c=a+"_"+b,d=this.b[c];d&&d.length&&(c=this.b[c].pop(),c.duration=jj()-c.value,mj(this,lj(c)+"_end"),this.events.push(c))}};var pj;if(hj&&!Yi()){var qj="."+Xi.domain;try{for(;2<qj.split(".").length&&!Yi();)Xi.domain=qj=qj.substr(qj.indexOf(".")+1),Zi=window.parent}catch(a){}Yi()||(Zi=window)}pj=Zi;var oj=new kj(1,pj);if("complete"==pj.document.readyState)pj.google_measure_js_timing||nj();else if(oj.f){var rj=function(){pj.google_measure_js_timing||nj()};
pj.addEventListener?pj.addEventListener("load",rj,gj?void 0:!1):pj.attachEvent&&pj.attachEvent("onload",rj)};var sj=(new Date).getTime();function tj(a){Da.call(this,a.message||a.description||a.name);this.b=a instanceof Me}
w(tj,Da);tj.prototype.name="BiscottiError";function uj(a,b){this.f=a;this.b=b}
uj.prototype.then=function(a,b,c){try{if(p(this.f))return a?Je(a.call(c,this.f)):Je(this.f);if(p(this.b)){if(!b)return Ke(this.b);var d=b.call(c,this.b);return!p(d)&&this.b.b?Ke(this.b):Je(d)}throw Error("Invalid Result_ state");}catch(e){return Ke(e)}};
Kc(uj);var zg={format:"RAW",method:"GET",timeout:5E3,withCredentials:!0},vj=null;function wj(a){a=a.responseText;if(0!=a.lastIndexOf(")]}'",0))return xj(""),vj=new uj(""),"";a=JSON.parse(a.substr(4)).id;xj(a);vj=new uj(a);yj(18E5,2);return a}
function zj(a,b){var c=new tj(b);xj("");vj=new uj(void 0,c);0<a&&yj(12E4,a-1);throw c;}
function yj(a,b){F(function(){var a=u(zj,m,b),a=yg().then(wj,a);Le(a,null,la,void 0)},a)}
function xj(a){q("yt.www.ads.biscotti.lastId_",a,void 0)}
;function Aj(){}
function Bj(){try{var a;try{var b=r("yt.www.ads.biscotti.getId_"),c;if(b)c=b();else{if(!vj){var d=u(zj,m,2);vj=yg().then(wj,d)}c=vj}a=c}catch(e){a=Ke(e)}a.then(Cj,Aj);F(Bj,18E5)}catch(e){E(e)}}
function Cj(a){var b;a:{try{b=window.top.location.href}catch(Z){b=2;break a}b=null!=b?b==window.document.location.href?0:1:2}b={dt:sj,flash:ej||"0",frm:b};b.u_tz=-(new Date).getTimezoneOffset();var c;try{c=X.history.length}catch(Z){c=0}b.u_his=c;b.u_java=!!X.navigator&&"unknown"!==typeof X.navigator.javaEnabled&&!!X.navigator.javaEnabled&&X.navigator.javaEnabled();X.screen&&(b.u_h=X.screen.height,b.u_w=X.screen.width,b.u_ah=X.screen.availHeight,b.u_aw=X.screen.availWidth,b.u_cd=X.screen.colorDepth);
X.navigator&&X.navigator.plugins&&(b.u_nplug=X.navigator.plugins.length);X.navigator&&X.navigator.mimeTypes&&(b.u_nmime=X.navigator.mimeTypes.length);b.bid=a;b.ca_type=dj?"flash":"image";if(M("enable_server_side_search_pyv")||M("enable_server_side_mweb_search_pyv")){var d;a=window;try{d=a.screenX;var e=a.screenY}catch(Z){}try{var f=a.outerWidth,g=a.outerHeight}catch(Z){}try{var h=a.innerWidth,l=a.innerHeight}catch(Z){}d=[a.screenLeft,a.screenTop,d,e,a.screen?a.screen.availWidth:void 0,a.screen?a.screen.availTop:
void 0,f,g,h,l];var n;e=window.top||X;try{var B;if(e.document&&!e.document.body)B=new Gc(-1,-1);else{var J=(e||window).document,ga="CSS1Compat"==J.compatMode?J.documentElement:J.body;B=(new Gc(ga.clientWidth,ga.clientHeight)).round()}n=B}catch(Z){n=new Gc(-12245933,-12245933)}B=0;window.SVGElement&&document.createElementNS&&(B|=1);Aa(b,{bc:B,bih:n.height,biw:n.width,brdim:d.join(),vis:{visible:1,hidden:2,prerender:3,preview:4}[Xi.webkitVisibilityState||Xi.mozVisibilityState||Xi.visibilityState||""]||
0,wgl:!!X.WebGLRenderingContext})}Cf("//www.youtube.com/ad_data_204",{Oa:!1,A:b})}
;function Dj(){this.b=C("ALT_PREF_COOKIE_NAME","PREF");var a=Jc.get(""+this.b,void 0);if(a)for(var a=unescape(a).split("&"),b=0;b<a.length;b++){var c=a[b].split("="),d=c[0];(c=c[1])&&(Y[d]=c.toString())}}
ma(Dj);var Y=r("yt.prefs.UserPrefs.prefs_")||{};q("yt.prefs.UserPrefs.prefs_",Y,void 0);function Ej(a){if(/^f([1-9][0-9]*)$/.test(a))throw Error("ExpectedRegexMatch: "+a);}
function Fj(a){if(!/^\w+$/.test(a))throw Error("ExpectedRegexMismatch: "+a);}
function Gj(a){a=void 0!==Y[a]?Y[a].toString():null;return null!=a&&/^[A-Fa-f0-9]+$/.test(a)?parseInt(a,16):null}
Dj.prototype.get=function(a,b){Fj(a);Ej(a);var c=void 0!==Y[a]?Y[a].toString():null;return null!=c?c:b?b:""};
Dj.prototype.set=function(a,b){Fj(a);Ej(a);if(null==b)throw Error("ExpectedNotNull");Y[a]=b.toString()};
Dj.prototype.remove=function(a){Fj(a);Ej(a);delete Y[a]};
Dj.prototype.clear=function(){Y={}};function Hj(a){for(var b=0;b<a.length;b++){var c=a[b];"send_follow_on_ping_action"==c.name&&c.data&&c.data.follow_on_url&&wg(c.data.follow_on_url)}}
;function Ij(a){R.call(this,1,arguments);this.ia=a}
w(Ij,R);function Jj(a,b){R.call(this,2,arguments);this.f=a;this.b=b}
w(Jj,R);function Kj(a,b,c,d){R.call(this,1,arguments);this.b=b;this.f=c||null;this.itemId=d||null}
w(Kj,R);function Lj(a,b){R.call(this,1,arguments);this.f=a;this.b=b||null}
w(Lj,R);function Mj(a){R.call(this,1,arguments)}
w(Mj,R);var Nj=new S("ypc-core-load",Ij),Oj=new S("ypc-guide-sync-success",Jj),Pj=new S("ypc-purchase-success",Kj),Qj=new S("ypc-subscription-cancel",Mj),Rj=new S("ypc-subscription-cancel-success",Lj),Sj=new S("ypc-init-subscription",Mj);var Tj=!1,Uj=[],Vj=[];function Wj(a){a.b?Tj?T(si,a):T(Nj,new Ij(function(){T(Sj,new Mj(a.b))})):Xj(a.f,a.i,a.g,a.source)}
function Yj(a){a.b?Tj?T(xi,a):T(Nj,new Ij(function(){T(Qj,new Mj(a.b))})):Zj(a.f,a.subscriptionId,a.i,a.g,a.source)}
function ak(a){bk(gb(a.b))}
function ck(a){dk(gb(a.b))}
function ek(a){fk(a.g,a.f,a.b)}
function gk(a){var b=a.itemId,c=a.b.subscriptionId;b&&c&&T(ri,new ki(b,c,a.b.channelInfo))}
function hk(a){var b=a.b;Ea(a.f,function(a,d){T(ri,new ki(d,a,b[d]))})}
function ik(a){T(wi,new V(a.f.itemId));a.b&&a.b.length&&(jk(a.b,wi),jk(a.b,yi))}
function Xj(a,b,c,d){var e=new V(a);T(pi,e);var f={};f.c=a;c&&(f.eurl=c);d&&(f.source=d);c={};(d=C("PLAYBACK_ID"))&&(c.plid=d);(d=C("EVENT_ID"))&&(c.ei=d);b&&kk(b,c);Df("/subscription_ajax?action_create_subscription_to_channel=1",{method:"POST",pa:f,A:c,F:function(b,c){var d=c.response;T(ri,new ki(a,d.id,d.channel_info));d.show_feed_privacy_dialog&&Vb("SHOW-FEED-PRIVACY-SUBSCRIBE-DIALOG",a);d.actions&&Hj(d.actions)},
oa:function(){T(qi,e)}})}
function Zj(a,b,c,d,e){var f=new V(a);T(ui,f);var g={};d&&(g.eurl=d);e&&(g.source=e);d={};d.c=a;d.s=b;(a=C("PLAYBACK_ID"))&&(d.plid=a);(a=C("EVENT_ID"))&&(d.ei=a);c&&kk(c,d);Df("/subscription_ajax?action_remove_subscriptions=1",{method:"POST",pa:g,A:d,F:function(a,b){var c=b.response;T(wi,f);c.actions&&Hj(c.actions)},
oa:function(){T(vi,f)}})}
function fk(a,b,c){if(a){var d={};d.channel_id=a;switch(b){case "receive-all-updates":d.receive_all_updates=!0;break;case "receive-no-updates":d.receive_no_updates=!0;d.receive_post_updates=!1;break;case "receive-highlight-updates":d.receive_all_updates=!1;d.receive_no_updates=!1;break;default:return}null===c||d.receive_no_updates||(d.receive_post_updates=c);var e=new ii(a,b,c);Df("/subscription_ajax?action_update_subscription_preferences=1",{method:"POST",A:d,onError:function(){T(Bi,e)},
F:function(){T(Ai,e)}})}}
function bk(a){if(a.length){var b=ib(a,0,40);T("subscription-batch-subscribe-loading");jk(b,pi);var c={};c.a=b.join(",");var d=function(){T("subscription-batch-subscribe-loaded");jk(b,qi)};
Df("/subscription_ajax?action_create_subscription_to_all=1",{method:"POST",A:c,F:function(c,f){d();var e=f.response,h=e.id;if(qa(h)&&h.length==b.length){var l=e.channel_info_map;D(h,function(a,c){var d=b[c];T(ri,new ki(d,a,l[d]))});
a.length?bk(a):T("subscription-batch-subscribe-finished")}},
onError:function(){d();T("subscription-batch-subscribe-failure")}})}}
function dk(a){if(a.length){var b=ib(a,0,40);T("subscription-batch-unsubscribe-loading");jk(b,ui);var c={};c.c=b.join(",");var d=function(){T("subscription-batch-unsubscribe-loaded");jk(b,vi)};
Df("/subscription_ajax?action_remove_subscriptions=1",{method:"POST",A:c,F:function(){d();jk(b,wi);a.length&&dk(a)},
onError:function(){d()}})}}
function jk(a,b){D(a,function(a){T(b,new V(a))})}
function kk(a,b){var c=ud(a);Aa(b,c)}
;var lk=null,mk=null,nk=null,ok={};function pk(a){Qf(a.payload_name,a.payload,M("enable_youtubei_innertube")?Mf:cf,void 0)}
function qk(a){var b=a.id;a=a.ve_type;var c=Sc++;a=new Rc(void 0,a,c,void 0);ok[b]=a;b=ag();c=$f();b&&c&&Rf(Vf(),b,c,a)}
function rk(a){var b=a.csn;a=a.root_ve_type;if(b&&a&&(A("client-screen-nonce",b),A("ROOT_VE_TYPE",a),a=$f()))for(var c in ok){var d=b,e=a,f=ok[c];Rf(Vf(),d,e,f)}}
function sk(a){ok[a.id]=new Rc(a.tracking_params)}
function tk(a){var b=ag();a=ok[a.id];if(b&&a){var c=Vf();Sf(c,{click:{csn:b,visualElement:Tc(a)}},void 0)}}
function uk(a){a=a.ids;var b=ag();if(b){for(var c=[],d=0;d<a.length;d++){var e=ok[a[d]];e&&c.push(e)}c.length&&Tf(Vf(),b,c)}}
function vk(){var a=lk;a&&a.startInteractionLogging&&a.startInteractionLogging()}
;q("yt.setConfig",A,void 0);q("yt.config.set",A,void 0);q("yt.setMsg",cg,void 0);q("yt.msgs.set",cg,void 0);q("yt.logging.errors.log",Jf,void 0);
q("writeEmbed",function(){var a=C("PLAYER_CONFIG",void 0);"1"!=a.privembed&&Bj();"gvn"==a.args.ps&&(document.body.style.backgroundColor="transparent");var b=document.referrer,c=C("POST_MESSAGE_ORIGIN");window!=window.top&&b&&b!=document.URL&&(a.args.loaderUrl=b);C("LIGHTWEIGHT_AUTOPLAY")&&(a.args.autoplay="1");a.args.autoplay&&gi(a.args);lk=a=Rh("player",a);a.addEventListener("onScreenChanged",rk);a.addEventListener("onLogClientVeCreated",qk);a.addEventListener("onLogServerVeCreated",sk);a.addEventListener("onLogToGel",
pk);a.addEventListener("onLogVeClicked",tk);a.addEventListener("onLogVesShown",uk);a.addEventListener("onReady",vk);b=C("POST_MESSAGE_ID","player");C("ENABLE_JS_API")?nk=new Wi(a):C("ENABLE_POST_API")&&t(b)&&t(c)&&(mk=new Ui(window.parent,b,c),nk=new Vi(a,mk.g));C("BG_P")&&(C("BG_I")||C("BG_IU"))&&gc();lc();W=a;W.addEventListener("SUBSCRIBE",Fi);W.addEventListener("UNSUBSCRIBE",Ii);Di.push(U(ri,Ji),U(wi,Ki))},void 0);
q("yt.www.watch.ads.restrictioncookie.spr",function(a){wg(a+"mac_204?action_fcts=1");return!0},void 0);
var wk=nb(function(){mh("ol");Tj=!0;Vj.push(U(oi,Wj),U(ti,Yj));Tj||Vj.push(U(si,Wj),U(xi,Yj),U(mi,ak),U(ni,ck),U(zi,ek),U(Pj,gk),U(Rj,ik),U(Oj,hk));var a=Dj.getInstance(),b=1<window.devicePixelRatio;if(!!((Gj("f"+(Math.floor(119/31)+1))||0)&67108864)!=b){var c="f"+(Math.floor(119/31)+1),d=Gj(c)||0,d=b?d|67108864:d&-67108865;0==d?delete Y[c]:Y[c]=d.toString(16).toString();var a=a.b,b=[],e;for(e in Y)b.push(e+"="+escape(Y[e]));Jc.set(""+a,b.join("&"),63072E3,"/","youtube.com")}}),xk=nb(function(){var a=
lk;
a&&a.sendAbandonmentPing&&a.sendAbandonmentPing();C("PL_ATT")&&(fc=null);for(var a=0,b=jc.length;a<b;a++){var c=jc[a];if(!isNaN(c)){var d=r("yt.scheduler.instance.cancelJob");d?d(c):window.clearTimeout(c)}}jc.length=0;a=ac("//static.doubleclick.net/instream/ad_status.js");if(b=document.getElementById(a))Xb(a),b.parentNode.removeChild(b);kc=!1;A("DCLKSTAT",0);Ub(Uj);Uj.length=0;fh(Vj);Vj.length=0;Tj=!1;W&&(W.removeEventListener("SUBSCRIBE",Gi),W.removeEventListener("UNSUBSCRIBE",Ii));W=null;fh(Di);
Di.length=0;Za(nk,mk);if(a=lk)a.removeEventListener("onScreenChanged",rk),a.removeEventListener("onLogClientVeCreated",qk),a.removeEventListener("onLogServerVeCreated",sk),a.removeEventListener("onLogToGel",pk),a.removeEventListener("onLogVeClicked",tk),a.removeEventListener("onLogVesShown",uk),a.removeEventListener("onReady",vk),a.destroy();ok={}});
window.addEventListener?(window.addEventListener("load",wk),window.addEventListener("unload",xk)):window.attachEvent&&(window.attachEvent("onload",wk),window.attachEvent("onunload",xk));}).call(this);
