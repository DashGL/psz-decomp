// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets; argument/return contract corrected.
// Actual incoming-word evidence: notes/reference/resume2-upper-20261112/runtime-argument-proof.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Pair {
    int f0;
    int f4;
};
extern int FUN_02059ebc(struct Pair *,void *);
extern int FUN_02059f44(int, struct Pair);

int FUN_02059fb4(int a,void *path) {
    struct Pair p;
    if (FUN_02059ebc(&p,path) != 0) {
        if (FUN_02059f44(a, p) != 0) {
            return 1;
        }
    }
    return 0;
}
