#ifndef node_h
#define node_h

struct node{
  int value;
  struct node * NextPtr;
};
typedef struct node Node;
typedef struct node* NodePtr;



typedef struct{
  int order_number;
  int q;
  struct Order *NextPtr;
}Order;

typedef Order* OrderPtr;
#endif

