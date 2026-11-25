// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x1c exact_bytes=0 bad_relocs=0
// Semantic proof: notes/sessions/matching-overlays-2026-11-12-resource-layout.json
typedef struct {int word0;int word4;unsigned handles[8];} Resource_02131ad0;
extern Resource_02131ad0 *DAT_0213f2d8;
// FUN_overlay_12__02131ad0 @ 0x02131ad0 (code 0x16, pool extent 0x1c, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Read unchecked indexed module slot at +8, or invalid sentinel when global absent.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__02131ad0(unsigned int index) { Resource_02131ad0 *object=DAT_0213f2d8; if(object) return object->handles[index]; return ~0u; }
