// flags: -O4,s
extern void FUN_overlay_18__02120824(void *, void *);
extern void FUN_overlay_18__021208b4(void *, void *);
void FUN_overlay_18__02120900(void *self, unsigned *base) {
    unsigned *p, *end;
    *(char **)(base + 2) = (char *)base + (int)base[2];
    *(char **)(base + 3) = (char *)base + (int)base[3];
    if (*(unsigned short *)base) {
        p = (unsigned *)base[2];
        end = p + *(unsigned short *)base;
        do { void *record = (char *)base + *p; *p++ = (unsigned)record; FUN_overlay_18__02120824(self, record); } while (p < end);
    }
    if (((unsigned short *)base)[1]) {
        p = (unsigned *)base[3];
        end = p + ((unsigned short *)base)[1] * base[1];
        do { void *record = (char *)base + *p; *p++ = (unsigned)record; FUN_overlay_18__021208b4(self, record); } while (p < end);
    }
}
