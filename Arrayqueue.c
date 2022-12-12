#include<stdio.h>
#define M 20
int Q[M];
int rear=-1;
int front=-1;
void enqueue(){
int a;
 printf("enter a value");
 scanf("%d",&a);
 if(front==-1 && rear==-1)
 {
   front=rear=0;
   Q[rear]=a;
   }
   else if(rear==M-1)
   printf("over flow");
   else{
     rear++;
      Q[rear]=a;
      }
      }
void dequeue(){
   if(front==-1 && rear==-1)
      printf("empty");
   else if(front==rear)
   {
   front=rear=-1;
   }
   else{
    front++;
    }
    }
void display(){
  int i;
  for(i=front;i!=rear;i++)
     printf("%d ",Q[i]);
 printf("%d ",Q[rear]);
     
}
   
     
void main(){
 enqueue();
 enqueue();
 enqueue();
 enqueue();
 dequeue();
 dequeue();
 display();
 }
