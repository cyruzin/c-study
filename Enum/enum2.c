#include <stdio.h>

typedef enum MovieGenres
{
    HORROR = 1,
    COMEDY,
    THRILLER,
    DRAMA,
    ROMANCE,
    ACTION,
    ADVENTURE,
    BIOGRAPHY,
    DOCUMENTARY,
} MovieGenres;

int main()
{ 
    printf("%d\n", DOCUMENTARY); // 9
 
    return 0;
}