#include <stdio.h>
#include <stdbool.h>

int main(){
    //variables are named memory locations used to store data that can be manipulated during program execution.
//     Must start with a letter (A–Z or a–z) or underscore (_)
//    - Can contain letters, digits (0–9), and underscores
//    - Cannot contain spaces or special characters
//    - Cannot be a C keyword (e.g., int, return, if)

    int age=12;
    float Height=154.3;
    char BloodGroup='A';
    printf("Your age is : %d \n",age);
    // printf("Your height is : %f \n",height);
    printf("Your height is : %c \n",BloodGroup);


    /*
===========================================
📦 Memory Size of Common Data Types in C
===========================================

| Data Type     | Description              | Typical Size (in bytes) |
|---------------|--------------------------|--------------------------|
| char          | Single character         | 1 byte                   |
| int           | Integer                  | 4 bytes                  |
| float         | Decimal number           | 4 bytes                  |
| double        | Large decimal number     | 8 bytes                  |
| short         | Small integer            | 2 bytes                  |
| long          | Large integer            | 4 or 8 bytes             |
| long long     | Very large integer       | 8 bytes                  |
| bool          | Boolean (from <stdbool.h>)| 1 byte                  |
| char[]        | String (char array)      | 1 byte per character + 1 for '\0'

Note: Sizes may vary by system architecture (32-bit vs 64-bit).
Use sizeof() to check actual size on your system.
*/
    int Age = 12;
    float height = 154.3;
    char bloodGroup = 'A';
    bool isHealthy = true;
    double weight = 65.5;
    short smallValue = 10;
    long bigValue = 100000;
    long long veryBigValue = 10000000000;

    printf("Size of int: %lu bytes\n", sizeof(age));
    printf("Size of float: %lu bytes\n", sizeof(height));
    printf("Size of char: %lu bytes\n", sizeof(bloodGroup));
    // printf("Size of bool: %lu bytes\n", sizeof(isHealthy));
    printf("Size of double: %lu bytes\n", sizeof(weight));
    printf("Size of short: %lu bytes\n", sizeof(smallValue));
    printf("Size of long: %lu bytes\n", sizeof(bigValue));
    printf("Size of long long: %lu bytes\n", sizeof(veryBigValue));

    /*
===========================================
🖨️ Format Specifiers in C (for printf)
===========================================

| Specifier | Used For                    | Example Output         |
|-----------|-----------------------------|------------------------|
| %d        | int (signed decimal)        | 42                     |
| %u        | unsigned int                | 42                     |
| %ld       | long int                    | 100000                 |
| %lu       | unsigned long int           | 100000                 |
| %f        | float/double (6 decimals)   | 3.141593               |
| %.2f      | float with 2 decimals       | 3.14                   |
| %lf       | double                      | 3.141593               |
| %c        | char                        | A                      |
| %s        | string (char array)         | Hello                  |
| %p        | pointer address             | 0x7ffee4b3c8a0         |
| %x        | hexadecimal (lowercase)     | 2a                     |
| %X        | hexadecimal (uppercase)     | 2A                     |
| %%        | literal percent sign        | %                      |

Note:
- Use `%lu` for `sizeof()` since it returns `size_t` (usually unsigned long).
- Use `%.nf` to control decimal places (e.g., `%.1f`, `%.3f`).
*/


// oprators
// int a = 25, b = 5;

//     // using operators and printing results
//     printf("a + b = %d\n", a + b);
//     printf("a - b = %d\n", a - b);
//     printf("a * b = %d\n", a * b);
//     printf("a / b = %d\n", a / b);
//     printf("a % b = %d\n", a % b);
//     printf("+a = %d\n", +a);
//     printf("-a = %d\n", -a);
//     printf("a++ = %d\n", a++);
//     printf("a-- = %d\n", a--);

// ///*
// ===========================================
// 🔑 Keywords in C Programming
// ===========================================

// 📌 What is a Keyword?
// - A keyword is a **reserved word** in C that has a **special meaning** to the compiler.
// - Keywords are part of the language syntax and **cannot be used as variable names**.
// - They define the structure, control flow, and data types in a C program.

// 🧠 List of All 32 Keywords in C:

// | Keyword     | Purpose                          |
// |-------------|----------------------------------|
// | auto        | Declares automatic (local) variables |
// | break       | Exits from loop or switch        |
// | case        | Defines a case in switch         |
// | char        | Declares character variable      |
// | const       | Declares constant value          |
// | continue    | Skips current loop iteration     |
// | default     | Default case in switch           |
// | do          | Starts a do-while loop           |
// | double      | Declares double-precision float  |
// | else        | Defines alternate branch         |
// | enum        | Declares enumeration             |
// | extern      | Declares external variable       |
// | float       | Declares floating-point variable |
// | for         | Starts a for loop                |
// | goto        | Jumps to a labeled statement     |
// | if          | Starts a conditional branch      |
// | int         | Declares integer variable        |
// | long        | Declares long integer            |
// | register    | Declares register variable       |
// | return      | Returns from a function          |
// | short       | Declares short integer           |
// | signed      | Declares signed variable         |
// | sizeof      | Gets size of a data type         |
// | static      | Declares static variable         |
// | struct      | Declares structure               |
// | switch      | Starts a switch-case block       |
// | typedef     | Creates type alias               |
// | union       | Declares union                   |
// | unsigned    | Declares unsigned variable       |
// | void        | Declares no return type          |
// | volatile    | Declares volatile variable       |
// | while       | Starts a while loop              |

// Note: These keywords are case-sensitive and must not be used as identifiers.
// */

    // char name[5];

    // printf("Enter your name: \n");
    // scanf("%s",name);
    // printf("your name is: %s \n",name);
    return 0;
}