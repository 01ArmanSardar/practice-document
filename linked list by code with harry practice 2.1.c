#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data ;
    struct node *next;
};
 void linkelisttraversal (struct Node *  ptr) {
while (ptr != NULL)
{
    printf("element is %d \n",ptr -> data);
    ptr = ptr -> next;
}

}
int main()
{
    struct Node * head ;
    struct Node * second;
    struct Node * third;
    head = (struct node * ) malloc(sizeof (struct Node));
  second  = (struct node * ) malloc(sizeof (struct Node));
  third  = (struct node * ) malloc(sizeof (struct Node));

    //linked head and second
   head -> data =10;
   head -> next = second ;
   //linked second and third
   second -> data = 90;
   second -> next = third;
 // termineted the list at third node
third -> data = 75;
third -> next = NULL;
linkelisttraversal(head);
}
