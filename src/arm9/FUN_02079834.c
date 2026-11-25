// FUN_02079834 @ 0x02079834 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_02079834 @ 0x02079834 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Switch resource id, clear previous resource and select loading mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02079834.txt.
 */
extern void FUN_02079970(void *),FUN_02079874(void *); void FUN_02079834(char *self,int id,int mode,int force) { if(*(int *)self!=id || force) { FUN_02079970(self); *(int *)self=id; if(mode) *(unsigned short *)(self+18)|=1; else *(unsigned short *)(self+18)&=~1; if(mode) *(unsigned short *)(self+16)=1; else FUN_02079874(self); } }
