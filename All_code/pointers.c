#include <stdio.h>
// A pointer is a variable that stores the memory address of another variable, function, or even another pointer.


void square(int n);
void Pointer_square(int* n);

int main(){
//     int age=22;
//     int *ptr=&age;

//    printf("age address &age=%u\n",&age);
//    printf("poniter value ptr=%d\n",ptr);
//    printf("value of poniter value *ptr=%d\n",*ptr);
//    printf("address of poniter &ptr=%u\n",&ptr);

//    
//    int *ptr_;
//    int x;

//    ptr_=&x;
//    *ptr_=10;

//    printf("x =%d\n",x);
//    printf("*ptr =%d\n",*ptr_);

//     *ptr_+=3;
//     printf("x =%d\n",x);
//     printf("*ptr =%d\n",*ptr_);

//     (*ptr_)++;
//     printf("x =%d\n",x);
//     printf("*ptr =%d\n",*ptr_);


// pointer to pointer
//  int i=12;
//  int *ptr=&i;
//  int **pptr=&ptr;

//     printf("%d\n",**pptr);
//     printf("%d\n",**pptr);

//call by value /call by refrance

int num=10;
 printf("before num= %d\n",num);
 square(num); //call by value
 printf("after square num= %d",num);
 Pointer_square(&num); // call by referance
 printf("after PointerSquare num= %d",num);
    return 0;
}

void square(int n){
    n=n*n;
    printf("square =%d\n",n);
}
void Pointer_square(int* n){
    *n=(*n)*(*n);
    printf("pointer square =%d\n",*n);
}