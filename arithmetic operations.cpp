#include<stdio.h>
#include<conio.h>
      main()
{
      float num1,num2,sum,diff,product;
      float  div;
      printf("enter num1.:");
      scanf("%f",&num1);
      printf("\nenter num2:");
      scanf("%f",&num2);
      sum=num1+num2;
      diff=num1-num2;
      product=num1*num2;
      div=num1/num2;
      printf(" \n%f \n%f \n%f \n%f ",sum,diff,product,div);
      getch();
}            
