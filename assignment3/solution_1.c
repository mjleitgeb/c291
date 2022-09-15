#include <stdio.h>

int main(void){
	
	for(int letter1 = 'a'; letter1 <= 'z'; ++letter1){
		for(int letter2 = 'a'; letter2 <= 'z'; ++letter2){
			printf("www.%c%c.com\n", letter1, letter2);
		}
	}
}
		
