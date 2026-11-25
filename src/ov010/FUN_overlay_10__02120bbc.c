// FUN_overlay_10__02120bbc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_10__02120bbc @ 0x02120bbc (code 0x12, pool extent 0x12, thumb)
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Fill twelve bytes at +58 with ff; return receiver.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_10__02120bbc(signed char *self) { int i; for(i=0;i<12;i++) self[0x58+i]=-1; return self; }
