// FUN_020300a4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020300a4 @ 0x020300a4 (inventory code 0x38, arm)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/020300a4.txt.
 */
extern char G_02108C10[]; extern char G_02108C14[];
extern void FUN_0202e8cc(void); extern void FUN_02066a2c(void *);
void FUN_020300a4(unsigned short *message) { if(message[0]==18) { ((unsigned int *)G_02108C10)[9]=message[1]; if(!message[1]) FUN_0202e8cc(); FUN_02066a2c((void *)G_02108C14); } }
