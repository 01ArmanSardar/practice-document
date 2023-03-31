#include<stdio.h>
#include <stdlib.h>
struct Node
{
    int data ;
    struct Node * next ;
};
void linklisttraversal (struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element is %d \n ",ptr->data );
        ptr =  ptr->next;
    }
}
int main ()
{
    struct Node * head ;
    struct Node * third ;
    struct Node * second ;
    struct Node * fourth ;

    head = (struct Node *)malloc (sizeof (struct Node ));
    second =(struct Node * )malloc (sizeof(struct Node));
    third = (struct Node * ) malloc  (sizeof (struct Node));
    fourth =(struct Node *)malloc (sizeof (struct Node));

    head -> data = 56;
    head ->next =second ;

    second ->data = 34;
    second ->next =third;

    third ->data =98;
    third -> next =fourth;

    fourth ->data =12;
    fourth -> next =NULL;

    linklisttraversal (head);
}

