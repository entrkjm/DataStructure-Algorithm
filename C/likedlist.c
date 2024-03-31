#include <stdio.h>
#include <stdlib.h>

struct NODE {       // Declaration of NODE structure
    int data;         // Data stored to NODE
    struct NODE *pNext;  // Pointer structure pointing at the next NODE
};

struct NODE *pHead;    // Structure pointer variable declaration

void push(int data){
    struct NODE *pEnd = malloc(sizeof(struct NODE));  // memory allocation
    pEnd->pNext = pHead->pNext;     // Next of phead is not pEnd's next
    pEnd->data = data;    // Input data is assigned to pEnd->data
    pHead->pNext = pEnd;  // pEnd is now the next node of pHead
}

int pop(){
    int ret;   // return value
    struct NODE *pDel = pHead->pNext;   // Now the next node of pHead is assigned to pDel
    pHead->pNext = pDel->pNext;    // The next node of pHead is the next of pDel(next of next of pHead)
    ret = pDel->data;   // return value is assigned to ret
    free(pDel);   // release memory
    return ret;   / return ret
}

int main() {
    int r;
    pHead = malloc(sizeof(struct NODE));   // memory allocation
    pHead->pNext = NULL;   // pHead->pNext is NULL
    
    push(10);   // push 10
    push(20);  // push 20
    push(30);  // push 30
    
    r = pop();        // pop and popped value goes to r (30)
    printf("%d", r);  // print
    r = pop();        // pop and popped value goes to r (20)
    printf("%d", r);  // print
    r = pop();       // pop and popped value goes to r (10)
    printf("%d", r);  // print

    return 0;  // return 0 and terminate the program
}
