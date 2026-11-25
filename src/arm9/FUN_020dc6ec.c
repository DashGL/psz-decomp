// FUN_020dc6ec @ 0x020dc6ec (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch57-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA encoded identity operations; helper return values retained.
extern void FUN_020dc740(unsigned int,void *);
extern int FUN_020015ac(const void *,const void *,unsigned int);
extern void FUN_02065774(const void *,unsigned int,unsigned int);
void FUN_020dc6ec(unsigned int input,unsigned int output){unsigned char decoded[24];unsigned int result;FUN_020dc740(input,decoded);result=FUN_020015ac(decoded,(void *)0x021001c0,8);if(!result)FUN_02065774(decoded+8,output,10);}
