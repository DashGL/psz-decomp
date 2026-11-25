// FUN_overlay_12__02134a58 @ 0x02134a58 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134a58 @ 0x02134a58 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* ABI review: resident getters read globals/hardware and take no arguments.
 * USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear palette RAM and two buffers using lengths captured from owner words +50/+54.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern void FUN_0206557c(unsigned int,void *,unsigned int);
extern void *FUN_0205e1dc(void), *FUN_0205e40c(void);
void FUN_overlay_12__02134a58(void **self) {
    unsigned int size; void *owner; void *buffer;
    FUN_0206557c(0,(void *)0x05000000,512);
    owner=self[0]; size=((unsigned int *)owner)[20]; buffer=FUN_0205e1dc(); FUN_0206557c(0,buffer,size);
    owner=self[0]; size=((unsigned int *)owner)[21]; buffer=FUN_0205e40c(); FUN_0206557c(0,buffer,size);
}
