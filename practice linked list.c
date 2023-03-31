#include <stdio.h>
#include <stdlib.h>
struct NODE
{
    int data ;
    struct NODE *next ;
};

void linkdelisttraversal (struct NODE *ptr )
{
    while (ptr != NULL)
    {
        printf("element is %d \n",ptr ->data);
     ptr =ptr ->next;
    }
}
int main()
{
    struct NODE   *head ;
    struct NODE * second ;
    struct NODE * third ;
    struct NODE * fourth ;
    head = (struct NODE * ) malloc (sizeof(struct NODE ));
    second =(struct NODE * )malloc (sizeof (struct NODE ));
    third = (struct NODE * )malloc (sizeof(struct NODE ));
    fourth = (struct NODE *)malloc (sizeof (struct NODE));

    head ->data = 64;
    head -> next = second ;

    second -> data =89;
    second -> next =third ;

    third -> data =  34;
    third -> next = fourth;

    fourth -> data = 38;
    fourth -> next = NULL;

    linkdelisttraversal (head);
}
