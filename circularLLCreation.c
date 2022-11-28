

//CIRCULAR LINKED LIST 

#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node *traversal(struct node *start)
{
  struct node *temp;
  temp = start;

  while (temp->next != start)
  {

    printf("%d ->", temp->data);
    temp = temp->next;
  }
  printf("%d ", temp->data);
}

int main()
{
  struct node *first = (struct node *)malloc(sizeof(struct node));
  struct node *second = (struct node *)malloc(sizeof(struct node));
  struct node *third = (struct node *)malloc(sizeof(struct node));
  struct node *fourth = (struct node *)malloc(sizeof(struct node));
  struct node *fifth = (struct node *)malloc(sizeof(struct node));
  first->data = 1;
  second->data = 2;
  third->data = 3;
  fourth->data = 4;
  fifth->data = 5;
  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = first;

  traversal(first);

  return 0;
}