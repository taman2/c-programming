#include <stdio.h>
#include <stdlib.h>
#define q 5
int maxProfit(int m,int *arr){
    int i=0;
    int j=0;
    int max=0;
    int res=0;
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            res=arr[j]-arr[i];
            printf("%d    %d\n",arr[j],arr[i]);
            if(res>max){
                max=res;
            }
        }
    }
    return max;
}
int maxProfit1(int n,int* price)
{
    int i , j , temp=0 ,max=0 ;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            temp = price[j]-price[i];
            if(temp > max)
            {
                max = temp;
            }
        }
    }
    return max;
}
