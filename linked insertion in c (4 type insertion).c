#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node * next;
};
void LinkListTraversal (struct Node *ptr  )
{
    while (ptr != NULL );
    {
        printf("element is %d\n",ptr -> data );
        ptr = ptr -> next;
    }
}
int main()
{
    struct Node * head ;
    struct Node * second;
    struct Node * third ;
    head = (struct node*)malloc (sizeof (struct Node));
    second = (struct node*)malloc (sizeof (struct Node));
    third = (struct node*)malloc (sizeof (struct Node));
    head -> data = 7;
    head -> next = second ;

    second -> data =8;
    second -> next =third;

    third ->data = 67;
    third -> next = NULL;
    LinkListTraversal(head);
}
