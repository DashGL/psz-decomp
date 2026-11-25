// version: 1.2/sp4
// flags: -O4,p -noThumb
extern void *FUN_02014b1c(int);
extern void FUN_0201671c(void *, int);
extern void FUN_020160bc(void *, int);
extern void **DAT_02105718;

void FUN_02016b18(int a0, int a1) {
    void **r3 = DAT_02105718;
    void *r5 = *r3;
    if (*(int *)((char *)r5 + 0x10) == 0) {
        return;
    }
    *(int *)((char *)r3 + 0x30) = 1;
    if (*(void (**)(void *, int))((char *)r5 + 0x18) != 0) {
        (*(void (**)(void *, int))((char *)r5 + 0x18))(DAT_02105718, a0);
    }
    if (*(int *)((char *)DAT_02105718 + 0x30) != 0) {
        if (a1 != -1) {
            int shift = *(int *)((char *)r5 + 0x14);
            void *p = FUN_02014b1c(a1);
            *(unsigned int *)((char *)p + 0x20) = (*(unsigned int *)((char *)p + 0x20) & ~(1 << shift)) | (1 << shift);
        }
        switch (*(unsigned int *)((char *)r5 + 0x14)) {
        case 0:
            FUN_0201671c(r5, a0);
            break;
        case 1:
        case 2:
            FUN_020160bc(r5, a0);
            break;
        case 3:
            break;
        }
    }
    if (*(void (**)(void *, int))((char *)r5 + 0x1c) != 0) {
        (*(void (**)(void *, int))((char *)r5 + 0x1c))(DAT_02105718, a0);
    }
}
