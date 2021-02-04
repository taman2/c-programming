#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][2] ={{1,2,3,4},{1,2,3,4}};
    //print_characters(arr);
    printf("%d\n",**arr);
    printf("%d\n",arr[0]);
    printf("%d\n",*arr);
    printf("%d\n",*arr[0]);
    return 0;
}
void print_characters( const char *arr_ptr )
{
while((*arr_ptr) != 0)
{
printf("%d\n",*arr_ptr);
  *arr_ptr++;
}
}
