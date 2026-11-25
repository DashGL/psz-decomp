// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_overlay_15__02134720 @ 0x02134720, verified extent 0x20.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213e8e0[];
// FUN_overlay_15__02134720 @ 0x02134720 (thumb)
// flags: -O4,s
#pragma thumb off
extern int FUN_020554f4(void *,const void *,unsigned);
#pragma thumb on
int FUN_overlay_15__02134720(unsigned index){char *self=*(char **)((unsigned int)DAT_0213e8e0 + 4u);return FUN_020554f4(self+5088,self+7168,index);}
