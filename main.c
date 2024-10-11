#include "simple.h"
int main() {
  struct node *list = BuildOneTwoThree();
  int c = Count(list, 2);
  return 0;
}
