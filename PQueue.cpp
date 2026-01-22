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

	node* curr = front;

	while(curr->priority < priority) {
		curr = curr->link;
	}
	
	node *temp3 = curr->link->link;
	curr->link = temp;

	curr->link->link = temp3;

}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
	/* Your code here */
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
	/* Your code here */
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{

	/* Your code here */
	
	/* Use the following out command for the data */
	std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;

}
	