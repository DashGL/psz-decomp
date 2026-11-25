// FUN_02041afc @ 0x02041afc (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041afc @ 0x02041afc (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/02041afc.txt.
 */
extern void *DAT_02108c84;
extern void *FUN_020ba374(void *,unsigned int *,int); extern unsigned int FUN_02037bd0(void *,void *);
void FUN_02041afc(void *name,void **out,unsigned short *value) { void *manager=DAT_02108c84; if(manager) { unsigned int temp=0; *out=FUN_020ba374(name,&temp,16); *value=FUN_02037bd0(manager,*out); } }
