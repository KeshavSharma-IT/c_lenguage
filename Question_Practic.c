// 1. Check if a number is even or odd
// 2. Find largest of three numbers
// 3. Leap year check
// 4. Menu-driven calculator using switc
// 5. Palindrome number check
// 6. Armstrong number check
// 7. Factorial of a number
// 8. Reverse a number
// 9. Prime number check
// 10. Sum of digits
// 11.  Multiplication table
// 12. Count digits in a number
// 13. GCD of two numbers
// 14. Day of week using switch
// 15. Grade system using switch


// Reverse a number

// #include <stdio.h>
// void main(){
//     int num=123;
//     int revercenum=0;

//     printf("%d \n", num%10);
//     revercenum=revercenum*10+ (num%10);
//     printf("%d\n",revercenum);
//     printf("%d  \n", num/10);
//     num=num/10;
//     printf("%d \n", num%10);
//     revercenum=revercenum*10+ (num%10);
//      printf("%d\n",revercenum);

//       num=num/10;
//     revercenum=revercenum*10+ (num%10);
//      printf("%d\n",revercenum);

// }





// main code for reverce

// #include <stdio.h>
// void main(){
//     int num=123456;
//     int revercenum=0;

//     while(num>0){
//         revercenum = revercenum*10 + num%10;
//         num = num/10;
//     }

//     printf("Reversed Number = %d", revercenum);
// }


// factorial

// #include <stdio.h>
// void main(){
//     int num = 5;
//     int fact = 1;  // Start with 1 because factorial means multiply sequence

//     fact = fact * num;   // 1 * 5 = 5
//     num = num - 1;       // num becomes 4

//     fact = fact * num;   // 5 * 4 = 20
//     num = num - 1;       // num becomes 3

//     fact = fact * num;   // 20 * 3 = 60
//     num = num - 1;       // num becomes 2

//     fact = fact * num;   // 60 * 2 = 120
//     num = num - 1;       // num becomes 1

//     // If you multiply with 1, it won’t change the result, so we stop here

//     printf("Factorial = %d", fact);
// }


//final code
// #include <stdio.h>
// void main(){
//     int num=5, fact = 1;

//     // printf("Enter a number: ");
//     // scanf("%d", &num);

//     while(num > 0){
//         fact = fact * num;
//         num = num - 1;
//     }

//     printf("Factorial = %d", fact);
// }




// armstrong
// #include <stdio.h>
// void main(){
//     int num = 153;
//     int sum = 0;
//     int digit;

//     // Step 1: Get last digit
//     digit = num % 10;        // 153 % 10 = 3
//     sum = sum + (digit * digit * digit);  // 3³ = 27
//     num = num / 10;          // 153 / 10 = 15

//     // Step 2: Get next digit
//     digit = num % 10;        // 15 % 10 = 5
//     sum = sum + (digit * digit * digit);  // 27 + 125 = 152
//     num = num / 10;          // 15 / 10 = 1

//     // Step 3: Get last digit
//     digit = num % 10;        // 1
//     sum = sum + (digit * digit * digit);  // 152 + 1 = 153
//     num = num / 10;          // 1 / 10 = 0 (done)

//     printf("Sum of cubes = %d\n", sum);

//     if(sum == 153)
//         printf("It is an Armstrong number");
//     else
//         printf("Not an Armstrong number");
// }


// #include <stdio.h>
// void main(){
//     int num, originalNum, sum = 0, digit;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNum = num; // store the original number to compare later

//     while(num > 0){
//         digit = num % 10;                     // extract last digit
//         sum = sum + (digit * digit * digit);  // add cube of the digit
//         num = num / 10;                       // remove last digit
//     }

//     if(sum == originalNum)
//         printf("%d is an Armstrong number.", originalNum);
//     else
//         printf("%d is not an Armstrong number.", originalNum);
// }



// #include <stdio.h>
// #include <math.h>

// void main(){
//     int num=123, originalNum, temp, digit, count = 0;
//     double sum = 0;   // use double for pow()

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNum = num;

