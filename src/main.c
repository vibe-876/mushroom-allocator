#include "alloc.h"

#include <stdio.h>


int main(int argc, char *argv[])
{
    int errorCode;
    heap_t myHeap;
    
    if((errorCode = minit(&myHeap, 64)) != 0) fprintf(stderr, "ERROR: %d\n", errorCode);

    mude(&myHeap);
    
    return(0);
}
