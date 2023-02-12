#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void) {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d_%d_%d__%d_%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_min, tm.tm_sec);
    char str1[50];
    strcpy(str1, "imagem_conhecido");
    char str2[50], str3[50];;
    sprintf(str2,"%d", tm.tm_mday);
    strcpy(str3,str2); strcat(str3,"_"); sprintf(str2,"%d",tm.tm_mon+1); strcat(str3,str2);
    //strcpy(str2, ctime(&mytime));
    strcat(str1,str3);
    printf("Data: %s\n", str1);
}
