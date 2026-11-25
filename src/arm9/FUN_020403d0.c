// FUN_020403d0 @ 0x020403d0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_020403d0 @ 0x020403d0 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/020403d0.txt.
 */
typedef struct { unsigned int a,b,c; } Record;
void FUN_020403d0(char *s,Record *src,unsigned short value,void *arg) { if(!*(unsigned int *)(s+0x10)) { *(Record *)s=*src; *(unsigned short *)(s+0xc)=value; *(unsigned int *)(s+0x10)=1; *(void **)(s+0x78)=arg; } }
