#include "Pony.hpp"

Pony* ponyOnTheHeap() {
    Pony* heapPony = new Pony("blue");

    return heapPony;
}

Pony ponyOnTheStack() {
    Pony stackPony = Pony("white");
    
    return stackPony;
}

int main(void) {

    Pony stackPony = ponyOnTheStack();
    Pony* heapPony = ponyOnTheHeap();
    
    stackPony.taunt();
    heapPony->charm();

    delete heapPony;

    return 1;
}