// FUN_020968e0 @ 0x020968e0 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020968e0 @ 0x020968e0 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize managers and normalize two configured modes.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020968e0.txt.
 */
extern void FUN_020993f8(void),FUN_02097b28(void *),FUN_02097fd0(void *,unsigned int);void FUN_020968e0(char *self){unsigned int mode;FUN_020993f8();FUN_02097b28(self+32);mode=(unsigned char)self[46];if(mode>=5)mode=0;FUN_02097fd0(*(void **)(self+32),mode);mode=(unsigned char)self[47];if((unsigned char)(mode+251)>1)mode=6;FUN_02097fd0(*(void **)(self+32),mode);}
