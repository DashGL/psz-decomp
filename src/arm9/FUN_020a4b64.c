// FUN_020a4b64 @ 0x020a4b64 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020a4b64 @ 0x020a4b64 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate optional global owner and initialize subsystem state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4b64.txt.
 */
extern char *FUN_0200d16c(void);extern void *FUN_020ba894(unsigned int),*FUN_020a9734(void *,int);extern void FUN_020a5978(void),FUN_020a65c8(void);void FUN_020a4b64(void){char *g=(char *)0x0211a664;if(!*(void **)(g+16) && *(int *)(FUN_0200d16c()+12)==1){void *p=FUN_020ba894(32);if(p)p=FUN_020a9734(p,16);*(void **)(g+16)=p;}*(int *)(g+12)=0;FUN_020a5978();FUN_020a65c8();*(int *)(g+4)=0;*(int *)(g+8)=0;}
