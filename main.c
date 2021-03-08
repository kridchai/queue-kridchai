#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

int main(int argc,char **argv) {
  Queue Q;
  Q.head = NULL;
  Q.tail = NULL;
  Q.size = 0;

  int i = 1;
  int order,qu,customer = 1,pay,cash;
  char food[20];
  while(i<=argc-1)
      {
        if(strcmp(argv[i],"x")!=0)
          {
            Enqueue(&Q,atoi(argv[i]),atoi(argv[i+1]));
            printf("My order is %d\n",atoi(argv[i]));
            i+=2;
          }
        else
          {
            order = Dequeue(&Q,&qu);
            switch(order)
            {
              case 1: pay = qu * 100;strcpy(food,"Ramen");break;
              case 2: pay = qu * 20;strcpy(food,"Somtum");break;
              case 3: pay = qu * 50;strcpy(food,"Fried Chicken");break;
            }
            printf("customer no. %d\n",customer);
            printf("%s\n",food);
            printf("you have to pay %d\n",pay);
            printf(":cash :");
            scanf("%d",&cash);
            if(cash<pay)
            {
              printf("cash : %d\n",pay);
              printf("thank you\n");
            }
            else
            {
              printf("thank you\n");
              printf("change is %d\n",cash-pay);
            }
            customer+=1;
            i+=1;
            
          }
      } 
      printf("there are %d left in the queue\n",Q.size); 
  
  return 0;
}