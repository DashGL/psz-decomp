// FUN_0202e79c @ 0x0202e79c (0x44, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// USA cleanup and descriptor adapters; ABI/extent evidence in root batch253.
extern void FUN_0202e7e0(int,int,int,int,int);extern char *DAT_02108c0c;void FUN_0202e79c(int a,int b,int c,int d){char *p=DAT_02108c0c;int code=*(short *)(p+0x2280);*(short *)(p+0x2280)=0;FUN_0202e7e0(code,a,b,c,d);}
