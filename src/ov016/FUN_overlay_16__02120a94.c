// flags: -O4,s
#pragma thumb off
extern void FUN_02069678(unsigned, unsigned, unsigned, unsigned);
extern void FUN_0206973c(unsigned, unsigned);
extern int FUN_02069c30(unsigned);
#pragma thumb reset
void FUN_overlay_16__02120a94(char *self) {
    switch (*(unsigned *)(self + 1172)) {
    case 2:
        FUN_02069678(3, 0, 1, 0);
        FUN_0206973c(3, 0);
        FUN_02069c30(1);
        break;
    case 1:
        FUN_02069678(1, 0, 1, 0);
        FUN_0206973c(1, 0);
        FUN_02069c30(1);
        break;
    }
}
