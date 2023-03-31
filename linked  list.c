#include<stdio.h>
Node *create_node (int item ,Node *next)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (new_node ==NULL){
       printf("error ! could not crate a new nude\n") ;
       exit(i);
    }
    new_node -> data =iteam;
    new_node -> next =next;
    return new_node;
}
int main()
{
    Node *n;
    n=create_node(10 ,NULL);
    printf("data = %d\n",n->data);
    return 0;
}
