/*
 * testjosephus.cpp
 *
 *  Created on: 3 sty 2014
 *      Author: Baraka
 */

#include "testjosephus.h"
#include "../Model/Josephus.h"
#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;

static void testNewRemoveRing();
static void testNextCurrent();
static void testSize();
static void testRemove();
//static void testLickMemo();
void testJosephus() {
	cout << "Testing start...\n";

//	testLickMemo();
	testNewRemoveRing();
	testNextCurrent();
	testSize();
	testRemove();

	cout << "All tests passed! Yeahhhh\n";
}

static void testNewRemoveRing() {
	cout << "	Testing new delete function\n";
	Ring ring = newRing(10);
	assert(ring != NULL);
	deleteRing(ring);
}

static void testNextCurrent() {
	cout << "	Testing next function\n";
	Ring ring = newRing(9);
	//if is next step corret for first sep from init
	next(ring, 3);
	assert(current(ring) == 3);
	next(ring, 3);
	assert(current(ring) == 5);
	next(ring, 3);
	assert(current(ring) == 7);
	next(ring, 3);
	assert(current(ring) == 9);
	//try for last one node if is good
	next(ring, 3);
	assert(current(ring) == 2);
	//
	next(ring, 1);
	assert(current(ring) == 2);
	//all cycle
	next(ring,9);
	assert(current(ring) == 1);

	deleteRing(ring);
}
static void testSize() {
	cout << "	Testing size function\n";
	Ring ring = newRing(1);
	assert(size(ring) == 1);
	deleteRing(ring);
	ring = newRing(2);
	assert(size(ring) == 2);
	deleteRing(ring);
	ring = newRing(3);
	assert(size(ring) == 3);
	deleteRing(ring);
	ring = newRing(100);
	assert(size(ring) == 100);
	deleteRing(ring);

}

static void testRemove() {
	cout << "	Testing remove function\n";
	Ring ring = newRing(9);
	remove(ring);
	assert(current(ring) == 2);
	remove(ring);
	assert(current(ring) == 3);
	remove(ring);
	assert(current(ring) == 4);
	remove(ring);
	assert(current(ring) == 5);
	remove(ring);
	assert(current(ring) == 6);
	remove(ring);
	assert(current(ring) == 7);
	remove(ring);
	assert(current(ring) == 8);
	remove(ring);
	assert(current(ring) == 9);
	remove(ring);
}
/*
static void testLickMemo(){
	int i = 0;
	while (i < 1000){
		cout << "Next ring\n";
		newRing(1000000000);
		i++;
	}
}
*/
