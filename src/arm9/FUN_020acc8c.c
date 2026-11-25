// FUN_020acc8c @ 0x020acc8c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020acc8c @ 0x020acc8c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Save halfword and calculate replacement using forwarded input.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020acc8c.txt.
 */
extern unsigned int FUN_0203d388(void *,int); void FUN_020acc8c(char *self,int mode) { *(unsigned short *)(self+318)=*(unsigned short *)(self+192); *(unsigned short *)(self+194)=FUN_0203d388(self,mode); *(unsigned short *)(self+316)=*(unsigned short *)(self+194); }
