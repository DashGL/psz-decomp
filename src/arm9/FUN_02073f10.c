// FUN_02073f10 @ 0x02073f10 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch05-manifest.json; original draft retained for referenced provenance.
// FUN_02073f10 @ 0x02073f10 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * When child +2c exists, update receiver, invoke child virtual slot +c, then update global state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073f10.txt.
 */
extern void FUN_0207404c(void *), FUN_020736b8(void);
void FUN_02073f10(char *self) {
    if(*(void **)(self+44)) {
        void *child; void (**table)(void *);
        FUN_0207404c(self); child=*(void **)(self+44); table=*(void (***)(void *))child;
        table[3](child); FUN_020736b8();
    }
}
