// FUN_0204b070 @ 0x0204b070 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204b070 @ 0x0204b070 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 115.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b115/0204b070.txt.
 */
extern void FUN_0206e728(void *,int),FUN_0206e738(void *,int),FUN_0204b4ec(void *),FUN_020464c8(void),FUN_02046474(void),FUN_0204a5d0(void *,void *);extern void *FUN_020464bc(void),*FUN_0204a580(void);char *FUN_0204b070(char *s){void (*callback)(unsigned int,unsigned int);*(unsigned int *)s=0x020f9208;callback=*(void (**)(unsigned int,unsigned int))(s+240);if(callback)callback(*(unsigned int *)(s+244),*(unsigned int *)(s+248));if(*(void **)(s+48)){FUN_0206e728(*(void **)(s+48),0);FUN_0206e738(*(void **)(s+48),0);}FUN_0204b4ec(s);if(FUN_020464bc()==s){FUN_020464c8();FUN_02046474();}FUN_0204a5d0(FUN_0204a580(),s);return s;}
