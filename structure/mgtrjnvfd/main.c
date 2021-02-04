#include <stdio.h>
#include <stdlib.h>
#define DEF(a,b,c) b a=c;
#define MAX(x, y, z) ((x) > (y)) ? ((x) > (z)) ? x : z : ((y) > (z))? y : z

int main()
{
    int arr []={1,2,3,4,5};
    printf("%d\n",*arr+1);
    printf("%d %d %d %d ",sizeof(arr),sizeof(*arr),sizeof(arr[0]),sizeof(*arr+1));
    return 0;
}
