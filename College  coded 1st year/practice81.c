#include<stdio.h>
int main(){
   char ch;
   FILE *fp;
   fp=fopen("std1.txt","w"); //opening file in write mode
   printf("enter the text.press cntrl Z:\n");
   while((ch = getchar())!=EOF){
      putc(ch,fp); // writing each character into the file
   }
   fclose(fp);
   fp=fopen("std1.txt","r");
   printf("text on the file:\n");
   while ((ch=getc(fp))!=EOF){ // reading each character from file
      putchar(ch); // displaying each character on to the screen
   }
   fclose(fp);
   return 0;
}