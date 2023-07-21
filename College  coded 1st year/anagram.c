//It will work in any situation
#include<stdio.h>
#include<string.h>
int anagram(char first[],char second[]);
int main(){
    char first[20],second[20];
   
    printf("Enter two strings : ");
    gets(first);
    gets(second);
    if(strlen(first)==strlen(second)){
        anagram(first,second);
    }
     else{
            printf("Not anagram.");
        }
        return 0;
}
int anagram(char first[],char second[]){
     int i,s1=0,s2=0;
    for(i=0;i<strlen(first);i++){
            s1+=first[i];
        }
        for(i=0;i<strlen(second);i++){
            s2+=second[i];
        }
        if(s1==s2){
            printf("%s and %s are Anagram.",first,second);
        }
        else{
            printf("Not anagram.");
        }
}