#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

char *nomeData()
{
   time_t mytime;
   mytime = time(NULL);
   struct tm tm = *localtime(&mytime);
   char str2[50];
  // char *str3 = malloc(sizeof(char) * 50);
   char *str3 = (char *)malloc(50);
   sprintf(str2,"%d", tm.tm_mday);
   strcpy(str3,"_"); strcat(str3,str2);
   strcat(str3,"_"); sprintf(str2,"%d",tm.tm_mon+1); strcat(str3,str2);
   strcat(str3,"_");  sprintf(str2,"%d",tm.tm_year+1900); strcat(str3,str2);
   strcat(str3,"__");  sprintf(str2,"%d",tm.tm_hour); strcat(str3,str2);
   strcat(str3,"_");  sprintf(str2,"%d",tm.tm_min+10); strcat(str3,str2);
//   strcat(str3,"_");  sprintf(str2,"%d",tm.tm_sec); strcat(str3,str2);
   return(str3);
}

int main(void) {
    char str1[150];
    strcpy(str1, "/home/alisson/Documentos/Trabalho_Final/imagem_conhecido");
    strcat(str1, nomeData());
    strcat(str1,".jpg");
    printf("Nome do arquivo: %s\n", str1);
}
