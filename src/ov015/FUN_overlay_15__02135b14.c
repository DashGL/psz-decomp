// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_overlay_15__02135b14 @ 0x02135b14, verified extent 0x30.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213e8f4[];
// FUN_overlay_15__02135b14 @ 0x02135b14 (code 0x2a, pool extent 0x30, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Create indexed sprite with forwarded configuration and fill its first descriptor.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__02135718(int,int,unsigned int);
extern void *FUN_overlay_15__0213587c(void *,int);
extern void FUN_overlay_15__02135aac(int,int,void *);
void *FUN_overlay_15__02135b14(int bank,int index,unsigned int config) {void *sprite=FUN_overlay_15__02135718(bank,((unsigned short **)(((unsigned int)DAT_0213e8f4 + 0u)))[bank][index*4],config);FUN_overlay_15__02135aac(bank,index,FUN_overlay_15__0213587c(sprite,0));return sprite;}
