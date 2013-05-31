#include<stdio.h>
#include<conio.h>
     main()
{
     char gender ,female,male;
     female='f';
     male='m';
     printf("enter the gender:\t");
     scanf("%c",&gender);
     int age;
     printf("\nenter the age:\t");
     scanf(" %d",&age);
     if(gender==female && age>=20 &&age<=35)
     {
                   printf("\nreceptionist");
     
                   }
     else
     {
         printf("\nnot applicable");
     
         }
     if(gender==male &&age>=20 &&age<=35)
     {
               printf("\ncook");
               
                  }
     else
     {
         printf("\nnot applicable");
         
         
         }
         getch();
}          
