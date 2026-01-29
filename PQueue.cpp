/*
 * LaQueue
 * 
 * 
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *  
 * (c) copyright 2018, James Shockey - all rights reserved
 * 
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"



/*
 * Class Priority Queue
 */

		
/*
* Insert into Priority Queue
*/
void PQueue::push(void *item, int priority)
{
	/* Your code here */

	node * temp = new node();
	temp->data = item;
	temp->priority = priority;
	temp->link = NULL;

	if (front == NULL || priority > front->priority) {
		temp->link = front;
		front = temp;
		return;
	}

	node* curr = front;
	while (curr->link != NULL && priority <= curr->link->priority) {
		curr = curr->link;
	}
	
	temp->link = curr->link;
	curr->link = temp;
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{

	if(front == NULL) {
		return NULL;
	}
	
	return front->data;
}

/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
	if(front == NULL) {
		return ;
	}
	node* discard = front;
	front = front->link;
	delete discard;
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{
	/* Your code here */
	node* ptr = front;

	/* Use the following out command for the data */
	std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;
}
	