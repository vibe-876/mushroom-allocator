# mushroom-allocator
I wanted to have a better understanding of how the various _alloc functions, the heap data structure, and operating system memory managment in general worked, so I'm writing this. My only real rule for this is that I can't use anything in stdlib.h; everything else is fair game (such as sys/mman.h).

This is part of a long term project called Mushroom, which is an operating system.

As with most of my projects, you probably don't want to use this.

## What Does This Actually Do?
This is just a heap, and some functions to use with it (equivelents of malloc, free, etc).

There's no reason to use this over something else (glibc or musl or something); it's more of a learning exercise for me than anything else.


## ToDo
- Come up with a better name for this.