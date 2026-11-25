// FUN_0209fd04 @ 0x0209fd04 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_0209fd04 @ 0x0209fd04 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Stop active component when descriptor is enabled and timer is idle.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209fd04.txt.
 */
extern int FUN_02030700(void *);extern void FUN_02030808(void *,int,int);void FUN_0209fd04(char *self){if(*(int *)(self+88) && **(signed char **)(self+48) && !FUN_02030700(self+76)){FUN_02030808(self+68,0,0);*(int *)(self+88)=0;}}
