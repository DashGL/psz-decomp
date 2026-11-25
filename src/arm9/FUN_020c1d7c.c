// flags: -O4,s
typedef struct Slot {
    int id;
    int state;
    void *handle;
} Slot;

typedef struct Ctx {
    char pad00[0xc4];
    Slot slots[3];
    char padE8[0x10c - 0xe8];
    int muted;
} Ctx;

extern Ctx *DAT_0211c85c;
extern void FUN_020c1f10(int);
extern int FUN_020c1e44(int);
extern int FUN_0200fef0(void **, int, int);
extern void FUN_0200d7d8(void **, int);
extern void FUN_0200d86c(void **, int, unsigned int);

void FUN_020c1d7c(int archive, int id, int gain, unsigned int param, int heap) {
    FUN_020c1f10(heap);
    if (DAT_0211c85c->muted != 0)
        return;
    {
        int adjusted = FUN_020c1e44(gain);
        if (adjusted != 0) {
            int index = -1;
            int i;
            for (i = 0; i < 3; i++) {
                int sid = DAT_0211c85c->slots[i].id; if (sid == id) {
                    index = i;
                    break;
                }
            }
            if (index < 0) {
                for (i = 0; i < 3; i++) {
                    int valid = !!(DAT_0211c85c->slots[i].handle);
                    if (valid == 0) {
                        index = i;
                        break;
                    }
                }
            }
            if (index >= 0) {
                Slot *slot = &DAT_0211c85c->slots[index];
                int valid = !!(slot->handle);
                if (valid == 0) {
                    if (FUN_0200fef0(&slot->handle, archive, id) == 0)
                        return;
                    slot->id = id;
                }
                slot->state = 3;
                FUN_0200d7d8(&slot->handle, adjusted);
                FUN_0200d86c(&slot->handle, 255, param);
            }
        }
    }
}
