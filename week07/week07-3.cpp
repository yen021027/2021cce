#include <stdio.h>
int main()
{
    int n=3;

    while(n>0)
    {
        printf("whilt(n>0),n:%d\n",n);
        n--;
    }
    printf("最後順利離開while迴圈,n:%d\n",n);
}
