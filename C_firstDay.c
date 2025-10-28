#include <stdio.h>

int main(){
    // this is single line comment

    /*
     this is 
    multiline comment
    */

    // int a=12;
    // float height=12.2;
    // char c='A';
    // printf("value of a,height,c is %d,\n%f,\n%c\n",a,height,c);
    // printf("size of float is %lu bytes\n",sizeof(height));
    // char  name[10];
    // int num1,num2;
    // printf("What is your name \n");
    // scanf("%s",&name);
    // printf("Enter 2 numbers\n");
    // scanf("%d %d", &num1,&num2);
    // // printf(" entered value of num1 and num2 is %d %d",num1,num2);
    //  printf("Entered value of num1 is: %d and value of num2 is: %d\n", num1, num2);

     //Input two integers and display their sum
     //Input a character and display its ASCII value


    //escape sequences
    //  printf("My name is Keshav\tsharma\n");       
    //  printf("do you like tea/water and this is back slash \\\n");       
    //  printf("and that's how we write \"c lenguage\" :\n");       
    //  float salary=12.34;
    //  printf("salary =%f\n",salary);
    //  printf("salary =%.3f",salary);
    
    //Operators
    // Operators are special symbols used to perform operations on variables and values.

// | Type                           | Example                 |               |    |
// | ---------------------------------- | ----------------------- | ------------- | -- |
// | 1️⃣ Arithmetic Operators           | `+  -  *  /  %`         |               |    |
// | 2️⃣ Relational Operators           | `==  !=  >  <  >=  <=`  |               |    |
// | 3️⃣ Logical Operators              | `&&                     |               | !` |
// | 4️⃣ Assignment Operators           | `=  +=  -=  *=  /=  %=` |               |    |
// | 5️⃣ Increment/Decrement Operators  | `++  --`                |               |    |
// | 6️⃣ Conditional / Ternary Operator | `?:`                    |               |    |
// | 7️⃣ Bitwise Operators *(Advanced)* | `&                      | ^  ~  <<  >>` |    |

    //Arithmetic Operators
    // int num1=5,num2=2;
    // printf("a+b = %d\n",num1+num2);
    // printf("a-b = %d\n",num1-num2);
    // printf("a*b = %d\n",num1*num2);
    // printf("a/b = %d\n",num1/num2);
    // printf("a%%b = %d\n",num1%num2);

    //Relational Operators  for true=1 and for false =0
    // int num1=5,num2=5;
    // printf("num==num2 = %d \n",num1==num2);
    // printf("num!=num2 = %d\n ",num1!=num2);
    // printf("num>num2 = %d\n",num1>num2);
    // printf("num<num2 = %d\n",num1<num2);
    // printf("num>=num2 = %d\n",num1>=num2);
    // printf("num<=num2 = %d\n",num1<=num2);
        
    //Logical Operators 
    //And && both correct
    // or || only 1 correct
    //  not ! opposite

    // int a=5,b=10;
    // printf("And Operators, it return true if both right: %d\n", (a > 0) && (b > 0));
    // printf(" Or operators return true if one condition is true :%d\n", (a > 0) || (b ==2));
    // printf(" Not operators return Oposite of condition: %d\n", !(a > 0));

    // Assignment Operators
    //  int num2=10;
    //  printf("Num2 val is: %d\n",num2);
    //  num2+=2;
    //  printf("Num2 val is :%d\n",num2);
    //  num2-=2;
    //  printf("Num2 val is :%d\n",num2);
    //  num2*=2;
    //  printf("Num2 val is :%d\n",num2);
    //  num2/=2;
    //  printf("Num2 val is :%d\n",num2);
    //  num2%=2;
    //  printf("Num2 val is :%d\n",num2);
    
    
    // Increment and Decrement 
    
    int a=5,b;
    b=a++;
    printf("a = %d, b = %d\n", a, b);

    a=5;
    b=++a;
    printf("a = %d, b = %d\n", a, b);





    
    return 0;

}