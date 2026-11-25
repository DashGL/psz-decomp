// FUN_0207edbc @ 0x0207edbc (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207edbc @ 0x0207edbc (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and construct effect, forwarding four initialization inputs.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207edbc.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0207ee38(void *); extern void FUN_0207ee74(void *,void *,int,int,int); void *FUN_0207edbc(void *a,int b,int c,int d) { void *p=FUN_020ba894(264); if(p) p=FUN_0207ee38(p); if(p) FUN_0207ee74(p,a,b,c,d); return p; }
