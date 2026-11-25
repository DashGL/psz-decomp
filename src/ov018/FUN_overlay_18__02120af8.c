// FUN_overlay_18__02120af8 @ 0x02120af8 (0xa0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_18__02120af8 @ 0x02120af8 (code 0x86, pool extent 0xa0, thumb)
// check: vers=2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize the vtable, counters, two small arrays, and embedded work buffers.
 * Field identities remain provisional.
 */
extern void *FUN_02001540(void *,int,unsigned int);void *FUN_overlay_18__02120af8(unsigned char *p) {*(unsigned int *)p=0x02123a9c;*(unsigned int *)(p+904)=0;*(unsigned int *)(p+908)=0;*(unsigned int *)(p+912)=0;*(unsigned int *)(p+916)=0;*(unsigned int *)(p+920)=0;*(unsigned int *)(p+924)=0;*(unsigned int *)(p+11168)=0;*(unsigned int *)(p+11172)=0;*(unsigned int *)(p+11176)=0;*(unsigned int *)(p+11180)=0;FUN_02001540(p+0x3a0,0,0x2800);FUN_02001540(p+0x2bb0,0,20);FUN_02001540(p+0x2bc4,0,20);*(unsigned int *)(p+0x2bd8)=0;*(unsigned int *)(p+0x2bdc)=0;FUN_02001540(p+4,0,896);*(unsigned int *)(p+0x384)=0;*(unsigned int *)(p+0x2be0)=0;return p;}
