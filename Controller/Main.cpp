/*
 * Main.cpp
 *
 *  Created on: 3 sty 2014
 *      Author: Baraka
 */
#include "../Model/Josephus.h"
#include "../Test/testjosephus.h"
#include<iostream>
#include<cstdlib>
using namespace std;


void solve (Ring ring);
void showAnswer (Ring ring);

using namespace std;

int step = 3;
int countOfMembers = 41;

int main (void){

	testJosephus();

//	Ring ring = newRing(countOfMembers);
//	solve(ring);
//	showAnswer(ring);

	return EXIT_SUCCESS;
}

void solve(Ring ring){
	if (size(ring) > THE_LAST_MAN){
		next(ring,step);
		remove(ring);
			solve(ring);
	}
}

void showAnswer (Ring ring){
	child children = current(ring);
	cout << "This is Josephus: " << children << "\n";
}




