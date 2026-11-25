// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_17__0211e928 @ 0x0211e928
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Apply nonnegative animation selection and reset phase.
 * Field identities remain provisional.
 */
void FUN_overlay_17__0211e928(unsigned int *p,int selection,int enabled) {if(selection>=0){p[2793]=1;p[229]=selection;p[2792]=!enabled?0:2;p[230]=0;}}
