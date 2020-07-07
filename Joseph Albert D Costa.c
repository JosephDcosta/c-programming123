/*c program of a simple calculator using else if clause */

#include <stdio.h>

#include<conio.h>

#include<stdlib.h>

int main()

{

    float num_1 ,num_2;

    char calculation;


    
printf("calculation symbol + , - ,* , / \n" );

    scanf("%c" , &calculation);

    printf("enter the first number\n" );

    scanf("%f" , &num_1);

    printf("enter the second number\n");

    scanf("%f" , &num_2);

    

    if(calculation=='+'){
 
        printf("the addition of the numbers is %f" , num_1+num_2);

        }

    
    else if(calculation=='-'){ 

        printf("the subtraction of the numbers is %f" , num_1-num_2);

        }

 	else if(calculation=='*')
{
 
        printf("the multiplication of the numbers is %f" , num_1*num_2);

    	}

    
    else
{
 
        printf("the division of the numbers is %.4f" , num_1/num_2);

   	 }

    
   printf("\nPress Any Key To Exit");

   
    return 0;

}