// FUN_overlay_15__02130f80 @ 0x02130f80 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02130f80 @ 0x02130f80 (code 0x32, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate shared palette storage, copy source and register updater task.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__021366c4(int,int);
extern void FUN_020655d8(const void *,void *,unsigned int);
extern void *FUN_overlay_15__021373d8(int,void *,void *,int);
void FUN_overlay_15__02130f80(const void *src) {unsigned char *p=FUN_overlay_15__021366c4(1544,4);void *task;*(void **)0x0213e8b0=p;FUN_020655d8(src,p+4,1536);task=FUN_overlay_15__021373d8(1,(void *)0x02131029,0,120);**(void ***)0x0213e8b0=task;}
