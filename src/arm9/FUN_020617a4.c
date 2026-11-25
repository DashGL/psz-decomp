// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S617a4 {
    unsigned int base;
    int dst;
    int src;
    unsigned int size;
};
extern void FUN_020656b8(void *, int, unsigned int);
extern void FUN_02065774(void *, const void *, unsigned int);

void FUN_020617a4(struct S617a4 *a, unsigned int start, unsigned int end, int zero) {
    if (start < 0x4000) {
        start = 0x4000;
    }
    if (end > 0x8000) {
        end = 0x8000;
    }
    if (start < a->base) {
        start = a->base;
    }
    if (end > a->base + a->size) {
        end = a->base + a->size;
    }
    if (start >= end) {
        return;
    }
    if (zero != 0) {
        FUN_020656b8((void *)(a->src + start), 0, end - start);
    } else {
        FUN_02065774((void *)(a->dst + start), (const void *)(a->src + start), end - start);
    }
}
