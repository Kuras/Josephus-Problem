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
static void testNextCurrent ();
void testJosephus(){
	cout << "Testing start...\n";

	testNewRemoveRing();
	testNextCurrent();

	cout << "All tests passed! Yeahhhh\n";
}

static void testNewRemoveRing(){
	cout << "	Testing new delete function\n";
	Ring ring = newRing(10);
	assert(ring != NULL);
	deleteRing(ring);
}

static void testNextCurrent (){
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

	deleteRing(ring);
}
