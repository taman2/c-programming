#include <stdio.h>
#include <stdlib.h>
#define n 4

int main()
{
    int i;
    int arr0[n]={1,2,3,4};
    int arr1[n]={0};
    for(int j=0;j<n+1;j++){
        arr1[0]=arr0[n-1];
        for( i=0;i<n-1;i++){
            arr1[i+1]=arr0[i];
            arr0[i]=arr1[i];
        }
        i=n-1;

         arr0[i+1]=arr1[i+1];


        print_array(arr0);
    }
    printf("Hello world!\n");
    return 0;
}
void print_array (int arr[n]){
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    printf("\n");
}
