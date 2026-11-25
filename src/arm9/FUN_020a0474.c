// flags: -O4,s
typedef struct { int x, y, z; } Vec;
enum { E0 = 0, E1 = 1 };
extern char *UNK_02108c84, *UNK_02108c68;
extern short UNK_020ed83c[];
extern void FUN_0204492c(void *), FUN_0203067c(void *, int), FUN_02030658(void *, void *), FUN_020c193c(int, int, int, int, int), FUN_0203041c(void *);
extern int FUN_02033418(void *, int, int);

void FUN_020a0474(char *s) {
    char *manager, *entry;
    Vec p;
    FUN_0204492c(s + 56);
    if (*(int *)(s + 52) & 1) {
        manager = UNK_02108c84;
        if (manager) {
            entry = *(char **)(manager + 64 + 4 * (*(int *)(manager + 100)));
            if (entry) FUN_0203067c(s, *(unsigned short *)(entry + 130));
        }
        p = *(Vec *)(s + 96);
        *(unsigned short *)(s + 92) += 3840;
        p.y += (int)(((long long)UNK_020ed83c[2 * (*(unsigned short *)(s + 92) >> 4)] * 819 + 2048) >> 12);
        FUN_02030658(s, &p);
        if (!(*(int *)(s + 52) & 2) && ((*(unsigned short *)(s + 88) & 1) ? E1 : E0) && FUN_02033418(UNK_02108c68, 2, 1)) {
            FUN_020c193c(4, 1, 0, 0, -1);
            *(int *)(s + 52) |= 2;
        }
    }
    FUN_0203041c(s);
}
