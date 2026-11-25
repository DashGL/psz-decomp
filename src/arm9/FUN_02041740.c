// FUN_02041740 @ 0x02041740 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041740 @ 0x02041740 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 35.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b35/02041740.txt.
 */
extern void *DAT_02108c84;
extern const char DAT_020f8d3c[], DAT_020f8d44[];
extern void *FUN_020bc51c(void *,const void *); extern unsigned int FUN_02037adc(void *,void *,int); extern void FUN_02033f30(void *,unsigned int,unsigned int); extern unsigned int FUN_02037c88(void *,void *,int,int);
void FUN_02041740(char *s) { if(*(void **)s) { void *m=DAT_02108c84; if(m) { void *p=FUN_020bc51c(*(void **)s,DAT_020f8d3c); *(unsigned short *)(s+16)=FUN_02037adc(m,p,0); FUN_02033f30(m,*(unsigned short *)(s+16),*(unsigned short *)(s+20)); p=FUN_020bc51c(*(void **)s,DAT_020f8d44); if(p) *(unsigned short *)(s+18)=FUN_02037c88(m,p,4,0); } } }
