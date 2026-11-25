// FUN_02000cac @ 0x02000cac (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_02003b40(int);
extern void FUN_02000cd0(int);
extern int D_02101880[];
void FUN_02000cac(void){FUN_02003b40(1);D_02101880[3]=1;FUN_02000cd0(1);}
