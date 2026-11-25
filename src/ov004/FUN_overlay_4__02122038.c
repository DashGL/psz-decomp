// FUN_overlay_4__02122038 @ 0x02122038 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__02122038 @ 0x02122038 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * When global display is inactive hide receiver child and enter state two, then update display.
 * Field identities remain provisional.
 */
extern int FUN_020c2e38(void);
extern void FUN_overlay_4__02121f6c(void *);
extern void FUN_overlay_4__02122eec(void *);
void FUN_overlay_4__02122038(unsigned int *p) {if(!FUN_020c2e38()){FUN_overlay_4__02121f6c(p);p[7]=p[6];p[6]=2;}FUN_overlay_4__02122eec(p);}
