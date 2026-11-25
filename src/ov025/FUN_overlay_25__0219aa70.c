// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_overlay_25__0219aa70 @ 0x0219aa70
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize module word then apply three-pointer resident operation with aliased sources.
 * Field identities remain provisional.
 */
extern void FUN_02042960(void *,unsigned int),FUN_020bc5cc(void *,void *,void *);
extern char data_0219ad84[],data_0219ad80[];
void FUN_overlay_25__0219aa70(void) { FUN_02042960(data_0219ad84,0x2000); FUN_020bc5cc(data_0219ad80,data_0219ad84,data_0219ad84); }
