// FUN_overlay_9__0211f968 @ 0x0211f968 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f968 @ 0x0211f968 (thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete controller/menu init and concrete callee inputs. */
extern void *FUN_020b1fd8(void *,int),*FUN_020b3044(void *);extern void FUN_overlay_9__0211fb18(void *,int);void *FUN_overlay_9__0211f968(char *s,int state){FUN_020b1fd8(s,0);*(unsigned *)s=0x02121028;*(int *)(s+108)=state;*(int *)(s+112)=0;*(int *)(s+116)=-1;FUN_020b3044(s+120);FUN_overlay_9__0211fb18(s,*(int *)(s+108));return s;}
