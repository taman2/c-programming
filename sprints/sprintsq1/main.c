#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    x=findPageCount(6,5);
    printf("%d",x);
    return 0;
}
int findPageCount(int n,int p){
    int i=0;
    int start=0;
    int end=0;
    for(i=0;i<=n;i+=2){
        if((p==i)|(p==i+1)){
            end=(n-i)/2;
            start=i/2;
            if(start<end){
                return start;
            }
            else{
                return end;
        }

            }

    }
  return 6;
    }




int findPageCount1(int n ,int p)
{
    int temp1 =0 ,temp2=0;

    temp1 = p/2 ;
    temp2 = n/2 - p/2 ;

    if(temp1<temp2)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }

}

