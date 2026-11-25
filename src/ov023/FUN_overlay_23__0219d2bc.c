// FUN_overlay_23__0219d2bc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_23__0219d2bc @ 0x0219d2bc (code 0x70, pool extent 0xa0, thumb)
// check: 2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize shared fixed-point tuning constants and squared thresholds.
 * Field identities remain provisional.
 */
extern char G_0219DAB8[]; extern char G_0219DABC[]; extern char G_0219DAC0[]; extern char G_0219DAC4[]; extern char G_0219DAC8[]; extern char G_0219DACC[]; extern char G_0219DAD0[]; extern char G_0219DAD4[]; extern char G_0219DAD8[]; extern char G_0219DADC[]; extern char G_0219DAE0[];
extern void FUN_02042960(void *,int);
extern void FUN_020bc5cc(void *,const void *,const void *);
void FUN_overlay_23__0219d2bc(void) {FUN_02042960((void *)G_0219DADC,491520);FUN_02042960((void *)G_0219DAD8,860160);FUN_02042960((void *)G_0219DAD4,491520);FUN_02042960((void *)G_0219DAD0,860160);FUN_02042960((void *)G_0219DACC,30720);FUN_020bc5cc((void *)G_0219DAC8,(void *)G_0219DACC,(void *)G_0219DACC);FUN_02042960((void *)G_0219DAC4,819);FUN_02042960((void *)G_0219DAC0,2048);FUN_02042960((void *)G_0219DABC,307200);FUN_02042960((void *)G_0219DAB8,3072);FUN_02042960((void *)G_0219DAE0,61440);}
