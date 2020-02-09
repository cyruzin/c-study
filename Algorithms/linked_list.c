#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    unsigned int id;
    struct Node *next;
} Node;

int main()
{
    Node *head = NULL, *second = NULL, *third = NULL;

    head = malloc(sizeof(*head));
    printf("Inform the ID for the head: ");
    scanf("%d", &head->id);

    second = malloc(sizeof(*second));
    printf("Inform the ID for second item: ");
    scanf("%d", &second->id);

    third = malloc(sizeof(*third));
    printf("Inform the ID for Joker: ");
    scanf("%d", &third->id);

    head->next = second;
    second->next = third;
    third->next = NULL;

    /* We have the linked list ready.   
  
           head     
             | 
             |  
        +---+---+     +---+---+       +----+------+ 
        | 1  | o----->|  2  | o-----> |  3 | NULL | 
        +---+---+     +---+---+       +----+------+        
     
      
    Note that only head is sufficient to represent  
    the whole list.  We can traverse the complete  
    list by following next pointers.    */

    return 0;
}