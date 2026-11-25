// FUN_overlay_12__02128e84 @ 0x02128e84 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128e84 @ 0x02128e84 (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full menu initialization/state flow and concrete ABI. */
extern void *FUN_overlay_12__02128d74(void *),*FUN_overlay_12__02128148(void *);extern void FUN_02079120(void),FUN_overlay_12__02128e10(void *),FUN_overlay_12__02128e38(void *),FUN_overlay_12__021281a4(void *,void *),FUN_overlay_12__0212828c(void *,void *,int,int);
void *FUN_overlay_12__02128e84(char *s,int mode){*(unsigned *)s=0x0213dfa4;*(int *)(s+4)=0;*(int *)(s+8)=0;*(int *)(s+12)=0;*(int *)(s+16)=0;*(int *)(s+20)=0;*(int *)(s+24)=0;FUN_overlay_12__02128d74(s+28);FUN_overlay_12__02128148(s+48);FUN_02079120();*(int *)(s+20)=mode;FUN_overlay_12__02128e10(s+28);FUN_overlay_12__02128e38(s+28);FUN_overlay_12__021281a4(s+48,s+28);FUN_overlay_12__0212828c(s+48,s+28,*(int *)(s+12),*(int *)(s+20));return s;}
