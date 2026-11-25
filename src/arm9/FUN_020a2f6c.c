// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void *UNK_02108d04;
extern int FUN_0203d02c(void *), FUN_0203068c(void *);
extern void FUN_02030da8(void *, void *), FUN_020a2978(void *, void *, int, int), FUN_020bce3c(void *), FUN_020a3164(void *), FUN_020a3274(void *), FUN_0203041c(void *);

void FUN_020a2f6c(char *s) {
    int id;
    int packet[3];
    if ((unsigned char)s[46] == 1) {
        if (UNK_02108d04 && FUN_0203d02c(UNK_02108d04)) *(int *)(s + 312) |= 4;
    } else if ((unsigned char)s[46] == 3) {
        if (*(int *)(s + 332) > *(int *)(s + 388)) {
            if (!((**(unsigned char **)(s + 76) & 2) ? E1 : E0))
                *(volatile unsigned char *)(*(char **)(s + 76)) |= 2;
        } else {
            ++*(int *)(s + 332);
        }
    } else if ((unsigned char)s[46] == 4) {
        if (*(int *)(s + 332) > 240) {
            if (!((**(unsigned char **)(s + 76) & 4) ? E1 : E0) &&
                !((**(unsigned char **)(s + 76) & 8) ? E1 : E0) &&
                !(*(int *)(s + 312) & 2)) {
                FUN_02030da8(&id, s);
                FUN_020a2978(packet, &id, (signed char)FUN_0203068c(s), 1);
                FUN_020bce3c(packet);
                *(int *)(s + 312) |= 2;
            }
        } else {
            ++*(int *)(s + 332);
        }
        FUN_020a3164(s);
        FUN_020a3274(s);
    }
    FUN_0203041c(s);
}
