// FUN_overlay_12__02125110 @ 0x02125110 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125110 @ 0x02125110 (thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete player-menu resource constructor and fully initialized two-word config. */
extern void *FUN_overlay_12__02124f7c(void *);extern void FUN_overlay_12__02122f88(void *),FUN_overlay_12__02125040(void *),FUN_overlay_12__021259d0(void *),FUN_overlay_12__0212576c(void *,int);
#pragma thumb off
extern void *FUN_02001540(void *,int,unsigned);
#pragma thumb on
void *FUN_overlay_12__02125110(char *s){int config[2];*(unsigned *)s=0x0213dcb4;*(int *)(s+4)=0;*(int *)(s+8)=0;FUN_overlay_12__02124f7c(s+12);*(int *)(s+40)=0;*(int *)(s+44)=0;*(int *)(s+64)=-1;*(int *)(s+68)=0;*(int *)(s+72)=0;FUN_02001540(s+48,0,16);config[0]=0;config[1]=-1;config[0]=3;config[1]=2;FUN_overlay_12__02122f88(config);FUN_overlay_12__02125040(s+12);FUN_overlay_12__021259d0(s);FUN_overlay_12__0212576c(s,0);return s;}
