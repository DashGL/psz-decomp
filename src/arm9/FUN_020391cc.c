// FUN_020391cc @ 0x020391cc (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020391cc @ 0x020391cc (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/020391cc.txt.
 */
extern int FUN_020390f4(void *); extern int FUN_020386b4(void *,void *);
int FUN_020391cc(char *s,void *arg) { if(!FUN_020390f4(s)) return FUN_020386b4(s,arg); *(unsigned int *)(s+0xf8)|=0x10000000; return 0; }
