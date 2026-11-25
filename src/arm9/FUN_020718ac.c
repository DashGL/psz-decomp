// FUN_020718ac @ 0x020718ac (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020718ac @ 0x020718ac (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize twenty32-byte records, sentinel and zero fields, install global pointer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020718ac.txt.
 */
extern void FUN_0206f558(void *); void *FUN_020718ac(char *self) { char *p=self; char *end=self+640; do { FUN_0206f558(p); p+=32; } while(p<end); *(int *)(self+640)=-1; *(int *)(self+644)=0; *(void **)0x0211a1fc=self; return self; }
