#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *link;
};


//Funcrtion to print the nodes or say, the linked list after is created in the main function
void print_list(struct node *head)
{

  //Defininf a temporary pointer variable of the type "node" to traverse the list
 struct node *temp = malloc(sizeof(struct node));
 temp = head;                    //Makes the temp and head to point at the same (i.e. first node) of the linked list

 while(temp != NULL)                                       
 {
  printf("%d->", temp->data);       //Printing the data at the position where temp is pointing 
  temp = temp->link;                //Shifting temp towards the end of the list by 1 unit after printing the data of the current node
 }

 free(temp);                        //Frees the space allocated to pointer variable temp
 
}

int main()
{
 int n, num;
 //taking input for the nuumber of nodes to be inserted
 printf("Enter the number of nodes to add to the list ");
 scanf("%d", &n);

 struct node *head = malloc(sizeof(struct node));
 printf("Enter the data for the head element: \n");
 scanf("%d->", &head->data);

head->link =NULL;


struct node *ptr = malloc(sizeof(struct node));
// struct node *p = malloc(sizeof(struct node));          //If this line is added here instead of inside the loop, then pointer variable p beomes a global variable and when defined outside the loop, it cannot be used as pointer to the new node inserted at the link of pointer variable ptr

ptr = head;

 //Taking the user input for the data of the rest of the nodes 
 for(int i = 1; i<n; i++)
 {
  struct node *p = malloc(sizeof(struct node));                   //pointer variable p is allocated with memory every time the loop runs so that it can point to new nodes and connect them to the link of pointer variable ptr. This new memory is set free below in the line -> p = NULL; //This is basically making the pointer variable p empty
  
  printf("Enter the value of the element no. %d ", i);
  scanf("%d", &num);
  p->data = num;
  p->link =NULL;

  ptr->link = p;
  ptr = ptr->link; 
  p = NULL;   
 }
  print_list(head);
  free(ptr);
  return 0;
}