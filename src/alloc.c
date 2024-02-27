/* This is the source file for the _alloc functions. */
#include <sys/mman.h>


/* Mushroom heap INITliser.
   Just creates a new heap, alongside all of the meta
   data needed to work with it. */
void *minit(int size)
{
    return(0x0);
}


/* MUshroom aLLOCator!
   I would have named it malloc (Mushroom ALLOCator),
   but gcc kept on throwing warnings when I did that,
   and I couldn't be bothered to turn them off. */
void *mulloc(int size)
{
    return(0x0);
}
