// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x34 exact_bytes=0 bad_relocs=0
// Signedness proof: notes/sessions/matching-overlays-2026-11-12-active-byte.json
// FUN_overlay_15__02135d9c @ 0x02135d9c (code 0x2c, pool extent 0x34, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Start raw task callback only when inactive and set halfword target.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__021373d8(int,unsigned int,void *,int);
int FUN_overlay_15__02135d9c(int value) {unsigned char *p=*(unsigned char **)0x0213e8fc;if(p[9])return 0;*(void **)p=FUN_overlay_15__021373d8(1,0x02135dd1,p,200);*(short *)(p+4)=0;*(short *)(p+6)=value;p[9]=1;return 1;}
