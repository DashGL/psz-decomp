// FUN_020405c8 @ 0x020405c8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_020405c8 @ 0x020405c8 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Copy fixed triple and clear halfword +c and word +10; return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/020405c8.txt.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void *FUN_020405c8(char *self) { *(Triple *)self=*(const Triple *)0x020fc958; *(unsigned short *)(self+12)=0; *(unsigned int *)(self+16)=0; return self; }
