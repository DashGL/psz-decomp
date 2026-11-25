// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x258, exact bytes and relocation targets.
// FUN_overlay_15__0212c89c @ 0x0212c89c (full extent 0x258, thumb)
// check: 2.0/sp2p3 target=0x258 candidate=0x258 words=0 exact_bytes=0 bad_relocs=0
extern const unsigned char D_0213a390[];
extern const unsigned short D_0213a3a2[];
extern const unsigned short D_0213a3a0[];
extern int D_0213e868;
extern void ** D_0213e818;
#pragma thumb off
extern int FUN_020662b4(char *, unsigned int, const char *, ...);
#pragma thumb on
extern void FUN_overlay_15__02127e24(int *, int *);
extern int FUN_overlay_15__02127e40(void);
extern void *FUN_overlay_15__02135f98(int, int);
extern void *FUN_overlay_15__02127f30(void **, unsigned int);
extern void FUN_overlay_15__0213709c(unsigned short *, const char *, int);
extern void FUN_overlay_15__02136208(void *, int, int, int, int, const unsigned short *, int);
extern int FUN_overlay_15__02125430(void);
extern void FUN_overlay_15__0213627c(void *, int, int, int, int, int, int, const void *);
extern void FUN_overlay_15__02136368(void *);
void FUN_overlay_15__0212c89c(void)
{
    unsigned short wbuf[8];
    int kind;
    char buf[8];
    int err, msg_id, y, x;
    void *canvas, *msg;
    FUN_overlay_15__02127e24(0, &kind);
    err = D_0213e868;
    if (err >= -20099) msg_id = 0;
    else if (err >= -20100) msg_id = 2;
    else if (err >= -20101) msg_id = 19;
    else if (err >= -20107) msg_id = 2;
    else if (err >= -20108) msg_id = 18;
    else if (err >= -20109) msg_id = 2;
    else if (err >= -20110) msg_id = 3;
    else if (err >= -20999) msg_id = 2;
    else if (err >= -22999) msg_id = 0;
    else if (err >= -23999) msg_id = 19;
    else if (err >= -49999) msg_id = 0;
    else if (err >= -50002) msg_id = 7;
    else if (err >= -50003) msg_id = 5;
    else if (err >= -50098) msg_id = 0;
    else if (err >= -50099) msg_id = (kind == 2) ? 5 : 7;
    else if (err >= -51098) msg_id = 0;
    else if (err >= -51099) msg_id = (kind == 2) ? 5 : 8;
    else if (err >= -51102) msg_id = 9;
    else if (err >= -51103) msg_id = 5;
    else if (err >= -51199) msg_id = 0;
    else if (err >= -51299) msg_id = 20;
    else if (err >= -51302) msg_id = 21;
    else if (err >= -51303) msg_id = 4;
    else if (err >= -51999) msg_id = 0;
    else if (err >= -52002) msg_id = 10;
    else if (err >= -52003) msg_id = 22;
    else if (err >= -52099) msg_id = 0;
    else if (err >= -52103) msg_id = 11;
    else if (err >= -52199) msg_id = 0;
    else if (err >= -52203) msg_id = 11;
    else if (err >= -52299) msg_id = 0;
    else if (err >= -52399) msg_id = 2;
    else if (err >= -52999) msg_id = 0;
    else if (err >= -53299) msg_id = 2;
    else msg_id = 0;
    canvas = FUN_overlay_15__02135f98(0, D_0213a390[FUN_overlay_15__02127e40()]);
    msg = FUN_overlay_15__02127f30(D_0213e818, msg_id);
    FUN_020662b4(buf, 8, (const char *)0x0213b2b8, -(D_0213e868));
    FUN_overlay_15__0213709c(wbuf, buf, 8);
    y = D_0213a3a2[FUN_overlay_15__02127e40() * 2];
    x = D_0213a3a0[FUN_overlay_15__02127e40() * 2];
    FUN_overlay_15__02136208(canvas, x, y, 2, 10, wbuf, 0);
    FUN_overlay_15__0213627c(canvas, 13, 60, 230, 94, 2, FUN_overlay_15__02125430(), msg);
    FUN_overlay_15__02136368(canvas);
}
