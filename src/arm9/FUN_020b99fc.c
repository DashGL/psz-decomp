// FUN_020b99fc @ 0x020b99fc (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020b99fc @ 0x020b99fc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize sentinel receiver field and output field from signed child byte.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b99fc.txt.
 */
void FUN_020b99fc(char *self,void **source,int *out) { if(*(int *)(self+192)==-1) { signed char *p=source[3]; int value=p[0]; out[3]=value; *(int *)(self+192)=value; } }
