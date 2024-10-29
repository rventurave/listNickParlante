#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  struct node *list = NULL;
  struct node *newNode = malloc(sizeof(struct node));
  newNode->data = 1;
  struct node *newNode2 = malloc(sizeof(struct node));
  newNode2->data = 2;
  struct node *newNode3 = malloc(sizeof(struct node));
  newNode3->data = 3;

  SortedInsert(&list, newNode2);
  SortedInsert(&list, newNode3);
  SortedInsert(&list, newNode);
  return 0;
}
