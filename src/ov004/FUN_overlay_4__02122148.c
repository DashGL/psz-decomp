// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x1e exact_bytes=0 bad_relocs=0
// Record boundary proof: notes/sessions/matching-overlays-2026-11-12-short-wide-record.json
// FUN_overlay_4__02122148 @ 0x02122148 (code 0x1e, pool extent 0x1e, thumb)
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Copy twenty-four-byte record.
 * Field identities remain provisional.
 */
typedef struct {unsigned int a,b,c,d;} Header_02122148;
typedef struct {Header_02122148 header;unsigned int e,f;} Record;
void *FUN_overlay_4__02122148(Record *p,const Record *record) {p->header=record->header;p->e=record->e;p->f=record->f;return p;}
