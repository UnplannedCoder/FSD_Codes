const student = { 
    name: "John Doe",
    age: 20,
    course: "Computer Science",
    address:{
        city:"Jaipur",
        state:"Rajasthan"
    }
};

//Accessing Values

//console.log(student);
//console.log(student.name);
//console.log(student.address.city);
//console.log(student["name"])
// console.log(student["address"]["city"])

//Update

// student.name = "Pawan Sain";
// student["age"] = 19;
// student.address.city = "Udaipur";
// console.log(student);

//Delete

// delete student.course
// console.log(student);
// delete student["address"]["city"]
// console.log(student)

//Function

//using function directly

// function greetStudent(student){
//     console.log("Hello, " + student.name + " ! Welcome to the " + student.course + " course.");
// }
// greetStudent(student);

//assigning function in a variable

// let greet = function (){
//     console.log("Good Morning !");
// }
// greet();

//Hoisting = jab ham pehle access karte hai variable ya function ko fir uske bad declare karte hai to ise hoisting kehte hai.
//TDZ(Temporal Dead Zone) = jab ham let or const se declare kiye gaye variable ko uske declaration se pehle access karte hai to ise TDZ kehte hai.
console.log(x);
var x=10  //undefined 
//let y=20 //ReferenceError


