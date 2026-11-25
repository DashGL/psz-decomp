// FUN_0203e038 @ 0x0203e038 (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e038 @ 0x0203e038 (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 43.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b43/0203e038.txt.
 */
extern void FUN_020472bc(void *);extern void FUN_0203666c(void *);extern void *FUN_02048f5c(void *);extern void FUN_02049138(void *,int);
void FUN_0203e038(char *s){void *base=*(void **)(s+140);if(!base&&*(void **)(s+660)){FUN_020472bc(*(void **)(s+660));*(void **)(s+660)=0;}else if(base&&!*(void **)(s+660)){unsigned int record[25];FUN_0203666c(record);record[22]=*(unsigned int *)(s+252);record[21]=54;*(void **)(s+660)=FUN_02048f5c(record);if(*(void **)(s+660))FUN_02049138(*(void **)(s+660),0);}}
