// FUN_0205649c @ 0x0205649c (0x60, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205649c @ 0x0205649c (inventory code 0x58, arm)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 229.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b229/0205649c.txt.
 */
void FUN_0205649c(unsigned int first,unsigned int second){volatile unsigned char *p=(volatile unsigned char *)0x040001a1;while(*(volatile unsigned int *)0x040001a4&0x80000000u){}p[0]=192;p[7]=first>>24;p[8]=first>>16;p[9]=first>>8;p[10]=first;p[11]=second>>24;p[12]=second>>16;p[13]=second>>8;p[14]=second;}
