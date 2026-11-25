// flags: -O4,p
extern struct { int pad[5]; void *p; int pad2[3]; unsigned int cnt; } DAT_02108d6c;
extern char DAT_020f8f78[];
extern void *FUN_020ba894(unsigned int), *FUN_020c3ca0(void *, void *);
void FUN_0204641c(void) {
    if (!DAT_02108d6c.p) {
        void *p = FUN_020ba894(88);
        if (p) p = FUN_020c3ca0(p, DAT_020f8f78);
        DAT_02108d6c.p = p;
    }
    ++DAT_02108d6c.cnt;
}
