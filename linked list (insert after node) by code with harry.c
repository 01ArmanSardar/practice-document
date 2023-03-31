#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTreaversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element is %d \n",ptr->data);
        ptr =ptr->next;
    }
}
struct Node *insertafternode (struct Node *head , struct Node * prevNode ,int data)
{
    struct Node *ptr =(struct Node *) malloc(sizeof(struct Node));
    ptr->data =data;
   ptr -> next =prevNode ->next ;
   prevNode -> next =ptr ;
    return head;
};
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //allecate memory for nodes in the linked in heap
    head = (struct node *) malloc (sizeof(struct Node));
    second = (struct node *) malloc (sizeof(struct Node));
    third = (struct node *) malloc (sizeof(struct Node));
    //linked first & second node
    head -> data =7;
    head -> next = second;
    //linked first & second node
    second-> data =90;
    second -> next = third;
    //terminet the list at 3rd node
    third -> data =87;
    third -> next = NULL;

    printf("linked list before inserttiom \n");
    LinkedListTreaversal(head);
    head = insertafternode (head ,second ,59);
    printf("\nlinked list  after insertion\n\n");
LinkedListTreaversal(head);
    return 0;
}


