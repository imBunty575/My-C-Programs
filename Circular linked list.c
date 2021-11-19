#include<stdio.h>
#include<malloc.h>
int stack[1000];
struct Node{
    int data;
    struct Node* next; 
};
typedef struct Node node;
void reverse(node*);
int main()
{
    node* nd;
    nd = (node*)malloc(sizeof(node));
    printf("Enter Data For Node-1: ");
    scanf("%d",&nd->data);
    int i = 2;
    int num_nodes=1;
    nd->next = NULL;
    node* head;
    head->next = nd;
    char ch = 'y';
    while(ch=='y' || ch=='Y')
    {
        nd->next = (node*)malloc(sizeof(node));
        nd = nd->next;
        printf("Enter Data For Node-%d: ",i);
        scanf("%d",&nd->data);
        nd->next = head;
        num_nodes++;
        if(i>=7)
        {
            printf("Do you want to enter more?(y/n): ");
            scanf(" %c",&ch);
        }
        i++;
    }
    nd = head->next;
    printf("Normal Linked List: ");
    while(nd !=head)
    {
        printf("%d ",nd->data);
        nd = nd->next;
    }
    printf("\n");
    return 0;
}