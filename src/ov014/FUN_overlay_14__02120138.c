
extern unsigned char DAT_021220c8[];
extern void FUN_020a45a4(int);
extern void FUN_020c2b84(void *, const void *, int, int, int);

#pragma opt_propagation off
void FUN_overlay_14__02120138(void *self) {
    int a, b;
    
    FUN_020a45a4(1);
    b = 1; a = 0;
    FUN_020a45a4(8);
    *(volatile unsigned short *)0x0400000e = (unsigned short)((b << 2) | ((a << 8) | (0x80 | (*(volatile unsigned short *)0x0400000e & 0x43))));
    FUN_020c2b84(self, DAT_021220c8, 3, 0, 1);
}
