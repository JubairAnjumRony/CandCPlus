#include<stdio.h>
#include<stdlib.h>
struct node{
  int value;
  struct node *next;
};
struct node* head = NULL;
void insertatthebegining(){
    int valu;
    struct node* new_node=malloc(sizeof(struct node));
    printf("Enter number to be inserted:");
    scanf("%d",&value);
    new_node->value = valu;
    new_node->next = head;
    head=new_node;
}

void printLinkedlist(struct node *p){
  while(p !=NULL){
    printf("%d\t",p->value);
    p=p->next;
  }

}
int main(){
  //initialize nodes
  struct node *newNode;
  newNode =malloc(sizeof(struct node)); 
  newNode->value=4;
  
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  struct node *four = NULL;
  //allocating memory adress
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));
  four = malloc(sizeof(struct node));
  //assigning values
  one->value = 5;
  two->value =6;
  three->value = 7;
  four->value = 8;
  //connecting nodes
  newNode->next=head;
  newNode->next=one;
  newNode->next =two;
  two->next = three;
  three->next = four;
  four->next = NULL;
  //printing node values
  head=newNode;
    insertatthebegining();
  printLinkedlist(head);

}