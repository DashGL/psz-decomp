// flags: -O4,p
extern void FUN_020d183c(char *, const char *, int);
extern unsigned int FUN_020d1b74(void *, const char *);
#pragma thumb off
extern int FUN_02003e24(const char *, const char *);
#pragma thumb reset
extern int FUN_020cb184(void *, void *, const char *);
extern int FUN_020cb1a0(void *, void *, int);
extern const char DAT_020fcda4[], DAT_020fce60[], DAT_020fce78[];
extern const char DAT_020fce90[], DAT_020fcdf0[], DAT_020fce9c[], DAT_020fceac[], DAT_020fce18[];

int FUN_020c8f64(unsigned char **self, int selection, const char *first, const char *second)
{
    unsigned char *state;
    char first_path[256];
    char second_path[256];
    int i;
    if (!self || !(state = *self)) return 2;
    if (*(int *)(state + 0x108)) return 0;
    if (*(int *)(state + 0x1f4) == 4) {
        FUN_020d1b74(self, DAT_020fcda4);
        return 2;
    }
    if (!first) {
        FUN_020d1b74(self, DAT_020fce60);
        return 2;
    }
    if (!second) {
        FUN_020d1b74(self, DAT_020fce78);
        return 2;
    }
    FUN_020d183c(first_path, first, 256);
    for (i = 0; first_path[i] != '\0'; i++) {
        if (first_path[i] == '\\') first_path[i] = '/';
    }
    FUN_020d183c(second_path, second, 256);
    for (i = 0; second_path[i] != '\0'; i++) {
        if (second_path[i] == '\\') second_path[i] = '/';
    }
    if (selection == *(int *)(state + 0x23c) &&
        !FUN_02003e24(first_path, (char *)state + 0x3b8) &&
        !FUN_02003e24(second_path, (char *)state + 0x4b8)) {
        return 0;
    }
    *(int *)(state + 0x23c) = selection;
    FUN_020d183c((char *)state + 0x3b8, first_path, 256);
    FUN_020d183c((char *)state + 0x4b8, second_path, 256);
    FUN_020cb184(self, state + 0x210, DAT_020fce90);
    FUN_020cb1a0(self, state + 0x210, selection);
    FUN_020cb184(self, state + 0x210, DAT_020fcdf0);
    FUN_020cb1a0(self, state + 0x210, *(int *)(state + 0x198));
    FUN_020cb184(self, state + 0x210, DAT_020fce9c);
    FUN_020cb184(self, state + 0x210, first_path);
    FUN_020cb184(self, state + 0x210, DAT_020fceac);
    FUN_020cb184(self, state + 0x210, second_path);
    FUN_020cb184(self, state + 0x210, DAT_020fce18);
    return 0;
}
