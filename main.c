#include "list.h"
#include <stdio.h>
int main() {
  struct node *list = BuildOneTwoThree();
  int dato = pop(0);
  printf("%d", dato);
  return 0;
}
