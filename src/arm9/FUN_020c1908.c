// FUN_020c1908 @ 0x020c1908 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c1908 @ 0x020c1908
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select context, apply two arguments to embedded +c0, then apply reloaded field +104.
 * Evidence: scratch/coverage-root/batch8/020c1908.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c1f10(int),FUN_02010378(void *,unsigned int,unsigned int),FUN_020103bc(void *,unsigned int);
void FUN_020c1908(unsigned int a,unsigned int b,int index) {
    char *manager;FUN_020c1f10(index);FUN_02010378(*(char **)0x0211c85c+192,a,b);
    manager=*(char **)0x0211c85c;FUN_020103bc(manager+192,*(unsigned int *)(manager+260));
}
