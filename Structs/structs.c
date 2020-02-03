#include <stdio.h>
#include <string.h>

struct Books
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Books Book1;
    Book1.id = 12841;
    strcpy(Book1.title, "The Lord of the Rings: The Two Towers");
    strcpy(Book1.author, "J. R. R. Tolkien");

    printf("ID: %d\n", Book1.id);
    printf("Title: %s\n", Book1.title);
    printf("Author: %s\n", Book1.author);

    return 0;
}