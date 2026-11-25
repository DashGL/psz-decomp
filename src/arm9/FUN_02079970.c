// FUN_02079970 @ 0x02079970 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_02079970 @ 0x02079970 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear request field, unregister state two, reset sentinel and release owned buffer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02079970.txt.
 */
extern void FUN_020ba494(void *),FUN_020c13ec(void *,void *); void FUN_02079970(char *self) { *(unsigned int *)(self+12)=0; if(*(unsigned short *)(self+16)==2) FUN_020ba494(self); *(unsigned short *)(self+16)=0; *(int *)self=-1; if(*(void **)(self+4) && *(void **)(self+8)) { FUN_020c13ec(*(void **)(self+4),*(void **)(self+8)); *(void **)(self+8)=0; } }
