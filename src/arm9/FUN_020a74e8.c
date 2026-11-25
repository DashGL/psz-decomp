// FUN_020a74e8 @ 0x020a74e8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020a74e8 @ 0x020a74e8 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Synchronize three history-slot flags from global count.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a74e8.txt.
 */
extern void *FUN_020a5240(void);extern int FUN_020a9830(void *);extern void FUN_020a4cd0(void *,int,int),FUN_020a4cbc(void *,int,int);void FUN_020a74e8(void *self){int count=FUN_020a9830(FUN_020a5240()),i;for(i=0;i<3;i++)if(i<count)FUN_020a4cd0(self,i+7,16);else FUN_020a4cbc(self,i+7,16);}
