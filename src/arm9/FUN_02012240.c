// flags: -O4,p -noThumb
extern int FUN_02000ec4(int);
typedef struct MemBlock {
    unsigned int unk0;
    unsigned int size;
    struct MemBlock *prev;
    struct MemBlock *next;
} MemBlock;

unsigned int FUN_02012240(unsigned char *self, int alignment) {
    unsigned int maxSize;
    unsigned int offsetMin;
    MemBlock *p;
    alignment = FUN_02000ec4(alignment);
    maxSize = 0;
    offsetMin = 0xffffffff;
    for (p = *(MemBlock **)(self + 0x24); p != 0; p = p->next) {
        unsigned int base = (unsigned int)(p + 1);
        unsigned int addr = ((alignment - 1) + base) & ~(alignment - 1);
        unsigned int end = p->size + base;
        if (addr < end) {
            unsigned int size = end - addr;
            unsigned int offset = addr - base;
            if (maxSize < size || (maxSize == size && offsetMin > offset)) {
                maxSize = size;
                offsetMin = offset;
            }
        }
    }
    return maxSize;
}
