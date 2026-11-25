// flags: -O4,p -noThumb
extern unsigned int DAT_0210373c;
extern unsigned int DAT_02103740;
extern void FUN_02011974(void *, unsigned int);
extern void *FUN_02011bb4(void *);
extern unsigned int FUN_020119b8(void *, void *);

typedef struct {
    unsigned int kind;
    unsigned int pad0[2];
    unsigned int list_hdr[3];
    unsigned int begin;
    unsigned int end;
    unsigned int flags_lo : 8;
    unsigned int flags_hi : 24;
} S_11bdc;

unsigned int FUN_02011bdc(S_11bdc *self, unsigned int kind, unsigned int begin, unsigned int end, unsigned short flags) {
    void *list;
    self->kind = kind;
    self->begin = begin;
    self->end = end;
    *(unsigned int *)((char *)self + 0x20) = 0;
    self->flags_lo = flags;
    FUN_02011974(self->list_hdr, 4);
    if (!DAT_0210373c) {
        FUN_02011974(&DAT_02103740, 4);
        DAT_0210373c = 1;
    }
    list = FUN_02011bb4(self);
    return FUN_020119b8(list, self);
}
