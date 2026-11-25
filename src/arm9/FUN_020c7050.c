// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p
void *FUN_020c7050(const void *key, const char *base, int nmemb, int size, int (*compar)(const void *, const void *), int *found) {
    int lo = 0;
    int hi = nmemb - 1;
    *found = 0;
    for (; lo <= hi; ) {
        int mid = (lo + hi) >> 1;
        int cmp = compar(base + mid * size, key);
        if (cmp == 0) {
            *found = 1;
        }
        if (cmp < 0) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return (void *)(base + lo * size);
}
