// FUN_020af804 @ 0x020af804 (inventory code 0xb8, thumb)
// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int FUN_02047440(void *), FUN_0204771c(void *), FUN_0204770c(void *);
extern void FUN_0206e728(void *, void (*)(void *)), FUN_0206e738(void *, void *), FUN_020af8c0(void *), FUN_0204bf88(void *);
int FUN_020af804(char *s) {
    int result = FUN_02047440(s), phase;
    Vec old, v;
    if (!result) {
        if (FUN_0204771c(s) && *(void **)(s + 48) && !*(int *)(s + 260)) {
            FUN_0206e728(*(void **)(s + 48), FUN_020af8c0);
            FUN_0206e738(*(void **)(s + 48), s);
            *(int *)(s + 260) = 1;
        }
        if (FUN_0204770c(s) && *(int *)(s + 184) >= *(int *)(s + 176)) {
            old = *(Vec *)(s + 80);
            v.x = old.x;
            v.y = *(int *)(s + 268) << 12;
            v.z = old.z;
            *(Vec *)(s + 80) = v;
            phase = (*(int *)(s + 148) / (*(int *)(s + 76))) % 30;
            *(unsigned short *)(s + 106) = 65536 - ((phase << 16) / 30);
            FUN_0204bf88(s);
        }
    }
    return result;
}
