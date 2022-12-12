#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node*next;
 };
 struct node*front=NULL;
 struct node*rear=NULL;
 struct node*create(){
 int val;
 printf("enter value");
 scanf("%d",&val);
    struct node*nn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->next=NULL;
    return nn;
    }
    
 void enqueue(){
 struct node*nn;
 nn=create();
    if(front==NULL && rear==NULL){
      front=rear=nn;}
      else{
         rear->next=nn;
         rear=nn;
         }
         }
 void dequeue(){
   struct node*temp=front;
    if(front==NULL && rear==NULL)
      printf("empty");
    else if(front==rear)
       {
          free(temp);
          }
          else{
          front=front->next;
          free(temp);
          }
          }
void display(){
 struct node*temp=front;
  while(temp!=rear)
       {
         printf("%d ",temp->data);
         temp=temp->next;}
         
   printf("%d",rear->data);
   }
   void main(){
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   dequeue();
   display();
   }
 
 
