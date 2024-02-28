#define CHUNKSIZE 16


/* The heap itself.
   I might merge this with the heap meta data
   structure at some point... */
typedef struct heapStruct {
    void *heap;
    int heapSize;
    void **free;
    int freeSize;
} heap_t;


/* Returns
   0 on success,
   1 on uninitalised heap error,
   2 on mmap failure */
int minit(heap_t *heap, int size);
void *mulloc(int size);
int mude(heap_t *heap);
