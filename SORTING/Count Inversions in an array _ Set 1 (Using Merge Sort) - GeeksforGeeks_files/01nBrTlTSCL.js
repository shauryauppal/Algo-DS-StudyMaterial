define("MediaLoader",["ImageBuilder",document,window],function(g,h,k){return{load:function(e,l){for(var c=[],a=0;a<e.length;a++){var b=e[a];0===b.clientWidth&&0===b.clientHeight||c.push(b)}var f=c.length;if(0===f)throw Error("iml:no-items-rendered");for(a=0;a<c.length;a++){var b=c[a],d=h.createElement("img");d.onerror=function(){k.showFallback(Error("iml:image-load-error"))};d.onload=function(){0==--f&&l()};d.src=(new g(b.getAttribute("data-baseUrl"))).autoCrop().scaleY(b.clientHeight).build();b.appendChild(d)}},
type:"ImgMediaLoader"}});