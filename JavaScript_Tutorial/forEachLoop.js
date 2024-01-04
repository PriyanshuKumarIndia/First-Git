let arr=[1,2,3,4,5,6,7,8];

// arr.forEach((val,idx,arr)=>{
//     console.log(`The square of ${arr[idx]} is ${val*val}.\n`);
// });

// function calcSquare(val,idx,arr){
//     console.log(`The square of ${arr[idx]} is ${val*val}.\n`);
// }

const calcSquare=(val,idx,arr)=>{
    console.log(`The square of ${arr[idx]} is ${val*val}.\n`);
}

arr.forEach(calcSquare);