#include <stdio.h>
void prime();
void evenodd();
void add();
void sub();
void mul();
int main()
{    
    int c,o;
    do
    {
    printf("Enter 0.To check the number is prime or not.\n");
    printf("Enter 1.To check the Number is even or odd.\n");
    printf("Enter 2.To add numbers.\n");
    printf("Enter 3.To subtract two numbers.\n");
    printf("Enter 4.To multiply numbers.\n");
    printf("Enter choice : ");
    scanf("%d",&c);
    if(c>5)
    {
        printf("Enter the valid choice please.");
    }
    void (*p[5])()={prime,evenodd,add,sub,mul};
    p[c]();
    printf("\nDo you want to do more operations or not?\nEnter 1 for 'yes'\nEnter any other character or number for 'NO'.\n");
    scanf("%d",&o);
    }while (o==1);
       if(o!=1)
       {
        printf("Thanks for Using Priyanshu's written program.\nHOPE YOU ENJOYED AND GOT CORRECT RESULTS :)");
       }
    
}
void prime()
{
        int a,i,c=0;
        printf("Enter the number to check prime or composite : ");
        scanf("%d",&a);
        if(a==0 || a==1)
        {
            printf("%d is niether prime nor composite.",a);
        }
        else
        {
            for(i=2;i<a;i++)
            {
                if(a%i==0)
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
                printf("%d is prime number.",a);
            }
            else
            {
                printf("%d is composite number.",a);
            }
        }
}
void evenodd()
{
    int a;
    printf("Enter the number to check even or odd : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even number.",a);
    }
    else
    {
        printf("%d is odd number",a);
    }
}
void add()
{
    int a,i,b,s=0;
    printf("How many numbers you want to add?\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("Enter the index %d number : ",i);
        scanf("%d",&b);
        s+=b;
    }
    printf("The total sum is %d",s);
}
void sub()
{
    int a,b,s=0;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    s=a+b;
    printf("The difference is %d",s);
}
void mul()
{
    int a,i,b,s=1;
    printf("How many numbers you want to multiply?\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("Enter the index %d number : ",i);
        scanf("%d",&b);
        s*=b;
    }
    printf("The final product is %d",s);
}