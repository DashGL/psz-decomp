// flags: -O4,p -noThumb
#pragma opt_dead_assignments off
struct Obj132ec {
    int f0;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned short fa;
    unsigned short fc;
    unsigned short fe;
    int f10;
    int f14;
};
struct Entry132ec {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
};
struct Table132ec {
    unsigned char pad[0x100];
    struct Entry132ec entries[0x88];
};
extern struct Table132ec DAT_02103794[];
extern int DAT_020f96e4;
extern void FUN_020673d4(void *, unsigned int);
extern void FUN_02064d58(int, void *, int, unsigned int);
extern void FUN_02065510(int, void *, unsigned int);

void FUN_020132ec(struct Obj132ec *self) {
    if (self->f14 != 0) {
        int ok = (self->f8 <= self->f6 + 1 && self->f4 <= self->f6);
        unsigned int size = ok ? ((unsigned int)((unsigned short)(self->f6 - self->f4 + 1)) << 3) : 0;
        struct Entry132ec *base = DAT_02103794[self->f0].entries;
        void *dst = &base[self->f4];
        FUN_020673d4(dst, size);
        if (DAT_020f96e4 != -1) {
            FUN_02064d58(DAT_020f96e4, dst, 0xc0, size);
        } else {
            FUN_02065510(0xc0, dst, size);
        }
    } else {
        
        int idx = self->f0;
        unsigned short start = self->f4;
        struct Entry132ec *p = &DAT_02103794[idx].entries[start];
        unsigned short count = (unsigned short)(self->f6 - start + 1);
        unsigned short i;
        for (i = 0; i < count; i++) { p->f0 = 0xc0; p++; }
    
    }
    self->f8 = self->f4;
    self->fe = self->fa;
}
