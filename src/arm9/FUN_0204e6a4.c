// FUN_0204e6a4 @ 0x0204e6a4 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e6a4 @ 0x0204e6a4 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/0204e6a4.txt.
 */
typedef struct { unsigned int tag; unsigned char a,b,c,d; unsigned short e,f; } Packet; extern void FUN_0204e4e0(Packet *); extern void FUN_020bce3c(Packet *);
void FUN_0204e6a4(unsigned int a,unsigned int b) { Packet temp; FUN_0204e4e0(&temp); temp.a=a; temp.b=2; temp.c=b; FUN_020bce3c(&temp); }
