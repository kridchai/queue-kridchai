#ifndef queue_h
#define queue_h
#include "node.h"

typedef struct{
  OrderPtr head,tail;
  int size;
}Queue;

void Enqueue(Queue *Q,int x,int y)
{
  OrderPtr NewNode = (OrderPtr)malloc(sizeof(Order));
  NewNode->order_number = x;
  NewNode->q = y;
  NewNode->NextPtr = NULL;
  if(NewNode){
    if(Q->head==NULL)
    {
     Q->tail = NewNode;
     Q->head = NewNode;
   }
   else
    {
     OrderPtr t = Q->tail;
     t->NextPtr = NewNode;
     Q->tail = NewNode;
   }
   Q->size++;
  }
}
int Dequeue(Queue *Q,int *y)
{
  int x;
  if(Q->size > 0)
  {
     OrderPtr t = Q->head;
    x = t->order_number;
    *y = t->q;
    if(Q->size==1)
      Q->tail==NULL;
    Q->head = t->NextPtr;
    free(t);
    Q->size--;
  }
 
  return x;
}
 





#endif