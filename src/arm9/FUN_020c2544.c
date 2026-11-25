// flags: -O4,s
#pragma opt_propagation off
typedef struct Triple { unsigned int a, b, c; } Triple;
typedef struct Desc { unsigned int a; unsigned int b; Triple c; } Desc;
extern char *DAT_0211c860;
extern void FUN_02013438(void *);
extern void FUN_0201347c(void *);
extern int FUN_020129d8(void *, void **);
extern void FUN_020ba8c4(void *);
extern void FUN_0206740c(void *, unsigned int);
extern void *FUN_020c3aec(void);
extern void *FUN_020c3b4c(void *, int, unsigned int, unsigned int);
extern void FUN_020134d0(void *, unsigned int, int, void *);
#define R (*(char **)self)
#define W(o) (*(unsigned int *)(self+(o)))
void FUN_020c2544(char *self) {
    char *resource, *source;
    void *pool;
    FUN_02013438(R+0x18);
    FUN_0201347c(R+0x3c);
    if (W(0x18)) {
        if (FUN_020129d8(*(void **)(R+4), (void **)(R+0x10))) {
            W(0x10) = 1;
        } else if (*(void **)(R+4)) {
            FUN_020ba8c4(*(void **)(R+4));
            *(void **)(R+4) = 0;
        }
        resource = *(char **)(R+0x10);
        FUN_0206740c(*(void **)(resource+0x14), *(unsigned int *)(resource+0x10));
        {
            unsigned int i = W(4);
            char *g = DAT_0211c860;
            *(void **)(R+0xc) = *(void **)(g + 4 + i * 4);
        }
        resource = R;
        pool = FUN_020c3aec();
        *(void **)(self+0xc) = FUN_020c3b4c(pool, (int)W(4), *(unsigned int *)(*(char **)(resource+0x10)+0x10), *(unsigned int *)(*(char **)(resource+0xc)+8));
        resource = R;
        FUN_020134d0(*(void **)(resource+0x10), **(unsigned int **)(self+0xc), (int)W(4), resource+0x18);
        {
            char **gp = &DAT_0211c860;
            unsigned int idx = W(4);
            char *base = *gp + 0x10;
            unsigned int off = idx * 20;
            source = base + off;
            resource = R;
            {
                Desc *dst = (Desc *)(resource + 0x3c);
                *(unsigned int *)(resource + 0x3c) = *(unsigned int *)(base + off);
                dst->b = *(unsigned int *)(source + 4);
                dst->c = *(Triple *)(source + 8);
            }
        }
    }
    if (*(void **)(R+4)) {
        FUN_020ba8c4(*(void **)(R+4));
        *(void **)(R+4) = 0;
    }
}
