//          11.11.2025

/*          A program needs to display the numbers from 1 to 10 and, at the end, display the sum of all of them. (3.5 points):
Task: Write a complete C program that uses the “for” loop structure to:

• Display each number on the console (from 1 to 10)
• Accumulate the total sum of these numbers
• Display the final sum after the loop          */

#include <stdio.h>

int main(){

    int sum = 0;
    int i;

    for(i = 0; i <= 10; i++){
        printf("%d", i);
        sum += i;
    }
    printf("%d", sum);
}