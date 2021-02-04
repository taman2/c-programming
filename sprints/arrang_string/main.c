#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100]="ehamb,saleh,salah";
        printf("Hello world!%s\n",arr);

    char temp[100];
    int i=0;
    int p=0;
    int x=0;
    int j=0;
    int t=0;
    int z=0;
    char v='z';
    int count=0;
    while(arr[p]!=0){
            if(arr[p]==','){
                count++;
            }
            p++;
    }
    for(i=0;i<=count;i++){
            t=0;
            j=0;

        while(arr[j]!='\0'){
           //printf("hey\n");

            //t=arr[t];
            if(arr[j]==','){
            //printf("hey\n");

                if (arr[j+1]< v){
                    z=j+1;
                    v=arr[j+1];
                        printf("hey %c\n",v);

                }

            }

            j++;
        }
        while(arr[z]!=','){
            temp[x]=arr[z];
            arr[z]=0xff;
            x++;
            z++;
        }
        temp[x]=',';
        x++;
        j=0;
        t=0;
        //temp[x]='/0';
        printf("Hello world!%d\n",x);
            printf("Hello world!%s\n",temp);
                printf("Hello world!%s\n",arr);




    }


    printf("Hello world!%s\n",temp);
        printf("Hello world!%s\n",arr);

    return 0;
}
