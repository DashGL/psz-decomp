// FUN_020d8ab0 @ 0x020d8ab0 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// USA collection/protocol helpers; full ABI and extents retained in root batch243.
extern int FUN_020d8f44(void *,void *);extern void FUN_020d8ff0(void *,int);void FUN_020d8ab0(char *s,void *entry){int index=FUN_020d8f44(s+76,entry);if(index!=-1)FUN_020d8ff0(s+76,index);}
