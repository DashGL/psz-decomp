// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_21__0219911c @ 0x0219911c
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Require readiness for four active nonmatching-mode records.
 * Field identities remain provisional.
 */
int FUN_overlay_21__0219911c(void **p,unsigned int mode) {int i;for(i=0;i<4;i++){unsigned int *r=(unsigned int *)((char *)p[59]+i*188);if(mode!=r[7] && r[5]!=~0U && r[5]!=12 && !r[32])return 0;}return 1;}
