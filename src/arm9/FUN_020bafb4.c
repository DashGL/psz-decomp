// flags: -O4,s
extern int FUN_020bb30c(void);
extern int FUN_020bb318(void);
int FUN_020bafb4(char *self) {
    switch (*(int *)(self + 76)) {
    case 0:
        break;
    case 1:
        if (FUN_020bb30c() == 3) return FUN_020bb318();
        break;
    case 2:
        if (FUN_020bb30c() == 4) return FUN_020bb318();
        break;
    }
    return -1;
}
