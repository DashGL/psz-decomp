// FUN_0203ff7c @ 0x0203ff7c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203ff7c @ 0x0203ff7c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/0203ff7c.txt.
 */
extern char *FUN_0203ff0c(void *,int);
unsigned int FUN_0203ff7c(void *s,int key,int index) { char *p=FUN_0203ff0c(s,key); if(p) { int count=*(int *)(*(char **)(*(char **)(p+8)+4)+4); if(index>=0 && index<count) return *(unsigned short *)(*(char **)(p+0x14)+4*index); } return 0xffff; }
