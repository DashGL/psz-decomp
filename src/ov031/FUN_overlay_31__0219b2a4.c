//cpp
// flags: -O4,s
typedef void (*Event)(void *, int);
extern "C" {
extern int FUN_02072a70(void *, unsigned);
extern unsigned *FUN_02072a40(void *, unsigned, int);
extern void FUN_overlay_31__0219b520(void *);
}
extern "C" void FUN_overlay_31__0219b2a4(unsigned *self) {
    if ((((self[53] & 1) != 0) ? 1 : 0) == 0) {
        void **manager;
        self[53] |= 1;
        FUN_overlay_31__0219b520(self);
        manager = *(void ***)0x02108c84;
        if (manager && manager[23]) {
            void *child = manager[23];
            ((Event)(*(unsigned **)child)[21])(child, 8);
        }
        int i; int count; void *group; group = *(char **)0x0210e24c + 0x74; count = FUN_02072a70(group, 1);
        for (i = 0; i < count; i++) {
            unsigned *record = FUN_02072a40(group, 1, i);
            if (record) record[3] = 3;
        }
    }
}
