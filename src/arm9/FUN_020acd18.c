// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p
extern unsigned short FUN_0203d448(char *, int, int);
extern void FUN_02094594(char *);

void FUN_020acd18(char *param_1) {
    switch (param_1[0xe1d]) {
    case 1:
        *(unsigned short *)(param_1 + 0xc2) = FUN_0203d448(param_1, 0x40, 0);
        break;
    case 2:
        *(unsigned short *)(param_1 + 0xc2) = FUN_0203d448(param_1, 0x10, 0x40);
        break;
    case 3:
        *(unsigned short *)(param_1 + 0xc2) = FUN_0203d448(param_1, 0x10, 0);
        break;
    case 4:
        *(unsigned short *)(param_1 + 0xc2) = FUN_0203d448(param_1, 0x10, 0x80);
        break;
    case 5:
        *(unsigned short *)(param_1 + 0xc2) = FUN_0203d448(param_1, 0x80, 0);
        break;
    case 6:
        *(unsigned short *)(param_1 + 0xc2) = FUN_0203d448(param_1, 0x20, 0x80);
        break;
    case 7:
        *(unsigned short *)(param_1 + 0xc2) = FUN_0203d448(param_1, 0x20, 0);
        break;
    case 8:
        *(unsigned short *)(param_1 + 0xc2) = FUN_0203d448(param_1, 0x20, 0x40);
        break;
    }
    FUN_02094594(param_1);
}
