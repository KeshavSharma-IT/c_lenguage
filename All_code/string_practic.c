#include <stdio.h>
#include <string.h>  //strcat,strcmp,strcpy

void main(){

    // char str1[10]={'k','e','s','k','e','s','k','e','s','\0'};
   
    char str[]="keahav";
    printf("%s\n",str);
    printf("%c\n",str[2]);
    str[2]='p';
    printf("%c\n",str[2]);


    char firstname[]="keshav";
    char Lastname[]="sharma";

    printf("full name is %s\n",strcat(firstname,Lastname));
    // printf("first name is %s\n",firstname);
    
    char fullName[20];
    printf("copy full name is %s\n",strcpy(fullName,firstname));  //fisrt varibale blank or which to  be copied from second;
    printf("fullname=%s",fullName);
    printf("compare name is %d\n",strcmp(fullName,Lastname));  
    char a='a';
    char A='A';
    char Z='Z';
    char z='z';
    // printf("a =%c",a);
    printf("a =%d\n",a);
    printf("z =%d\n",z);
    // printf("A =%c",A);
    printf("A =%d\n",A);
    printf("Z =%d\n",Z);

    // char NewName[10];
    printf("Enter name");

    // scanf("%s",&NewName);
    // printf("NewName=%s",NewName);
    char Intro[10];
    fgets(Intro,sizeof(Intro),stdin);
    printf("intro=%s\n",Intro);

    printf("len of intro=%d\n",strlen(Intro));




}
