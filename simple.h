#ifndef SIMPLE_H
#define SIMPLE_H
struct node {
  int data;
  struct node *next;
};
int length(struct node *head);
struct node *BuildOneTwoThree();
int Count(struct node *head, int value);
#endif
