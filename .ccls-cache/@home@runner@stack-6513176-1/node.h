//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//
#include <stdio.h>
#include <stdlib.h>
#ifndef linkedlist_h
#define linkedlist_h
struct node {
  int data;
  struct node *nextPtr;
  struct node *pop;
};

typedef struct node Node;
typedef struct node *NodePtr;/*
void push(NodePtr *top, int x) {
  Node *newN = (NodePtr)malloc(sizeof(Node));
  if (newN) {
    newN->data = x;
    newN->nextPtr = *top;
    *top = newN;
  }
}
int pop(NodePtr *top) {

  NodePtr t = *top;
  if (t != NULL) {
    int value = t->data;
    *top = t->nextPtr;
    free(t);
    return value;
  } else {
    printf("cant pop");
    return 0;
  }
}*/
#endif
