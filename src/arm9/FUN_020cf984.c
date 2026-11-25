// FUN_020cf984 @ 0x020cf984 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch54-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020cf958(void *,void *,void *);
extern int FUN_020cf928(void *,int (*)(void *,void *,void *),void *);
int FUN_020cf984(void *self,int a1){int tmp[2];tmp[0]=a1;tmp[1]=0;FUN_020cf928(self,FUN_020cf958,tmp);return tmp[1];}
