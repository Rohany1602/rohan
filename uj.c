#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
while(ptr!=NULL)
{
printf("Elemnts:%d\n",ptr->data);
ptr = ptr->next;
}
}
int main(){
struct node *head;
struct node *second;
struct node *third;
struct node *fourth;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)mallc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
fourth = (struct node*)malloc(sizeof(struct node));

head->next = second;
head->data = 20;

second->next = third;
second->data = 25;

third->next = fourth;
third->data = 29;

fourth->next = NULL;
fourth->data = 21;

linkedlisttraversal(head);

return 0;
