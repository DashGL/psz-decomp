// flags: -O4,s
extern void *FUN_020ba894(unsigned int);
extern char *FUN_020aebe0(void *, int, int, int);

typedef struct {
    unsigned char pad[0x68];
    char *panels[4];
} Obj;

void FUN_020af518(Obj *s) {
    int offset = 0x200;
    int i;
    for (i = 0; i < 4; i++) {
        if (!s->panels[i]) {
            int arg = 0x3e + i * 0x1f;
            char *p = FUN_020ba894(0x88);
            if (p) p = FUN_020aebe0(p, 4, arg, offset);
            s->panels[i] = p;
            offset += *(int *)(p + 0x84);
        }
    }
}
