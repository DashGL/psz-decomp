// FUN_020887dc @ 0x020887dc (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020887dc @ 0x020887dc (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unregister resource, destroy members and free owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020887dc.txt.
 */
extern void *FUN_02034b78(void);extern void FUN_02035144(void *,int),FUN_020306fc(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_020887dc(char *s){void *p;*(unsigned int *)s=0x020fa9c4;p=FUN_02034b78();if(p){FUN_02035144(p,*(int *)(s+88));*(int *)(s+88)=-1;}FUN_020306fc(s+76);FUN_020306fc(s+68);FUN_020306fc(s+60);FUN_020306fc(s+52);FUN_020303bc(s);FUN_020ba8ac(s);return s;}
