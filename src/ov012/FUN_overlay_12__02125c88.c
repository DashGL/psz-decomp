// FUN_overlay_12__02125c88 @ 0x02125c88 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125c88 @ 0x02125c88 (thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full extent and concrete helper inputs reviewed. */
extern void *FUN_overlay_12__02131d80(void *,void *,int),*FUN_02001540(void *,int,unsigned);void *FUN_overlay_12__02125c88(char *s,int value,int mode){int i;FUN_overlay_12__02131d80(s,*(void **)0x0213f2fc,0);*(unsigned *)s=0x0213dd78;*(int *)(s+64)=0;*(int *)(s+84)=-1;*(int *)(s+88)=0;*(int *)(s+92)=value;*(int *)(s+96)=0;*(int *)(s+356)=mode;*(short *)(s+360)=12;*(short *)(s+362)=11;for(i=0;i<4;i++)*(int *)(s+68+4*i)=-1;FUN_02001540(s+100,0,256);return s;}
