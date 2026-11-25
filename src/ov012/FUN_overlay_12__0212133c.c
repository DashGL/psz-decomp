// FUN_overlay_12__0212133c @ 0x0212133c (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212133c @ 0x0212133c (thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG/pools and concrete ABI reviewed, text slot4 proven020c357c. */
extern void *FUN_020ba894(unsigned),*FUN_overlay_12__02128e84(void *,int);extern void FUN_overlay_12__0212a474(void *),FUN_overlay_12__0212ca6c(void *);void FUN_overlay_12__0212133c(char *s){void *p;switch(*(int *)(s+24)){case 0:p=FUN_020ba894(56);if(p)p=FUN_overlay_12__02128e84(p,1);*(void **)(s+12)=p;break;case 1:p=FUN_020ba894(56);if(p)p=FUN_overlay_12__02128e84(p,0);*(void **)(s+12)=p;break;case 2:FUN_overlay_12__0212a474(*(void **)0x0213f2fc);break;case 3:FUN_overlay_12__0212ca6c(*(void **)0x0213f2fc);break;}}
