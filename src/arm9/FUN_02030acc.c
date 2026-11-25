// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_02030acc @ 0x02030acc
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Return pointer to four-byte table record for signed index [0,47), otherwise null.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02030acc.txt.
 */
extern unsigned int data_020ec1b4[];
void *FUN_02030acc(int index) { if(index<0 || index>=47) return 0; return data_020ec1b4+index; }
