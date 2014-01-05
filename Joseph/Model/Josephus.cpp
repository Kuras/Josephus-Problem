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
	nodePtr list;
};
static void setUpRing (Ring ring,int numChild);

Ring newRing (int numChild){
	assert(numChild > 0);
	Ring listNode = (ring *)malloc(sizeof(ring));
	assert(listNode != NULL);
     setUpRing (listNode, numChild);
	return listNode;
}

static void setUpRing (Ring ring, int ammount){
	nodePtr current = (node *)malloc(sizeof(node));
	ring->list = current;
	current->name = 1;
	current->next = current;

	int name = 2;
	while (name <= ammount) {
		nodePtr temp = (node *)malloc(sizeof(node));
		current->next = temp;
		temp->name = name;
		temp->next = ring->list;

		current = temp;
		name++;
	}

}

