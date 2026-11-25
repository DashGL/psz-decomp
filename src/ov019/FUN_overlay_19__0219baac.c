// FUN_overlay_19__0219baac @ 0x0219baac (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch61.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219baac @ 0x0219baac (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay19 ROM reconstruction, 2026-11-05.
 * Game actor/controller allocation, transition or dispatch.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch349.md.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,unsigned int);extern int *FUN_overlay_19__0219854c(void *,unsigned int);
void FUN_overlay_19__0219baac(int *self) { char *owner=(char *)self[1];int *record;self[4]=0;record=FUN_overlay_19__0219854c(owner,*(unsigned short *)(owner+0x44));if(record)self[4]=record[10];self[3]=0;FUN_02040c0c(owner,0,2,4096,0); }
