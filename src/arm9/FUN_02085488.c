// flags: -O4,s
typedef struct {
    void *actor;
    unsigned char pad[5];
    unsigned char state;
    unsigned char pad2[0x8a];
} Slot_85488;

typedef struct {
    unsigned char pad0[0x8c];
    Slot_85488 slots[4];
} Mgr_85488;

extern Mgr_85488 *DAT_0211a52c;
extern void FUN_02039068(void *, int);

int FUN_02085488(int index, int state) {
    if (DAT_0211a52c && index >= 0 && index < 4 && state != DAT_0211a52c->slots[index].state) {
        void *actor;
        DAT_0211a52c->slots[index].state = state;
        actor = DAT_0211a52c->slots[index].actor;
        if (actor) {
            switch (state) {
            case 0:
                FUN_02039068(actor, 0);
                (*(short *)((char *)DAT_0211a52c + 604))++;
                return 1;
            case 1:
                FUN_02039068(actor, 1);
                (*(short *)((char *)DAT_0211a52c + 604))--;
                return 1;
            }
        }
    }
    return 0;
}
