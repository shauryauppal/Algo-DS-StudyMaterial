var scriptMatch=/(http)?(s)?(:)?\/\/(cdn|js|q).(adrta|rta247).com\/(s\/[a-zA-Z]*\/)?(aa|ap|aanf|at|ca|p|pnf).js(\?|#).*/;var protocol=window.location.protocol;if(protocol.indexOf("http")!=0){protocol="http:"}var errorCode=0;var _script=null;try{_script=document.currentScript}catch(e){}if(!_script){errorCode=1;var nodeList=document.getElementsByTagName("script");var scripts=[];for(var i=0;i<nodeList.length;++i){scripts[i]=nodeList[i]}_script=scripts[scripts.length-1];for(var n=scripts.length-1;n>=0;--n){var tmpScript=scripts[n];if(tmpScript&&tmpScript.src&&scriptMatch.test(tmpScript.src)){_script=tmpScript;errorCode=0;break}}}var params=(_script.src.indexOf("#")!=-1)?_script.src.substring(_script.src.indexOf("#")):"";var script=document.createElement("script");script.setAttribute("type","text/javascript");var url="//cdn.adrta.com/pnf.js?rcb="+Date.now()+"_"+Math.floor(Math.random()*999999);var cb="mRg0zkd5c6R72 ecWj/Jk4oLZ6RNcaXNwfnokVLSAi0=";if(cb!="null"){url+="&cb="+cb}url+=params;script.setAttribute("src",url);_script.parentNode.appendChild(script);