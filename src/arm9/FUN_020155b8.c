// FUN_020155b8 @ 0x020155b8 (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// USA graphics/list setup adapters; full ABI/extent evidence in root batch252.
extern char *FUN_02015094(void *,int,int);extern void FUN_020154bc(int,int,int,int,int);void FUN_020155b8(int a,int width,int height,int d,int e){char *p=FUN_02015094((void *)0x020ebf0c,width,height);FUN_020154bc(a,*(unsigned short *)(p+4),*(int *)0x02105714,d,e);}
