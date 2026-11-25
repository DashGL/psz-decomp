// FUN_0205a298 @ 0x0205a298 (0x6c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205a298 @ 0x0205a298 (inventory code 0x68, arm)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 230.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b230/0205a298.txt.
 */
extern void FUN_02055c08(unsigned short),FUN_02055c24(unsigned short);int FUN_0205a298(void *unused,int command){switch(command){case 9:FUN_02055c08((unsigned short)*(unsigned int *)0x02112524);return 0;case 10:FUN_02055c24((unsigned short)*(unsigned int *)0x02112524);return 0;case 1:return 4;default:return 8;}}
