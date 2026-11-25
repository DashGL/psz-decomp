// FUN_0209e1d4 @ 0x0209e1d4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0209e1d4 @ 0x0209e1d4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear four-word object and register callback with input resource.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e1d4.txt.
 */
extern void *FUN_020ba174(void *,void *,void *,unsigned int); extern void FUN_0209e218(void *); void *FUN_0209e1d4(void **self,void *resource) { self[0]=0; self[1]=0; self[2]=0; self[3]=0; self[0]=FUN_020ba174(resource,(void *)FUN_0209e218,self,16); return self; }
