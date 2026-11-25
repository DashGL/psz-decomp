// FUN_02093b9c @ 0x02093b9c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_02093b9c @ 0x02093b9c (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize two allocated table objects.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093b9c.txt.
 */
extern void FUN_0200c938(void *,unsigned int);extern void *FUN_020ba894(unsigned int),*FUN_02093abc(void *,void *,int);void *FUN_02093b9c(void **self){void *p;FUN_0200c938(self,8);p=FUN_020ba894(8);if(p)p=FUN_02093abc(p,(void *)0x020fb048,6);self[1]=p;p=FUN_020ba894(8);if(p)p=FUN_02093abc(p,(void *)0x020fb064,4);self[0]=p;return self;}
