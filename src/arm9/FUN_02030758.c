// FUN_02030758 @ 0x02030758 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_02030758 @ 0x02030758 (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b39/02030758.txt.
 */
extern void *FUN_02031a74(void);extern int FUN_02031f48(void *,int *,int);
int FUN_02030758(char *s){int seen=0,i;void *m=FUN_02031a74();short *ids=*(short **)s;for(i=0;i<4;i++){int id=ids[i];if(id!=-1){int value=0;if(!FUN_02031f48(m,&value,id))return 0;if(!value)return 0;seen=1;}}if(seen)return 1;return *(signed char *)(s+5);}
