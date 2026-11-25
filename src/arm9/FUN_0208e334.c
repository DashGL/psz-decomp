// flags: -O4,s
extern char *DAT_02108c64;
extern void *DAT_02108d64;
extern char *FUN_02032ca0(void *, int);
extern int FUN_02032fc4(void *, int, unsigned int);
extern void *FUN_02041b2c(void *);
extern void *FUN_020ba8a0(unsigned int);
extern void FUN_0208e514(void *, int, int, int, int, int, int, int, int, void *);

int FUN_0208e334(char *s) {

    int count;
    int i;
    void *points;
    int index;
    int flagIndex;
    int normalIndex;
    int group;
    int otherIndex;
    char *table;
    int slot;

    table = FUN_02032ca0(DAT_02108c64, *(signed char *)(DAT_02108c64 + 0x16));
    if (table == 0) {
        return 0;
    }
    count = 0;
    for (i = 0; i < 4; i++) {
        if (FUN_02032fc4(table, i, 7) != 0) {
            if (FUN_02032fc4(table, i, 2) != 0) {
                count += 2;
            } else {
                count++;
            }
        }
    }
    if (count > 5) {
        count = 5;
    }
    if (count <= 0) {
        return 0;
    }
    points = 0;
    if (DAT_02108d64 != 0) {
        points = FUN_02041b2c(DAT_02108d64);
    }
    if (points == 0) {
        return 0;
    }
    *(void **)(s + 12) = FUN_020ba8a0(count * 0x18);
    *(void **)(s + 16) = FUN_020ba8a0(count * 4);
    if (*(void **)(s + 12) == 0 || *(void **)(s + 16) == 0) {
        return 0;
    }
    *(unsigned int *)(s + 4) = (unsigned short)count;
    *(void **)(s + 8) = *(void **)(s + 12);

    index = 0;
    flagIndex = 0;
    normalIndex = 0;
    group = 0;
    otherIndex = 0;
    for (i = 0; i < 4; i++) {
        if (i >= 0 && i < 4 && *(int *)(table + 0x24) >= 0 && *(int *)(table + 0x24) < 4) {
            slot = (*(int *)(table + 0x24) + i) % 4;
        } else {
            slot = -1;
        }
        if (FUN_02032fc4(table, slot, 7) != 0) {
            if (FUN_02032fc4(table, slot, 1) != 0) {
                FUN_0208e514(s, index, 0, flagIndex + 24, 0, normalIndex, group, i, slot, points);
                index++;
                flagIndex++;
                normalIndex++;
                group++;
            } else if (FUN_02032fc4(table, slot, 2) != 0) {
                FUN_0208e514(s, index, 0, flagIndex + 24, 1, normalIndex, group, i, slot, points);
                FUN_0208e514(s, index + 1, 1, flagIndex + 25, 1, normalIndex, group, i, slot, points);
                index += 2;
                flagIndex += 2;
                normalIndex++;
                group++;
            } else if (FUN_02032fc4(table, slot, 4) != 0) {
                FUN_0208e514(s, index, 2, otherIndex + 41, -1, -1, group, i, slot, points);
                index++;
                otherIndex++;
                group++;
            }
        }
    }
    return 1;
}
