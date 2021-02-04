#include <stdio.h>
#include <stdlib.h>
#define max 2
#define rows 6
int add_array(int size ,int row ,int array[][max]);
int main()
{
    int array[rows][max]={1,3,7,8,10,2,6};
    int result=0 ;
     int (*ptr)(int ,int,int)=add_array;
    result= ptr (max,rows,array);
    printf("%d",result);
    return 0;
}

int add_array(int size ,int row ,int array[][max]){
    int total=0;
        for(int j=0;j<row;j++){
        for (int i=0;i<size ;i++){
            total+=array[j][i];
        }
        }
                    return total;


                    }
