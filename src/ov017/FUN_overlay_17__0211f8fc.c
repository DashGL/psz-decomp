// flags: -O4,s
extern void FUN_overlay_17__0211f8ac(void *, void *);
void FUN_overlay_17__0211f8fc(void *self, unsigned int *base) {
    unsigned int *p = base + 1; unsigned int *end = p + base[0]; do { void *record = (char *)base + *p; *p = (unsigned int)record; p++; FUN_overlay_17__0211f8ac(self, record); } while (p < end);
}
