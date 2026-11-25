// FUN_020dc6d4 @ 0x020dc6d4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch57-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA encoded identity operations; helper return values retained.
extern void FUN_020dc740(unsigned int,void *);
extern void FUN_020dc7d0(const void *,unsigned int);
void FUN_020dc6d4(unsigned int input,unsigned int output){unsigned char decoded[24];FUN_020dc740(input,decoded);FUN_020dc7d0(decoded,output);}
