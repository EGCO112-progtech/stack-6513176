
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, int  value)
{
  NodePtr newN=(NodePtr)malloc(sizeof(Node));
  if(newN){
    newN->data=value;
    newN->nextPtr = s->top;
    s->top=newN;
    s->size++;
  }
}
char pop(StackPtr s)
{
  NodePtr t = s->top;
  if (s->size>0) {
    char value = t->data;
    s->top = t->nextPtr;
    free(t);
    s->size--;
    return value;
  } else {
    return 0;
  }
}
void pop_all(StackPtr s)
{
  while(s->size>0){
    pop(s);
  }
}
#endif
