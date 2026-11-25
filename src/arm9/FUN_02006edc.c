// FUN_02006edc @ 0x02006edc (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// USA numeric leaves and scene dispatchers; ABI/full extents in root batch255.
extern int FUN_02006e20(void *,int);extern void FUN_02006e8c(void *,int);void FUN_02006edc(unsigned char *p,int count){int decision;if(count<=0||count>=p[4])return;decision=FUN_02006e20(p,count);p[4]=(unsigned char)count;if(decision>=0)FUN_02006e8c(p,count);}
