let btn1=document.querySelector("#demo-button");
let mode="light";
let body=document.querySelector("body");
btn1.onclick=()=>{
    if(mode=="light"){
        mode="dark";
        body.setAttribute("class","dark");
    }
    else if(mode=="dark"){
        mode="light";
        body.setAttribute("class","light");
    }
}

