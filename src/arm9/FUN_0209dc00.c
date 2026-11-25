// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void *FUN_020306a4(void *);
extern int FUN_020424b4(void *, int);
extern int FUN_020424d8(void *, int);
extern int FUN_0205c520(int, int);
extern int FUN_02033704(void);
extern void FUN_02044c08(void *, void *, int);
extern void FUN_02099f50(void *);
extern void FUN_02030da8(void *, void *);
extern void FUN_0209db7c(void *, void *, int);
extern void FUN_020bce3c(void *);
extern void FUN_0203041c(void *);

void FUN_0209dc00(char *s) {
    int current, last;
    Vec offset;
    int packet[3];
    int identity;
    if ((unsigned char)s[0x2e] == 2) {
        if (FUN_020306a4(s)) {
            current = FUN_020424b4(FUN_020306a4(s), 4);
            last = FUN_020424d8(FUN_020306a4(s), 4) - 0x1000;
            if (FUN_020424b4(FUN_020306a4(s), 4) >> 12) {
                int tmp = FUN_0205c520(current, last);
                offset.x = 0;
                offset.y = ((long long)tmp * 0xc000 + 0x800) >> 12;
                offset.z = 0;
                FUN_02044c08(s + 0x50, &offset, 1);
                if (!FUN_02033704()) {
                    FUN_02099f50(s + 0x50);
                }
            } else {
                *(int *)(s + 0x13c) |= 4;
            }
        }
    } else if ((unsigned char)s[0x2e] == 3) {
        *(int *)(s + 0x140) += 1;
        if (*(int *)(s + 0x140) > 360) {
            int flag = 1;
            if (!(**(unsigned char **)(s + 0x4c) & 1)) flag = 0;
            if (flag != 0 && !(*(int *)(s + 0x13c) & 8)) {
                FUN_02030da8(&identity, s);
                FUN_0209db7c(packet, &identity, 1);
                FUN_020bce3c(packet);
                *(int *)(s + 0x13c) |= 8;
            }
        }
    }
    FUN_0203041c(s);
}
