#include<stdio.h>
int main()
{
    int n,row,colm;
    printf("enter n value  ");
    scanf("%d",&n);
    for (row=1;row<=n;row++)
    {
        for(colm=1;colm>=row;colm++)
            printf("%d",colm);
    }
    printf("\n");
}
