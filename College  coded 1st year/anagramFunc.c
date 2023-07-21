//if we enter the repeated letters then it does not work.
#include<stdio.h>
#include<string.h>
int check(char first[],char second[]);
int main(){
    
    char first[20],second[20];
    printf("Enter two string : ");
    gets(first);
    gets(second);
    if(strlen(first)==strlen(second)){
       check(first,second);
    }
    else{
        printf("Not anagram.");
    }
    return 0;
}
int check(char first[],char second[]){
    int i,count,j;
     for(i=0;i<strlen(first);i++){
            count=0;
            for(j=0;j<strlen(second);j++){
                if(first[i]==second[j]){
                    count++;
                }
            }
            if(count==0){
                printf("Not anagram.");
                return 0;
            }
        }
        printf("%s and %s are ANAGRAM.",first,second);
}