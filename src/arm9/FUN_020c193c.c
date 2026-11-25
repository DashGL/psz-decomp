// FUN_020c193c @ 0x020c193c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c193c @ 0x020c193c
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set selected context, clamp value, and conditionally configure active resource handle.
 * Evidence: scratch/coverage-root/batch11/020c193c.txt.
 */
extern void FUN_020c1f10(int);
extern int FUN_020c1e44(int);
extern int FUN_0200fef0(void *,unsigned int,unsigned int);
extern void FUN_0200d7d8(void *,int);
extern void FUN_0200d86c(void *,int,unsigned int);
void FUN_020c193c(unsigned int a,unsigned int b,int value,unsigned int c,int context){FUN_020c1f10(context);value=FUN_020c1e44(value);if(value){if(FUN_0200fef0(*(unsigned char **)0x0211c85c+0xbc,a,b)){FUN_0200d7d8(*(unsigned char **)0x0211c85c+0xbc,value);FUN_0200d86c(*(unsigned char **)0x0211c85c+0xbc,255,c);}}}
