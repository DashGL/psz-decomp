// flags: -O4,s
typedef struct {
    int id;
    void *actor;
    char pad[4];
    char flag;
    char rest[135];
} Slot;
typedef struct {
    char pad[136];
    Slot slots[3];
    char pad2[16];
    int curId;
    int flags;
} Mgr;
extern Mgr *DAT_0211a52c;
extern void FUN_0203c2a8(void), FUN_02039058(void *);
void FUN_02085090(void) {
    int i;
    if (DAT_0211a52c) {
        for (i = 0; i < 4; i++) {
            Mgr *p = DAT_0211a52c;
            void *actor = p->slots[i].actor;
            if (actor) {
                if (p->curId == p->slots[i].id) FUN_0203c2a8();
                else FUN_02039058(actor);
                DAT_0211a52c->slots[i].actor = 0;
                DAT_0211a52c->slots[i].flag = 0;
            }
        }
        DAT_0211a52c->flags &= ~1;
    }
}
