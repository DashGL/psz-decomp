// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
extern unsigned int FUN_02027d48(void *);

int FUN_020282cc(void *param_1, unsigned char *param_2) {
    unsigned int ip;
    int p;
    unsigned short port;
    if (param_1 == 0) {
        return -39;
    }
    ip = FUN_02027d48(param_1);
    p = param_1 != 0 ? *(unsigned short *)((char *)param_1 + 0x74) : 0;
    if (ip == 0) {
        p = 0;
    }
    port = (unsigned short)p;
    param_2[0] = 8;
    param_2[1] = 2;
    *(unsigned short *)(param_2 + 2) = (unsigned short)((((int)port >> 8) & 0xff) | ((port << 8) & 0xff00));
    *(unsigned int *)(param_2 + 4) = ((ip >> 24) & 0xff) | ((ip >> 8) & 0xff00) | ((ip << 8) & 0xff0000) | ((ip << 24) & 0xff000000);
    return 0;
}
