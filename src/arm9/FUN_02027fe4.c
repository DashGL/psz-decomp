// FUN_02027fe4 @ 0x02027fe4 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern const char DAT_020f6988[],DAT_020f6970[];
extern int FUN_02026170(const char *,int);
int FUN_02027fe4(int a0,int a1){if(a1==1)return FUN_02026170(DAT_020f6988,a1);return FUN_02026170(DAT_020f6970,a1);}
