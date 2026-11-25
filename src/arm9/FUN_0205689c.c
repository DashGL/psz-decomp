// FUN_0205689c @ 0x0205689c (0x5c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205689c @ 0x0205689c (inventory code 0x50, arm)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 226.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b226/0205689c.txt.
 */
extern void FUN_0205649c(unsigned int,unsigned int);unsigned int FUN_0205689c(void){volatile unsigned int *control=(volatile unsigned int *)0x040001a4;unsigned int value;FUN_0205649c(0xb8000000,0);value=*(unsigned int *)(*(char **)0x020f93ec+96);*control=((value&~0x07000000u)|0xa7000000)&0xffffe000;while(!(*control&0x00800000)){}return *(volatile unsigned int *)0x04100010;}
