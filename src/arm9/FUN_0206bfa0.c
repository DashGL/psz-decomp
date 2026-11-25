// FUN_0206bfa0 @ 0x0206bfa0 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_0206bfa0 @ 0x0206bfa0 (0x28, arm)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
typedef char *va_list;
#define __va_start(parm) (va_list)(((unsigned int)&(parm) & ~3U) + 4U)
extern int FUN_0206c044(int, const char *, va_list);

int FUN_0206bfa0(int a, const char *fmt, ...) {
    return FUN_0206c044(a, fmt, __va_start(fmt));
}
