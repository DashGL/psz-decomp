// FUN_overlay_31__0219a06c @ 0x0219a06c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a06c @ 0x0219a06c (code 0x3a, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay31 ROM reconstruction, 2026-11-05.
 * Game record formatting, action scheduling or actor allocation.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch363.md.
 * Field identities remain provisional; stack input/output layout preserved.
 */
typedef struct {int x,y,z;} Triple;typedef struct {unsigned char prefix[32];Triple position;Triple vector;unsigned char middle[28];int kind,owner;unsigned char tail[8];} Request;extern void FUN_0203666c(void *);extern void FUN_02046d94(void *,int,int);
void FUN_overlay_31__0219a06c(char *self) { Request request;FUN_0203666c(&request);request.kind=40;request.owner=*(int *)(self+12);request.position=*(Triple *)(self+56);request.vector=*(Triple *)0x0219cd1c;FUN_02046d94(&request,0,0); }
