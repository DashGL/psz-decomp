// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets.
// Unsigned halfword field evidence: notes/sessions/continue-low-20261112.md
typedef struct {unsigned char body[48];unsigned char active;unsigned char pad[3];}Record_02035144;typedef struct {unsigned char prefix[16];Record_02035144 records[11];}Object_02035144;
// FUN_02035144 @ 0x02035144 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Clear byte at +40 in one of eleven 52-byte records for valid signed index.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02035144.txt.
 */
void FUN_02035144(Object_02035144 *self,int index) { if(index>=0 && index<11) self->records[index].active=0; }
