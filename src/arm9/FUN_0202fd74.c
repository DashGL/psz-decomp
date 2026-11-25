// flags: -O4,p -noThumb
extern void FUN_02067184(void *);
extern struct {
    unsigned char init;
    unsigned char pad[3];
    unsigned int f4;
    unsigned int f8;
    unsigned char pad2[0x18];
    unsigned int f24;
} DAT_02108c10;
extern unsigned char DAT_02108c1c;
void FUN_0202fd74(void) {
    if (DAT_02108c10.init) return;
    DAT_02108c10.init = 1;
    DAT_02108c10.f24 = 0;
    DAT_02108c10.f8 = 0;
    DAT_02108c10.f4 = 0;
    FUN_02067184(&DAT_02108c1c);
}
