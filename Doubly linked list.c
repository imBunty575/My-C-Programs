#include<stdio.h>
#include<malloc.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void displayList(struct node* node)
{
    struct node* last;
    while (node != NULL)
    {
        printf("%d ", node->data);
        last = node;
        node = node->next;
    }
}

/*void reverse(struct node* nd)
{
    if(nd!=NULL)
    {
        reverse(nd->next);
        printf("%d ",nd->data);
    }
}*/

void insert(struct node** head, int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    struct node* temp = *head;
    if (*head == NULL)
    {
      newnode->prev = NULL;
      *head = newnode;
      return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

int main()
{
    struct node* head = NULL;
    char ch = 'y';
    int i = 1;
    int data;
    while(ch=='y' || ch=='Y')
    {
        printf("Enter Data For node-%d: ",i);
        scanf("%d",&data);
        insert(&head, data);
        if(i>=7)
        {
            printf("Do you want to enter more?(y/n): ");
            scanf(" %c",&ch);
        }
        i++;
    }
    displayList(head);
    return 0;
}
