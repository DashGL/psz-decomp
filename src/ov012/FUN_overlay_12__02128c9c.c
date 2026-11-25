// FUN_overlay_12__02128c9c @ 0x02128c9c (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128c9c @ 0x02128c9c (thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full menu state machine and concrete helper ABI. */
extern void *FUN_02086e3c(void);extern int FUN_0208728c(void *),FUN_02087254(void *),FUN_020872c4(void *);extern void FUN_overlay_12__02128a40(void *,int);
int FUN_overlay_12__02128c9c(int *s){switch(s[4]){case 3:{int ok;if(s[1]==0)ok=FUN_0208728c(FUN_02086e3c());else ok=FUN_02087254(FUN_02086e3c());if(ok){FUN_overlay_12__02128a40(s,3);s[4]=4;}else return 1;return 0;}case 4:if(s[7]){int *p=(int *)s[7];p[24]|=4;if(!FUN_020872c4(FUN_02086e3c())){s[12]=0;return 1;}}return 0;default:return 1;}}
