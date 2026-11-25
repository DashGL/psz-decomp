// FUN_overlay_15__02120e58 @ 0x02120e58 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch60.json; original draft retained for referenced provenance.
// FUN_overlay_15__02120e58 @ 0x02120e58 (full 0x14, Thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Retail-domain proof: notes/sessions/coverage-arm9-2026-11-06-batch45.md.
 * The loader zeros BSS slot0213d0a4 and this module never installs a target.
 * Preserve the full load/test/call structure. The one-input callback spelling
 * reflects forwarded r0 on an unreachable retail branch; arbitrary injected
 * callbacks have no proven generic ABI and are outside this reconstruction's
 * established domain. No extra incoming registers are invented as arguments. */
extern void (*data_0213d0a0[])(unsigned);
int FUN_overlay_15__02120e58(unsigned state)
{
    void (*callback)(unsigned)=data_0213d0a0[1];
    if(callback)callback(state);
    return 0;
}
