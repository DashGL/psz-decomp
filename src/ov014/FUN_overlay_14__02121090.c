// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// FUN_overlay_14__02121090 @ 0x02121090
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_0211a51c[];
extern unsigned char D_0211a208[];
/* USA ROM reconstruction, 2026-11-05. Full dialog/menu behavior and concrete helper ABI. */
typedef struct {short type,id;int payload;} Event;extern void FUN_02084bd8(void *,int),FUN_02084bd0(void *,int),FUN_02084be0(void *,int);
int FUN_overlay_14__02121090(unsigned *s,Event *e){switch(s[1]){case 0:FUN_02084bd8(D_0211a51c,0);FUN_02084bd0(D_0211a51c,0);FUN_02084be0(D_0211a51c,-1);e->type=11;e->id=1;break;case 1:e->type=11;e->id=4;break;case 2:e->type=11;e->id=5;break;case 3:D_0211a208[1]=1;e->type=11;e->id=9;break;case 4:e->type=4;e->id=1;break;}return 1;}
