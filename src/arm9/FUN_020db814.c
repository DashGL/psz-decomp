// FUN_020db814 @ 0x020db814 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA connection state/count helpers; ABI and full extents in root batch246.
extern void *FUN_020dac74(unsigned int);extern int FUN_020dad30(void),FUN_020db848(int),FUN_020db87c(void),FUN_020db884(void *),FUN_020db89c(void *);int FUN_020db814(void){void *s=FUN_020dac74(1);int state=FUN_020dad30();if(state<4)return FUN_020db848(state);if(state<5)return FUN_020db87c();if(state==5)return FUN_020db884(s);return FUN_020db89c(s);}
