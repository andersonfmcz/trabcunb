#include <stdio.h>
#include <time.h>

int main(void) {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d_%d_%d__%d_%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_min, tm.tm_sec);
    char str1[50];
    strcpy(str1, "imagem_conhecido");
    char str2[50];
    strcpy(str2, tm.tm_mday);
    printf("Data: %s\n", str2);
}
