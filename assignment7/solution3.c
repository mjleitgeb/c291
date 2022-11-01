#include <stdio.h>

#define STRSIZE 200
#define TRSIZE 100
char * replaceAll(const char *string, char *target, char *replacement);

int main(void)
{
  char string[STRSIZE];
  char target[TRSIZE];
  char replacement[TRSIZE];
  printf("Enter a string: ");
  gets(string);
  printf("Enter the target: ");
  gets(target);
  printf("Enter the Replacement: ");
  gets(replacement);
  puts(replaceAll(string, target, replacement));

  return 0;
}
char * replaceAll(const char *string, char *target, char *replacement)
{
    static char temp[500];
    char *search;
    int i = 0;

    if (!(search = strstr(string + i, target)))
    {
        return string;
    }
    while (string[i])
    {
        if (!(search = strstr(string + i, target)))
        {
            strcat(temp, string + i);
            break; 
        }
        strncpy(temp + strlen(temp), string + i, (search - string) - i);
        temp[search - string] = '\0';
        strcat(temp, replacement);
        i = (search - string) + strlen(target);
    }
    return temp;
}
