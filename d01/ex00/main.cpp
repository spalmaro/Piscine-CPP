#include "Pony.hpp"

Pony* ponyOnTheHeap() {
    Pony* heapPony = new Pony("blue"); // the 'new' keyword creates the Pony instance on the heap

    return heapPony;
}

Pony ponyOnTheStack() {
    Pony stackPony = Pony("white"); // creating the instance directly without the 'new' keyword goes on the stack
    
    return stackPony;
}

int main(void) {

    Pony stackPony = ponyOnTheStack();
    Pony* heapPony = ponyOnTheHeap();
    
    stackPony.taunt();
    heapPony->charm();

    delete heapPony; //heapPony destructor called here

    return 1; //stackPony destructor called here
}