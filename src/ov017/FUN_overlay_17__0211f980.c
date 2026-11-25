// FUN_overlay_17__0211f980 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_17__0211f980 @ 0x0211f980 (code 0x1a, full extent 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete resource transfer callback dispatch.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch537.md.
 */
extern char G_02124D40[];
typedef void (*Callback)(const void *,unsigned,unsigned);
void FUN_overlay_17__0211f980(void *unused,unsigned *record) { if(record[2])((Callback *)G_02124D40)[record[0]]((const void *)record[2],record[1],record[3]); }
