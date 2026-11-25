// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct Block {
    struct Block *next;
    unsigned short slots[48];
    int count;
} Block;
extern void *FUN_020ba894(unsigned int);
Block *FUN_02037dd4(char *self) {
    Block *previous = 0;
    Block *block = *(Block **)(self + 24);
    while (block != 0) {
        if ((block->count >= 24 ? E1 : E0) == 0) {
            return block;
        }
        previous = block;
        block = block->next;
    }
    block = (Block *)FUN_020ba894(104);
    if (block != 0) {
        unsigned short *slot = block->slots;
        do {
            slot[0] = 0xffff;
            slot[1] = 0xffff;
            slot += 2;
        } while (slot < (unsigned short *)&block->count);
        block->count = 0;
        block->next = 0;
    }
    if (previous != 0) {
        previous->next = block;
    } else {
        *(Block **)(self + 24) = block;
    }
    return block;
}
