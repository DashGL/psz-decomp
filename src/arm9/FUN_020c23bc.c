// flags: -O4,s
#pragma opt_propagation off
extern unsigned char DAT_0211c864[];
extern const char DAT_020fcab0[];
extern void FUN_0201347c(void *);
extern void FUN_02003d54(void *, const void *, unsigned int);
extern void FUN_02003dd4(void *, const void *, unsigned int);
extern void *FUN_020c2174(void *, void *, const void *);
extern void FUN_0206740c(void *, unsigned int);
extern void FUN_020136fc(void *, int, unsigned int, void *);
extern void FUN_020ba8c4(void *);
struct Data { int f0; int f4; unsigned int size; void *buf; };
struct Obj { int f0; struct Data *ptrs[3]; unsigned char items[60]; };
void FUN_020c23bc(struct Obj *self, const char *path, int index) {

    unsigned char *items = self->items;
    int off = index * 20;
    const char *ext;
    void *allocation;
    struct Data **ptrs;
    FUN_0201347c(items + off);
    ext = DAT_020fcab0;
    FUN_02003d54(DAT_0211c864, path, 0x7f);
    FUN_02003dd4(DAT_0211c864, ext, 0x7f);
    ptrs = self->ptrs;
    allocation = FUN_020c2174(self, &ptrs[index], DAT_0211c864);
    FUN_0206740c(ptrs[index]->buf, ptrs[index]->size);
    FUN_020136fc(ptrs[index], 0, index, items + off);
    if (allocation != 0) FUN_020ba8c4(allocation);

}
