// flags: -O4,s
typedef struct {
    unsigned char type, b1, b2, b3;
    int id;
    int entries[5];
    unsigned char flags[5];
} Packet;
extern char *DAT_02108d04;
extern int DAT_0211a448[4][5];
extern int DAT_0211a498[4][5];
extern char *FUN_020ac3b4(void *, int);
extern int FUN_020525b8(void *, unsigned char, void *);
extern void FUN_0200c938(void *, int);
extern void FUN_020bce3c(void *);

void FUN_0207a25c(int slot) {
    char *owner; char *actor; int id; int count; int i; int query[17]; Packet p;
    actor = 0; owner = DAT_02108d04; id = -1;
    if (owner) {
        actor = FUN_020ac3b4(owner, slot);
        id = *(int *)(owner + 0xfc);
    }
    if (!actor || id == -1) return;
    { int n = *(unsigned char *)(actor + 0x110); count = 5; if (n < 5) count = n; }
    
    for (i = 0; i < 5; i++) {
        if (i < count) {
            if (FUN_020525b8(actor, (unsigned char)i, query)) {
                DAT_0211a448[id][i] = query[16];
                DAT_0211a498[id][i] = query[12];
            }
        } else {
            DAT_0211a448[id][i] = -1;
            DAT_0211a498[id][i] = 0;
        }
    }
    p.type = 1; p.b1 = 0; p.b2 = 0; p.b3 = 0; p.id = -1;
    FUN_0200c938(p.entries, 20);
    FUN_0200c938(p.flags, 5);
    p.b2 = 3; p.b3 = 5; p.type = 9;
    for (i = 0; i < 5; i++) { p.entries[i] = -1; p.flags[i] = 0; }
    p.id = id;
    for (i = 0; i < 5; i++) {
        p.entries[i] = DAT_0211a448[id][i];
        p.flags[i] = DAT_0211a498[id][i];
    }
    FUN_020bce3c(&p);
    
}
