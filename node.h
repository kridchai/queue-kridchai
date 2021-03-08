#ifndef node_h
#define node_h

struct node{
  int value;
  struct node * Next;
};
typedef struct node Node;
typedef struct node* NodePtr;



struct order{
  int order_number;
  int q;
  struct order *NextPtr;
};
typedef struct order Order;
typedef struct order* OrderPtr;
#endif

