#include<stdio.h>
#include<ctype.h>
#define N 20
int S[N];
int top=-1;
void push(int n){
 if(top==N-1)
 {
   printf("over flow");
   }
   else{
    top++;
    S[top]=n;
    }
    }
 int pop(){
 int c;
  if(top==-1)
  printf("under flow");
  else{
  c=S[top];
  top--;
  return c;
  }
  }
int eval(char post[]){
int a,b,c;
for(int i=0;post[i]!='\0';i++)
{
if(isdigit(post[i]))
  push(post[i]-'0');
 else{
 
  a=pop();
  b=pop();
  switch(post[i])
  { case '+': c=b+a;
             
             break;
    case '-': c=b-a;
           break;
   case '*' : c=b*a;
           break;
           
   case '/' : c=b/a;
           break;           
           
    }
    
    push(c);}
  }
  return c;
  }
  void main(){
  int re;
  char post[20];
   printf("enter expression");
   scanf("%s",post);
   re=eval(post);
   printf("%d ",re);
   }
