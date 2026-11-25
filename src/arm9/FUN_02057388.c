// flags: -O2,p -noThumb
#pragma opt_common_subs off
#pragma opt_propagation off
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct {
    u8 pad0[4];
    u8 rom[0x7c];
    u8 dma_buf[0x2c];
    u32 f_ac;
    u16 f_b0;
    u8 pad_b2[3];
    u8 f_b5[3];
    u8 pad_b8[6];
    u16 f_be;
} CtrdgHdr;

typedef struct {
    u16 makerCode;
    u8 gameCode[3];
    u8 pad5;
    u16 gameCode2;
    u32 gameCode3;
} CtrdgOut;

extern u32 DAT_02111f20;
extern volatile u16 DAT_04000300;
extern volatile u16 DAT_02111f0c[];
extern CtrdgHdr DAT_02111f40;
extern u8 DAT_02111f44[];

extern u32 FUN_02065dd4(u32);
extern void FUN_020571bc(u32, u32 *);
extern void FUN_02057140(u32 *);
extern void FUN_02057188(u32 *);
extern void FUN_02057218(u32, u32 *);
extern void FUN_020673d4(void *, u32);
extern void FUN_02064e48(u32, const void *, void *, u32);
extern void FUN_0206552c(const void *, void *, u32);
extern int FUN_02057034(void);
extern void FUN_020673a0(void);
extern void FUN_0205723c(u32);
extern void FUN_020004fa(u32);

static inline u16 OS_EnableIrq(void) {
    u16 prev = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = 1;
    return prev;
}

static inline u16 OS_RestoreIrq(u16 enable) {
    u16 prev = *(volatile u16 *)0x04000208;
    *(volatile u16 *)0x04000208 = enable;
    return prev;
}

void FUN_02057388(void) {
    u32 lock[2];
    u32 timing[2];
    u32 saved_mask;
    u16 saved_ime;
    int bit;
    int i;

{ u32 init = DAT_02111f20; if (init) return; { volatile u16 *q = &DAT_04000300; DAT_02111f20 = 1; if (!(*q & 1)) return; } }

    saved_mask = FUN_02065dd4(0x40000);
    saved_ime = OS_EnableIrq();

    FUN_020571bc(DAT_02111f0c[1], lock);

    bit = (*(volatile u16 *)0x04000204 & 0x8000) >> 15;
    FUN_02057140(timing);
    *(volatile u16 *)0x04000204 = (u16)(*(volatile u16 *)0x04000204 & ~0x8000u);
    FUN_020673d4((void *)((u32)&DAT_02111f40 + 0x80), 0x40);
    FUN_02064e48(1, (const void *)0x08000080, (void *)((u32)&DAT_02111f40 + 0x80), 0x40);
    *(volatile u16 *)0x04000204 = (u16)((*(volatile u16 *)0x04000204 & ~0x8000u) | (bit << 15));
    FUN_02057188(timing);

    FUN_02057218(DAT_02111f0c[1], lock);

    if (*(volatile u8 *)0x027fff9b || !*(volatile u8 *)0x027fff9a) {
        CtrdgHdr *hdr = &DAT_02111f40;
        CtrdgOut *out = (CtrdgOut *)0x027ffc30;
        out->makerCode = hdr->f_be;
        for (i = 0; i < 3; i++) {
            out->gameCode[i] = hdr->f_b5[i];
        }
        out->gameCode2 = hdr->f_b0;
        out->gameCode3 = hdr->f_ac;
        *(volatile u8 *)0x027fff9b = (u8)(FUN_02057034() != 0);
        *(volatile u8 *)0x027fff9a = 1;
    }

    FUN_0206552c((const void *)0xffff0020, DAT_02111f44, 0x9c);
    FUN_020673a0();
    FUN_0205723c(((((u32)&DAT_02111f40 - 0x02000000u) >> 5) << 6) | 1);
    while (DAT_02111f0c[0] != 1) {
        FUN_020004fa(1);
    }

    OS_RestoreIrq(saved_ime);
    FUN_02065dd4(saved_mask);
}
