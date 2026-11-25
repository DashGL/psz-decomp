// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_020bce98 @ 0x020bce98, Thumb, extent 0x14.
// Reset companion subsystem through its ARM entry point, invoke optional completion.
#pragma thumb off
extern void FUN_020c5dd4(int);
#pragma thumb on
int FUN_020bce98(void (*callback)(void)) {
    FUN_020c5dd4(0);
    if (callback) callback();
    return 1;
}
