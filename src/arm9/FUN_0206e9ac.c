// FUN_0206e9ac @ 0x0206e9ac (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e9ac @ 0x0206e9ac
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate0x1a4 singleton and retain constructor result; null failure returned.
 * Evidence: scratch/coverage-root/batch12/0206e9ac.txt.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_0206e9fc(void *);
void *FUN_0206e9ac(void){if(!*(void **)0x0211a1f4){void *p=FUN_020ba894(0x1a4);if(p)p=FUN_0206e9fc(p);*(void **)0x0211a1f4=p;if(!p)return 0;}return *(void **)0x0211a1f4;}
