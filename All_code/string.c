// -  a string is a character array ending with a null character '\0'

char str[]={'a','b','\0'};

char str_[]="keshav"; // it automatically add '\0 '

char str1[20];              // Declaration only
char str2[20] = "Welcome";  // Initialization


#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);  // Reads until space
    printf("Hello, %s\n", name);
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "C Language";
    int i = 0;
    while (str[i] != '\0') {
        printf("%c ", str[i]);
        i++;
    }
    printf("\nLength = %d\n", i);
    printf("length function for string is strlen %d\n",strlen(str));

char firstname[]="keshav";
char lastname[]="sharma";

printf("concatenation function is strcat %s\n",strcat(firstname,lastname));
printf("compare function is strcmp %d\n",strcmp(firstname,lastname));
char *found = strchr(firstname, 'k');
    if (found != NULL)
        printf("find character function is strchr %s\n", found);
    else
        printf("Character not found.\n");

         char myname[] = "KESHAV";
      int j = 0;

      while (myname[j] != '\0') {
         myname[j] = tolower(myname[j]);  //  convert each character
         j++;
      }

    printf("%s\n", myname);
    return 0;
}