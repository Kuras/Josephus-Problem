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

/*
void solve (Ring ring);
void showAnswer (Ring ring);
*/

using namespace std;
int main (void){

	testJosephus();

	//Ring ring = newRing(41,3);
	//solve(ring);
	//showAnswer(ring);

	return EXIT_SUCCESS;
}
/*
void solve(Ring ring){
	if (size(ring) > 1){
		next(ring);
		remove(ring);
			solve(ring);
	}
}

void showAnswer (Ring ring){
	child children = current(ring);
	cout << children << "\n";
}



*/
