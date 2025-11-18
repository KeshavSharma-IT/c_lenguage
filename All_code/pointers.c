//

#include <stdio.h>
void swap(int x,int y);
void _swap(int *x,int *y);
void main(){
//    int age=12;
//    int *ptr=&age;
//    printf("%d\n",age);
//    printf("%u\n",&age);
//    printf("%u\n",ptr);
//    printf("%d\n",*ptr);

// int *ptr;
// int x;

// ptr=&x;
// *ptr=10;

// printf("x=%d\n",x);

// (*ptr)+=5;
// printf("x=%d\n",x);
// (*ptr)++;
// printf("x=%d\n",x);
// (*ptr)-=5;
// printf("x=%d\n",x);


int x=5,y=10;

printf("1st  a= %d, b=%d\n",x,y);
swap(x,y);  //call by value
printf("2nd  a= %d, b=%d\n",x,y);
_swap(&x,&y); //call by refrence
printf("3rd  a= %d, b=%d\n",x,y);
}

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

    printf(" a= %d, b=%d\n",a,b);
}
void _swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

    printf(" a= %d, b=%d\n",*a,*b);
}