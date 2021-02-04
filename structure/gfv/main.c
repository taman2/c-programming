#include <stdio.h>
struct test {
    unsigned int x;
  long long   int y : 33;
    unsigned int z;
};
int main()
{
    int value =555554646;
   char str[10];
	int num=value;
	int i=0;
	int rem=0;
	int size=0;
	while(num!=0){
		num=num/10;
		size++;
	}
	size++;

	for(i=size-2;i>=0;i--){
		rem=value%10;
		str[i]=rem+48;
		value=value/10;
	}
	str[size-1]=0;
	i=0;
	while(str[i]!=0){


i++;

	}
	return 0;
}

