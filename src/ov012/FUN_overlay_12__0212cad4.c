// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__0212cad4 @ 0x0212cad4 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212cad4 @ 0x0212cad4 (thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete UI initialization and concrete ABI reviewed. */
extern void *FUN_020b9cb0(void *,void *);extern void FUN_overlay_12__0212ca94(void *),FUN_0209e1d4(void *,void *),FUN_overlay_12__0212d7a4(void),FUN_overlay_12__0212c824(int),FUN_overlay_12__02131b70(int),FUN_02079120(void);void *FUN_overlay_12__0212cad4(char *s,void *parent){FUN_020b9cb0(s,parent);*(unsigned *)s=0x0213e1e4;*(int *)(s+32)=0;*(int *)(s+36)=-1;FUN_overlay_12__0212ca94(s+40);FUN_0209e1d4(s+236,(void *)0x0213e1f8);FUN_overlay_12__0212d7a4();FUN_overlay_12__0212c824(0);FUN_overlay_12__02131b70(0);FUN_02079120();return s;}

// Caller/callee ABI evidence: Factory212ca6c stages saved owner in r1; constructor forwards it unchanged to baseb9cb0, which stores parent atself24 and links into parent28 list. Explicitly preserve consumed owner input.
