#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct Node
{
    char st [79];
    struct Node * next ;
};
void linkedlisttraversal (struct Node * huda )
{
    while (huda != NULL)
    {
        printf("%s ",huda ->st);
        huda = huda -> next ;
    }
}
int main ()
{
    struct Node * first ;
    struct Node * second ;
    struct Node * third ;
    struct Node * fourth ;
    first =(struct Node * ) malloc (sizeof (struct Node ));
  second = (struct Node * ) malloc (sizeof (struct Node ));
  third = (struct Node * ) malloc ( sizeof (struct Node));
    fourth =(struct Node *) malloc (sizeof (struct Node ));
   strcpy (first ->st,"arman") ;
    first -> next = second ;

    strcpy (second -> st ,"is");
    second -> next =third;

   strcpy (third -> st, "good");
    third -> next = fourth ;

    strcpy (fourth -> st ,"boy");
    fourth -> next = NULL;
    linkedlisttraversal (first);
}
