// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// FUN_overlay_12__0212f618 @ 0x0212f618 (thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete scene/resource initialization with fully copied 24-byte actor config. */
extern char G_021387EC[]; extern char G_0213884C[]; extern char G_0213B330[]; extern char G_0213E5C4[]; extern char G_0213E5E4[];
typedef struct {unsigned word[6];} Config;
extern void FUN_overlay_12__0212d7b8(void),FUN_0204f298(void),FUN_0204551c(void),FUN_overlay_12__02131b10(int),FUN_overlay_12__0212c6b4(void *),FUN_overlay_12__0212c694(void *);extern int FUN_020be404(void),FUN_020c2438(void *,void *,void *,int);extern void *FUN_02033b9c(const Config *),*FUN_020c1fc8(void);
void FUN_overlay_12__0212f618(char *s){Config c;FUN_overlay_12__0212d7b8();c=*(const Config *)G_0213B330;FUN_02033b9c(&c);FUN_020be404();FUN_0204f298();FUN_0204551c();FUN_overlay_12__02131b10(0);FUN_overlay_12__02131b10(1);FUN_overlay_12__02131b10(4);*(int *)(s+244)=FUN_020c2438(FUN_020c1fc8(),(void *)G_0213E5C4,(void *)G_0213E5E4,1);FUN_overlay_12__0212c6b4((void *)G_021387EC);FUN_overlay_12__0212c694((void *)G_0213884C);*(int *)(s+248)=1;*(int *)(s+68)=1;}
