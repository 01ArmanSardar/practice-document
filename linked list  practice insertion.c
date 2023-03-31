#include<stdio.h>
#include <stdlib.h>
struct Node
{
     char *ch ;
     struct Node * next ;
};
void linkedlisttraversl ( struct Node * ptr )
{
     while ( ptr != NULL)
     {
         printf("%c  \n",ptr->ch);
         ptr = ptr -> next;

     }
}
int main ()
{
    struct Node * firstCh ;
    struct Node * secondCh ;
    struct Node * thirdCh ;
    struct Node * fourthCh ;
    struct Node * fifthCh;

    firstCh = (struct Node *)malloc (sizeof (struct Node));
    secondCh = (struct Node * )malloc (sizeof (struct Node ));
    thirdCh =(struct node*) malloc (sizeof (struct Node));
    fourthCh =(struct Node * ) malloc (sizeof (struct Node ));
     fifthCh =(struct Node * ) malloc (sizeof (struct Node ));


    firstCh ->ch = 'A';
    firstCh  ->next = secondCh;

    secondCh ->ch = 'R';
    secondCh -> next = thirdCh;

    thirdCh ->ch = 'm';
    thirdCh-> next = fourthCh;

    fourthCh ->ch = 'A';
    fourthCh->next = fifthCh ;

    fifthCh ->ch = 'n';
  fifthCh-> next = NULL;

    linkedlisttraversl  (firstCh);
}

