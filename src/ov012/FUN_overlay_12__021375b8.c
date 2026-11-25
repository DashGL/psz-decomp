// FUN_overlay_12__021375b8 @ 0x021375b8 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__021375b8 @ 0x021375b8 (thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete UI initialization and concrete ABI reviewed. */
extern void FUN_020c2b50(void *),FUN_overlay_12__02137648(void *),FUN_overlay_12__02134a90(void *,int),FUN_overlay_12__0212c824(int),FUN_overlay_12__02135140(void);void *FUN_overlay_12__021375b8(int *s){FUN_020c2b50(s);FUN_020c2b50(s+1);s[2]=-1;s[3]=1;s[4]=0;s[5]=0;s[6]=-1;s[7]=0;s[8]=-1;FUN_overlay_12__02137648(s);FUN_overlay_12__02134a90(s+1,0);FUN_overlay_12__0212c824(0);FUN_overlay_12__02135140();return s;}
