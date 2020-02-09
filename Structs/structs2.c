#include <stdio.h>

typedef struct Movie
{
    unsigned long id;
    unsigned int year;
    char name[50];
    char overview[500];
    char trailer[30];
} Movie;

int main()
{
    Movie avatar = {.id = 1,
                    .year = 2009,
                    .name = "Avatar",
                    .overview = "Avatar overview",
                    .trailer = "https://www.youtube.com"};

    printf("ID: %d\n", avatar.id);
    printf("Year: %d\n", avatar.year);
    printf("Name: %s\n", avatar.name);
    printf("Overview: %s\n", avatar.overview);
    printf("Trailer: %s\n", avatar.trailer);

    return 0;
}