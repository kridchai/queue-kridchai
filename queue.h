#ifndef queue_h
#define queue_h
#include "node.h"

typedef struct{
  NodePtr head,tail;
  int size;
}Queue;

void Enqueue(Queue *Q,int x)
{
  NodePtr NewNode = (NodePtr)malloc(sizeof(Node));
  NewNode->value = x;
  NewNode->NextPtr = NULL;
  if(NewNode){
    if(Q->head==NULL)
    {
     Q->tail = NewNode;
     Q->head = NewNode;
   }
   else
    {
     NodePtr t = Q->tail;
     t->next = NewNode;
     Q->tail = NewNode;
   }
   Q->size++;
  }
}
int Dequeue(Queue *Q)
{
  if(Q->size > 0)
  {
     NodePtr t = Q->head;
    int x = t->value;
    if(Q->size==1)
     Q->tail==NULL;
    Q->head = t->NextPtr;
    free(t);
    Q->size--;
  }
 
  return x;
}
 





#endif