#include<stdio.h>
#include<stdlib.h>y
struct Node
{
    int data ;
    struct node * next;
};
 void LinkedListTraversal(struct Node *ptr )
 {
    while (ptr != NULL)
{
    printf("element is %d\n\n ",ptr->data );
    ptr =ptr->next;
}
}
int main()
{
    struct Node *head ;
    struct Node *second ;
    struct Node * third ;
    struct Node * fourth ;
    head =(struct node*) malloc (sizeof(struct Node));
    second =(struct node *) malloc (sizeof (struct Node));
    third = (struct node* )malloc (sizeof (struct Node  ));
    fourth =(struct node*) malloc (sizeof (struct Node));


    head -> data =78;
    head ->next =second ;

    second ->data =45;
    second -> next=third;

    third -> data =23;
    third ->next = fourth ;

    fourth ->data =32;
    fourth -> next =NULL;
    LinkedListTraversal(head );

}
