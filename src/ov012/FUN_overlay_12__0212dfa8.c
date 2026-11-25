// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// FUN_overlay_12__0212dfa8 @ 0x0212dfa8 (thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu resource setup and state publication. */
extern char G_02138784[]; extern char G_021387CC[]; extern char G_0213E20C[]; extern char G_0213E2C4[]; extern char G_0213E2E4[];
extern void FUN_overlay_12__0212c6dc(void),FUN_overlay_12__0212c9a0(void),FUN_overlay_12__02135094(void *),FUN_overlay_12__02131b10(int),FUN_overlay_12__0212c694(void *),FUN_overlay_12__0212c6b4(void *),FUN_overlay_12__02131ff8(void *,int);
extern void *FUN_overlay_12__0212d268(int,int),*FUN_020c1fc8(void);extern int FUN_020c2438(void *,void *,void *,int);
void FUN_overlay_12__0212dfa8(int *s){int enabled=1;FUN_overlay_12__0212c6dc();FUN_overlay_12__0212c9a0();s[26]=0;FUN_overlay_12__02135094(FUN_overlay_12__0212d268(0,21));FUN_overlay_12__02131b10(4);s[25]=FUN_020c2438(FUN_020c1fc8(),(void *)G_0213E2C4,(void *)G_0213E2E4,enabled);if(s[16]==2)FUN_overlay_12__0212c694((void *)G_021387CC);if(s[27]){FUN_overlay_12__0212c6b4((void *)G_02138784);enabled=0;s[27]=enabled;}FUN_overlay_12__02131ff8(s,enabled);*(int *)G_0213E20C=s[2];}
