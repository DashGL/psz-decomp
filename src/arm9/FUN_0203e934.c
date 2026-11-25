// FUN_0203e934 @ 0x0203e934 (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e934 @ 0x0203e934 (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 45.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b45/0203e934.txt.
 */
extern void *DAT_02108c84;
extern unsigned int FUN_02037bd0(void *,void *);extern unsigned int FUN_02037adc(void *,void *,int);
void FUN_0203e934(char *s,int index){void *m=DAT_02108c84;if(m){void *p=*(void **)(s+444+108*index);if(p){unsigned short *slot=(unsigned short *)(s+874+48*index);if(*slot==65535)*slot=FUN_02037bd0(m,p);}p=*(void **)(s+440+108*index);if(p){unsigned short *slot=(unsigned short *)(s+872+48*index);if(*slot==65535)*slot=FUN_02037adc(m,p,0);}}}
