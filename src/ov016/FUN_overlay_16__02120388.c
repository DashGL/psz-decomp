// FUN_overlay_16__02120388 @ 0x02120388 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_16__02120388 @ 0x02120388 (code 0x74, pool extent 0x78, thumb)
// check: vers=2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Clear object counters, auxiliary fields, and the 1024-byte embedded buffer.
 * Field identities remain provisional.
 */
extern void *FUN_02001540(void *,int,unsigned int);void *FUN_overlay_16__02120388(unsigned char *p) {*(unsigned int *)(p+0)=0;*(unsigned int *)(p+4)=0;*(unsigned int *)(p+8)=0;*(unsigned int *)(p+12)=0;*(unsigned int *)(p+16)=0;*(unsigned int *)(p+20)=0;*(unsigned int *)(p+24)=0;*(unsigned int *)(p+1096)=0;*(unsigned int *)(p+1172)=0;*(unsigned int *)(p+1176)=0;*(unsigned int *)(p+1180)=0;*(unsigned int *)(p+1184)=0;*(unsigned int *)(p+1188)=0;*(unsigned int *)(p+1192)=0;*(unsigned int *)(p+1196)=0;*(unsigned int *)(p+1200)=0;*(unsigned int *)(p+1204)=0;*(unsigned int *)(p+1208)=0;*(unsigned int *)(p+1212)=0;*(unsigned int *)(p+1216)=0;*(unsigned int *)(p+1220)=0;FUN_02001540(p+72,0,1024);return p;}
