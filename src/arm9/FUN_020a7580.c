// FUN_020a7580 @ 0x020a7580 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020a7580 @ 0x020a7580 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize buffer, install callback and clear payload.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a7580.txt.
 */
extern void FUN_0200c938(void *,unsigned int),FUN_020656b8(void *,int,unsigned int),FUN_020a76b4(void *,int,int); void *FUN_020a7580(char *self) { *(unsigned int *)self=0x020fc3d8; FUN_0200c938(self+4,6144); self[6148]=*(unsigned char *)0x020f2e58; *(void (**)(void *,int,int))(self+6152)=FUN_020a76b4; FUN_020656b8(self+4,0,6144); return self; }
