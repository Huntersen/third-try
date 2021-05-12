#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     int pri;
     float si,rate,time;
     system("cls");

     printf("Enter the Principle amount,rate of intrest,time :\n");
     scanf("%d%f%f",&pri,&rate,&time);

     si=(pri*rate*time)/100;

     printf("\nIntrest on the given amount is :\n%f",si);
     return 0;
 }