//     // Count digits
//     temp = num;
//     while(temp > 0){
//         count++;
//         temp = temp / 10;
//     }

//     // Find sum of each digit raised to the power of count
//     temp = num;
//     while(temp > 0){ //123
//         digit = temp % 10; //3 //2
//         sum = sum + pow(digit, count); //27 +8 +1 =36
//         temp = temp / 10;
//     }

//     if(sum == originalNum)
//         printf("%d is an Armstrong number.", originalNum);
//     else
//         printf("%d is not an Armstrong number.", originalNum);
// }






// #include <stdio.h>

// void main(){
//     int num=123;
//     int reverse_No=0;
     
//     printf("last digit%d \n", num%10); //3
//     printf("remaning no %d \n", num/10); //12
//     num=num/10;
//     reverse_No=reverse_No*10+ ( num%10);
//     printf("%d",num);


//     printf("last digit%d \n", num%10); //2
//     printf("remaning no %d \n", num/10); //1
//     num=num/10;
//     printf("%d",num);

//     printf("last digit%d \n", num%10); //2
//     printf("remaning no %d \n", num/10); //1
//     num=num/10;
//     printf("%d",num);
// }

// #include <stdio.h>

// void main(){
//     int num=123;
//     int reverse_no=0; 
     
//     while (num>0)
//     {
//        reverse_no=reverse_no*10+ (num%10); // 0+3 =3 / 30+2=32 // 320 +1 =321
//        num=num/10; //12  //1 //0
//     }
    
//     printf("reverse_no=%d",reverse_no);
// }


// #include <stdio.h>

// void main(){
//     int num=121;
//     int temp=num;
//     int reverse_no=0; 
     
//     while (num>0)
//     {
//        reverse_no=reverse_no*10+ (num%10); // 0+3 =3 / 30+2=32 // 320 +1 =321
//        num=num/10; //12  //1 //0
//     }
    
//      if(temp==reverse_no){
//         printf("it is a palandrom no");
//      }else{
//          printf("it is not a palandrom no");
//      }
//     printf("reverse_no=%d",reverse_no);
// }







// #include<stdio.h>
// int main(){
    
//    int num=1235;
//    int rev=0;
//    while(num>0){
//     rev=rev*10+(num%10);
//     num=num/10;
//    }

//    printf("rev no is %d",rev);

//    return 0;
// }



// #include <stdio.h>

// void main(){
// int num =121;
// int reverse_num =0;
// while (num>0)
// {
//     reverse_num=reverse_num*10 + (num%10); 
//     num=num/10;
// }

//     printf("reverse_num %d",reverse_num);


// }






// #include <stdio.h>

// void main(){
// int num =121;
// int reverse_num =0;
// int temp=num;
// while (num>0)
// {
//     reverse_num=reverse_num*10 + (num%10); 
//     num=num/10;
// }

//     printf("reverse_num %d",reverse_num);

//     if(temp==reverse_num){
//         printf("Palindrome no");
//     }else{
//         printf(" not a Palindrome no");
//     }


// }




// #include <stdio.h>
// void main(){
//     int num=5;
//     int fact=1;

    

//     while (num>0)
//     {
//        fact=fact*num;
//     //    num--;
//     num=num-1;
//     }
//     printf("fact %d",fact);
    
    
// }



// prime no

// #include <stdio.h>

// void main(){

//     int n=10;
//     int flag=0;
//     for (int i=2;i<n;i++){
//         if(n%i==0){
//             flag=1;
//             break;;
//         }

//      }

//      if(flag==0){
//         printf("prime no");
//      }else{
//          printf("not a prime no");
//      }

// }


// Fibonacci series

// #include <stdio.h>
// void main(){
//     int n=10,first=0,second=1,next;

//     for(int i=1;i<=n;i++){
//         printf("%d ,",first);
//         next=first+second;
//         first=second;
//         second=next;
//     }
// }
