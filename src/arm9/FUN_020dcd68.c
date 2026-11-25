// FUN_020dcd68 @ 0x020dcd68 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern char *D_0211dbc8;
extern int FUN_02054210(void *);
int FUN_020dcd68(void *a0){int r;if(!a0)return -1;*(int *)(D_0211dbc8+0x1a90)=2;r=FUN_02054210(a0);if(r==2)r=0;return r;}
