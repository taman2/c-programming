#include <stdio.h>
#include <stdlib.h>


int main()
{
  char str[10]={0};
  double n=5455558.7888888888888888;
  double frac=0;
  double num=0;
  int i=0,j=0,integer=0,temp=0,rem=0,t=0,k=0,l=0;
  integer=n/1;
  frac=n-integer;
   t=integer;
  while( t!=0){
      t=t/10;
    j++;
  }
  k=j;
   while(integer!=0){
      rem=integer%10;
      integer=integer/10;
      str[--j]=rem+48;
   }

  str[k]='.';

  while(frac!=0){
    //k++;

      frac=frac*10;
      temp=frac/1;
      frac=frac-temp;
      str[++k]=temp+48;
      i++;

  }
  str[k+1]='\0';

  printf("%s",str);
    return 0;
}

