// FUN_020d8050 @ 0x020d8050 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA collection/protocol helpers; full ABI and extents retained in root batch243.
extern int FUN_020d7a08(void *,void *);int FUN_020d8050(char *s,void *node){int result=FUN_020d7a08(s+8,node);if(!result)result=FUN_020d7a08(s+20,node);return result;}
