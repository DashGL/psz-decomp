// FUN_0209f290 @ 0x0209f290 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0209f290 @ 0x0209f290 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily acquire resource from two nonsentinel halfword identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f290.txt.
 */
extern void *FUN_02046c70(unsigned int,unsigned int,int); void FUN_0209f290(char *self) { unsigned int a=*(unsigned short *)(self+68); if(a!=65535) { unsigned int b=*(unsigned short *)(self+70); if(b!=65535 && !*(void **)(self+80)) *(void **)(self+80)=FUN_02046c70(a,b,4); } }
