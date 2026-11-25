// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct {
    unsigned char pad[0xc];
    unsigned short f0c;
    unsigned short f0e;
} Sub;
typedef struct {
    unsigned char pad0[0x2c];
    Sub sub;
    unsigned char pad1[0x84 - 0x3c];
    int id;
    char *actor;
    signed char flag;
    unsigned char pad2[0x94 - 0x8d];
} Entry;
typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
} Out;
typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned short fa;
} Msg;
extern char *DAT_0211a52c;
extern void FUN_0203bc28(void *);
extern void FUN_02085380(void *);
extern void FUN_020bce3c(void *);

void FUN_020853a8(void) {
    if (DAT_0211a52c != 0) {
        int i;
        for (i = 0; i < 4; i++) {
            Entry *entry = (Entry *)(DAT_0211a52c + 4) + i;
            if (entry->id != -1 && ((entry->flag == 0) ? E1 : E0)) {
                char *actor = entry->actor;
                Sub *sub;
                if (actor != 0) {
                    Msg d;
                    FUN_0203bc28(actor);
                    FUN_02085380(&d);
                    d.f4 = 0;
                    d.f6 = 0;
                    d.f8 = 18;
                    d.fa = (unsigned short)*(int *)(actor + 0xfc);
                    FUN_020bce3c(&d);
                }
                sub = &entry->sub;
                {
                    Out *out = (Out *)(DAT_0211a52c + 0x260);
                    out[i].f0 = sub->f0c;
                    out[i].f2 = sub->f0e;
                    out[i].f6 = 0;
                }
            }
        }
    }
}
