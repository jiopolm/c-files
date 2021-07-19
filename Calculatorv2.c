#include <stdio.h>
#include <stdlib.h>

/*calculator v2 which has addition,subtraction,multiplication and division made at 19/7/21 7:20 PM IST
create an main.c file and paste the whole code in the file into it,this comment isn't necessary so you can remove it anytime*/

int main()
{
   double num1;
   double num2;
   char op;
   
   printf("Please enter a number: ");
   scanf("%lf", &num1);
   printf("Enter an operator: ");
   scanf(" %c", &op);
   printf("Please enter a number: ");
   scanf("%lf", &num2);
   
   
   
   if(op == '+'){
     printf("%f", num1 + num2);
   } else if(op == '-'){
     printf("%f", num1 - num2);
   } else if(op == '/'){
     printf("%f", num1 / num2);
   } else if(op == '*'){
     printf("%f", num1 * num2);
   } else {
      printf("you entered an invalid operator,please try again with an valid operator");
   }
}
