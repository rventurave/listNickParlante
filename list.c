#include "list.h"
#include <assert.h>
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
truct node *BuildOneTwoThree() {
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
  third->data = 3;
  third->next = NULL;}
*/

int Count(struct node *head, int value) {
  int count = 0;
  while (head) {
    if (head->data == value) {
      count++;
    }
    head = head->next;
  }

  return count;
}

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

int GetNth(struct node *head, int idx) {
  // assert(head);
  // assert(0 <= idx < length(head));
  while (idx) {
    head = head->next;
    idx--;
  }
  return head->data;
}
void DeleteList(struct node **head) {
  struct node *current = *head;
  while (current) {
  }
}
