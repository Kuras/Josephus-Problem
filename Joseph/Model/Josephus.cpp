/*
 * Josephus.cpp
 *
 *  Created on: 3 sty 2014
 *      Author: Baraka
 */


#include "Josephus.h"
#include <assert.h>

typedef struct node *nodePtr;
struct node{
	child name;
	nodePtr next;
};

struct ring{
	nodePtr current;
	nodePtr list;
};
static void setUpRing (Ring ring);

Ring newRing (int numChild){
	assert(numChild > 0);
	assert(step > 0);
	Ring ring = (struct ring *)malloc(size(struct ring));
	assert(ring != NULL);
     setUpRing (ring, numChild);
	return ring;
}
static void setUpRing (Ring ring, int ammount){
	ring->current = malloc(sizeof(struct node));
	ring->list = ring->current;
	ring->current->name = 1;
	ring->current->next = ring->current;

	int name = 2;
	while (name <= ammount) {
		nodePtr temp = malloc(sizeof(struct node));
		ring->current->next = temp;
		temp->name = name;
		temp->next = ring->list;

		ring->current = temp;
		name++;
	}

	ring->current = ring->list;

}

