// flags: -O4,p -noThumb
extern void *FUN_02012554(void *);
extern void FUN_02065510(unsigned int, void *, unsigned int);
typedef struct { unsigned int pad[8]; unsigned int attribute; unsigned int freeList; unsigned int unitSize; } UnitHeap;
static inline unsigned short GetOpt(const UnitHeap *h) { return (unsigned short)(h->attribute & 0xff); }
void *FUN_0201256c(UnitHeap *heap) {
    void *p = FUN_02012554(&heap->freeList);
    if (p) {
        unsigned int sz = heap->unitSize;
        if (GetOpt(heap) & 1) FUN_02065510(0, p, sz);
    }
    return p;
}