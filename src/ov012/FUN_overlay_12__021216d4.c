// FUN_overlay_12__021216d4 @ 0x021216d4 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__021216d4 @ 0x021216d4 (thumb)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full menu state machine and concrete helper ABI. */
extern void FUN_overlay_12__0211f2e0(void *,int),FUN_overlay_12__02121808(void *),FUN_overlay_12__02121744(void *);
void FUN_overlay_12__021216d4(int *s){if(s[804]!=7){if(s[803]==0){s[803]=1;FUN_overlay_12__0211f2e0(s+18,s[804]);}if(s[803]==1){if(s[804]==4)FUN_overlay_12__02121808(s);else FUN_overlay_12__02121744(s);}}else switch(s[805]){case 0:s[804]=5;break;case 5:s[805]=7;break;case 7:s[804]=0;break;}}
