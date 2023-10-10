#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("enter twoa numbers ");
    scanf("%d%d",&a,&b);
    printf("which operation you want to perform\n");
    printf("1 addition \n 2 substraction \n 3 division \n 4 multiplication\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("addition is %d",a+b);
        break;
        case 2:
        printf("substraction is %d",a-b);
        break;
        case 3:
        printf("division is %f",(float)a/b);
        break;
        case 4:
        printf("multiplication id %d",a*b);
        default:
        printf("invalid input... Please try again");
        
    }
    return 0;
}
