(function(){var DEPS_GRAPH={'dcmenablermodule':[]};var f,h=this,l=function(a,b,c){a=a.split(".");c=c||h;a[0]in c||!c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c[d]?c=c[d]:c=c[d]={}:c[d]=b},aa=function(){},ba=function(a){var b=typeof a;if("object"==b)if(a){if(a instanceof Array)return"array";if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==c)return"object";if("[object Array]"==c||"number"==typeof a.length&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&
!a.propertyIsEnumerable("splice"))return"array";if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("call"))return"function"}else return"null";else if("function"==b&&"undefined"==typeof a.call)return"object";return b},n=function(a){return"string"==typeof a},p=function(a){return"function"==ba(a)},ca=function(a,b,c){return a.call.apply(a.bind,arguments)},da=function(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,
2);return function(){var c=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(c,d);return a.apply(b,c)}}return function(){return a.apply(b,arguments)}},q=function(a,b,c){q=Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?ca:da;return q.apply(null,arguments)},r=function(a,b){function c(){}c.prototype=b.prototype;a.ia=b.prototype;a.prototype=new c;a.ma=function(a,c,g){for(var k=Array(arguments.length-2),m=2;m<arguments.length;m++)k[m-2]=arguments[m];
return b.prototype[c].apply(a,k)}};var ea=String.prototype.trim?function(a){return a.trim()}:function(a){return a.replace(/^[\s\xa0]+|[\s\xa0]+$/g,"")},fa=function(a,b){return a<b?-1:a>b?1:0};var ga=Array.prototype.indexOf?function(a,b,c){return Array.prototype.indexOf.call(a,b,c)}:function(a,b,c){c=null==c?0:0>c?Math.max(0,a.length+c):c;if(n(a))return n(b)&&1==b.length?a.indexOf(b,c):-1;for(;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},ha=Array.prototype.some?function(a,b,c){return Array.prototype.some.call(a,b,c)}:function(a,b,c){for(var d=a.length,e=n(a)?a.split(""):a,g=0;g<d;g++)if(g in e&&b.call(c,e[g],g,a))return!0;return!1},ia=function(a){return Array.prototype.concat.apply(Array.prototype,
arguments)},ja=function(a){var b=a.length;if(0<b){for(var c=Array(b),d=0;d<b;d++)c[d]=a[d];return c}return[]};var ka=function(a){this.a=a};l("studio.common.mde.Direction",ka,void 0);ka.prototype.toString=function(){return(this.a&2?"b":"t")+(this.a&1?"r":"l")};l("studio.module.ModuleId",{ENABLER:"enabler",DCM_ENABLER:"dcmenabler",VIDEO:"video",CONFIGURABLE:"configurable",CONFIGURABLE_FILLER:"configurablefiller",LAYOUTS:"layouts",FILLER:"layoutsfiller",RAD_VIDEO:"rad_ui_video",GDN:"gdn"},void 0);var t=function(){};l("studio.common.Environment",t,void 0);t.Type={LIVE:1,LOCAL:2,BROWSER:4,IN_APP:8,LAYOUTS_PREVIEW:16,CREATIVE_TOOLSET:32,RENDERING_STUDIO:64,RENDERING_TEST:128};var v=6;t.addType=function(a){v|=a;la(a)};var ma=function(a){v=a|6;la(v)};t.setType=ma;t.hasType=function(a){return(v&a)==a};t.getValue=function(){return v};var la=function(a){w(a,2,1);w(a,1,2);w(a,4,8);w(a,8,4);w(a,128,64);w(a,64,128)},w=function(a,b,c){(a&b)==b&&(v|=b,v&=~c)};var na="StopIteration"in h?h.StopIteration:{message:"StopIteration",stack:""},oa=function(){};oa.prototype.next=function(){throw na;};oa.prototype.fa=function(){return this};var x=function(a,b){this.b={};this.a=[];this.f=this.c=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else if(a){var e;if(a instanceof x)e=a.m(),d=a.l();else{var c=[],g=0;for(e in a)c[g++]=e;e=c;c=[];g=0;for(d in a)c[g++]=a[d];d=c}for(c=0;c<e.length;c++)this.set(e[c],d[c])}};x.prototype.l=function(){y(this);for(var a=[],b=0;b<this.a.length;b++)a.push(this.b[this.a[b]]);return a};
x.prototype.m=function(){y(this);return this.a.concat()};var y=function(a){if(a.c!=a.a.length){for(var b=0,c=0;b<a.a.length;){var d=a.a[b];z(a.b,d)&&(a.a[c++]=d);b++}a.a.length=c}if(a.c!=a.a.length){for(var e={},c=b=0;b<a.a.length;)d=a.a[b],z(e,d)||(a.a[c++]=d,e[d]=1),b++;a.a.length=c}};f=x.prototype;f.get=function(a,b){return z(this.b,a)?this.b[a]:b};f.set=function(a,b){z(this.b,a)||(this.c++,this.a.push(a),this.f++);this.b[a]=b};
f.forEach=function(a,b){for(var c=this.m(),d=0;d<c.length;d++){var e=c[d],g=this.get(e);a.call(b,g,e,this)}};f.clone=function(){return new x(this)};f.fa=function(a){y(this);var b=0,c=this.f,d=this,e=new oa;e.next=function(){if(c!=d.f)throw Error("The map has changed since the iterator was created");if(b>=d.a.length)throw na;var e=d.a[b++];return a?e:d.b[e]};return e};var z=function(a,b){return Object.prototype.hasOwnProperty.call(a,b)};var pa=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^/?#]*)@)?([^/#?]*?)(?::([0-9]+))?(?=[/#?]|$))?([^?#]+)?(?:\?([^#]*))?(?:#(.*))?$/,qa=function(a,b){if(a)for(var c=a.split("&"),d=0;d<c.length;d++){var e=c[d].indexOf("="),g,k=null;0<=e?(g=c[d].substring(0,e),k=c[d].substring(e+1)):g=c[d];b(g,k?decodeURIComponent(k.replace(/\+/g," ")):"")}};var A=function(a,b){this.f=this.j=this.c="";this.i=null;this.g=this.h="";this.a=!1;var c;a instanceof A?(this.a=void 0!==b?b:a.a,ra(this,a.c),this.j=a.j,this.f=a.f,sa(this,a.i),this.h=a.h,ta(this,a.b.clone()),this.g=a.g):a&&(c=String(a).match(pa))?(this.a=!!b,ra(this,c[1]||"",!0),this.j=C(c[2]||""),this.f=C(c[3]||"",!0),sa(this,c[4]),this.h=C(c[5]||"",!0),ta(this,c[6]||"",!0),this.g=C(c[7]||"")):(this.a=!!b,this.b=new D(null,0,this.a))};
A.prototype.toString=function(){var a=[],b=this.c;b&&a.push(E(b,ua,!0),":");var c=this.f;if(c||"file"==b)a.push("//"),(b=this.j)&&a.push(E(b,ua,!0),"@"),a.push(encodeURIComponent(String(c)).replace(/%25([0-9a-fA-F]{2})/g,"%$1")),c=this.i,null!=c&&a.push(":",String(c));if(c=this.h)this.f&&"/"!=c.charAt(0)&&a.push("/"),a.push(E(c,"/"==c.charAt(0)?va:wa,!0));(c=this.b.toString())&&a.push("?",c);(c=this.g)&&a.push("#",E(c,xa));return a.join("")};A.prototype.clone=function(){return new A(this)};
var ra=function(a,b,c){a.c=c?C(b,!0):b;a.c&&(a.c=a.c.replace(/:$/,""))},sa=function(a,b){if(b){b=Number(b);if(isNaN(b)||0>b)throw Error("Bad port number "+b);a.i=b}else a.i=null},ta=function(a,b,c){b instanceof D?(a.b=b,ya(a.b,a.a)):(c||(b=E(b,za)),a.b=new D(b,0,a.a))},C=function(a,b){return a?b?decodeURI(a.replace(/%25/g,"%2525")):decodeURIComponent(a):""},E=function(a,b,c){return n(a)?(a=encodeURI(a).replace(b,Aa),c&&(a=a.replace(/%25([0-9a-fA-F]{2})/g,"%$1")),a):null},Aa=function(a){a=a.charCodeAt(0);
return"%"+(a>>4&15).toString(16)+(a&15).toString(16)},ua=/[#\/\?@]/g,wa=/[\#\?:]/g,va=/[\#\?]/g,za=/[\#\?@]/g,xa=/#/g,D=function(a,b,c){this.b=this.a=null;this.c=a||null;this.f=!!c},F=function(a){a.a||(a.a=new x,a.b=0,a.c&&qa(a.c,function(b,c){var d=decodeURIComponent(b.replace(/\+/g," "));F(a);a.c=null;var d=G(a,d),e=a.a.get(d);e||a.a.set(d,e=[]);e.push(c);a.b=a.b+1}))},Ba=function(a,b){F(a);b=G(a,b);if(z(a.a.b,b)){a.c=null;a.b=a.b-a.a.get(b).length;var c=a.a,d=b;z(c.b,d)&&(delete c.b[d],c.c--,c.f++,
c.a.length>2*c.c&&y(c))}},Ca=function(a,b){F(a);b=G(a,b);return z(a.a.b,b)};f=D.prototype;f.m=function(){F(this);for(var a=this.a.l(),b=this.a.m(),c=[],d=0;d<b.length;d++)for(var e=a[d],g=0;g<e.length;g++)c.push(b[d]);return c};f.l=function(a){F(this);var b=[];if(n(a))Ca(this,a)&&(b=ia(b,this.a.get(G(this,a))));else{a=this.a.l();for(var c=0;c<a.length;c++)b=ia(b,a[c])}return b};
f.set=function(a,b){F(this);this.c=null;a=G(this,a);Ca(this,a)&&(this.b=this.b-this.a.get(a).length);this.a.set(a,[b]);this.b=this.b+1;return this};f.get=function(a,b){var c=a?this.l(a):[];return 0<c.length?String(c[0]):b};f.toString=function(){if(this.c)return this.c;if(!this.a)return"";for(var a=[],b=this.a.m(),c=0;c<b.length;c++)for(var d=b[c],e=encodeURIComponent(String(d)),d=this.l(d),g=0;g<d.length;g++){var k=e;""!==d[g]&&(k+="="+encodeURIComponent(String(d[g])));a.push(k)}return this.c=a.join("&")};
f.clone=function(){var a=new D;a.c=this.c;this.a&&(a.a=this.a.clone(),a.b=this.b);return a};var G=function(a,b){var c=String(b);a.f&&(c=c.toLowerCase());return c},ya=function(a,b){b&&!a.f&&(F(a),a.c=null,a.a.forEach(function(a,b){var e=b.toLowerCase();b!=e&&(Ba(this,b),Ba(this,e),0<a.length&&(this.c=null,this.a.set(G(this,e),ja(a)),this.b=this.b+a.length))},a));a.f=b};var H;a:{var Da=h.navigator;if(Da){var Ea=Da.userAgent;if(Ea){H=Ea;break a}}H=""}var I=function(a){return-1!=H.indexOf(a)};var Fa=I("Opera"),J=I("Trident")||I("MSIE"),Ga=I("Edge"),K=I("Gecko")&&!(-1!=H.toLowerCase().indexOf("webkit")&&!I("Edge"))&&!(I("Trident")||I("MSIE"))&&!I("Edge"),Ha=-1!=H.toLowerCase().indexOf("webkit")&&!I("Edge"),Ia=function(){var a=h.document;return a?a.documentMode:void 0},Ja;
a:{var Ka="",La=function(){var a=H;if(K)return/rv\:([^\);]+)(\)|;)/.exec(a);if(Ga)return/Edge\/([\d\.]+)/.exec(a);if(J)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(Ha)return/WebKit\/(\S+)/.exec(a);if(Fa)return/(?:Version)[ \/]?(\S+)/.exec(a)}();La&&(Ka=La?La[1]:"");if(J){var Ma=Ia();if(null!=Ma&&Ma>parseFloat(Ka)){Ja=String(Ma);break a}}Ja=Ka}
var Na=Ja,Oa={},L=function(a){var b;if(!(b=Oa[a])){b=0;for(var c=ea(String(Na)).split("."),d=ea(String(a)).split("."),e=Math.max(c.length,d.length),g=0;0==b&&g<e;g++){var k=c[g]||"",m=d[g]||"",u=RegExp("(\\d*)(\\D*)","g"),B=RegExp("(\\d*)(\\D*)","g");do{var P=u.exec(k)||["","",""],Q=B.exec(m)||["","",""];if(0==P[0].length&&0==Q[0].length)break;b=fa(0==P[1].length?0:parseInt(P[1],10),0==Q[1].length?0:parseInt(Q[1],10))||fa(0==P[2].length,0==Q[2].length)||fa(P[2],Q[2])}while(0==b)}b=Oa[a]=0<=b}return b},
Pa=h.document,Qa=Pa&&J?Ia()||("CSS1Compat"==Pa.compatMode?parseInt(Na,10):5):void 0;var Ra=function(a){Ra[" "](a);return a};Ra[" "]=aa;var Sa=!J||9<=Number(Qa),Ta=J&&!L("9");!Ha||L("528");K&&L("1.9b")||J&&L("8")||Fa&&L("9.5")||Ha&&L("528");K&&!L("8")||J&&L("9");var Ua=function(){this.c=this.c;this.g=this.g};Ua.prototype.c=!1;var M=function(a,b){this.type=a;this.a=this.target=b};M.prototype.c=function(){};var N=function(a,b){M.call(this,a?a.type:"");this.b=this.a=this.target=null;if(a){this.type=a.type;this.target=a.target||a.srcElement;this.a=b;var c=a.relatedTarget;if(c&&K)try{Ra(c.nodeName)}catch(d){}this.b=a;a.defaultPrevented&&this.c()}};r(N,M);N.prototype.c=function(){N.ia.c.call(this);var a=this.b;if(a.preventDefault)a.preventDefault();else if(a.returnValue=!1,Ta)try{if(a.ctrlKey||112<=a.keyCode&&123>=a.keyCode)a.keyCode=-1}catch(b){}};var O="closure_listenable_"+(1E6*Math.random()|0),Va=0;var Wa=function(a,b,c,d,e){this.listener=a;this.a=null;this.src=b;this.type=c;this.u=!!d;this.b=e;++Va;this.o=this.s=!1},Xa=function(a){a.o=!0;a.listener=null;a.a=null;a.src=null;a.b=null};var Ya=function(a){this.src=a;this.a={};this.b=0},$a=function(a,b,c,d,e){var g=b.toString();b=a.a[g];b||(b=a.a[g]=[],a.b++);var k=Za(b,c,d,e);-1<k?(a=b[k],a.s=!1):(a=new Wa(c,a.src,g,!!d,e),a.s=!1,b.push(a));return a},ab=function(a,b){var c=b.type;if(c in a.a){var d=a.a[c],e=ga(d,b),g;(g=0<=e)&&Array.prototype.splice.call(d,e,1);g&&(Xa(b),0==a.a[c].length&&(delete a.a[c],a.b--))}},Za=function(a,b,c,d){for(var e=0;e<a.length;++e){var g=a[e];if(!g.o&&g.listener==b&&g.u==!!c&&g.b==d)return e}return-1};var bb="closure_lm_"+(1E6*Math.random()|0),cb={},db=0,R=function(a,b,c,d,e){if("array"==ba(b))for(var g=0;g<b.length;g++)R(a,b[g],c,d,e);else if(c=eb(c),a&&a[O])$a(a.a,String(b),c,d,e);else{if(!b)throw Error("Invalid event type");var g=!!d,k=S(a);k||(a[bb]=k=new Ya(a));c=$a(k,b,c,d,e);if(!c.a){d=fb();c.a=d;d.src=a;d.listener=c;if(a.addEventListener)a.addEventListener(b.toString(),d,g);else if(a.attachEvent)a.attachEvent(gb(b.toString()),d);else throw Error("addEventListener and attachEvent are unavailable.");
db++}}},fb=function(){var a=hb,b=Sa?function(c){return a.call(b.src,b.listener,c)}:function(c){c=a.call(b.src,b.listener,c);if(!c)return c};return b},ib=function(a,b,c,d,e){if("array"==ba(b))for(var g=0;g<b.length;g++)ib(a,b[g],c,d,e);else(c=eb(c),a&&a[O])?(a=a.a,b=String(b).toString(),b in a.a&&(g=a.a[b],c=Za(g,c,d,e),-1<c&&(Xa(g[c]),Array.prototype.splice.call(g,c,1),0==g.length&&(delete a.a[b],a.b--)))):a&&(a=S(a))&&(b=a.a[b.toString()],a=-1,b&&(a=Za(b,c,!!d,e)),(c=-1<a?b[a]:null)&&jb(c))},jb=
function(a){if("number"!=typeof a&&a&&!a.o){var b=a.src;if(b&&b[O])ab(b.a,a);else{var c=a.type,d=a.a;b.removeEventListener?b.removeEventListener(c,d,a.u):b.detachEvent&&b.detachEvent(gb(c),d);db--;(c=S(b))?(ab(c,a),0==c.b&&(c.src=null,b[bb]=null)):Xa(a)}}},gb=function(a){return a in cb?cb[a]:cb[a]="on"+a},lb=function(a,b,c,d){var e=!0;if(a=S(a))if(b=a.a[b.toString()])for(b=b.concat(),a=0;a<b.length;a++){var g=b[a];g&&g.u==c&&!g.o&&(g=kb(g,d),e=e&&!1!==g)}return e},kb=function(a,b){var c=a.listener,
d=a.b||a.src;a.s&&jb(a);return c.call(d,b)},hb=function(a,b){if(a.o)return!0;if(!Sa){var c;if(!(c=b))a:{c=["window","event"];for(var d=h,e;e=c.shift();)if(null!=d[e])d=d[e];else{c=null;break a}c=d}e=c;c=new N(e,this);d=!0;if(!(0>e.keyCode||void 0!=e.returnValue)){a:{var g=!1;if(0==e.keyCode)try{e.keyCode=-1;break a}catch(u){g=!0}if(g||void 0==e.returnValue)e.returnValue=!0}e=[];for(g=c.a;g;g=g.parentNode)e.push(g);for(var g=a.type,k=e.length-1;0<=k;k--){c.a=e[k];var m=lb(e[k],g,!0,c),d=d&&m}for(k=
0;k<e.length;k++)c.a=e[k],m=lb(e[k],g,!1,c),d=d&&m}return d}return kb(a,new N(b,this))},S=function(a){a=a[bb];return a instanceof Ya?a:null},mb="__closure_events_fn_"+(1E9*Math.random()>>>0),eb=function(a){if(p(a))return a;a[mb]||(a[mb]=function(b){return a.handleEvent(b)});return a[mb]};var T=function(){Ua.call(this);this.a=new Ya(this)};r(T,Ua);T.prototype[O]=!0;T.prototype.addEventListener=function(a,b,c,d){R(this,a,b,c,d)};T.prototype.removeEventListener=function(a,b,c,d){ib(this,a,b,c,d)};var nb={ka:"dcm",la:"studio",ja:"configurable"};l("studio.sdk.ContainerState",{COLLAPSING:"collapsing",COLLAPSED:"collapsed",EXPANDING:"expanding",EXPANDED:"expanded",FS_COLLAPSING:"fs_collapsing",FS_EXPANDING:"fs_expanding",FS_EXPANDED:"fs_expanded"},void 0);var ob=function(){};l("studio.sdk.IEnabler",ob,void 0);f=ob.prototype;f.aa=function(){};f.W=function(){};f.ca=function(){};f.ba=function(){};f.S=function(){};f.R=function(){};f.P=function(){};f.O=function(){};f.B=function(){};f.getParameter=function(){};f.v=function(){};f.F=function(){};f.D=function(){};f.da=function(){};f.ea=function(){};f.K=function(){};f.L=function(){};f.Y=function(){};f.H=function(){};f.X=function(){};f.G=function(){};f.close=function(){};f.N=function(){};f.T=function(){};
f.addEventListener=function(){};f.removeEventListener=function(){};f.V=function(){};f.U=function(){};f.$=function(){};f.J=function(){};f.Z=function(){};f.I=function(){};f.M=function(){};l("studio.sdk.logger",{}.na,void 0);!K&&!J||J&&9<=Number(Qa)||K&&L("1.9.1");J&&L("9");var pb=function(a,b,c){this.f=c;this.c=a;this.g=b;this.b=0;this.a=null};pb.prototype.get=function(){var a;0<this.b?(this.b--,a=this.a,this.a=a.next,a.next=null):a=this.c();return a};var qb=function(a,b){a.g(b);a.b<a.f&&(a.b++,b.next=a.a,a.a=b)};var rb=function(a){h.setTimeout(function(){throw a;},0)},sb,tb=function(){var a=h.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!I("Presto")&&(a=function(){var a=document.createElement("IFRAME");a.style.display="none";a.src="";document.documentElement.appendChild(a);var b=a.contentWindow,a=b.document;a.open();a.write("");a.close();var c="callImmediate"+Math.random(),d="file:"==b.location.protocol?"*":b.location.protocol+"//"+b.location.host,
a=q(function(a){if(("*"==d||a.origin==d)&&a.data==c)this.port1.onmessage()},this);b.addEventListener("message",a,!1);this.port1={};this.port2={postMessage:function(){b.postMessage(c,d)}}});if("undefined"!==typeof a&&!I("Trident")&&!I("MSIE")){var b=new a,c={},d=c;b.port1.onmessage=function(){if(void 0!==c.next){c=c.next;var a=c.C;c.C=null;a()}};return function(a){d.next={C:a};d=d.next;b.port2.postMessage(0)}}return"undefined"!==typeof document&&"onreadystatechange"in document.createElement("SCRIPT")?
function(a){var b=document.createElement("SCRIPT");b.onreadystatechange=function(){b.onreadystatechange=null;b.parentNode.removeChild(b);b=null;a();a=null};document.documentElement.appendChild(b)}:function(a){h.setTimeout(a,0)}};var vb=new pb(function(){return new ub},function(a){a.reset()},100),xb=function(){var a=wb,b=null;a.a&&(b=a.a,a.a=a.a.next,a.a||(a.b=null),b.next=null);return b},ub=function(){this.next=this.b=this.a=null};ub.prototype.set=function(a,b){this.a=a;this.b=b;this.next=null};ub.prototype.reset=function(){this.next=this.b=this.a=null};var Ab=function(a,b){U||yb();zb||(U(),zb=!0);var c=wb,d=vb.get();d.set(a,b);c.b?c.b.next=d:c.a=d;c.b=d},U,yb=function(){if(h.Promise&&h.Promise.resolve){var a=h.Promise.resolve(void 0);U=function(){a.then(Bb)}}else U=function(){var a=Bb;!p(h.setImmediate)||h.Window&&h.Window.prototype&&!I("Edge")&&h.Window.prototype.setImmediate==h.setImmediate?(sb||(sb=tb()),sb(a)):h.setImmediate(a)}},zb=!1,wb=new function(){this.b=this.a=null},Bb=function(){for(var a;a=xb();){try{a.a.call(a.b)}catch(b){rb(b)}qb(vb,
a)}zb=!1};var Cb=function(a){a.prototype.then=a.prototype.then;a.prototype.$goog_Thenable=!0},Db=function(a){if(!a)return!1;try{return!!a.$goog_Thenable}catch(b){return!1}};var W=function(a,b){this.a=0;this.i=void 0;this.c=this.b=this.f=null;this.g=this.h=!1;if(a!=aa)try{var c=this;a.call(b,function(a){V(c,2,a)},function(a){V(c,3,a)})}catch(d){V(this,3,d)}},Eb=function(){this.next=this.c=this.b=this.f=this.a=null;this.g=!1};Eb.prototype.reset=function(){this.c=this.b=this.f=this.a=null;this.g=!1};var Fb=new pb(function(){return new Eb},function(a){a.reset()},100),Gb=function(a,b,c){var d=Fb.get();d.f=a;d.b=b;d.c=c;return d};
W.prototype.then=function(a,b,c){return Hb(this,p(a)?a:null,p(b)?b:null,c)};Cb(W);var Jb=function(a,b){a.b||2!=a.a&&3!=a.a||Ib(a);a.c?a.c.next=b:a.b=b;a.c=b},Hb=function(a,b,c,d){var e=Gb(null,null,null);e.a=new W(function(a,k){e.f=b?function(c){try{var e=b.call(d,c);a(e)}catch(B){k(B)}}:a;e.b=c?function(b){try{var e=c.call(d,b);a(e)}catch(B){k(B)}}:k});e.a.f=a;Jb(a,e);return e.a};W.prototype.w=function(a){this.a=0;V(this,2,a)};W.prototype.A=function(a){this.a=0;V(this,3,a)};
var V=function(a,b,c){if(0==a.a){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.a=1;var d;a:{var e=c,g=a.w,k=a.A;if(e instanceof W)Jb(e,Gb(g||aa,k||null,a)),d=!0;else if(Db(e))e.then(g,k,a),d=!0;else{var m=typeof e;if("object"==m&&null!=e||"function"==m)try{var u=e.then;if(p(u)){Kb(e,u,g,k,a);d=!0;break a}}catch(B){k.call(a,B);d=!0;break a}d=!1}}d||(a.i=c,a.a=b,a.f=null,Ib(a),3!=b||Lb(a,c))}},Kb=function(a,b,c,d,e){var g=!1,k=function(a){g||(g=!0,c.call(e,a))},m=function(a){g||
(g=!0,d.call(e,a))};try{b.call(a,k,m)}catch(u){m(u)}},Ib=function(a){a.h||(a.h=!0,Ab(a.j,a))},Mb=function(a){var b=null;a.b&&(b=a.b,a.b=b.next,b.next=null);a.b||(a.c=null);return b};W.prototype.j=function(){for(var a;a=Mb(this);){var b=this.a,c=this.i;if(3==b&&a.b&&!a.g){var d;for(d=this;d&&d.g;d=d.f)d.g=!1}if(a.a)a.a.f=null,Nb(a,b,c);else try{a.g?a.f.call(a.c):Nb(a,b,c)}catch(e){Ob.call(null,e)}qb(Fb,a)}this.h=!1};
var Nb=function(a,b,c){2==b?a.f.call(a.c,c):a.b&&a.b.call(a.c,c)},Lb=function(a,b){a.g=!0;Ab(function(){a.g&&Ob.call(null,b)})},Ob=rb;/*
 Portions of this code are from MochiKit, received by
 The Closure Authors under the MIT license. All other code is Copyright
 2005-2009 The Closure Authors. All Rights Reserved.
*/
var Pb=function(a,b){this.c=[];this.ha=b||null;this.a=this.h=!1;this.b=void 0;this.w=this.g=!1;this.f=0;this.i=null;this.A=0};Pb.prototype.j=function(a,b){this.g=!1;this.h=!0;this.b=b;this.a=!a;Qb(this)};var Rb=function(a,b,c){a.c.push([b,c,void 0]);a.h&&Qb(a)};Pb.prototype.then=function(a,b,c){var d,e,g=new W(function(a,b){d=a;e=b});Rb(this,d,function(a){e(a)});return g.then(a,b,c)};Cb(Pb);
var Sb=function(a){return ha(a.c,function(a){return p(a[1])})},Qb=function(a){if(a.f&&a.h&&Sb(a)){var b=a.f,c=Tb[b];c&&(h.clearTimeout(c.a),delete Tb[b]);a.f=0}a.i&&(a.i.A--,delete a.i);for(var b=a.b,d=c=!1;a.c.length&&!a.g;){var e=a.c.shift(),g=e[0],k=e[1],e=e[2];if(g=a.a?k:g)try{var m=g.call(e||a.ha,b);void 0!==m&&(a.a=a.a&&(m==b||m instanceof Error),a.b=b=m);if(Db(b)||"function"===typeof h.Promise&&b instanceof h.Promise)d=!0,a.g=!0}catch(u){b=u,a.a=!0,Sb(a)||(c=!0)}}a.b=b;d&&(m=q(a.j,a,!0),d=
q(a.j,a,!1),b instanceof Pb?(Rb(b,m,d),b.w=!0):b.then(m,d));c&&(b=new Ub(b),Tb[b.a]=b,a.f=b.a)},Ub=function(a){this.a=h.setTimeout(q(this.c,this),0);this.b=a};Ub.prototype.c=function(){delete Tb[this.a];throw this.b;};var Tb={};var X=new x;X.set("enabler","enabler");X.set("dcmenabler","dcm");X.set("video","vid");X.set("configurable","cfg");X.set("configurablefiller","cfg_fill");X.set("layouts","lay");X.set("layoutsfiller","lay_fill");X.set("gdn","gdn");X.set("rad_ui_video","rad");l("goog.exportSymbol",function(a,b,c){l(a,b,c)},this);var Vb=function(a){a+="goog.exportSymbol('studioLoader.context.evalInContext', "+Vb.toString()+");";eval(a)};l("studioLoader.context.evalInContext",Vb,void 0);var Y=function(a){R(window,"message",Wb);if(a!=Xb)return!1;T.call(this);this.b=null;this.b||(this.b=new A((window.STUDIO_ORIGINAL_ASSET_URL?window.STUDIO_ORIGINAL_ASSET_URL:window.location.href).replace(/%(?![A-Fa-f0-9][A-Fa-f0-9])/g,"%25")));(a=this.f=this.b.b)&&(a=a.get("e",null))&&ma(parseInt(a,10)||0)},Yb;r(Y,T);l("studio.DcmEnabler",Y,void 0);var Xb=Math.random(),Zb=null,$b={},ac=function(){Zb||(Zb=new Y(Xb));return Zb};Y.getInstance=ac;
var Wb=function(a){if(n(a.b.data)){try{var b=JSON.parse(a.b.data)}catch(e){return}if(b.isInitClickTag){if(a=b.clickTags)for(var c=0;c<a.length;c++){var d=a[c];$b[d.name]=d.url}Yb=b.relegateNavigation}}};Y.prototype.W=function(){};Y.prototype.reportManualClose=Y.prototype.W;Y.prototype.aa=function(){};Y.prototype.setExpandingPixelOffsets=Y.prototype.aa;Y.prototype.ca=function(){};Y.prototype.setStartExpanded=Y.prototype.ca;Y.prototype.ba=function(){};Y.prototype.setIsMultiDirectional=Y.prototype.ba;
Y.prototype.S=function(){return!0};Y.prototype.isVisible=Y.prototype.S;Y.prototype.R=function(){return!0};Y.prototype.isServingInLiveEnvironment=Y.prototype.R;Y.prototype.P=function(){return!0};Y.prototype.isPageLoaded=Y.prototype.P;Y.prototype.O=function(){return!0};Y.prototype.isInitialized=Y.prototype.O;Y.prototype.B=function(){};Y.prototype.callAfterInitialized=Y.prototype.B;Y.prototype.getParameter=function(a){return this.f.get(a,null)};Y.prototype.getParameter=Y.prototype.getParameter;
Y.prototype.v=function(a,b){var c=null!=$b[a]&&"null"!=$b[a]?$b[a]:b;"parent"===Yb?window.parent.postMessage(JSON.stringify({clickTag:c,isPostClickTag:!0}),"*"):window.open(c)};Y.prototype.exit=Y.prototype.v;Y.prototype.F=function(a,b){this.v(a,b)};Y.prototype.exitOverride=Y.prototype.F;Y.prototype.D=function(){};Y.prototype.counter=Y.prototype.D;Y.prototype.da=function(){};Y.prototype.startTimer=Y.prototype.da;Y.prototype.ea=function(){};Y.prototype.stopTimer=Y.prototype.ea;Y.prototype.K=function(){return"collapsed"};
Y.prototype.getContainerState=Y.prototype.K;Y.prototype.L=function(){return null};Y.prototype.getExpandDirection=Y.prototype.L;Y.prototype.Y=function(){};Y.prototype.requestExpand=Y.prototype.Y;Y.prototype.H=function(){};Y.prototype.finishExpand=Y.prototype.H;Y.prototype.X=function(){};Y.prototype.requestCollapse=Y.prototype.X;Y.prototype.G=function(){};Y.prototype.finishCollapse=Y.prototype.G;Y.prototype.close=function(){};Y.prototype.close=Y.prototype.close;Y.prototype.N=function(a){return a};
Y.prototype.getUrl=Y.prototype.N;Y.prototype.T=function(){};Y.prototype.loadModule=Y.prototype.T;Y.prototype.addEventListener=function(a,b,c,d){R(this,a,b,c,d)};Y.prototype.addEventListener=Y.prototype.addEventListener;Y.prototype.removeEventListener=function(a,b,c,d){ib(this,a,b,c,d)};Y.prototype.removeEventListener=Y.prototype.removeEventListener;Y.prototype.V=function(){};Y.prototype.queryFullscreenSupport=Y.prototype.V;Y.prototype.U=function(){};Y.prototype.queryFullscreenDimensions=Y.prototype.U;
Y.prototype.$=function(){};Y.prototype.requestFullscreenExpand=Y.prototype.$;Y.prototype.J=function(){};Y.prototype.finishFullscreenExpand=Y.prototype.J;Y.prototype.Z=function(){};Y.prototype.requestFullscreenCollapse=Y.prototype.Z;Y.prototype.I=function(){};Y.prototype.finishFullscreenCollapse=Y.prototype.I;Y.prototype.M=function(){var a;a:{for(a in nb)if("dcm"==nb[a]){a="dcm";break a}a=null}return a||"dcm"};Y.prototype.getSdk=Y.prototype.M;var bc=ac();l("Enabler",bc,void 0);var Z=function(a){M.call(this,a)};r(Z,M);l("studio.events.StudioEvent",Z,void 0);Z.INIT="init";Z.VISIBLE="visible";Z.HIDDEN="hidden";Z.VISIBILITY_CHANGE="visibilityChange";Z.VISIBILITY_CHANGE_WITH_INFO="visibilityChangeWithInfo";Z.EXIT="exit";Z.INTERACTION="interaction";Z.PAGE_LOADED="pageLoaded";Z.ORIENTATION="orientation";Z.ABOUT_TO_EXPAND="aboutToExpand";Z.EXPAND_START="expandStart";Z.EXPAND_FINISH="expandFinish";Z.COLLAPSE_START="collapseStart";Z.COLLAPSE_FINISH="collapseFinish";Z.COLLAPSE="collapse";
Z.FULLSCREEN_SUPPORT="fullscreenSupport";Z.FULLSCREEN_DIMENSIONS="fullscreenDimensions";Z.FULLSCREEN_EXPAND_START="fullscreenExpandStart";Z.FULLSCREEN_EXPAND_FINISH="fullscreenExpandFinish";Z.FULLSCREEN_COLLAPSE_START="fullscreenCollapseStart";Z.FULLSCREEN_COLLAPSE_FINISH="fullscreenCollapseFinish";Z.prototype.ga=function(a,b){this[a]=b;return this};Z.prototype.addProperty=Z.prototype.ga;})();