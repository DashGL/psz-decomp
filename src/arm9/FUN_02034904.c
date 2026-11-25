// flags: -O4,s
extern short DAT_020ed83c[];
extern void FUN_0205abac(void *, int, int);
void FUN_02034904(char **self, short angle) {
    int i;
    for (i = 0; i < 2; i++) {
        char *obj = self[i];
        if (obj) {
            int idx;
            *(unsigned short *)(obj + 0xb4) = (unsigned short)(unsigned int)(unsigned short)angle;
            idx = *(unsigned short *)(obj + 0xb4) >> 4;
            FUN_0205abac(obj + 0x90, DAT_020ed83c[idx * 2], DAT_020ed83c[idx * 2 + 1]);
        }
    }
}