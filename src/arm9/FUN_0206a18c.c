// FUN_0206a18c @ 0x0206a18c (0x48, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_020673d4(unsigned int,unsigned int);
int FUN_0206a18c(unsigned int channel,unsigned int index){unsigned int offset=channel*36;FUN_020673d4(*(unsigned int *)0x0211a140+32+offset+index*2,2);return *(short *)(*(unsigned int *)0x0211a140+offset+index*2+32);}
