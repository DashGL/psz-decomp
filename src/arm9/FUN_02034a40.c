// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// FUN_02034a40 @ 0x02034a40 (inventory code 0x2c, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Walk two-byte commands; type zero dispatches nonnull callback with command byte.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02034a40.txt.
 */
extern void (*D_020ec3c4[])(void *,unsigned int);
void FUN_02034a40(void *self,const unsigned char *sequence) {
    const unsigned char *cmd=*(const unsigned char **)(sequence+4); unsigned int count=sequence[3],i;
    for(i=0;i<count;i++,cmd+=2) {
        unsigned int type=cmd[0];
        if(type<1) { void (*callback)(void *,unsigned int)=D_020ec3c4[type]; if(callback) callback(self,cmd[1]); }
    }
}
