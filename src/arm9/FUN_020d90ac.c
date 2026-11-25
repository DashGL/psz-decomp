// FUN_020d90ac @ 0x020d90ac (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA resident callback/state routines; full ABI and extents in root batch244.
extern void *FUN_020c6da8(int,int,void (*)(void *));void FUN_020d90ac(char *s){*(void **)(s+4)=FUN_020c6da8(4,100,0);*(void **)(s+2008)=0;}
