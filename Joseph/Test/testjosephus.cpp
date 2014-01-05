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
static void testNext ();
void testJosephus(){
	cout << "Testing start...\n";

	testNewRemoveRing();
	testNext();

	cout << "All tests passed! Yeahhhh\n";
}

static void testNewRemoveRing(){
	cout << "	Testing new delete function";
	Ring ring = newRing(10);
	assert(ring != NULL);
	deleteRing(ring);
}

static void testNext (){
	cout << "	Testing next function";
	Ring ring = newRing(9);
	//if is next step corret for first sep from init
	next(ring, 3);
	assert(current(ring) == 3);
	next(ring, 3);
	assert(current(ring) == 6);
	next(ring, 3);
	assert(current(ring) == 9);
	//try for last one node if is good
	next(ring, 3);
	assert(current(ring) == 2);

	deleteRing(ring);
}
