/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define n 4
void prin_star (int j);
    int b=0;

int main()
{
    int i=0;
    for (i=0;i<n;i++){
        prin_star(i);
        printf("\n");
    }


    return 0;
}
 void prin_star(int j){
        for (b=0;b<=j;b++){
        printf("*");

    }
    }
