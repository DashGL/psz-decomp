// flags: -O4,s
extern unsigned int FUN_020855bc(int);
extern void FUN_02079f28(void *, int, int);
void FUN_02079c7c(char *self) {
    unsigned int mask = **(unsigned char **)(self + 0x34);
    int i;
    for (i = 0; i < 4; i++) {
        unsigned int b = 0;
        unsigned int st = FUN_020855bc(i);
        if (st == 1 || st == 2) {
            b |= 1u << i;
            if (mask & b) {
                FUN_02079f28(self, i, 1);
            } else {
                FUN_02079f28(self, i, 0);
            }
        }
    }
}
