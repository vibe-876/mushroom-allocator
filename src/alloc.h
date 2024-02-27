#define CHUNK 16


/* The heap itself.
   I might merge this with the heap meta data
   structure at some point... */
typedef struct heapStruct {
    void *heap;
    int size
} heap_t;

/* Meta data for the heap structure
   Probably declare a global of this,
   alongside a heap. */
typedef struct heapMetaStuct {
    /* Points to all free memory chunks. */
    void **free;
    int size;
} heapMeta_t;


void *minit(int size);
void *mulloc(int size);
