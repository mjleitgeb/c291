#include <stdio.h>
#include <string.h>
#include <stdlib.h>


  char * xmlString =
  "<?xml version=\"1.0\"?>\n<catalog>\n"
  "<book id=\"bk101\">\n"
     "<author>Gambardella, Matthew</author>\n"
     "<title>XML Developer's Guide</title>\n"
     "<genre>Computer</genre>\n"
     "<price>44.95</price>\n"
     "<publish_date>2000-10-01</publish_date>\n"
     "<description>An in-depth look at creating applications with XML.</description>\n"
  "</book>\n"
  "<book id=\"bk102\">\n"
     "<author>Cormen, Stein</author>\n"
     "<title>Introduction of Algorithm, fourth edition</title>\n"
     "<genre>Computer</genre>\n"
     "<price>84.89</price>\n"
     "<publish_date>2022-04-05</publish_date>\n"
     "<description>A comprehensive update of the leading algorithms text, with new material on matchings in bipartite graphs, online algorithms, machine learning, andother topics.</description>\n"
  "</book>\n"
  "<book id=\"bk103\">\n"
     "<author>Ryan, Carl</author>\n"
     "<title>Python Programming for beginners: A Crash Course</title>\n"
     "<genre>Computer</genre>\n"
     "<price>7.11</price>\n"
     "<publish_date>2022-01-19</publish_date>\n"
     "<description>The Ultimate Python guide for beginners!</description>\n"
  "</book>\n"
  "</catalog>";
  //printf("%s\n", xmlString);
  //for(int i=0; xmlString[i] != '\0'; i++)
    //printf("%c", xmlString[i]);
  //printf("\n");
  
  typedef struct book{
    char* id;
    char* author;
    char* title;
    char* genre;
    char* price;
    char* publish_date;
    char* description;
    } book;
    
int main(void){
    book* books = malloc(sizeof(book)*3);
    int num_books = 3;

    char* xmlptr = xmlString;
    
    books[0].id = malloc(sizeof(char)* 50);
    char str[5] = "";
    double db = 0;
    strcpy(books[0].id, str);
    strcpy(books[1].id, str);
    strcpy(books[2].id, str);
    strcpy(books[0].author, str);
    strcpy(books[1].author, str);
    strcpy(books[2].author, str);
    strcpy(books[0].title, str);
    strcpy(books[1].title, str);
    strcpy(books[2].title, str);
    strcpy(books[0].genre, str);
    strcpy(books[1].genre, str);
    strcpy(books[2].genre, str);
    strcpy(books[0].price, str);
    strcpy(books[1].price, str);
    strcpy(books[2].price, str);
    strcpy(books[0].publish_date, str);
    strcpy(books[1].publish_date, str);
    strcpy(books[2].publish_date, str);
    strcpy(books[0].description, str);
    strcpy(books[1].description, str);
    strcpy(books[2].description, str);

    for (int i = 0; i < num_books; i++) {
    printf("Book %d:\n", i+1);
    printf("ID: %s\n", books[i].id = malloc(sizeof(char)*50));
    printf("Author: %s\n", books[i].author);
    printf("Title: %s\n", books[i].title);
    printf("Genre: %s\n", books[i].genre);
    printf("Price: %.2f\n", books[i].price);
    printf("Publication Date: %s\n", books[i].publish_date);
    printf("Description: %s\n", books[i].description);
    printf("\n");
    }


}
