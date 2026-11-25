// FUN_overlay_14__0211fe40 @ 0x0211fe40 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211fe40 @ 0x0211fe40 (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full constructor and concrete player/singleton ABI reviewed. */
extern void FUN_020907f8(void),FUN_overlay_14__0211e640(void *),FUN_overlay_14__0211eb30(void *,void *);extern void *FUN_02086e3c(void),*FUN_020870c4(void *),*FUN_overlay_14__0211e968(void);extern int FUN_02087138(void *);void *FUN_overlay_14__0211fe40(int *s){int desc[2];void *player;*s=0x021220b0;s[1]=0;FUN_020907f8();desc[0]=0;desc[1]=-1;desc[0]=0;FUN_overlay_14__0211e640(desc);if(FUN_02087138(FUN_02086e3c())){player=FUN_020870c4(FUN_02086e3c());FUN_overlay_14__0211eb30(FUN_overlay_14__0211e968(),player);}return s;}
