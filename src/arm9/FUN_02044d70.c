// FUN_02044d70 @ 0x02044d70 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044d70 @ 0x02044d70 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Set halfword +1e bit zero, release valid handle, and replace it with -1.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void *FUN_020be450(void);
extern void FUN_020bed1c(void *,unsigned int);
void FUN_02044d70(char *self) {
    unsigned int handle;
    *(unsigned short *)(self+30)|=1;
    handle=*(unsigned int *)self;
    if(handle!=~0u) { FUN_020bed1c(FUN_020be450(),handle); *(unsigned int *)self=~0u; }
}
