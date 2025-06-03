/* Task 3. Prompt the user to enter two integers. Read the input and display their sum. */

#include<stdio.h>

int main(void){
  int a;
  int b;

  printf("Enter the first number:");
  scanf("%d, &a);

  printf("Enter the second number:");
  scanf("%d", &b);

  printf("Sum of two numbers are: %d\n", a+b);
  

return 0;
}
