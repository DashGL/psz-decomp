// FUN_02066104 @ 0x02066104 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// FUN_02066104 — concrete ARM forwarding contract reviewed in root batch306.
extern int FUN_0206606c(unsigned int,void *,void (*)(void),int);
extern void FUN_02066124(void);
int FUN_02066104(unsigned int owner){return FUN_0206606c(owner,(void *)0x027fffe8,FUN_02066124,1);}
