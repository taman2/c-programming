#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer =531;
    int string[3]={0,0,0};
    int devision_result=integer;
    int i=0;
    do{
        string[i]= devision_result%10;
        devision_result=devision_result/10;
        i++;

    }while(devision_result!=0);
    string[i]=0;
    printf("%d\n",string[i+1]);


    for(i=0;string[i]!=0;i++){
    printf("%d",string[i]);
    }

    return 0;
}
