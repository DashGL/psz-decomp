// flags: -O4,s
extern struct { char slots[64][12]; char recs[64][52]; } DAT_0211b444;
extern int FUN_020dd6c4(void *);
void *FUN_020c1154(int wanted) {
    int ordinal = 0, index;
    for (index = 0; index < 64; index++) {
        if (FUN_020dd6c4(DAT_0211b444.slots[index]) == 1) {
            if (ordinal == wanted) return DAT_0211b444.recs[index];
            ordinal++;
        }
    }
    return 0;
}
