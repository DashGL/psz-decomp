// FUN_020322d4 @ 0x020322d4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020322d4 @ 0x020322d4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/020322d4.txt.
 */
extern void *FUN_020ba374(void *,unsigned int *,int); extern unsigned int FUN_020ba440(void *);
void FUN_020322d4(char *self) { unsigned int temp=0; void *p=FUN_020ba374((void *)0x020f6d10,&temp,16); *(void **)(self+0x50)=p; *(unsigned int *)(self+0x4c)=FUN_020ba440(p); }
