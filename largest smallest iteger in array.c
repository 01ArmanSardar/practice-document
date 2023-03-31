#include<stdio.h>
int main()
{
    int a[50],large,small,n,i;
    printf("enter the number of element  :");
    scanf("%d",&n);
    printf("enter the array element\n ");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    large=small=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]>large)
            large=a[i];
        if(a[i]<small)
            small=a[i];
    }
    printf("the largest number is%d\n",large);
    printf("the smallest number is%d\n",small);
}
