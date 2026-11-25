// flags: -O4,s
typedef struct { int x, y, z; } Vector;
extern char *FUN_02033d60(void *, unsigned int, int, unsigned int);
extern void FUN_02033dec(void *, void *, unsigned int);
extern void *DAT_02108c84;
extern char *DAT_02108d64;
extern Vector DAT_020fc958;
void FUN_02037a24(char **out) {
    void *m = DAT_02108c84;
    if (m != 0) {
        char *g = DAT_02108d64;
        if (g != 0) {
            char *p = FUN_02033d60(m, *(unsigned short *)(g + 16), 1, 65535);
            *out = p;
            if (p != 0) {
                *(unsigned int *)(p + 24) |= 1;
                {
                    char *q = *out;
                    *(int *)(q + 108) = DAT_020fc958.x;
                    *(int *)(q + 112) = DAT_020fc958.y;
                    *(int *)(q + 116) = DAT_020fc958.z;
                }
                if (*(unsigned short *)(g + 18) != 65535) {
                    FUN_02033dec(m, *out, *(unsigned short *)(g + 18));
                }
            }
        }
    }
}
