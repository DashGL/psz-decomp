// FUN_0209c9fc @ 0x0209c9fc (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_0209c9fc @ 0x0209c9fc (thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full switch/stack-argument semantics
 * decoded from named address. Evidence: scratch/coverage-high-game/inspect308.txt. */
extern unsigned char UNK_020fb4bc[],UNK_020fb4b8[];int FUN_0209c9fc(const unsigned char *p){int result=-1;switch(p[0]){case 0:result=p[1];if(result==17)result=87;else result=UNK_020fb4bc[p[3]]+result-1;break;case 1:result=UNK_020fb4b8[p[3]]+p[1];break;case 2:result=80;break;case 3:result=p[1]+81;break;}return result;}
