// FUN_02078dac @ 0x02078dac (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_02078dac @ 0x02078dac (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update global manager then allocate selected mode object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078dac.txt.
 */
extern void FUN_0203e72c(void *,void *,int);extern void *FUN_020ba918(unsigned int),*FUN_02078e00(void *,void *,int,int);void *FUN_02078dac(void *desc,int index,int enabled){void *manager=*(void **)0x02108d08,*p;if(manager){FUN_0203e72c(manager,desc,index);if(enabled){p=FUN_020ba918(256);if(p)p=FUN_02078e00(p,desc,index,2);return p;}p=FUN_020ba918(256);if(p)p=FUN_02078e00(p,desc,index,0);return p;}return 0;}
