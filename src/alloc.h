#define CHUNKSIZE 16


/* The heap itself, alongside it's meta data. */
typedef struct heapStruct {
    void *heap;
    int size;
    void **mHeap;
    int mSize;
} heap_t;


/* Returns
   0 on success,
   1 on uninitalised heap error,
   2 on mmap failure */
int minit(heap_t *heap, int size);
/* Returns
   0 on success
   3 on failure */
void *mulloc(int size);
/* Returns
   0 on success
   5 on failure */
int mude(heap_t *heap);
