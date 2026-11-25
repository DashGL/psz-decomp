// FUN_020c20ec @ 0x020c20ec (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c20ec @ 0x020c20ec
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Ensure eight resource slots allocated; existing non-invalid entries are reset. Then clean singleton state.
 * Evidence: scratch/coverage-root/batch9/020c20ec.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c29bc(void *),*FUN_020c3aec(void);
extern void FUN_020c2a58(void *),FUN_020c3be0(void *);
void FUN_020c20ec(void ***self) { int i;for(i=0;i<8;i++) { unsigned int *entry=(*self)[i];if(!entry) { entry=FUN_020ba894(36);if(entry)entry=FUN_020c29bc(entry);(*self)[i]=entry; }else if(entry[2]!=~0u)FUN_020c2a58(entry); }FUN_020c3be0(FUN_020c3aec()); }
