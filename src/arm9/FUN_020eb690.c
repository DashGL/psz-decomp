// FUN_020eb690 @ 0x020eb690 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/protocol leaf.
void FUN_020eb690(void){unsigned int a=*(unsigned int *)0x020ebb98,b=*(unsigned int *)0x020ebb9c;unsigned int *p=(unsigned int *)0x020fb200;p[0]=a;p[1]=b;p[2]=a;p[3]=b;p[4]=a;p[5]=b;}
