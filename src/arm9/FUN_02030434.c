// FUN_02030434 @ 0x02030434 (0x82, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_02030434 @ 0x02030434 (inventory code 0x82, thumb)
// check: 2.0/sp2p3 target=0x82 candidate=0x82 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 120.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b120/02030434.txt.
 */
extern char *FUN_02030540(void *),*FUN_02034a70(int);extern unsigned int FUN_020304f8(void *),FUN_0203068c(void *);extern void FUN_02044c08(void *,void *,int),FUN_02034720(void *,unsigned int),FUN_020449cc(void *,unsigned int,void *),FUN_02044870(void *,unsigned int),FUN_0203058c(void *,int);void FUN_02030434(char *s){char *p;unsigned int id;if(*(void **)(s+16)||*(void **)(s+20)){p=FUN_02030540(s);if(p){if(*(void **)(s+16))FUN_02044c08(*(void **)(s+16),p,0);if(*(void **)(s+20))FUN_02044c08(*(void **)(s+20),p+12,0);}}if(*(void **)(s+12)){id=FUN_020304f8(s);FUN_02034720(*(void **)(s+12),id);}id=FUN_0203068c(s);if(*(void **)(s+16)){p=FUN_02034a70(*(int *)(s+40));FUN_020449cc(*(void **)(s+16),id,p+4);}if(*(void **)(s+20))FUN_02044870(*(void **)(s+20),id);FUN_0203058c(s,0);}
