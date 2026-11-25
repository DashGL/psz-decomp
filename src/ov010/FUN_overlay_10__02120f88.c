// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_10__02120f88 @ 0x02120f88 (code 0x26, pool extent 0x2c, thumb)
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Copy optional twenty-byte record to stack, submit it and mark pending state.
 * Field identities remain provisional.
 */
extern int D_02122da4[];
extern void FUN_overlay_10__02120fb4(void *,const void *);
extern int FUN_020c0790(const void *);
void FUN_overlay_10__02120f88(const void *p) {if(p) {unsigned short record[10];record[0]=0;record[9]=0;FUN_overlay_10__02120fb4(record,p);FUN_020c0790(record);D_02122da4[3]=1;}}
