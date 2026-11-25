// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec;

extern int FUN_0207a5dc(void *);
extern int FUN_0204771c(void *);
extern int FUN_0204e8bc(void *, int, int);
extern void FUN_0203647c(void *, void *, void *);
extern void FUN_020bf680(void *, void *, int);
extern void FUN_020be5d4(void *, int, int, void *);
extern void FUN_02047ae8(void *);
extern void FUN_0204a9cc(void *);
extern void *FUN_020be450(void);
extern int DAT_020f2af0[];

int FUN_0207ca00(char *s)
{
    int result = FUN_0207a5dc(s);
    int found;
    Vec pos;
    int packet[13];
    Vec a;
    Vec up1;
    Vec b;
    Vec up2;
    int xy[2];

    if (!result && FUN_0204771c(s)) {
        if (*(char **)(s + 380)) {
            pos.x = 0;
            pos.y = 0;
            pos.z = 0;
            found = 0;
            if (*(int *)(s + 384) != -1) {
                found = FUN_0204e8bc(&pos, *(int *)(s + 384), *(int *)(s + 388));
            }
            if (found) {
                up1.x = 0;
                up1.y = 4096;
                up1.z = 0;
                FUN_0203647c(&a, &pos, &up1);
                *(Vec *)(*(char **)(s + 380) + 92) = a;
                up2.x = 0;
                up2.y = 4096;
                up2.z = 0;
                FUN_0203647c(&b, &pos, &up2);
                *(Vec *)(s + 92) = b;
            } else {
                *(Vec *)(*(char **)(s + 380) + 92) = *(Vec *)(s + 92);
            }
        }
        if (*(int *)(s + 376) != -1) {
            xy[0] = *(int *)(s + 92);
            xy[1] = *(int *)(s + 100);
            FUN_020bf680(s + 288, xy, DAT_020f2af0[*(int *)(s + 280)]);
            FUN_020be5d4(FUN_020be450(), *(int *)(s + 376), 0, s + 288);
            FUN_02047ae8(packet);
            packet[0] = *(int *)(s + 232);
            packet[1] = *(int *)(s + 376);
            packet[2] = *(int *)(s + 96);
            packet[3] = *(int *)(s + 256);
            packet[4] = *(int *)(s + 228);
            packet[5] = 3;
            packet[6] = 16;
            FUN_0204a9cc(packet);
        }
    }
    return result;
}
