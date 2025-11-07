#include <stdio.h>

void Hello();
void display();
int fact(int n){
    if(n<=1){
        return 1 ;
    }
    return n* fact(n-1);
}

void count(int n){
    if(n==0){
        return;
    }
    count(n-1);
    printf("%d",n);
}

void main(){
    Hello();
    // display(5);
    int fact_;
     fact_=fact(5);
printf("%d fact",fact_);

    count(5);
}

void Hello(){
    printf("Hello\n");
}


//Recursion 

void display(int n){
    if(n<=0){
        return;
    }
    printf("Hello from Display\n");
    display(n-1);
}
