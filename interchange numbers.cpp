#include<stdio.h>
#include<conio.h>
      main()
{
         int num1,num2;
         printf("enter num1:");
         scanf("%d",&num1);
         printf("\n enter num2");
         scanf("%d",&num2);
         int c;
         c=num1;
         num1=num2;
         num2=c;
         printf("\n%d \n%d",num1,num2);
         getch();
}      
