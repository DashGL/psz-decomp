// FUN_020dab44 @ 0x020dab44 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern char *FUN_020dac74(unsigned int);
extern void FUN_0206552c(void *,char *,unsigned int);
void FUN_020dab44(int idx,void *dst){FUN_0206552c(dst,FUN_020dac74(16)+(idx<<8),240);}
