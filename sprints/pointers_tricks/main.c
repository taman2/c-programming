#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *c[]={"geeksQuiz","MCQ","TEST","quiz"};
    char** cp[]={c+3,c+2,c+1,c};
    char ***cpp=cp;
    //char**cp[]=
cpp++;
cpp++;
        printf("%s",**cpp);

    printf("%s\n",*cpp[-2]);
    printf("%p\n",*(*(cpp-1)-1));
        printf("%p\n",**cpp);
        printf("%p",**cp);




    return 0;
}
