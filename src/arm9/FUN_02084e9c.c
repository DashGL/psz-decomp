typedef struct {
    unsigned char pad[0x88];
    int id;
    void *actor;
    unsigned int f90;
    unsigned char f94;
    unsigned char f95;
    unsigned char pad2[2];
} Slot_84e9c;
extern char *DAT_0211a52c;
extern void FUN_0203c2a8(void);
extern void FUN_02039058(void *);
int FUN_02084e9c(int index) {
    char *p = DAT_0211a52c;
    if (p && index >= 0 && index < 4) {
        int offset = 0x94 * index;
        void *actor = ((Slot_84e9c *)(p + offset))->actor;
        if (actor) {
            if (*(int *)(p + 0x254) == ((Slot_84e9c *)(p + offset))->id) {
                FUN_0203c2a8();
            } else {
                FUN_02039058(actor);
            }
            ((Slot_84e9c *)(DAT_0211a52c + offset))->actor = 0;
            ((Slot_84e9c *)(DAT_0211a52c + offset))->f94 = 0;
        }
        ((Slot_84e9c *)(DAT_0211a52c + offset))->id = -1;
        p = DAT_0211a52c;
        if (((Slot_84e9c *)(p + offset))->f95 == 0) {
            (*(short *)(p + 0x25c))--;
        }
        return 1;
    }
    return 0;
}
