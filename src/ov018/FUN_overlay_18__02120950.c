// flags: -O4,s
extern void FUN_overlay_18__02120900(void *, void *);
void FUN_overlay_18__02120950(void *self, unsigned int *base) {
    unsigned int *p = base + 1; unsigned int *end = p + base[0]; do { void *record = (char *)base + *p; *p = (unsigned int)record; p++; FUN_overlay_18__02120900(self, record); } while (p < end);
}
