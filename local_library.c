/*
NAME:NGANGA DENNIS KARIUKI
REG NO:CT101/G/26473/25
DESCRIPTION:A profram that allows a librarian to 
CAT 2 question 1
DATE:6th November,2025
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    const char *filename = "borrowed_books.txt";
    FILE *fp;
    char title[512];

       printf("Enter the book title (or a single newline to quit):\n");

      while (1) {
           // Read a full line (allows spaces)
           if (fgets(title, sizeof(title), stdin) == NULL) {
           break;
           }

             // If user only pressed Enter (title is just "\n"), exit loop
             if (strcmp(title, "\n") == 0) {
               printf("No title entered. Exiting.\n");
             break;
             }

                 // Remove trailing newline if present
                    size_t len = strlen(title);
                 if (len > 0 && title[len - 1] == '\n') {
                    title[len - 1] = '\0';
                 }

                     // Open file in append mode so existing records are preserved
                        fp = fopen(filename, "a");
                     if (fp == NULL) {
                        printf("Error opening file");
                     return 1;
                     }

                 // Write the title followed by a newline
                 if (fprintf(fp, "%s\n", title) < 0) {
                    printf ("Error writing to file");
                   fclose(fp);
                 return 1;
                 }

             // Ensure file is properly closed
             if (fclose(fp) != 0) {
             printf("Error closing file");
             return 1;
             }

         // Confirmation message
         printf("Title \"%s\" stored successfully in %s.\n", title, filename);
         printf("\nEnter another title (or press Enter to quit):\n");
        }

     return 0;
}



