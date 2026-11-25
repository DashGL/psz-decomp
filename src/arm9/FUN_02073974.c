// FUN_02073974 @ 0x02073974 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073974 @ 0x02073974 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If global descriptor valid, write signed bytes and halfword to outputs.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073974.txt.
 */
extern int FUN_02073954(void); int FUN_02073974(int *a,int *b,unsigned short *c) { if(FUN_02073954()==1) { signed char *p=(signed char *)0x0211a210; *a=p[16]; *b=p[17]; *c=*(unsigned short *)(p+28); return 1; } return 0; }
