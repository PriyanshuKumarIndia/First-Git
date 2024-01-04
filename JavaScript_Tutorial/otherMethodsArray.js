let arr= [1,2,3,4,5,6,7,8,9];

// Map : It returns a new array after performing the operations on each elements. It also have three values 1.Value 2.Index 3.Array itself.

// let newArr = arr.map((val)=>{
//     return val*val;
// }) 
// console.log(newArr);

// Filter : It also returns a new array by performing some filter or conditional operations. It also has three values 1.Value 2.Index 3.Array itself.

// let newArr = arr.filter((val)=>{
//     return val%2 ===0;
// })
// console.log(newArr);

// Reduce : It return a singal value as a output after performing some operations. It has four values 1.Accumulator(previousValue) 2.CurrentValue(val) 3.Index 4.Array itself.

let newVal = arr.reduce((prev,current)=>{
    return prev*current;
})
console.log(newVal);