// FUN_0204e994 @ 0x0204e994 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e994 @ 0x0204e994 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/0204e994.txt.
 */
typedef struct { unsigned char a,b,c,d; unsigned int x,y,z; } Record; extern void FUN_0203955c(void *); extern void FUN_02084a1c(void *,void *);
void FUN_0204e994(Record *out,unsigned int value,void *arg) { Record temp; FUN_0203955c(&temp); temp.a=3; temp.b=0; temp.d=0; temp.c=value; FUN_02084a1c(&temp,arg); *out=temp; }
