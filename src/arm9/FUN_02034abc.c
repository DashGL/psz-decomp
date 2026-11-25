// FUN_02034abc @ 0x02034abc (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034abc @ 0x02034abc (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Store word, signed/unsigned stack bytes, and two register bytes; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02034abc.txt.
 */
void *FUN_02034abc(char *self,unsigned int word,unsigned int c,unsigned int d,signed char a,unsigned char b) { *(unsigned int *)self=word; self[4]=a; self[5]=b; self[6]=c; self[7]=d; return self; }
