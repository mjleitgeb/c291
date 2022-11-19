#include<stdio.h>
#include<string.h>

#define SIZE 100

int main()
{
	FILE* file1;
	FILE *file2;
	FILE *file2write;
	char content[SIZE][1000];
	char temp[200];
	int end = 0;
	file1 = fopen("input21.txt", "r");
	file2 = fopen("input22.txt", "r");
	while (!feof(file1))
	{
		fgets(temp, 1000, file1);
		if(temp[strlen(temp) - 1] =='\n')
			temp[strlen(temp) - 1] = '\0';
		if (strcmp(temp, "") == 0)
			continue;
		strcpy(content[end++], temp);
	}

	while (!feof(file2))
	{
		fgets(temp, 1000, file2);
		if (temp[strlen(temp) - 1] == '\n')
			temp[strlen(temp) - 1] = '\0';
		if (strcmp(temp, "") == 0)
			continue;
		strcpy(content[end++], temp);
	}
	fclose(file1);
	fclose(file2);
	file2write = fopen("input22.txt", "w");
	for (int i = 0; i < end; i++)
	{
		if(i< end-1)
			printf("%s\n", content[i]);
		else
			printf("%s", content[i]);
	}
	fclose(file2write);
}
