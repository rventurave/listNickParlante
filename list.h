#ifndef LIST_H
#define LIST_H
struct node {
  int data;
  struct node *next;
};
int length(struct node *head);
void Push(struct node **headRef, int data);
struct node *BuildWithSpecialCase();
struct node *BuildOneTwoThree();
int Count(struct node *head, int value);
int GetNth(struct node *, int value);
void DeleteList(struct node **head);
int pop(struct node **head);
void InsertNth(struct node **headRef, int index, int data);
void SortedInsert(struct node **headRef, struct node *newNode);
void InsertSort(struct node **headRef);
#endif
