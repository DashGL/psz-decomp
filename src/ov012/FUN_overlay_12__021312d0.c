// FUN_overlay_12__021312d0 @ 0x021312d0 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__021312d0 @ 0x021312d0 (thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete CFG/pools and concrete helper ABI reviewed. */
extern void *FUN_overlay_12__02131d80(void *,void *,int);extern void FUN_0200c938(void *,unsigned),FUN_overlay_12__0211f17c(void *),FUN_overlay_12__02131388(void *);extern int FUN_overlay_12__02131fd0(void *,int);void *FUN_overlay_12__021312d0(char *s,void *parent){FUN_overlay_12__02131d80(s,parent,0);*(unsigned *)s=0x0213e714;*(int *)(s+64)=0;*(int *)(s+68)=0;FUN_0200c938(s+72,400);*(int *)(s+472)=-1;FUN_overlay_12__0211f17c(s+476);*(int *)(s+492)=0;*(int *)(s+496)=0;*(int *)(s+500)=0;*(int *)(s+504)=0;FUN_overlay_12__02131388(s);FUN_overlay_12__02131fd0(s,1);return s;}
