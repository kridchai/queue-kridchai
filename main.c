#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc,char **argv) {
  Queue Q;
  Q.head = NULL;
  Q.tail = NULL;
  Q.size = 0;

  int i;
  for(i = 1;i<argc;i++)
      Enqueue(&Q,atoi(argv[i]));
  return 0;
}