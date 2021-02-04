#include <stdio.h>
#include <stdlib.h>
    int *ptr1;
//static int *ptr;
//int x=5;

int main()
{
    /*char str[]="hello";
    int x =6;
    //ptr =&x;
    fun();
    fun();
    fun();
      //  ptr =&x;
printf("Hello world!%d\n",*ptr1);

//re(str);
//*ptr1=10;


printf("Hello world!%d\n",*ptr1);
*ptr1=5;
printf("Hello world!%d\n",*ptr1);
*/
int x=0;
int y=0;
int p=0;
test(&x,&y);
printf("%d   %d",x,y);
    return 0;
}
int fun(void){
    static count =0;
    int t=6;
    count++;
    ptr1=&t;
    t++;
    return 0;
   // x++;

}
void re( char *ptr){
    while(*ptr!=0){
        printf("%c",*ptr);
        //*ptr='c';
        ptr++;
    }
}

int test(int *ret,int *ret1){
    int x=10;
    int z=20;
    int p=30;
    *ret1=x;
    *ret =z;
    return p;
}
