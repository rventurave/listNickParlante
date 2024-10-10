#include "simple.h"
#include <cstddef>
#include <stdlib.h>
int length(struct node *head) {
  int count = 0;
  // head != NULL
  while (head) {
    count++;
    head = head->next;
  }
  return count;
}
/*
 Build the list {1, 2, 3} in the heap and store
 its head pointer in a local stack variable.
 Returns the head pointer to the caller.

struct node *BuildOneTwoThree() {
  struct node *head = NULL;
  struct node *second = NULL;
  struct node *third = NULL;

  head = malloc(sizeof(struct node)); // allocate 3 nodes in the heap
  second = malloc(sizeof(struct node));
  third = malloc(sizeof(struct node));

  head->data = 1;      // setup first node
  head->next = second; // note: pointer assignment rule
  second->data = 2;    // setup second node
  second->next = third;
  third->data = 3; // setup third link
  third->next = NULL;
  // At this point, the linked list referenced by "head"
  // matches the list in the drawing.
  return head;
}
*/
struct node *BuildOneTwoThree() {
  struct node *head = malloc(sizeof(struct node));
  head->data = 1;
  head->next = malloc(sizeof(struct node));

  head->next->data = 2;
  head->next->next = malloc(sizeof(struct node));

  head->next->next->data = 3;
  head->next->next->next = NULL;
  return head;
}
