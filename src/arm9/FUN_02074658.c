// flags: -O4,s
typedef struct { int a, b; } Two;
typedef struct { int v[3]; } Three;
typedef struct {
    unsigned char state;
    unsigned char pad1[3];
    Two f04;
    Three f0c;
    unsigned char f18[0x14];
    unsigned char f2c[0x10];
} Slot;
typedef struct {
    unsigned char pad[0x70];
    Slot slots[4];
} Manager;
typedef struct {
    int f00;
    int index;
    Two f08;
    Three f10;
    unsigned char f1c[0x14];
    unsigned char f30[0x10];
} Packet;
extern unsigned char DAT_0211a51c[];
extern int FUN_02073fd8(void *);
extern int FUN_02084be4(void *);
extern int FUN_020c0f50(void *);
extern void FUN_02074504(void *, void *);
extern void FUN_020743fc(void *, void *);
extern void FUN_020c0ed0(void *, int, int, void *);
int FUN_02074658(Manager *s, Packet *packet) {
    int index = packet->index;
    if (index >= 0 && index < 4) {
        if (index != FUN_02073fd8(s)) {
            Slot *p = &s->slots[index];
            p->f04 = packet->f08;
            p->f0c = packet->f10;
            FUN_02074504(p->f18, packet->f1c);
            FUN_020743fc(p->f2c, packet->f30);
            switch (FUN_02084be4(DAT_0211a51c)) {
            case 0: {
                int valid = FUN_020c0f50(&packet->f10);
                if (valid == 1) {
                    FUN_020c0ed0(&packet->f10, packet->f08.a, packet->f08.b, packet->f30);
                }
                s->slots[packet->index].state = (valid == 1) ? 4 : 1;
                return 1;
            }
            case -1:
            case 1:
                return 1;
            }
        }
    }
    return 0;
}
