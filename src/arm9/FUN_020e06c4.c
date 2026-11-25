// FUN_020e06c4 @ 0x020e06c4 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch55-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// Singleton initialization; preserve incoming r3 setting and void initialization contract.
extern void FUN_020e068c(void *,unsigned int,unsigned int,unsigned int);
void FUN_020e06c4(void *self){FUN_020e068c(self,3,1,20);}
