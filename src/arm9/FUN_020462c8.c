// FUN_020462c8 @ 0x020462c8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020462c8 @ 0x020462c8 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/020462c8.txt.
 */
extern unsigned int DAT_02108d6c[];
typedef struct { unsigned int a,b,c; } Record; extern void FUN_02035408(Record *,unsigned int,unsigned int,unsigned int);
void FUN_020462c8(Record *out) { Record temp; unsigned int *base=DAT_02108d6c; FUN_02035408(&temp,base[11],base[12],base[13]); *out=temp; }
