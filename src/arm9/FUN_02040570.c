// FUN_02040570 @ 0x02040570 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_02040570 @ 0x02040570 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/02040570.txt.
 */
typedef struct { unsigned int a,b,c; } Record; extern void FUN_0204059c(void *);
void FUN_02040570(char *s,Record *out,unsigned short *value) { unsigned short v; if(*(unsigned int *)(s+0x74)) { *out=*(Record *)(s+0x64); v=*(unsigned short *)(s+0x70); } else { FUN_0204059c(out); v=0; } *value=v; }
