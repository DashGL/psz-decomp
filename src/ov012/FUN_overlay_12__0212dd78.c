// FUN_overlay_12__0212dd78 @ 0x0212dd78 (0x6a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212dd78 @ 0x0212dd78 (code 0x6a, pool extent 0x6a, thumb)
// check: vers=2.0/sp2p3 target=0x6a candidate=0x6a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Cycle seven choices while selected pane is active.
 * Field identities remain provisional.
 */
extern int FUN_020bbf94(int);
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_12__0212dd78(int *p) {if(p[16]==1&&p[9]){if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);p[17]++;if(p[17]>=7)p[17]=0;}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);p[17]--;if(p[17]<0)p[17]=6;}}}
