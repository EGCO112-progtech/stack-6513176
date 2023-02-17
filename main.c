
#include "node.h"
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void push(NodePtr *top, int x);
int pop(NodePtr *top);*/
void pop_all(StackPtr s);
char pop(StackPtr s);
void push(StackPtr s, int value);

int main(int argc, char **argv) {

  int i, N, j, k;
  NodePtr top = NULL;
  Stack s;
  s.size = 0;
  
  for (i = 1; i < argc; i++) {
    N = 0;
  k = 0;
    for (j = 0; j < strlen(argv[i]); j++)
      switch (argv[i][j]) {
      case '{':
      case '[':
        push(&s, argv[i][j]);
        k++;
        break;
      case '}': {
        if (pop(&s) != '{') {
          N = 1;
        }
        k--;
        break;
      }
      case ']': {
        if (pop(&s) != '[') {
          N = 1;
        }
        k--;
        break;
      }
      }
    if (N == 1||s.size!=0) {
      printf("argv %d : Incorrect", i);
      if (k < 0) {
        printf(": too many closed parenthesis\n");
      }
      if (k > 0) {
        printf(": too many open parenthesis\n");
      }
      if (k == 0)
        printf(" mismatch\n");
      N = 0;
      }
    else{
      printf("argv %d Correct\n",i);}
  pop_all(&s);    
    }
    

}
