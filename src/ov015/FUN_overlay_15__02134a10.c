// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { char * field_0; } DAT_0213e8e8;
// FUN_overlay_15__02134a10 @ 0x02134a10 (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full global session-state update and source-first copy ABI. */
extern void FUN_overlay_15__021342c0(unsigned);
#pragma thumb off
extern unsigned short FUN_02053b6c(void);extern void FUN_02065774(const void *,void *,unsigned);
#pragma thumb on
#define G (DAT_0213e8e8.field_0)
void FUN_overlay_15__02134a10(void){FUN_overlay_15__021342c0(*(unsigned *)(G+2760));G[2704]=1;*(unsigned short *)(G+1608)=FUN_02053b6c();FUN_02065774(*(void **)(G+2724),G+2640,64);G[2707]=0;*(unsigned *)(G+516)=0;++*(unsigned short *)(G+1608);}
