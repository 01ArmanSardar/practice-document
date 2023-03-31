#include<stdio.h>
int main()
{
    int num,i;
    printf("type a integar");
    scanf("%d",num);
    printf("factor is %d",num);
    for(i=1;i<=num;++i)
    {
        if(num%i==0)
            printf("factor is",i);
    }

}
