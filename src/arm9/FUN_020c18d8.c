// FUN_020c18d8 @ 0x020c18d8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c18d8 @ 0x020c18d8
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select context, apply argument to embedded +b8, then apply reloaded manager field +104.
 * Evidence: scratch/coverage-root/batch8/020c18d8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c1f10(int),FUN_0200fea8(void *,unsigned int),FUN_0200d7d8(void *,unsigned int);
void FUN_020c18d8(unsigned int arg,int index) {
    char *manager;FUN_020c1f10(index);FUN_0200fea8(*(char **)0x0211c85c+184,arg);
    manager=*(char **)0x0211c85c;FUN_0200d7d8(manager+184,*(unsigned int *)(manager+260));
}
