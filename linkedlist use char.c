#include <stdio.h>
#include <stdlib.h>
struct Node
 {
char ch ;
struct Node * next ;
};
void linkedlisttraversal (struct Node *ptr )
{
     while (ptr != NULL)
     {
         printf("%s",ptr -> ch);
         ptr = ptr->next;
     }
}
int main()
{
    struct Node * firstch ;
    struct Node * secondch ;
    struct  Node * thirdch;
    struct Node * fourthch;

    firstch = (struct Node *) malloc (sizeof (struct Node ));
    secondch = (struct Node * ) malloc (sizeof (struct Node ));
thirdch = (struct Node * ) malloc(sizeof (struct Node));
fourthch = (struct Node * ) malloc(sizeof (struct Node));

 firstch ->ch = 'l';
 firstch -> next = secondch ;

 secondch -> ch ='e';
 secondch -> next = thirdch;

 thirdch -> ch ='o';
 thirdch -> next =fourthch ;

 fourthch -> ch = 'r';
 fourthch -> next = NULL;
 linkedlisttraversal (firstch);

}
