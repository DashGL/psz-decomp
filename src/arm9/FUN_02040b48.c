// FUN_02040b48 @ 0x02040b48 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040b48 @ 0x02040b48 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 34.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b34/02040b48.txt.
 */
extern void FUN_02040b8c(void *,void *); extern void FUN_020ba8b4(void *);
void FUN_02040b48(char *s) { if(*(void **)(s+0xb8)) { int i; for(i=0;i<*(int *)(s+0xbc);i++) FUN_02040b8c(s,*(char **)(s+0xb8)+280*i); FUN_020ba8b4(*(void **)(s+0xb8)); *(void **)(s+0xb8)=0; } }
