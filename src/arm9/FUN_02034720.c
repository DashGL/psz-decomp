// FUN_02034720 @ 0x02034720 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034720 @ 0x02034720 (inventory code 0x64, thumb)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 43.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b43/02034720.txt.
 */
extern unsigned short *FUN_020508ec(void *,void *);extern char *FUN_02033d60(void *,unsigned int,int,unsigned int);
void FUN_02034720(char **out,void *key){void *m=*(void **)0x02108c84;unsigned short *record=0;void *table=*(void **)0x0210e240;if(table)record=FUN_020508ec(table,key);if(m&&record){unsigned int i;for(i=0;i<2;i++){unsigned int id=i<2?record[i]:65535;if(id!=65535){out[i]=FUN_02033d60(m,id,4,65535);if(out[i])*(unsigned int *)(out[i]+24)&=~1u;}}}}
