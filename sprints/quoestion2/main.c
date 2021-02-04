#include <stdio.h>
#include <stdlib.h>
#define q 5
int maxProfit(int n,int *arr);

int main()
{
    int arr [q]={20,7,8,2,5};
    int x=0;
    x=maxProfit(q,arr);
    printf("Hello world!%d",x);
    return 0;
}
