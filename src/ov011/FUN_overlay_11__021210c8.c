// FUN_overlay_11__021210c8 @ 0x021210c8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_11__021210c8 @ 0x021210c8 (code 0x30, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay11 ROM reconstruction, 2026-11-05.
 * Configure channel 1, align size to 32 bytes and submit transfer.
 * Fifth input is the caller stack word, explicitly retained.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch352.md.
 */
extern unsigned int FUN_overlay_11__02120ffc(void *,const void *);
unsigned int FUN_overlay_11__021210c8(char *self,unsigned int address,unsigned int size,unsigned int kind,unsigned int selector) {
 unsigned int aligned=(size+31)&~31u;
 *(unsigned int *)(self+0x2bcc)=address;
 *(unsigned int *)(self+0x2bc8)=kind;
 *(unsigned int *)(self+0x2bd0)=aligned;
 *(unsigned int *)(self+0x2bc4)=selector;
 *(unsigned int *)(self+0x2bdc)=FUN_overlay_11__02120ffc(self,self+0x2bc4);
 return aligned;
}
