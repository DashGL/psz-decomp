// FUN_overlay_9__0211f830 @ 0x0211f830 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f830 @ 0x0211f830 (thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Concrete full body and call ABI reviewed. */
extern void *FUN_020af01c(void *,int,int),*FUN_0209081c(void);extern int FUN_02090834(void);extern void FUN_020907d4(void);void *FUN_overlay_9__0211f830(int *s,int selected){FUN_020af01c(s,3,1);s[0]=0x02121008;s[4]=1;if(selected>=0 && selected<3){s[2]=3;s[1]=selected;}if(!FUN_02090834())FUN_020907d4();((int *)FUN_0209081c())[5]=96;return s;}
