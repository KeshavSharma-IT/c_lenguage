#include <stdio.h>
// "r" — read text (file must exist).

// "w" — write text (creates/overwrites).

// "a" — append text (create if not exist).

// "r+" — read/update (text).

// "w+" — write/update (truncate/create).

// "a+" — append/update (read + append).

// Add "b" for binary: e.g., "rb", "wb", "r+b".

int main(){
    FILE *fp;
    // char ch;
    //  fp=fopen("./All_code/text.txt","r");
    //  if(fp==NULL){
    //     printf("filen not found");
    //     return 0;
    //  }

    // //  ch=fgetc(fp);
    // //  while (ch!=EOF)
    // //  {
    // //      printf("%c",ch);
    // //       ch = fgetc(fp);
    // //  }

    // char str[100];
    // // fgets(str,sizeof(str),fp);

    // while (fgets(str,sizeof(str),fp)!=NULL)
    // {
    //     printf("%s",str);
    // }
    
     
    //  fclose(fp);

    //write

    //  fp=fopen("./All_code/text.txt","w");
     
    //  fprintf(fp,"hello this is new line\n");
    //  fprintf(fp,"hello this is second line\n");

    //  fclose(fp);

    // append
     fp=fopen("./All_code/text.txt","a");

     fprintf(fp,"this is appended line");

     fclose(fp);



    
     return 0;



}