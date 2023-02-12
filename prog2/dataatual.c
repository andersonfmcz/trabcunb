#include <stdio.h>
#include <time.h>
#include <string.h>

char nomeData[50]()
{
   time_t mytime;
   mytime = time(NULL);
   struct tm tm = *localtime(&mytime);
   char str2[50], str3[50];

   sprintf(str2,"%d", tm.tm_mday);
   strcpy(str3,str2); strcat(str3,"_"); sprintf(str2,"%d",tm.tm_mon+1); strcat(str3,str2);
   strcat(str3,"_");  sprintf(str2,"%d",tm.tm_year+1900); strcat(str3,str2);
   strcat(str3,"__");  sprintf(str2,"%d",tm.tm_hour); strcat(str3,str2);
   strcat(str3,"_");  sprintf(str2,"%d",tm.tm_min); strcat(str3,str2);
   strcat(str3,"_");  sprintf(str2,"%d",tm.tm_sec); strcat(str3,str2);

   return(str3);
}

int main(void) {
//    printf("Data: %d_%d_%d__%d_%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_min, tm.tm_sec);
    char str1[50], nomeArq[50];
//    nomeArq = nomeData();
    strcpy(str1, "imagem_conhecido");
  //  strcat(str1, nomeArq);
    strcat(str1,".jpg");
    printf("Nome do arquivo: %s\n", str1);
}
