#include "alloc.h"
#include <sys/mman.h>


/* Mushroom heap INITliser.
   Just creates a new heap, alongside all of the meta
   data needed to work with it.
   Returns a pointer to the start of this new heap. */
int minit(heap_t *heap, int size)
{
    if(heap == 0x0) return(1);

    /* Allocate memory for the heap. */
    heap->size = size;
    heap->heap = mmap(0x0, heap->size, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANON, -1, 0);

    if(heap->heap == MAP_FAILED) return(2);

    /* Allocate memory for the heap's meta data. */
    heap->mSize = heap->size / CHUNKSIZE;
    heap->mHeap = mmap(0x0, heap->mSize, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANON, -1, 0);
    
    /* Initalise all spaces as free */
    //    for(int i = 0; i < heap->size; i++) heap->mHeap[i] = heap->(char *)heap[i * CHUNKSIZE];
    return(0);
}

/* MUshroom aLLOCator.
   I would have named it malloc (Mushroom ALLOCator),
   but gcc kept on throwing warnings when I did that,
   and I couldn't be bothered to turn them off.
   Returns a pointer to the start of the allocated area. */
void *mulloc(int size)
{
    return(0x0);
}

/* MUshroom DEallocator
   Also means tired in German.
   Maybe the pointers are just tired, and want a rest... */
int mude(heap_t *heap)
{
    int returnCode;
    returnCode = munmap(heap->heap, heap->size);
    
    return(returnCode);
}
