#include<stdio.h>
int main()
{
    int a[79],small,large,n,i;
    printf("type the number of element");
    scanf("%d",&n);
    printf("type the element of array");
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
    printf("the smallest integar is%d\n",small);
    printf("the longest integar is %d",large);
}
