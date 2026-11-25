// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_02082f20 @ 0x02082f20 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate selected 52-byte entry and its class [0,4); copy four-halfword table locally then return mapped value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Aligned record assignment matches the ROM copy loop.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct { unsigned short values[4]; } Table_02082f20;
extern const Table_02082f20 UNK_020f2edc;
unsigned int FUN_02082f20(char *self,int index) {
    char *records=*(char **)(self+0x4ec);
    if(records && index>=0 && index<*(int *)(self+0x4f0)) {
        int kind=*(int *)(records+52*index+36);
        if(kind>=0 && kind<4) {
            Table_02082f20 table=UNK_020f2edc;
            return table.values[kind];
        }
    }
    return 0;
}
