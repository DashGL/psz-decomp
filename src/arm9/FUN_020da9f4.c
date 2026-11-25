// FUN_020da9f4 @ 0x020da9f4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA resident callback/state routines; full ABI and extents in root batch244.
extern unsigned int FUN_020dad04(void);extern unsigned int DAT_0211dbb4[];unsigned int FUN_020da9f4(void){unsigned int result=255,status=FUN_020dad04();if(status>=10&&status<=16)result=*(unsigned char *)(DAT_0211dbb4[3]+23);return result;}
