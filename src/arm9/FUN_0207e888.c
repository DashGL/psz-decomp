// FUN_0207e888 @ 0x0207e888 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_0207e888 @ 0x0207e888 (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize actor descriptor and array of nine state slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207e888.txt.
 */
extern char UNK_020fa480[];extern void FUN_0204734c(void *),FUN_0203666c(void *);void *FUN_0207e888(char *s){int i;FUN_0204734c(s);*(void **)s=UNK_020fa480;FUN_0203666c(s+260);*(int *)(s+360)=0;*(int *)(s+400)=0;*(int *)(s+404)=0;*(int *)(s+408)=0;*(int *)(s+412)=0;*(int *)(s+416)=0;*(int *)(s+420)=0;for(i=0;i<9;i++)((int *)(s+364))[i]=0;return s;}
