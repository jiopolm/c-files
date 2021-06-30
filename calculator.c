#include <stdio.h>
#include <stdlib.h>



/* started at 30 june 11AM*/
int calculator()
{
     int num1;
     int num2;
     printf("Enter the first number of your choice!:  ");
     scanf("%d", &num1);
     printf("Enter the second number of your choice!:  ");
     scanf("%d", &num2);
     
     printf("Answer: %d", num1 + num2);
  
     
    return 0;
  
}
