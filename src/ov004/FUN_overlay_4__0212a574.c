// flags: -O4,s
enum { E0 = 0, E1 = 1 };

extern int DAT_0211a3c4[];
extern unsigned short DAT_0211a3b8[];
extern int FUN_0206d36c(const int *, int *);
extern int FUN_02031c44(void *);
extern void *FUN_02031a74(void);
extern void FUN_0208971c(void *, const void *);
extern void FUN_02090b44(void *);

void FUN_overlay_4__0212a574(char *self, const int *event)
{
    int kind = -1, xy[2];

    if (FUN_0206d36c(event, &kind) == 1) {
        if (kind != 0 && kind != 3) {
            if (((DAT_0211a3c4[2] >= 0) ? E1 : E0) == 1 && FUN_02031c44(FUN_02031a74()) == 1 && (((DAT_0211a3b8[0] & 2) != 0) ? E1 : E0) == 0) {
                if (*(int *)(self + 780) == 0) {
                    *(int *)(self + 780) = 1;
                    *(unsigned short *)(self + 764) = 80;
                    xy[0] = *(int *)(self + 784) << 12;
                    xy[1] = (*(int *)(self + 788) - 18) << 12;
                    FUN_0208971c(self + 772, xy);
                }
            } else {
                FUN_02090b44(self + 764);
                *(int *)(self + 780) = 0;
            }
        } else {
            FUN_02090b44(self + 764);
            *(int *)(self + 780) = 0;
        }
    }
}
