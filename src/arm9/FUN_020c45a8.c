// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_020c45a8 @ 0x020c45a8 (full extent 0x14).
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// twin of FUN_020bce84
#pragma thumb off
extern void FUN_020c5c04(int);
#pragma thumb on
int FUN_020c45a8(void (*callback)(void)) {
    FUN_020c5c04(0);
    if (callback) callback();
    return 1;
}
