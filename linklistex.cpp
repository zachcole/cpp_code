/***************************************************************

This is example code of a simple linked list.

Zach Cole

***************************************************************/

#include <iostream>
using namespace std;

//structure for each node
// ---------
// | data  |
// |=======|
// |  next |---->
// ---------
struct node {
	
	int data;
	node* next;
	
};

node* n;	//new node pointer
node* t;	//temporary node pointer
node* h;	//header node

int main(){
	
	n = new node;	//n points to newly created node
	n -> data = 1;	//sets value for data variable
	t = n;			//t points to same node n is pointing to.  t will follow n
	h = n;			//h points to same node n is pointing to.  h will stay put
	
	n = new node;	//n is now pointing to a new node
	n -> data = 2;	//sets value for data variable
	t -> next = n;	//points next from first node and points to second node, or n 
	t = t -> next;	//advance t. (in other words, t = n)
	
	n = new node;	//same process as above
	n -> data = 3;
	t -> next = n;
	t = t -> next;
	
	n = new node;	//....and again
	n -> data = 4;
	t -> next = n;
	
	n -> next = NULL;	// terminates list.  next points to nothing.
	
	return 0;
}

