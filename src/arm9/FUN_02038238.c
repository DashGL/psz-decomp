// flags: -O4,s
extern void FUN_0203e72c(void *, void *, unsigned int);
extern char *FUN_0203e910(void *, unsigned int);
extern void *FUN_02033d60(void *, unsigned int, int, unsigned int);
extern unsigned int FUN_02038464(void *);
extern void FUN_02042710(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_02033f30(void *, unsigned int, unsigned int);
extern void FUN_0203ec54(void *, void *, unsigned int, unsigned int);
extern void *DAT_02108c84;
extern void *DAT_02108d08;

int FUN_02038238(char *s, int mode) {
    void *m = DAT_02108c84;
    void *resources = DAT_02108d08;
    if (resources) {
        FUN_0203e72c(resources, s + 36, *(unsigned char *)(s + 152));
        if (m) {
            *(void **)(s + 144) = FUN_0203e910(resources, *(unsigned char *)(s + 152));
            if (*(void **)(s + 144)) {
                *(unsigned short *)(s + 148) = **(unsigned short **)(s + 144);
                *(void **)(s + 140) = FUN_02033d60(m, *(unsigned short *)(s + 148), 2, 65535);
                if (*(void **)(s + 140)) {
                    unsigned int scale;
                    *(unsigned int *)(s + 220) = FUN_02038464(s + 36);
                    scale = *(unsigned int *)(s + 220);
                    FUN_02042710(*(void **)(s + 140), scale, scale, scale);
                }
                *(unsigned short *)(s + 150) = *(unsigned short *)(*(char **)(s + 144) + 2);
                FUN_02033f30(m, *(unsigned short *)(s + 148), *(unsigned short *)(s + 150));
                if (mode == 1) {
                    FUN_0203ec54(resources, s + 36, *(unsigned char *)(s + 152), *(unsigned int *)(s + 204));
                    *(int *)(s + 232) = 2;
                } else {
                    *(int *)(s + 232) = 4;
                }
            }
        }
        return 1;
    }
    return 0;
}
