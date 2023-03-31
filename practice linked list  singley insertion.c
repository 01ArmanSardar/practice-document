#include <stdio.h>
struct Node
{
    int data ;
    struct Node * next ;
};
void linkedlisttraversal ( struct Node *ptr)
{
    while ( ptr != NULL)
    {
        printf (" elemenet is %d\n ", ptr -> data );
        ptr =ptr-> next ;
    }
}
struct Node * insertatfirst (struct Node * head ,int data )
{
    struct Node *ptr = (struct Node * ) malloc (sizeof (struct Node));
    ptr -> next =head ;
    ptr -> data = data;
    return ptr ;
};
int main ()
{
    struct Node * head ;
    struct Node * second ;
    struct Node * third ;
    struct Node * fourth ;

    head = (struct Node *)malloc (sizeof (struct Node));
    second = (struct Node *) malloc (sizeof (struct Node ));
    third = (struct Node * ) malloc (sizeof (struct Node));
    fourth = (struct Node * ) malloc (sizeof (struct Node));
    head -> data =87;
    head -> next = second ;
    second -> data =56;
    second -> next = third ;
    third -> data = 34;
    third -> next = fourth ;
    fourth -> data = 23;
    fourth -> next = NULL;
    printf (" before insertion linkedlist\n\n");

    linkedlisttraversal (head) ;
    printf("\n\nafter insertion linkedlist\n");
   head =  insertatfirst ( head ,47);
    linkedlisttraversal (head) ;

}

