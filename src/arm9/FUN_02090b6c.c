// FUN_02090b6c @ 0x02090b6c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02090b6c @ 0x02090b6c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install object table and initialize sentinel, zero and halfword fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02090b6c.txt.
 */
void *FUN_02090b6c(unsigned int *self) { self[0]=0x020facc0; self[1]=-1; self[2]=-1; self[3]=-1; self[4]=0; self[5]=0; self[6]=0; self[7]=-1; self[8]=-1; self[9]=-1; self[10]=-1; self[11]=0; self[12]=0; self[13]=-1; ((unsigned short *)self)[28]=0; return self; }
