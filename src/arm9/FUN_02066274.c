// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_02066274 @ 0x02066274 (full extent 0x28).
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -noThumb
// twin of FUN_0206bfa0
typedef char *va_list;
#define __va_start(parm) (va_list)(((unsigned int)&(parm) & ~3U) + 4U)
extern int FUN_0206629c(int, const char *, va_list);

int FUN_02066274(int a, const char *fmt, ...) {
    return FUN_0206629c(a, fmt, __va_start(fmt));
}
