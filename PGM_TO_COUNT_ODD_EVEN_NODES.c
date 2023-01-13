//PROGRAM TO COUNT ODD AND EVEN NODES IN LINKED LIST --------->>>>>>>>

#include <stdio.h>
#include <stdlib.h>
#define null 0;
struct node
{
  int data;
  struct node *link;
} * head;

int pos = 0, neg = 0, odd = 0, even = 0;
void create()
{
  struct node *p = head;
  head = (struct node *)malloc(sizeof(struct node));
  printf("Enter data-");
  scanf("%d", &head->data);
  head->link = p;
  p = head;
}
void all()
{
  int odd = 0, even = 0;
  struct node *x = head;
  while (x != NULL)
  {
    if (x->data % 2 != 0)
    {
      odd++;
    }
    else
    {
      even++;
    }
    x = x->link;
  }
  printf("\t\t\t\t\t\t\todd nodes are =%d\t", odd);
  printf("even nodes are =%d\n", even);
}
int main()
{
  int n;
  while (1)
  {
    printf("enter 1 for Create node and 2 for show \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
      create();break;
    }
    case 2:
    {
      all();break;
    }
    }
  }
}