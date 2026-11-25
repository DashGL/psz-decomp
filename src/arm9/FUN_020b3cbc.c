// flags: -O4,s
extern unsigned int DAT_0211aa5c;
extern short DAT_0211aa60[];
extern int FUN_020c0f9c(void *);
extern char *FUN_020c1138(int);
void *FUN_020b3cbc(char *self, int fallback) {
    int id = FUN_020c0f9c(self + 68);
    if (id >= 0) {
        char *p = FUN_020c1138(id);
        if (p) return p + 16;
    }
    if (!fallback) return self;
    {
        unsigned int flags = DAT_0211aa5c;
        if (!(flags & 1)) {
            *(short *)((char *)&DAT_0211aa5c + 4) = 0;
            *(short *)((char *)&DAT_0211aa5c + 22) = 0;
            DAT_0211aa5c = flags | 1;
        }
    }
    return DAT_0211aa60;
}
