#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
};
// at start,
// at end
// after the node
// at index
// DELETE HEAD NODE---------------------------->
struct node *deleteATstart(struct node *head)
{
  struct node *temp = head;
  printf("\n%d is deleted ", temp->data);
  head = head->link;
  temp->link = NULL;
  free(temp);
  return head;
}
// DELETE  END  NODE---------------------------->
struct node *deleteATend(struct node *ptr)
{
  struct node *p = ptr;
  struct node *q = p->link;
  if (p->link == NULL)
  {
    printf("\n%d is deleted\n", p->data);
    free(p);
  }

  while (q->link != NULL)
  {
    p = p->link;
    q = q->link;
  }
  printf("\n%d is deleted\n", q->data);
  p->link = p->link->link;
  free(q);
  return ptr;
}
// INSERT A  NODE AT VARIABLE POSITION---------------------------->
struct node *insertnode(struct node *ptr, int pos, int data)
{
  struct node *prev = ptr;
  struct node *new = (struct node *)malloc(sizeof(struct node));
  for (int i = 0; i < pos - 1; i++)
  {
    prev = prev->link;
  }
  new->link = prev->link;
  new->data = data;
  prev->link = new;
  return ptr;
} // DELETE AT FIX NODE---------------------------->
struct node *delatnode(struct node *ptr, int pos)
{
  struct node *prev = ptr;

  for (int i = 0; i < pos - 1; i++)
  {
    prev = prev->link;
  }
  struct node *p = prev->link;

  prev->link = prev->link->link;

  free(p);
}
// DELETE AFTER A  NODE---------------------------->
struct node *delafteranode(struct node *ptr, int pos)
{
  struct node *prev = ptr;
  struct node *next = prev->link;

  for (int i = 0; i < pos; i++)
  {
    prev = prev->link;
    next = next->link;
  }
  prev->link = prev->link->link;
  next->link = NULL;
  free(next);

  return ptr;
} // TRAVERSE A LINKED LIST---------------------------->
struct node *travelsal(struct node *ptr)
{
  struct node *p = ptr;
  while (ptr != NULL)
  {
    printf("%d ", ptr->data);
    ptr = ptr->link;
  }
}
int main()
{
  struct node *head;
  head = (struct node *)malloc(sizeof(struct node));
  ;
  struct node *first = (struct node *)malloc(sizeof(struct node));
  struct node *second = (struct node *)malloc(sizeof(struct node));
  struct node *third = (struct node *)malloc(sizeof(struct node));
  head->data = 12;
  first->data = 24;
  second->data = 36;
  third->data = 48;
  head->link = first;
  second->link = third;
  first->link = second;
  third->link = NULL;
  insertnode(head, 2, 52);
  travelsal(head);
  printf("\n\t\n");
  insertnode(head, 2, 80);
  travelsal(head);
  delatnode(head, 1);
  printf("\n\t\n");
  travelsal(head);
  delafteranode(head, 3);
  printf("\n\t\n");
  travelsal(head);
  deleteATend(head);
  travelsal(head);
  head = deleteATstart(head);
  printf("\n\t\n");
  travelsal(head);
  return 0;
}