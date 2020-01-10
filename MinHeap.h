#pragma once
#include "HeapNode.h"
#define  MAX_ELEMENT	200

class MinHeap
{
	
	int		 size;				
public:
	HeapNode 	node[MAX_ELEMENT];
	MinHeap( ) : size(0) { }
	bool isEmpty()	{ return size == 0; }
	bool isFull()	{ return size == MAX_ELEMENT-1; }

	HeapNode&	getParent(int i)	{ return node[i/2]; }
	HeapNode&	getLeft(int i)	{ return node[i*2]; }
	HeapNode&	getRight(int i)	{ return node[i*2+1];}

	// »ðÀÔ ÇÔ¼ö
	void insert( int key ) {
		if( isFull() ) return;

		int i = ++size;			

		while( i!=1 && key < getParent(i).getKey()) {	
			node[i] = getParent(i);			
			i /= 2;
		}
		node[i].setKey( key );				
	}

	HeapNode find() { return node[1]; }

	void display( ) {
		for(int i=1, level=1 ; i<= size ; i++){
			if( i == level ) {
				printf("\n");
				level *= 2;
			}
			node[i].display();
		}
	    	printf("\n-------------------------------------------");
	}
};