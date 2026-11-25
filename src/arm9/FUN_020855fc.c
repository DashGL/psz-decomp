// flags: -O4,s
extern int FUN_02084d1c(int, int);
typedef struct {
    int id;
    char pad[9];
    unsigned char flag;
    char pad2[134];
} Slot;
typedef struct {
    char pad[0x88];
    Slot slots[4];
} G;
extern G *DAT_0211a52c;
int FUN_020855fc(int index) {
    G *g = DAT_0211a52c;
    if (g != 0 && index >= 0 && index < 4) {
        int id = g->slots[index].id;
        if (id != -1 && g->slots[index].flag != 1) {
            return FUN_02084d1c(id, *(int *)((char *)g + 596));
        }
    }
    return 0;
}
