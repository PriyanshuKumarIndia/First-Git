#include <stdio.h>
int main()
{
    int perimeter,area,length,breadth;
    printf("Enter the length of rectangle : ");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle : ");
    scanf("%d",&breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;
    printf("The perimeter of the rectangle is %d\n",perimeter);
    printf("The area of the rectangle is %d",area);
    return 0;
}