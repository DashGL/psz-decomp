// FUN_02099dac @ 0x02099dac (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_02099dac @ 0x02099dac (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return bounded three-dimensional table cell or base fallback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099dac.txt.
 */
void *FUN_02099dac(char *self,int a,int b,int c){if(c>=0 && c<3 && a>=0 && a<5 && b>=0 && b<5)return *(char **)(self+8)+28*(3*a+15*b+c);return *(void **)(self+8);}
