#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node
{
    char st [67] ;
    struct Node * next  ;

};
void linkedlisttravevrsal ( struct Node * dtr  )
{
    while ( dtr != NULL)
    {
        printf (" %s ",dtr -> st );
        dtr = dtr -> next ;
    }
}
int main ()
{
    struct Node * first ;
    struct Node * second ;
   struct Node * third ;
   struct Node * fourth ;
   first  =(struct Node * ) malloc (sizeof (struct Node ));
   second = (struct Node *)malloc (sizeof (struct Node ));
   third =(struct Node *) malloc (sizeof (struct Node ));
   fourth =(struct Node *) malloc (sizeof (struct Node));
   strcpy ( first ->st , "arman ");
   first -> next = second ;

 strcpy  (second -> st , "is");
 second -> next = third ;

 strcpy (third -> st , "goodo ") ;
 third -> next = fourth;

strcpy (fourth -> st , "boy");
fourth -> next = NULL ;
linkedlisttravevrsal (first );
}
