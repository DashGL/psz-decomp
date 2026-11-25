// flags: -O4,p -noThumb
extern void FUN_0206552c(unsigned int, unsigned int, unsigned int);
extern unsigned int DAT_02102874;

struct Entry {
    unsigned int off;
    unsigned int unk1;
    unsigned int ptr;
    unsigned int unk2;
};

unsigned int *FUN_0200ea9c(unsigned int self, unsigned int image) {
    unsigned int offset, table, i;
    FUN_0206552c(image, self, 48);
    offset = *(unsigned int *)(self + 24);
    *(unsigned int *)(self + 140) = (offset == 0) ? 0 : image + offset;
    offset = *(unsigned int *)(self + 32);
    *(unsigned int *)(self + 132) = (offset == 0) ? 0 : image + offset;
    offset = *(unsigned int *)(self + 16);
    *(unsigned int *)(self + 136) = (offset == 0) ? 0 : image + offset;
    *(unsigned int *)(self + 144) = 0;
    table = *(unsigned int *)(self + 132);
    for (i = 0; i < *(unsigned int *)(table + 8); i++) {
        struct Entry *e = (struct Entry *)(table + 12) + i;
        offset = e->off;
        e->ptr = (offset == 0) ? 0 : image + offset;
        table = *(unsigned int *)(self + 132);
    }
    *(unsigned int *)(self + 48) = 0;
    DAT_02102874 = self;
    return &DAT_02102874;
}
