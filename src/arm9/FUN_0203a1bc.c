// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// Full independent twin validation: notes/sessions/matching-continue-2026-11-12-twins.md
// twin of FUN_020bf7d8
unsigned int FUN_0203a1bc(int *pair) {
    long long y=pair[1],x=pair[0];
    return (unsigned int)((x*x+2048)>>12)+(unsigned int)((y*y+2048)>>12);
}
