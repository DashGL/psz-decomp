// FUN_0209dee0 @ 0x0209dee0 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_0209dee0 @ 0x0209dee0 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize resource state and allocate its descriptor loader.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209dee0.txt.
 */
extern void FUN_0200c938(void *,unsigned int);extern void *FUN_020ba894(unsigned int),*FUN_0209e1d4(void *,void *);void *FUN_0209dee0(char *s){void *p;*(int *)s=0;*(int *)(s+4)=0;*(int *)(s+8)=0;*(int *)(s+12)=65535;FUN_0200c938(s+16,96);*(int *)(s+112)=0;s[116]=7;s[117]=7;s[118]=15;s[119]=7;p=FUN_020ba894(16);if(p)p=FUN_0209e1d4(p,(void *)0x020fb5c4);*(void **)s=p;return s;}
