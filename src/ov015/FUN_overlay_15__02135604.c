// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_15__02135604 @ 0x02135604
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Compare suffixes when both strings contain requested length.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02003c70(char *);
extern int FUN_020015ac(void *,void *,unsigned int);
int FUN_overlay_15__02135604(char *a,char *b,int count) {int na=FUN_02003c70(a),nb=FUN_02003c70(b);if(na<count||nb<count)return 0;if(!FUN_020015ac(a+(na-count),b+(nb-count),count))return 1;return 0;}
