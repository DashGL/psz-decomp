// FUN_overlay_12__0212c614 @ 0x0212c614 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c614 @ 0x0212c614 (code 0x32, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Configure display fields or clear allocated graphics regions.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch355.md.
 */
extern void FUN_overlay_12__0212c64c(unsigned int,unsigned int,unsigned int,unsigned int);extern void FUN_overlay_12__0212c7b4(void *);extern unsigned int FUN_0205e090(void);extern void FUN_0206557c(unsigned int,unsigned int,unsigned int);
void FUN_overlay_12__0212c614(unsigned int a,unsigned int b) { unsigned int *self=*(unsigned int **)0x0213f2c4;if(self){self[2]=a;self[3]=b;FUN_overlay_12__0212c64c(0,1,a,b);FUN_overlay_12__0212c7b4(self);FUN_0206557c(0,FUN_0205e090(),2048);} }
