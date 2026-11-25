// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
int FUN_02028750(void *, int, unsigned long long);

int FUN_overlay_15__021206f0(int a, const long long *b, int c, int d, const int *tv) {
    long long local_b = *b;
    unsigned long long ticks = 0;

    ticks += ((unsigned long long)((long long)tv[0] * 0x01ff6210LL)) >> 6;
    ticks += ((unsigned long long)((long long)tv[1] * 0x01ff6210LL)) >> 6;
    return FUN_02028750(&local_b, 1, ticks);
}
