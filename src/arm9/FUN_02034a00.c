// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_02034a00 @ 0x02034a00
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int (*D_020ecff4[])(void *,unsigned int);
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Search eight-byte commands for first supported callback returning true; type range [0,6).
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02034a00.txt.
 */
extern unsigned char *FUN_02030560(void *);
void *FUN_02034a00(void *self) {
    unsigned char *sequence=FUN_02030560(self),*cmd=*(unsigned char **)sequence; unsigned int count=sequence[4],i;
    for(i=0;i<count;i++,cmd+=8) { unsigned int type=cmd[1];
        if(type<6) { int (*callback)(void *,unsigned int)=(D_020ecff4)[type]; if(callback && callback(self,cmd[0])) return cmd; }
    }
    return 0;
}
