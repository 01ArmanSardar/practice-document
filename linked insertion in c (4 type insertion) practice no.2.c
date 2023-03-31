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
    LinkedListTreaversal(head);
    return 0;
}
