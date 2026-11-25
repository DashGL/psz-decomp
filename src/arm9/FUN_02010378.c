// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets; argument/return contract corrected.
// flags: -noThumb
extern int FUN_020102fc(int a, int b, int c);
extern void FUN_02010358(int a);

int FUN_02010378(int a, int b, int c)
{
    if (!FUN_020102fc(a, b, c)) {
        return 0;
    }
    FUN_02010358(a);
    return 1;
}
