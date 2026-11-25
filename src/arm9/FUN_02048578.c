// FUN_02048578 @ 0x02048578 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048578 @ 0x02048578 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 29.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b29/02048578.txt.
 */
extern void FUN_020480b8(void *,int);
void FUN_02048578(char *s,int enabled) { int i,count=3; if(*(unsigned int *)(s+4)) count=1; for(i=0;i<count;i++) { char *p=s+4*i; if(*(void **)(p+8)) FUN_020480b8(*(void **)(p+8),enabled); if(*(void **)(p+0x14)) FUN_020480b8(*(void **)(p+0x14),enabled); } }
