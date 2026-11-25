// FUN_02017bc8 @ 0x02017bc8 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
void *FUN_02017bc8(char *p,unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e,unsigned int f){*(unsigned int *)(p+4)=b;*(unsigned int *)(p+8)=c;p[12]=(unsigned char)d;*(unsigned int *)p=a;*(unsigned int *)(p+20)=e;*(unsigned int *)(p+16)=f;return p;}
