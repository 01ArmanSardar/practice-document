#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data ;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element %d\n",ptr->data);
        ptr =ptr ->next;
    }
}
int main()
{ struct Node * head ;
struct Node * second ;
struct Node * third;
//allictae memory for nodes in the linkd lsit in heap
head =(struct Node *) malloc(sizeof(struct Node));
second =(struct Node *) malloc(sizeof(struct Node));
third =(struct Node *) malloc(sizeof(struct Node));
//linked first & second node
head -> data =7;
head -> next =second;
//linked second & third node
second -> data =45;
second -> next =third;
//terminet the list at the third node
third -> data =65;
third -> next =NULL;
linkedlisttraversal(head);
    return 0;
}
