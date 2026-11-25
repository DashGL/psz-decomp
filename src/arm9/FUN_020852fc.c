// flags: -O4,s
typedef struct {
    unsigned char pad0[0xc];
    unsigned short f0c;
    unsigned short f0e;
} Sub_020852fc;

typedef struct {
    unsigned char pad0[0x2c];
    Sub_020852fc sub;
    unsigned char pad1[0x84 - 0x3c];
    int status;
    unsigned char *actor;
    unsigned char pad2[0x94 - 0x8c];
} Slot_020852fc;

typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
} Out_020852fc;

typedef struct {
    unsigned int f0;
    Slot_020852fc slots[4];
    unsigned char pad[0x260 - 4 - 4 * 0x94];
    Out_020852fc outs[4];
} Mgr_020852fc;

typedef struct {
    unsigned int f0;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned short fa;
} Pkt_020852fc;

extern Mgr_020852fc *DAT_0211a52c;
extern void FUN_0203bbfc(void *);
extern void FUN_02085380(void *);
extern void FUN_020bce3c(void *);

void FUN_020852fc(void) {
    int i;
    if (DAT_0211a52c == 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        Slot_020852fc *slots = DAT_0211a52c->slots;
        if (slots[i].status != -1) {
            unsigned char *actor = slots[i].actor;
            Out_020852fc *outs;
            Sub_020852fc *sub;
            if (actor != 0) {
                Pkt_020852fc pkt;
                FUN_0203bbfc(actor);
                FUN_02085380(&pkt);
                pkt.f4 = 0;
                pkt.f6 = 0;
                pkt.f8 = 18;
                pkt.fa = *(int *)(actor + 0xfc);
                FUN_020bce3c(&pkt);
            }
            outs = DAT_0211a52c->outs;
            sub = &slots[i].sub;
            outs[i].f0 = sub->f0c;
            outs[i].f2 = sub->f0e;
            outs[i].f6 = 0;
        }
    }
}
