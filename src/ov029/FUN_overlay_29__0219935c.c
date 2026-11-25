// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_overlay_29__0219935c @ 0x0219935c
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Restore class table, clear selected global owner and destroy base.
 * Field identities remain provisional.
 */
extern int data_0219bd5c[];
extern void *FUN_02035518(void *);
void *FUN_overlay_29__0219935c(unsigned int *p) {p[0]=0x0219bd00;if(p[53]==1)*data_0219bd5c=-1;FUN_02035518(p);return p;}
