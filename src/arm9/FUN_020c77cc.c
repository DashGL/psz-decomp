// FUN_020c77cc @ 0x020c77cc (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern unsigned int FUN_02003c70(const char *);
extern char *FUN_020c7bcc(unsigned int);
extern char *FUN_02003c8c(char *,const char *);
char *FUN_020c77cc(const char *s){char *p;if(!s)return 0;p=FUN_020c7bcc(FUN_02003c70(s)+1);if(p)FUN_02003c8c(p,s);return p;}
