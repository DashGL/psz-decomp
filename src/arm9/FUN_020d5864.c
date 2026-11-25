// FUN_020d5864 @ 0x020d5864 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// Connection metadata, tick flag, hash and signature helpers; preserve scalar words and unsigned arithmetic.
extern const char DAT_020feb34[];
extern int FUN_020015ac(const void *,const void *,unsigned int);
int FUN_020d5864(const void *input){return FUN_020015ac(input,DAT_020feb34,6)==0;}
