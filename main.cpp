#include "pch.h"
#include <iostream>

struct Node {

	int Value;
	Node* Next;

};

void printList(Node* n) {			//Takes a node pointer

	while (n!=NULL) {			//While the pointer isnt NULL
		
		std::cout << n->Value << std::endl;		//Print used for debugging purposes	
		n = n->Next;					//Value of n is swapped for the next pointer in the list, this makes it so we can iterate through all list objects and reach the null pointer

	}

}


void insertFNode(Node** head, int newValue) {   //Inserts node at the front of the list

	Node * NewNode = new Node();		//Adds Node object to memory

	NewNode->Value = newValue;		//Appends the int value from function param to object

	NewNode->Next = *head;			//Grabs the address of head param and that becomes the next node for this new head node

	*head = NewNode;			//Makes sure that now the new node is at the start of the list 
}


int main()
{
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();


	head->Value = 1;
	head->Next = second;

	second->Value = 2;
	second->Next = third;

	third->Value = 3;
	third->Next = NULL;


	printList(head);

	return 0;

}
