//
// Created by YaNan on 2019/4/12.
//

#include <stdio.h>

int main()
{
 FILE *fp;
 /*fp = fopen("data.txt","w");

 fputs("This is my program of FIle haning\n",fp);
 fclose(fp);
*/
 fp = fopen("data.txt","r");
 /*char ch[100];
 fgets(ch,100,fp);
 printf("%s",ch);
 fclose(fp);
  */
 char ch;
 while(1){
     ch = fgetc(fp);
     if(ch==EOF){
     break;}
     printf("%c",ch);

 }


}