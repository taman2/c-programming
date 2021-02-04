#include <stdio.h>
#include <stdlib.h>


struct reg{
    int le:8;
    int lh:8;


};

int main(){
    char porta =0xF0;
  struct reg p;

    printf("Hello %x!\n",(*((struct reg*)(&porta))).lh);
    return 0;
}
