#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "data_types.h"


typedef struct node{
    INT32U data ;
    struct node* next ;



}Node;

void insertAtFirst(Node** start,INT32U data);//to create node to insert data and next of nod
void insertAtLast(Node** start,INT32U data);
void deleteAtFirst(Node** start);
void deleteAtLast(Node** start);
void printList(Node* start); //(Node** start,INT32U data);


 INT32U main()
{
    Node* list =NULL;

    printf("                 Linked lists\n\n");
    printList(list);
    insertAtLast(&list,100);
    insertAtLast(&list,150);
    insertAtLast(&list,200);
    insertAtLast(&list,250);

    deleteAtLast(&list);


    printList(list);


    return 0;
}
void insertAtFirst (Node** start,INT32U data){
    Node* newnode =(Node*)malloc(sizeof(Node));
    newnode->data =data;
    newnode->next = (*start);
    (*start)=newnode;
    }//to create node to insert data and next of nod
void insertAtLast (Node** start,INT32U data){
    Node* newnode =(Node*)malloc(sizeof(Node));
    Node* currentNode=(*start);
    newnode->data =data;
    newnode->next = NULL;
    if (currentNode == NULL){
        (*start)=newnode;
    }
    else {
        while(currentNode-> next !=NULL){

            currentNode=currentNode-> next;
        }
        currentNode-> next= newnode;
    }
}
void deleteAtFirst (Node** start){
    Node* deleteNode =(*start);
    if (deleteNode == NULL){
        printf("list is empty/n/n");
    }
    else{
        (*start)=(*start)->next;
    }
}
void deleteAtLast (Node** start){
    Node* currentNode =(*start);
    if(currentNode ==NULL){
        free(currentNode);
        (*start)=NULL;
    }
    else {
        while(currentNode-> next!=NULL){
            currentNode=currentNode->next;
        }
        free (currentNode->next);
        currentNode->next=NULL;
    }
}
void printList(Node* start){ //(node** start,INT32 data){
    Node* currentNode =start;
    INT32U counter = 0;
    if (currentNode==NULL){
        printf(" this is empty");
    }
    else{
        while(currentNode != NULL){
            counter++;
            printf("N%d : %d \n",counter,currentNode->data);
            currentNode =currentNode->next;
        }

    }


}
