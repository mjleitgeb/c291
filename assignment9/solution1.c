#include <stdio.h>
int insert();
int search();
int display();
int remove_records();

int main(void){
    int choice;
    printf("Enter 1 to insert, 2 to search, 3 to display and 4 to remove:");
    scanf("%d", &choice);
    
    if(choice==1){
        insert;
    }
    else if(choice==2){
        search;
    }
    else if(choice==3){
        display;
    }
    else if(choice==4){
        remove_records;
    }
}
int insert(){
   int s_id;
   char name[50];
   char course_code[50];
    

   FILE *fptr;
   fptr = fopen("input_p1_ex1.txt", "a");
    
    
   printf("Enter Student ID: ");
   scanf("%d", &s_id);
    
   printf("Enter Student Name: ");
   scanf("%s", name);
    
   printf("Enter Student Course: ");
   scanf("%s", course_code);

   printf("\nThe following records were successfully added:\n");
   fprintf(fptr, "%d %s %s\n", s_id, name, course_code);
   
   fclose(fptr);
    
   return 0;
}

int search()
{
   int s_id;
   int student_search = 0;
   char name[50];
   char course_code[50];
    
    
   FILE *fptr;
   fptr = fopen("input_p1_ex1.txt", "r");
    
   printf("Searching for student with student id: ");
   scanf("%d", &s_id);
    
   while(fscanf(fptr, "%d %s %s\n", &s_id, name, course_code) != EOF)
   {
       if(s_id == s_id)
       {
           student_search = 1;
           break;
       }
   }
    
   if(student_search == 1)
   {
       printf("The following records were found with a student id: %d\n", s_id);
       printf("%d %s %s\n", s_id, name, course_code);
   }
   fclose(fptr);

   return 0;
}

int display()
{
   int s_id;
   char name[50];
   char course_code[50];
    
    
   FILE *fptr;
   fptr = fopen("input_p1_ex1.txt", "r");
    
   printf("The contents of the records file:\n");
    
   while(fscanf(fptr, "%d %s %s\n", &s_id, name, course_code) != EOF)
   {
       printf("%d\t%s\t%s", s_id, name, course_code);
   }
    
   fclose(fptr);

   return 0;
}

int remove_records()
{
   int s_id;
   int student_search = 0;
   char name[50];
   char course_code[50];
    
   FILE *fptr, *fptr2;

   fptr = fopen("input_p1_ex1.txt", "r");
   fptr2 = fopen("new.txt", "w");

   printf("Removing records of students with student id: ");
   scanf("%d", &s_id);

   while(fscanf(fptr, "%d %s %s\n", &s_id, name, course_code) != EOF)
   {
       if(s_id == s_id)
       {
           student_search = 1;
           continue;
       }
       else
       {
           fprintf(fptr2, "%d %s %s\n", s_id, name, course_code);
       }
   }

   fclose(fptr);
   fclose(fptr2);

   remove("input_p1_ex1.txt");
   rename("new.txt", "input_p1_ex1.txt");

   if(student_search == 1)
   {
       printf("\nThe contents were removed\n");
   }

   return 0;
}
