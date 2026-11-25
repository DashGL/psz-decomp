// FUN_020beb44 @ 0x020beb44 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020beb44 @ 0x020beb44 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and initialize pooled record then attach to owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020beb44.txt.
 */
extern void *FUN_020bf12c(void),*FUN_020bf29c(void *);extern void FUN_020bec10(void *,void *,unsigned int,void *,void *,unsigned int,void *),FUN_020becac(void *,void *,void *);void FUN_020beb44(void *self,char *owner,char *desc){void *record=FUN_020bf29c(FUN_020bf12c());if(record){FUN_020bec10(self,record,(unsigned char)owner[12],*(void **)(owner+4),*(void **)(desc+8),(unsigned char)desc[12],*(void **)(*(char **)desc+12));FUN_020becac(self,*(void **)owner,record);}}
