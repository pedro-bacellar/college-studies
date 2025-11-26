//          11.11.2025

/*          Create a function to calculate the area of a rectangle.
The function must receive the height and width (integer numbers) as arguments and return the area value (also an integer). (3.5 points):

Task: Write the complete C code containing:

• The function prototype (before main).
• The main() function that calls this function, passing the values 5 (height) and 8 (width), and stores the result in a variable.
• The full definition of the function.
• The main() function must display the result of the area.          */

#include <stdio.h>

int area(int a, int b){

    return a * b;
}

int main(){

    int height = 5;
    int width = 8;

    printf("%d", area(height, width));
}