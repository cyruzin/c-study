#include <stdio.h>

enum week
{
    Mon = 1,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

int main()
{
    enum week day;

    day = Wed;
    
    printf("%d\n", day);
    
    return 0;
}