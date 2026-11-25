// flags: -O4,s
extern unsigned char *DAT_0213e8c4;
#pragma thumb off
extern void FUN_020656b8(void *, unsigned int, unsigned int);
#pragma thumb reset
extern void FUN_overlay_15__02131fbc(unsigned int);
void FUN_overlay_15__02131f24(unsigned int index) {
    unsigned int offset = index << 8;
    unsigned char *base = DAT_0213e8c4;
    FUN_020656b8(base + offset, 0, 239);
    (base + offset)[231] = 0xff;
    FUN_overlay_15__02131fbc(index);
}
