#include <stdio.h>
#include <string.h>

//a struct (short for structure) is a user-defined data type that allows you to group together variables of different data types under a single name. 
// This provides a way to create complex data structures that represent real-world entities. 


struct student{
    int rollno;
    float marks;
    char name[100];
};

//function
void  printInfo(struct student fn);


void main(){
    
    struct student s1;
    s1.rollno=1;
    s1.marks=60;
    // s1.name="keshav";
    strcpy(s1.name,"Keshav");

    struct student s2;
    s2.rollno=2;
    s2.marks=70;
    // s1.name="keshav";
    strcpy(s2.name,"mohan");

     struct student s3;
    s3.rollno=3;
    s3.marks=70;
    // s1.name="keshav";
    strcpy(s3.name,"Rohan");

    printf("name of s1 is %s\n",s1.name);
    printf("Marks of s1 is %f\n",s1.marks);
    printf("roll no of s1 is %d\n",s1.rollno);
    
    printf("name of s2 is %s\n",s2.name);
    printf("Marks of s2 is %f\n",s2.marks);
    printf("roll no of s2 is %d\n",s2.rollno);
    printf("name of s3 is %s\n",s3.name);
    printf("Marks of s3 is %f\n",s3.marks);
    printf("roll no of s3 is %d\n",s3.rollno);

    struct student s4={4,76,"Keshav"};
    printf("name of s4 is %s\n",s4.name);
    printf("Marks of s4 is %f\n",s4.marks);
    printf("roll no of s4 is %d\n",s4.rollno);


        //pointer for struct
        struct student *ptr=&s1;
        printf("name of s1 with pointer=%s\n",(*ptr).name);
        printf("name of s1 with pointer=%s\n",ptr->name);

        // funcion call
        printInfo(s1);
}


//function
void  printInfo(struct student fn){
    printf("name of student is %s\n",fn.name);
    printf("Marks of student is %f\n",fn.marks);
    printf("roll no of student is %d\n",fn.rollno);
}