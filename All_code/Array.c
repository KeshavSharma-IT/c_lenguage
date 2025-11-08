
// 1.Array->Collection of similar data types stored at contiguous memory location

//  2.Why Use Arrays?
// - Store multiple values under one name
// - Easy to loop through and manipulate
// - Saves memory and improves code readability

// 3.Array Declaration & Initializatio

//int numbers[5];               // Declaration only
//int marks[3] = {85, 90, 95};  // Declaration + Initialization


// 4.Accessing Array Element

// printf("%d", marks[1]);  // Output: 90
// marks[2] = 100;          // Update value at index 2

// 5.sizeof(arr)  // Total bytes occupied
// sizeof(arr) 

// 6.- Length (number of elements):
// int length = sizeof(arr) / sizeof(arr[0]);


//  start

// #include <stdio.h>
 
// void main(){

//     int marks[3];
    // marks[0]=1;
    // marks[1]=2;
    // marks[2]=3;

    // printf("%d\n",marks[0]);
    // printf("%d\n",marks[1]);
    // printf("%d\n",marks[2]);

//     for(int i=0;i<4;i++){
//         printf("Enter value at %d place",i);
//         scanf("%d",&marks[i]);
//     }

//     for(int i=0;i<4;i++){
//         printf("Entered value at %d place\n",marks[i]);
        
//     }

    // return 0;
// }


// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     // Write C code here
//     int arr[5]={1,209,3,4,8};
//     // arr[0]=1;
//     // arr[1]=2;
//     // arr[2]=3;
//     // arr[3]=4;
//     // arr[4]=6;
//     printf("%d\n",arr[0]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[3]);

//     printf("%d\n",arr[4]);

//     return 0;
// }



// #include <stdio.h>
// void main(){

// int marks[5];

// printf("Enter the marks of physics");
// scanf("%d",&marks[0]);
// printf("Enter the marks of math");
// scanf("%d",&marks[1]);
// printf("Enter the marks of english");
// scanf("%d",&marks[2]);
// printf("Enter the marks of GK");
// scanf("%d",&marks[3]);
// printf("Enter the marks of chemistry");
// scanf("%d",&marks[4]);

// printf("----------Marks of sanisha\n");
// printf("marks of math %d\n",marks[1]);
// printf("marks of physics %d\n",marks[0]);
// printf("marks of GK %d\n",marks[3]);
// printf("marks of Chemistry %d\n",marks[4]);
// printf("marks of English %d\n",marks[2]);



// }



// #include <stdio.h>
// void main(){

// int num[5];

// printf("Enter marks of sanisha\n");
// for(int i=0;i<=4;i++){
//     scanf("%d",&num[i]);
// }

// printf("marks of sanisha\n");
// for(int i=0;i<=4;i++){
//     printf("%d\n",num[i]);
// }

// }

// #include <stdio.h>
// void main(){

// int num[5];  //{1,2,3,4,5}

// int num[2][3]={{1,2,3},{4,5,6}};   
// 123
// 456


// for finding 2=[0][1]
// printf("%d\n",num[0][1]);
// for finding 6=[1][2]
// printf("%d\n",num[1][2]);
// printf("%d\n",num[1][1]);


// num[1][1]=9;
// printf("%d\n",num[1][1]);

// int marks[3] = {85, 90, 95};
// printf("marks 2nd %d\n",marks[1]);

// marks[1]=23;
// printf("marks 2nd %d\n",marks[1]);

// }
// #include <stdio.h>
// int main(){
// int arr[6]={1,2,3,4,5,78};
// printf("%d\n",arr[0]);
// printf("%d\n",arr[1]);



// return 0;

// }



#include <stdio.h>
int main(){
int arr[6];
printf("enter the marks\n");
for(int i=0;i<=5;i++){

    scanf("%d\n",&arr[i]);
}
for(int i=0;i<=5;i++){

    // scanf("%d\n",&arr[i]);
    printf("%d\n",arr[i]);
}






return 0;

}
