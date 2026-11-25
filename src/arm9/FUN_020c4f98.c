// FUN_020c4f98 @ 0x020c4f98 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9: free optional allocation and clear pointer/size pair only when present.
extern void FUN_020ba8c4(void *);
void FUN_020c4f98(char *self) {
    if(*(void **)(self+0x454)) {
        FUN_020ba8c4(*(void **)(self+0x454));
        *(unsigned int *)(self+0x454)=0;
        *(unsigned int *)(self+0x458)=0;
    }
}
