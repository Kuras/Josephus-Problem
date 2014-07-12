/*
 * Josephus.h
 *
 *  Created on: 3 sty 2014
 *      Author: Baraka
 */

#ifndef JOSEPHUS_H_
#define JOSEPHUS_H_
#define THE_LAST_MAN 1

typedef int child;
typedef struct ring *Ring;

//returns a new Ring which represent Josephus data*
//parameters are count of child
//assums that numChild is possitive
Ring newRing (int numChild);

//free memory witch are used to allocate new ring*
//old pointer ring has null value
void deleteRing (Ring ring);

//returns size of Ring*
int size (Ring ring);

//sets up current pointer on next child*
//step got to be possitive
void next (Ring ring, int step);

//returns childe on which points current pointer*
child current (Ring ring);

//remove child from ring*
void remove (Ring ring);

#endif /* JOSEPHUS_H_ */
