#ifndef LIST_H
#define LIST_H
struct node {
  int data;
  struct node *next;
};
int length(struct node *head);
struct node *BuildOneTwoThree();
int Count(struct node *head, int value);
int GetNth(struct node *, int value);
void DeleteList(struct node **head);
#endif