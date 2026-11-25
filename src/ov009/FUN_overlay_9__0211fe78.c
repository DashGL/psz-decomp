// FUN_overlay_9__0211fe78 @ 0x0211fe78 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211fe78 @ 0x0211fe78 (code 0x36, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay9 ROM reconstruction, 2026-11-05.
 * Configure optional controller or release embedded resources in sequence.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch365.md.
 */
extern void FUN_020c38f0(void *,int);extern void FUN_020c3588(void *);extern void FUN_020a5130(void);extern void FUN_020a4ba8(void);extern void *FUN_020b3074(void *);extern void FUN_020c3578(void *);
void * FUN_overlay_9__0211fe78(char *self) { *(int *)self=0x02121068;FUN_020c38f0(self+16,0);FUN_020c3588(self+16);FUN_020a5130();FUN_020a4ba8();FUN_020b3074(self+84);FUN_020c3578(self+16);return self; }
