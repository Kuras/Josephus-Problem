/*
 * Josephus.cpp
 *
 *  Created on: 3 sty 2014
 *      Author: Baraka
 */


#include "Josephus.h"
#include <cassert>
#include <cstdlib>

typedef struct node *nodePtr;
struct node{
	child name;
	nodePtr next;
};

struct ring{
	int size;
	nodePtr list;
};
static void setUpRing (Ring ring,int numChild);

Ring newRing (int numChild){
	assert(numChild > 0);
	Ring listNode = (ring *)malloc(sizeof(ring));
	assert(listNode != NULL);
	 listNode->size = numChild;
     setUpRing (listNode, numChild);
	return listNode;
}

static void setUpRing (Ring ring, int ammount){
	assert(ammount > 0);
	nodePtr current = (node *)malloc(sizeof(node));
	assert(current != NULL);
	ring->list = current;
	current->name = 1;
	current->next = current;

	int name = 2;
	while (name <= ammount) {
		nodePtr temp = (node *)malloc(sizeof(node));
		assert(temp != NULL);
		current->next = temp;
		temp->name = name;
		temp->next = ring->list;

		current = temp;
		name++;
	}

}

void deleteRing (Ring ring){
	assert(ring != NULL);
	free(ring);
	assert(ring != NULL);
	ring = NULL;
	assert(ring == NULL);
}

void next (Ring ring, int step){
	assert(step > 0);
	int location = 1;
	while (location < step){
		ring->list = ring->list->next;
		location++;
	}
	assert(location == step);
}

child current (Ring ring){
	child childName;
	childName = ring->list->name;
	assert(childName > 0);
	return childName;
}

int size (Ring ring){
/*	int sizeRing = 1;
	nodePtr current = ring->list;
	while (current->next != ring->list){
		sizeRing++;
		current = current->next;
	}

	return sizeRing;
*/
	return ring->size;
}
void remove (Ring ring){
	assert(size(ring) > 0);
	if (size(ring) == 1){
		free(ring->list);
		ring->list = NULL;
	}else{
		nodePtr current = ring->list;
		next(ring,size(ring));
		nodePtr previous = ring->list;
		ring->list = current->next;

		previous->next = ring->list;
		current->next = NULL;
		free(current);
		current = NULL;
	}
	ring->size--;
	assert(size(ring) >= 0);
}
