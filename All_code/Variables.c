#include <stdio.h>
int main(){
    
    
     int a = 12;
    float height = 12.2;
    char c = 'A';
    const float gravity = 9.8;
    #define PI 3.14 //constant

     // Printing the values
    printf("Integer a = %d\n", a);
    a=15;
    printf("Integer a = %d\n", a);
    printf("Float height = %.2f\n", height);
    printf("Character c = %c\n", c);
    printf("Constant PI = %.2f\n", PI);
    // PI=3.1111;
    // gravity=99;
    printf("Constant gravity = %.2f\n", gravity);
    
    // printf("Integer sum = %d\n", a + height);
    // printf("Integer sum = %f\n", a + height);
    // Type conversion examples
    float sum = a + height;      // implicit conversion (int → float)
    int value = (int)height;     // explicit conversion (float → int)
    int ascii = c;               // char → int (implicit conversion)

    printf("\n--- Type Conversion ---\n");
    printf("Sum of a + height (float) = %.2f\n", sum);
    printf("Casting height to int = %d\n", value);
    printf("ASCII value of '%c' = %d\n", c, ascii);


}
