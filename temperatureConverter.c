#include<stdio.h>
void main()
{
   float n;
   int ch;

    printf("select :\n 1 celcius to fahrenheit \n 2 convert fahrenheit to celcius\n");
    scanf("%d",&ch);
    switch(ch)
    {
   case 1:
        printf("enter the temperature you want to convert to F ");
        scanf("%f",&n);
        printf("%f °c",(n*9/5)+32);
        break;
        case 2:
     printf("enter the temperature you want to convert to °c");
        scanf("%f",&n);
        printf("%f F",(n-32)+5.0/9.0);
        default:
        printf("invalid input.. Please try again");
    }
    

}
