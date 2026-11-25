// FUN_020dc718 @ 0x020dc718 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA encoded identity operations; helper return values retained.
extern int FUN_020015ac(const void *,const void *,unsigned int);
int FUN_020dc718(const void *input){return FUN_020015ac(input,(void *)0x021001cc,8)==0;}
