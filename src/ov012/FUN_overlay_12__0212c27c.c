// FUN_overlay_12__0212c27c @ 0x0212c27c (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c27c @ 0x0212c27c (thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu data initialization/rendering with concrete ABI. */
typedef struct {unsigned word[6];} Descriptor;extern void *FUN_overlay_12__02131d80(void *,void *,int);extern void FUN_020c4434(void *),FUN_020c44e4(void *,const void *),FUN_overlay_12__0212c24c(void *,const void *),FUN_overlay_12__02131c80(void *,int);
#pragma thumb off
extern void FUN_0200c938(void *,unsigned);
#pragma thumb on
void *FUN_overlay_12__0212c27c(char *s,void *parent,const Descriptor *d){FUN_overlay_12__02131d80(s,parent,0);*(unsigned *)s=0x0213e1a0;*(unsigned *)(s+64)=d->word[3];*(unsigned *)(s+68)=0;*(Descriptor *)(s+72)=*d;FUN_0200c938(s+96,256);FUN_020c4434(s+352);if(d->word[0])FUN_020c44e4(s+352,(const void *)d->word[0]);FUN_overlay_12__0212c24c(s+96,(const void *)d->word[1]);FUN_overlay_12__02131c80((void *)0x02138634,42);return s;}
