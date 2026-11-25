// FUN_020aecb8 @ 0x020aecb8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020aecb8 @ 0x020aecb8 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Deactivate and destroy paired embedded resources.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aecb8.txt.
 */
extern void FUN_020c38f0(void *,int),FUN_020c3588(void *),FUN_020c3578(void *);void *FUN_020aecb8(char *self){FUN_020c38f0(self,0);FUN_020c3588(self);FUN_020c38f0(self+60,0);FUN_020c3588(self+60);FUN_020c3578(self+60);FUN_020c3578(self);return self;}
