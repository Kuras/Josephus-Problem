/*
 * testjosephus.cpp
 *
 *  Created on: 3 sty 2014
 *      Author: Baraka
 */

#include "testjosephus.h"
#include "../Model/Josephus.h"
#include <iostream>
#include <assert.h>

using namespace std;

static void testNewRing();
void testJosephus(){
	cout << "Testing start...\n";

	testNewRing();

	cout << "All tests passed! Yeahhhh\n";
}

static void testNewRing(){
	Ring ring = newRing(10);
	assert(ring != nullptr);

}
