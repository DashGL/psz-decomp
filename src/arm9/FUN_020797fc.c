// FUN_020797fc @ 0x020797fc (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020797fc @ 0x020797fc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Cleanup base then optional child via virtual slot +4, clear owner slot, return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020797fc.txt.
 */
extern void FUN_02079970(void *);
void *FUN_020797fc(void **self) { FUN_02079970(self); if(self[1]) { if(self[1]) { void *child=self[1]; void (**table)(void *)=*(void (***)(void *))child; table[1](child); } self[1]=0; } return self; }
