#include <stdio.h>
#include <stdlib.h>
   typedef union samam {
        int mu;
        int age;
    }m;

int palindromString(char *ptr,int num);
int *putIntegerInArray(int n);
int numOfChars(char *ptr);



int main()
{
    char str[20];
    printf("enter something\n");
    gets(str);
    printf("you entered : %s\n", str);
    //int x;
    int max;
    int min;
  // x= fact(3);
int arr1[7]={4,1,2,3,2,1,4};/*note if u donot fill all array elements theses elements that you
                              did not fill will be 0 by default */
  /* max=maxMini(arr,5,&min);
   printf("%d   %d",max,min);
    printf("%d",x);
    evenOrOdd(11);
    palindromNum(7);
    primNum(25667);
    palindromNum(757575);
*/
//char str[]="hellomk,molleh";
generateFibonacci(47);

//palindromString(str,numOfChars(str));
    return 0;
}
int fact (int n){
    if (n==0){
        return 0;
    }
    int z;
    if (n>1){
            z=n*fact(n-1);
        return z;
    }
    else{
        return 1;

    }
}
int evenOrOdd(int x){
    if (x%2==0){
        printf("num is even \n");
    }
    else
    {
        printf("this num is odd\n");
    }
}
int maxMini(int *ptr,int size,int *ptrmin){
        int max=0;
        int min =ptr[0];
    for(int i=0;i<size;i++){
        if (max<ptr[i]){
            max=ptr[i];
        }
         if ((ptr[i])<min){
            min =ptr[i];
        }

    }
    *ptrmin=min;
    return max;
}
int primNum (int n){
    int i;
    if (n<=1){
        printf("not valid\n ");
        return 0;
    }
    for(i=2;i<n;i++){

        if(n%i==0){
            printf("not\n");
            return 0;
            }
            else{
            printf("prime\n");
            return 0;

            }
        }
            return 0;

    }
int palindromString(char *ptr,int num){
    int i=0;
    while((ptr[i]!=0)){

            if(ptr[num-1-i]!=ptr[i]){
                    printf(" no\n");
                return 0;
            }
            else{
                    i++;
                continue;
            }
        }
            printf(" yes  \n");
            return 0;

    }

int *putIntegerInArray(int n){
    int x =0;
   // int *ptr ;
    int size =0;
     int  static arr[]={1,2,3,4,5,5,8};
    while (n!=0){
        arr[x]=n%10;
        n=n/10;
        x++;
        size++;
    }
    //ptr=arr;

    return arr;
}
int numOfChars(char *ptr){
    int n=0;
    int i=0;
    while(ptr[i]!=0){
        n++;
        i++;
    }
    return n;
}
void generateFibonacci(int size){
     int i=0;
    int arr[size];
    arr[0]=0;
    arr[1]=1;
    printf("%d\n%d\n",arr[0],arr[1]);
    for(i=2;i<size;i++){
        arr[i]=arr[i-2]+arr[i-1];
        printf("%d\n",arr[i]);

    }

}

