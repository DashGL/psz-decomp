// FUN_0206fdc0 @ 0x0206fdc0 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206fdc0 @ 0x0206fdc0
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Accept unsigned trigger1..4; launch action20, clamp signed byte, set flags and state18, report success.
 * Evidence: scratch/coverage-root/batch15/0206fdc0.txt.
 */
extern int FUN_020390f4(void *),FUN_02039140(void *,int,unsigned int,int);
int FUN_0206fdc0(unsigned char *self,unsigned int unused1,unsigned int unused2,unsigned int trigger){if(trigger>=1 && trigger<5 && !FUN_020390f4(self)){if(FUN_02039140(self,20,*(unsigned int *)(self+0xd8),4)){self[0x14a]=trigger;if(*(signed char *)(self+0x200)<0)self[0x200]=0;*(unsigned int *)(self+0xf8)|=0x20;*(unsigned int *)(self+0x240)=18;*(unsigned int *)(self+0xf8)|=0x100;return 1;}}return 0;}
