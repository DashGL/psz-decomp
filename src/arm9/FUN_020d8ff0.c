// FUN_020d8ff0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA collection/protocol helpers; full ABI and extents retained in root batch243.
extern void **FUN_020c6e10(void *,int);extern void FUN_020c6eec(void *,int),FUN_020d8fc8(void *,void *);void FUN_020d8ff0(char *s,int index){void *entry=*FUN_020c6e10(*(void **)(s+4),index);(*(void (**)(void *,int,void *,void *))(s+1160))(s,2,entry,*(void **)(s+1172));FUN_020c6eec(*(void **)(s+4),index);FUN_020d8fc8(s,entry);}
