// flags: -O4,s
#pragma opt_propagation off
extern unsigned char *DAT_0211a1f4;
int FUN_0206e930(void *unused, int id, unsigned char *out) {
    unsigned char *self = DAT_0211a1f4;
    if (self != 0 && id >= 1 && id <= 100) {
        unsigned char *entry = *(unsigned char **)(self + 0x198);
        int idx = id - 1;
        if (entry != 0) {
            entry += idx * 24;
            *(unsigned int *)(out + 4) = *(unsigned int *)(entry + 20);
            *(unsigned short *)(out + 12) = *(unsigned short *)(entry + 0);
            *(unsigned short *)(out + 14) = *(unsigned short *)(entry + 2);
            *(unsigned short *)(out + 16) = *(unsigned short *)(entry + 4);
            *(unsigned short *)(out + 18) = *(unsigned short *)(entry + 6);
            *(unsigned short *)(out + 20) = *(unsigned short *)(entry + 8);
            *(unsigned short *)(out + 22) = *(unsigned short *)(entry + 10);
            *(unsigned short *)(out + 24) = *(unsigned short *)(entry + 12);
            *(unsigned short *)(out + 26) = *(unsigned short *)(entry + 14);
            out[28] = entry[16];
            return 1;
        }
    }
    return 0;
}
