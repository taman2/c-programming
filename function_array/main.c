#include <stdio.h>
#include <stdlib.h>
#define max 2
#define rows 5

int main()
{
    int array[rows][max]={1,3,7,8,9,2,6};
    int result=0 ;
    for(int j=0;j<rows;j++){

    result+= add (max,array[j]);
    }
    printf("%d",result);
    return 0;
}

int add (int size ,int array[]){
    int total=0;
        for (int i=0;i<size ;i++){
            total+=array[j][i];
        }
                    return total;


                    }
