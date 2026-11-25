// flags: -noThumb -O2,p
#pragma opt_common_subs off
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern void FUN_02068744(void);
extern int FUN_0206889c(int, int);
extern void FUN_020673d4(void *, unsigned int);
extern void FUN_02064d58(unsigned int, void *, unsigned int, unsigned int);
extern void FUN_02053424(void);
extern void FUN_02066f0c(void *, void *, int);
extern void FUN_020673f0(void *, unsigned int);
extern int FUN_02066f34(void *, void *, int);
extern void FUN_02068850(int, void (*)(void));
extern void FUN_02053078(void);
struct Wm9Buf {
    unsigned char *f00; unsigned char *f04; unsigned int f08;
    unsigned char *f0c; unsigned char *f10; unsigned short f14;
    unsigned char pad16[0xcc - 0x16];
    unsigned int fcc[16]; unsigned int f10c[16];
    unsigned int f14c; unsigned short f150;
};
struct WmGlobal { unsigned short initialized; struct Wm9Buf *buf; };
extern struct WmGlobal DAT_02110b00;
extern unsigned char DAT_02110b08[];
extern unsigned char DAT_02110b28[];
extern unsigned char DAT_02110ba0[10][0x100];
int FUN_02052b90(struct Wm9Buf *buffer, unsigned short channel, unsigned int size) {
    unsigned int prior = FUN_020683d4();
    if (DAT_02110b00.initialized) { FUN_020683e8(prior); return 3; }
    if (!buffer) { FUN_020683e8(prior); return 6; }
    if (channel > 3) { FUN_020683e8(prior); return 6; }
    if ((unsigned int)buffer & 0x1f) { FUN_020683e8(prior); return 6; }
    FUN_02068744();
    if (!FUN_0206889c(10, 1)) { FUN_020683e8(prior); return 4; }
    FUN_020673d4(buffer, size);
    FUN_02064d58(channel, buffer, 0, size);
    DAT_02110b00.buf = buffer;
    buffer->f00 = (unsigned char *)buffer + 0x200;
    DAT_02110b00.buf->f04 = DAT_02110b00.buf->f00 + 0x300;
    DAT_02110b00.buf->f0c = DAT_02110b00.buf->f04 + 0x800;
    DAT_02110b00.buf->f10 = DAT_02110b00.buf->f0c + 0x100;
    FUN_02053424();
    DAT_02110b00.buf->f14 = (unsigned short)channel;
    DAT_02110b00.buf->f14c = 0;
    DAT_02110b00.buf->f150 = 0;
    { int i; for (i = 0; i < 16; i++) { DAT_02110b00.buf->fcc[i] = 0; DAT_02110b00.buf->f10c[i] = 0; } }
    FUN_02066f0c(DAT_02110b08, DAT_02110b28, 10);
    { int i; for (i = 0; i < 10; i++) {
        *(unsigned short *)DAT_02110ba0[i] = 0x8000;
        FUN_020673f0(DAT_02110ba0[i], 2);
        FUN_02066f34(DAT_02110b08, DAT_02110ba0[i], 1);
    } }
    FUN_02068850(10, FUN_02053078);
    DAT_02110b00.initialized = 1;
    FUN_020683e8(prior);
    return 0;
}
