// flags: -O4,s
extern int FUN_020c4578(void *);
extern char *FUN_020c072c(void);
extern void FUN_020c4434(void *);
#pragma thumb off
extern void FUN_020656b8(void *, int, unsigned int);
#pragma thumb on
extern void FUN_020e2534(void *, void *, int *);
extern void FUN_020bd57c(void *, void *);

struct Sub14_bdf28 {
    unsigned short v[7];
};

struct Temp_bdf28 {
    unsigned char b0;
    unsigned char b1;
    struct Sub14_bdf28 s;
    unsigned int f10;
};

int FUN_020bdf28(char *s, int *selected, void *out) {
    int index = -1;
    int i;
    char *entry;

    for (i = 0; i < 64; i++) {
        entry = *(char **)(s + 3920) + 24 * i;
        if (!*(signed char *)(entry + 2) && *(signed char *)entry == 4) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        for (i = 0; i < 64; i++) {
            char *records;
            struct Temp_bdf28 temp;
            int aux;
            entry = *(char **)(s + 3920) + 24 * i;
            if (*(signed char *)(entry + 2) || *(signed char *)(entry + 1) != 1 || *(signed char *)entry != 3) {
                continue;
            }
            if (!FUN_020c4578(entry + 4)) {
                index = i;
                break;
            }
            records = FUN_020c072c();
            if (!records) {
                continue;
            }
            FUN_020c4434(&temp);
            FUN_020656b8(&temp, 0, 20);
            aux = 0;
            FUN_020e2534(records + 12 * i, &temp, &aux);
            if (FUN_020c4578(&temp)) {
                break;
            }
            entry = *(char **)(s + 3920) + 24 * i;
            entry[4] = temp.b0;
            entry[5] = temp.b1;
            *(struct Sub14_bdf28 *)(entry + 6) = temp.s;
            index = i;
            break;
        }
    }
    if (index != -1) {
        entry = *(char **)(s + 3920) + 24 * index;
        if (!(*(unsigned short *)(s + 3934) && *(int *)(s + 3928) == index && *(signed char *)(s + 3932) == *(signed char *)entry)) {
            *(int *)(s + 3928) = index;
            *(signed char *)(s + 3932) = *(signed char *)entry;
            *(unsigned short *)(s + 3934) = 1800;
            entry[2] = 1;
            *selected = index;
            FUN_020bd57c(out, entry + 4);
            return *(signed char *)entry;
        }
    }
    return 0;
}
