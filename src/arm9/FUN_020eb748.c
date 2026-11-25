// flags: -O4,s
extern unsigned int DAT_020fb604[];
extern unsigned int DAT_020fb618[];
extern unsigned int DAT_020fb684[];
extern void FUN_02076c4c(void *, unsigned int);

void FUN_020eb748(void) {
    DAT_020fb604[8] = DAT_020fb604[3];
    DAT_020fb604[9] = DAT_020fb604[1];
    DAT_020fb604[10] = DAT_020fb604[4];
    DAT_020fb604[11] = DAT_020fb604[2];
    DAT_020fb604[12] = DAT_020fb604[0];
    FUN_02076c4c(DAT_020fb618, 4096);
    DAT_020fb604[16] = 0x5d53491f;
    DAT_020fb604[17] = 0x6e6c6762;
    DAT_020fb604[18] = 0x76747270;
    DAT_020fb604[19] = 0x76767676;
    DAT_020fb604[20] = 0x76767676;
    DAT_020fb604[21] = 0x76767676;
    DAT_020fb604[22] = 0x76767676;
    DAT_020fb604[23] = 0x76767676;
    DAT_020fb604[27] = 0x46403122;
    DAT_020fb604[28] = 0x5856514b;
    DAT_020fb604[29] = 0x605e5c5a;
    DAT_020fb604[30] = 0x64636362;
    DAT_020fb604[31] = 0x66666565;
    DAT_020fb684[0] = 0x69686867;
    DAT_020fb684[1] = 0x6b6b6a6a;
    DAT_020fb684[2] = 0x6e6d6d6c;
}
