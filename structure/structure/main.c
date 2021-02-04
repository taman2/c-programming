#include <stdio.h>
#include <stdlib.h>


struct student{
        char name[20];
        short age;

    };
    void insert( struct student st);

int main()
{
    struct student Student={"name",20};
    //scanf("%s",&Student.name);
//scanf("%d",&Student.age);
struct student *ptr=&Student;
   insert(Student);
        printf("Hello world %s!\n",Student.name);
            printf("Hello world %d!\n",Student.age);


    return 0;
}
void insert( struct student st){

scanf("%s",&st.name);
scanf("%d",&st.age);
 printf("Hello world %s!\n",st.name);
            printf("Hello world %d!\n",st.age);

}

