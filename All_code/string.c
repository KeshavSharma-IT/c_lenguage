// -  a string is a character array ending with a null character '\0'

char str[]={'a','b','\0'};

char str_[]="keshav"; // it automatically add '\0 '

char str1[20];              // Declaration only
char str2[20] = "Welcome";  // Initialization


#include <stdio.h>
#include <string.h>
int main() {
    char name[5];
   printf("Enter name:");
   scanf("%s",&name);
   printf("name =%s\n",name);
   printf("1st char of name =%c\n",name[0]);
   name[0]='R';
   printf("name =%s\n",name);

    // int len=strlen(name);
    // printf("len of name=%d\n",len);
   for(int i=0;i<strlen(name);i++){
        printf("%d  char of name =%c\n",i,name[i]);
   }

   char firstName[]="keshav";
   char lastName[]="sharma";

   strcat(firstName,lastName);
   printf("firstname = %s\n",firstName);    
   
   char newBoyName[50];
   strcpy(newBoyName,firstName);
   printf("newboy name = %s\n",newBoyName);    

   

   printf("compare 2 name %d",strcmp(newBoyName,lastName));

   int c;
    while ((c = getchar()) != '\n' && c != EOF);
   char newName[10];
   fgets(newName, sizeof(newName), stdin);  
   printf("%s new name",newName);
   
   int count=0;
   for(int i=0;newName[i]!='\0';i++){
    count++;
   }

   printf("len of new name=%d",count);

}


