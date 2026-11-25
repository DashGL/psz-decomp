// flags: -O4,p -noThumb
struct Table { unsigned int count; unsigned int offs[1]; };
struct Archive { unsigned char pad[0x8c]; char *base; };
extern struct Archive *DAT_02102874;
void *FUN_0200ede0(int index) {
    struct Archive *archive = DAT_02102874;
    char *b1 = archive->base;
    unsigned int off1 = *(unsigned int *)(b1 + 32);
    struct Table *table = (struct Table *)((off1 == 0) ? 0 : (b1 + off1));
    unsigned int off2;
    char *b2;
    if (!table) return 0;
    if (index < 0) return 0;
    if ((unsigned int)index >= table->count) return 0;
    off2 = table->offs[index];
    b2 = archive->base;
    return (off2 == 0) ? 0 : (b2 + off2);
}
