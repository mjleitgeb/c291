#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 1000
#define WORDS 100

char** myTokenizer(char* str, const char *delim);
int main(void)
{
     char user_string[LENGTH + 1];
     char delim[WORDS + 1];
     printf("Input the string: ");
     fgets(user_string, LENGTH + 1, stdin);
     printf("Input the delim: ");
     fgets(delim, WORDS + 1, stdin);
     delim[strlen(delim) - 1] = '\0';
     char** output = myTokenizer(user_string, delim);
     int count;
     for (count = 0; output[count] != NULL; count++) {
        printf("%s\n", output[count]);
     }
     free(output);
     
}

char** myTokenizer(char* str, const char *delim) {
     
     int count = 0;
     int index = 0;
     
     for (int i = 0; i < strlen(str); i++) {
         if (strchr(delim, str[i]) != NULL) {
             count++;
         }
     }
     count++;
     char** string = (char**) malloc(count * sizeof(char*));
     char* ct = strtok(str, delim);
     while (ct != NULL) {
         string[index] = (char*) malloc((strlen(ct) + 1) * sizeof(char));
         strcpy(string[index], ct);
         index++;
         ct = strtok(NULL, delim);
     }
     string[index] = NULL;
     return string;
}

