// flags: -O4,s
extern void FUN_overlay_11__02120f08(void *, void *);
void FUN_overlay_11__02120f58(void *self, unsigned int *base) {
    unsigned int *p = base + 1; unsigned int *end = p + base[0]; do { void *record = (char *)base + *p; *p = (unsigned int)record; p++; FUN_overlay_11__02120f08(self, record); } while (p < end);
}
