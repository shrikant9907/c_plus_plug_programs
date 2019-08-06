#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[100];
   char  author[50];
};
 
int main() { 

   struct Books Book1;        /* Declare Book1 of type Book */
 
   /* book 1 specification */  
   printf("Enter Book Title: ");
   scanf("%s", &Book1.title); 
   
   printf("Enter Book Author: ");
   scanf("%s", &Book1.author);     

   /* print Book1 info */
   printf( "\n Book 1 title : %s", Book1.title);
   printf( "\n Book 1 author : %s", Book1.author);

   return 0;
}
