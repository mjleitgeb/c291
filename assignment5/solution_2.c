// Online C compiler to run C program online

#include <stdio.h>

#define NCOLS 4
void filterStudents(int students[][NCOLS], int minAge, int minYear, int minGrade);

int main(void){
    int students[5][NCOLS] = {{1, 18, 11, 90}, {2, 16, 10, 75},{3, 15, 9, 85},{4, 10, 10, 60},{5, 11, 9, 60}};
    int minAge;
    int minYear;
    int minGrade;
    printf("Enter filtering parameters: ");
    scanf("%d %d %d", &minAge, &minYear, &minGrade);
    
    filterStudents(students, minAge, minYear, minGrade);
}

void filterStudents(int students[][NCOLS], int minAge, int minYear, int minGrade){
    int j = 1;
    int k = 0;
    for(int i = 0; i<4; i++){
        if(students[i][j] > minAge && students[i][j+1] > minYear && students[i][j+2] > minGrade){
            printf("%d\n", students[i][k]);
        }
            
    }
}
