// flags: -O4,p -noThumb
typedef struct {
    unsigned int *buf;
    unsigned int flag;
} Global;
extern Global DAT_02107004;
extern void FUN_0201c8fc(void);
extern void FUN_02065554(void *, void *, unsigned int);
void FUN_0201c8a0(void) {
    unsigned int *buf;
    if (DAT_02107004.flag != 0) {
        FUN_0201c8fc();
    }
    buf = DAT_02107004.buf;
    if (buf != 0 && *buf != 0) {
        FUN_02065554(buf + 1, (void *)0x04000400, *buf << 2);
        *DAT_02107004.buf = 0;
    }
}
