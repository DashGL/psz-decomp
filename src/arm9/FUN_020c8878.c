// FUN_020c8878 @ 0x020c8878 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int D_0211cf6c;
extern int FUN_020c9200(void *,int,int,int);
int FUN_020c8878(void *a0,int a1,int a2,int a3){if(D_0211cf6c!=1)return 2;return !a0?2:FUN_020c9200(a0,a1,a2,a3);}
