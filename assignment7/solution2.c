#include<stdio.h>
#include<string.h>

#define HL 100
#define NL 80
int indexOf(char *haystack, char *needle, int fromIndex);

int main(void){
  
  int index;
  char haystack[HL];
  char needle[NL];
  printf("Haystack: ");
  scanf("%[^\n]%*c", haystack);
  printf("Needle: ");
  scanf("%[^\n]%*c", needle);
  printf("From Index: ");
  scanf("%d", &index);
  
  if(indexOf(haystack, needle, index)== -1)
    printf("The needle cannot be found in the haystack.");
  else
    printf("The needle is found at index %d.", indexOf(haystack, needle, index));
  
}
int indexOf(char *haystack, char *needle, int fromIndex){
  int search = -1; 
  for (int i = fromIndex; haystack[i] != '\0'; i++) {
    search = -1;
    for (int j = fromIndex; needle[j] != '\0'; j++) {
      if (haystack[i + j] != needle[j]) {
        search = -1;
        break;
      }
      search = i;
    }
    if (search != -1)
      break;
  }
  return search;
}
