// Count number of even and odd nodes is linked list with  inserting and traversing node;
//Counting repetation of node using switch case;

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};
struct node *operator(struct node *temp)
{
  int e = 0, o = 0;
  while (temp != NULL)
  {
    if (((temp->data) % 2) != 0)
    {
      o = o + 1;
    }
    else
    {
      e = e + 1;
    }
    temp = temp->next;
  }

  printf("\n\t\t\n1)%d are odd nodes", o);
  printf("\n2)%d are even nodes ", e);
}

struct node *traversal(struct node *tra)
{
  printf(" ------>");
  while (tra != NULL)
  {
    printf("%d\t", tra->data);
    tra = tra->next;
  }
}
struct node *search(struct node *sea)
{
  int s, i = 0;

  printf("\nWhich number repetation you want\n");
  scanf("%d", &s);
  while (sea != NULL)
  {
    if (s == sea->data)
    {
      i = i + 1;
    }

    sea = sea->next;
  }
  printf("\n%d is found %d times in linked list\n", s, i);
}
struct node *insert(struct node *head)
{
  int i;
  struct node *run = head;
  while (run->next != NULL)
  {
    run = run->next;
  }
  printf("\nEnter the data in newnode\t");
  scanf("%d", &i);
  struct node *newnode = run;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = i;
  newnode->next = run->next;
  run->next = newnode;
}

int main()
{
  struct node *head = (struct node *)malloc(sizeof(struct node));
  int x;
  head->data = 13;
  head->next = NULL;

  while (1)
  {

    printf("\n\t\t\t\t\t1.traversal(head);\n\t\t\t\t\t2.operator(head);\n\t\t\t\t\t3.insert(head);\n\t\t\t\t\t4.search(head);\n");
    printf("Enter choice-");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
      traversal(head);
      break;
    case 2:
      operator(head);
      break;
    case 3:
      insert(head);
      break;
    case 4:
      search(head);
      break;
    case 5:
      exit(0);
      break;
    default:
      printf(" INVALID CHOICE\n");
    }
  }
  return 0;
}