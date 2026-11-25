// FUN_0209dbcc @ 0x0209dbcc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_0209dbcc @ 0x0209dbcc (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve flag record and set or clear low bit for signed mode zero or one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209dbcc.txt.
 */
extern unsigned char *FUN_02030a98(void *,void *); void FUN_0209dbcc(char *self) { unsigned char *p=FUN_02030a98(*(void **)0x02108c54,self+4); int mode=*(signed char *)(self+8); if(mode==0) *p|=1; else if(mode==1) *p&=~1; }
