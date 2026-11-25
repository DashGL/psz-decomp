// FUN_02020254 @ 0x02020254 (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_0205fab0(int,int);
extern void FUN_0205fba8(const void *,unsigned int);
extern void FUN_0205fc14(void);
void FUN_02020254(const void *a0,int a1,unsigned int a2){FUN_0205fab0((int)a0,a1);FUN_0205fba8(a0,a2);FUN_0205fc14();}
