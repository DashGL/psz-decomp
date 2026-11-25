// FUN_overlay_12__0212599c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_12__0212599c @ 0x0212599c
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_02137e74[];
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Accept bounded shared record when nonempty and eligible.
 * Field identities remain provisional.
 */
extern int FUN_0203a1fc(const void *);
extern int FUN_02084900(const void *);
int FUN_overlay_12__0212599c(int *p) {int i=p[16];if(i>=0 && i<20){void *r=D_02137e74+i*16;if(FUN_0203a1fc(r))return 0;if(FUN_02084900(r))return 1;}return 0;}
