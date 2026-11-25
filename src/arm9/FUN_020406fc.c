// FUN_020406fc @ 0x020406fc (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020406fc @ 0x020406fc (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 35.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b35/020406fc.txt.
 */
extern int FUN_020bbfa8(unsigned int);
void FUN_020406fc(char *s) { if(!(*(unsigned int *)(s+0x78)&2)) { if(FUN_020bbfa8(512)) *(unsigned short *)(s+0x82)+=768; if(FUN_020bbfa8(256)) *(unsigned short *)(s+0x82)-=768; } }
