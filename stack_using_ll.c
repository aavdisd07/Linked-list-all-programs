//STACK USING LINKED LIST------>>>>>>>

#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *top = NULL;
struct node *new = NULL;
struct node *push(int x)
{
  new = (struct node *)malloc(sizeof(struct node));
  struct node *temp;

  new->data = x;
  new->next = top;
  top = new;
};

struct node *pop()
{

  struct node *temp = top;

  printf("\n%d is popped\n", temp->data);

  top = top->next;
  temp->next = NULL;

  free(temp);
};
struct node *show()
{
  struct node *temp = top;
  while (temp != NULL)
  {
    printf("%d\t", temp->data);
    temp = temp->next;
  }
}
int main()
{
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);

  show();
  pop();
  pop();

  pop();
  pop();

  show();
}
