/*Task 1. Calculate the sum of the numbers from the Fibonacci series until the 20th number.
The Fibonacci sequence follows the rule that each number is equal to the sum of the preceding two
numbers. This is an example of 14 numbers of this series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,
and 233.*/

#include <stdio.h>

int main(void)
{
    int a = 0;       // First Fibonacci number
    int b = 1;       // Second Fibonacci number
    int count = 2;   // Already have 2 numbers: 0 and 1
    int fib;         // Variable to hold the next Fibonacci number
    int sum = a + b; // Start sum with first two numbers: 0 + 1 = 1
    
    while (count < 20){
        fib = a +b;  // Calculate the next Fibonacci numbers
        sum += fib;  // Add it to the total sum
        a = b;       // Move 'a' to 'b'
        b = fib;    // Move 'b' to Fibonacci number
        count++;    // Increase count (how many numbers we have processed)
    
    }
    
    
    
    
    printf("The sum of the first 20 Fibonacci numbers is: %d\n", sum);

    return 0;
}
