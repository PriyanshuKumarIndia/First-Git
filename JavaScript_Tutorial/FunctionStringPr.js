function countVowels(str){
    let count = 0;
    let Size=str.length;
    for(let i=0;i<Size;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    return count;
}

let str="Priyanshu Kumar";
let ans=countVowels(str);
console.log(`Number of vowels in ${str} are ${ans}`);