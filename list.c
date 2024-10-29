#include "list.h"
#include <assert.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

int length(struct node *head) {
  int count = 0;
  // head != NULL
  while (head) {
    count++;
    head = head->next;
  }
  return count;
}

void Push(struct node **headRef, int data) {
  struct node *newNode = malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = *headRef; // The '*' to dereferences back to the real head
  *headRef = newNode;       // ditto
}

struct node *BuildWithSpecialCase() {
  struct node *head = NULL;
  struct node *tail;
  int i;
  // Deal with the head node here, and set the tail pointer
  Push(&head, 1);
  tail = head;
  // Do all the other nodes using 'tail'
  for (i = 2; i < 6; i++) {
    Push(&(tail->next), i); // add node at tail->next
    tail = tail->next;      // advance tail to point to last node
  }
  return (head); // head == {1, 2, 3, 4, 5};
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
  struct node *current;
  while (current) {
    current = *head;
    *head = (*head)->next;
    free(current);
  }
}

int pop(struct node **head) {
  assert(*head);
  struct node *current = *head;
  int data = current->data;
  *head = (*head)->next;
  free(current);
  return data;
}

void InsertNth(struct node **headRef, int index, int data) {
  assert(index >= length(*headRef));
  struct node *newNode = malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = NULL;

  if (index == 0 && *headRef == NULL) {
    newNode->next = *headRef;
    *headRef = newNode;
    return;
  }

  struct node *current = *headRef;
  while (index != 1) {
    index--;
    current = current->next;
  }

  newNode->next = current->next;
  current->next = newNode;
}
void SortedInsert(struct node **headRef, struct node *newNode) {
  if (*headRef == NULL || (*headRef)->data >= newNode->data) {
    newNode->next = *headRef;
    *headRef = newNode;
    return;
  }
  struct node *current = *headRef;
  while (current->next != NULL && current->next->data < newNode->data) {
    current = current->next;
  }
  newNode->next = current->next;
  current->next = newNode;
}
void InsertSort(struct node **headRef) {}
