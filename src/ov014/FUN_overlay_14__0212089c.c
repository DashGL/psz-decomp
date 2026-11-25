// FUN_overlay_14__0212089c @ 0x0212089c (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_14__0212089c @ 0x0212089c (thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full dialog/menu behavior and concrete helper ABI. */
extern void FUN_020c38a0(void *,void *,int,int,int),FUN_020c3788(void *,void *,int,int,int);extern void *FUN_02093c1c(int,int,int);
void FUN_overlay_14__0212089c(unsigned char *s){if(!*(int *)(s+68)){if(s[7])FUN_020c38a0(*(void **)s,s+12,0,0,2);else FUN_020c3788(*(void **)s,FUN_02093c1c(0,1,0),0,0,2);if(s[7])FUN_020c3788(*(void **)s,FUN_02093c1c(1,1,s[48]),70,0,2);*(int *)(s+68)=1;}}
