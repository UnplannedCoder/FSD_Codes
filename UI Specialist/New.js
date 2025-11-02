console.log(document);
let data = document.getElementById("container")
let img = document.getElementById("picture")
let h1 = document.getElementById("parent")
let para = document.getElementById("child")
let btn1 = document.getElementById("Box1")
let btn2 = document.getElementById("Box2")
let btn3 = document.getElementById("Box3")
let btn4 = document.getElementById("Box4")
console.log(data);
console.log(img);
console.log(h1);
console.log(para);
console.log(btn1);
console.log(btn2);
console.log(btn3);
console.log(btn4);


// para.style.color = "red"

h1.addEventListener("mouseover", function(){    
    h1.style.color = "red"
})
h1.addEventListener("mouseleave", function(){    
    h1.style.color = "black"
})
para.addEventListener("mouseover", function(){    
    para.style.color = "red"
})
para.addEventListener("mouseleave", function(){    
    para.style.color = "black"
})
btn1.addEventListener("click", function(){    
    para.style.color = "blue"
})
btn2.addEventListener("click", function(){
    let att = img.getAttribute("src")
    console.log(att);
})
btn2.addEventListener("click", function(){
    img.setAttribute("src", "front-view-ninja-wearing-equipment.jpg")
    img.removeAttribute("srcset")
    console.log(img); 
})
btn3.addEventListener("click",function(){
    para.style.color = "black"
})
btn4.addEventListener("click",function(){
    img.setAttribute("src",)
})
container.addEventListener("mouseover", function(){    
    container.style.backgroundColor = "lightgreen"
})
container.addEventListener("mouseleave", function(){    
    container.style.backgroundColor = "white"
})

let data1 = document.createElement("p")
data1.textContent = "This is a created paragraph";
data1.setAttribute("id","para")
console.log(data1);
data.appendChild(data1) //adds the content at last inside div tag
// data.prepend(data1) //adds the content at first
// data.style.border = "5px solid red"
// data1.style.border = "5px solid blue"
// data2.style.border = "5px solid green"
// data3.style.border = "5px solid purple"
