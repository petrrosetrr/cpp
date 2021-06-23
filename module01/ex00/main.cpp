//
// Created by Jimmie Alease on 6/20/21.
//
#include "Pony.h"

void ponyOnHeap() {
	Pony  *ponyHeap =  new Pony("heapPony");
	ponyHeap->sayHi();
	ponyHeap->eat();
	ponyHeap->sleep();
	ponyHeap->setName("newPonyOnHeapName");
	std::cout << "new PonyOnHeap is " << ponyHeap->getName() << std::endl;
	delete ponyHeap;
}

void ponyOnStack() {
	Pony ponyStack;
	ponyStack.sayHi();
	ponyStack.eat();
	ponyStack.sleep();
	ponyStack.setName("Stack pony");
	std::cout << "new PonyOnStack name  is " << ponyStack.getName() << std::endl;
}

int main() {
	ponyOnHeap();
	ponyOnStack();
}
