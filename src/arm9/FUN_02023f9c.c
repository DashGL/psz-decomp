// flags: -O4,p -noThumb
extern struct { char *pad; char *ctx; } DAT_021181a0;
void FUN_02023f9c(void) {
    char *ctx = DAT_021181a0.ctx;
    char *p = *(char **)(ctx + 0xa4);
    if (p) {
        p[8] = 10;
        *(unsigned int *)(p + 0x44) = 0;
    }
}
