// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x108, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Block_02067904 {
    struct Block_02067904 *prev;
    struct Block_02067904 *next;
    int size;
};
struct HeapDesc_02067904 {
    void *f0;
    struct Block_02067904 *free_list;
    struct Block_02067904 *alloc_list;
};
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern struct Block_02067904 *FUN_02067834(struct Block_02067904 *, struct Block_02067904 *);
extern struct Block_02067904 *FUN_02067818(struct Block_02067904 *, struct Block_02067904 *);
extern int *DAT_02118400[];

void *FUN_02067904(int arg0, int arg1, int arg2) {
    struct HeapDesc_02067904 *hd;
    struct Block_02067904 *blk;
    int irq = FUN_020683d4();
    int *arena = DAT_02118400[arg0];
    int rem;

    if (arena == 0) {
        FUN_020683e8(irq);
        return 0;
    }
    if (arg1 < 0) {
        arg1 = arena[0];
    }
    hd = (struct HeapDesc_02067904 *)arena[4] + arg1;
    blk = hd->free_list;
    arg2 = (arg2 + 0x3f) & ~0x1f;
    for (; blk != 0; blk = blk->next) {
        if (arg2 <= blk->size) {
            break;
        }
    }
    if (blk == 0) {
        FUN_020683e8(irq);
        return 0;
    }
    rem = blk->size - arg2;
    if ((unsigned int)rem < 0x40) {
        hd->free_list = FUN_02067834(hd->free_list, blk);
    } else {
        struct Block_02067904 *split = (struct Block_02067904 *)((char *)blk + arg2);
        blk->size = arg2;
        split->size = rem;
        split->prev = blk->prev;
        split->next = blk->next;
        if (split->next != 0) {
            split->next->prev = split;
        }
        if (split->prev != 0) {
            split->prev->next = split;
        } else {
            hd->free_list = split;
        }
    }
    hd->alloc_list = FUN_02067818(hd->alloc_list, blk);
    FUN_020683e8(irq);
    return (char *)blk + 0x20;
}
