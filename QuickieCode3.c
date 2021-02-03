//linked list (stack)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//our simple data node structure
typedef struct dataNode {
    double data;
    struct dataNode * next;
} node;

//Receives a pointer to caller's list pointer AND a value
//Creates a new data node and adds it to the 
//    front of user's list
void push(node ** list, double value) {
    node * newNode = malloc(sizeof(node));
    newNode -> next = *list;
    newNode->data = value;
    *list = newNode;
	printf("Added %.6f to our list\n", value);
}

//Receives a pointer to a list; 
//Traverses the list, printing each node's addrs & value
void printStack(node* list) {
    printf("\n\nThe stack has:\n");
    printf("%10s \t %10s\n", "Address", "Value");
    node* ptr = list;
    while (ptr != NULL) {
        printf("%10p \t %10f\n", ptr, ptr->data);
        ptr = ptr->next;
    }
    printf("%p is the end of the list\n\n", ptr);
}



/************************************************
******************** M A I N ********************
************************************************/
int main () {
    node *head = NULL;	//our linked list (empty for now)
    time_t t;			//to seed RNG

	//Init
    srand((unsigned) time(&t));	//seed RNG
	printf ("A simple Linked List example ~ a stack\n\n");

	//push some doubles to our list
    push(&head, rand()/(double)RAND_MAX);
    push(&head, rand()/(double)RAND_MAX);
    push(&head, rand()/(double)RAND_MAX);
    push(&head, -1.0);   //last value added

    printStack(head);	//print the list (LIFO)

    node *curr = head;

    //garbage collection needed
    while(curr != NULL){
        curr = curr -> next;
        free(head);
        head = NULL;
        head = curr;
    }

    printStack(head);	//print the list (LIFO)

    printf("\n\n\n\t<< normal termination >>\n");
	return 0;
}