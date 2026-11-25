// FUN_overlay_22__0219ce90 @ 0x0219ce90 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ce90 @ 0x0219ce90 (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Release optional handle and reset one of two indexed descriptors.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219aea0(void *,int *);
extern void FUN_overlay_22__0219c91c(void *);
void FUN_overlay_22__0219ce90(char *p,int index) {if(index>=0&&index<2) {int *record=(int *)(p+116+index*20);if(record[1]!=*(int *)0x020ed09c)FUN_overlay_22__0219aea0(p,record+1);FUN_overlay_22__0219c91c(record);}}
