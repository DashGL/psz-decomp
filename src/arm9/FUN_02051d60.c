// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
typedef struct { void (*entries[14])(void); } Callbacks_02051d60;
extern Callbacks_02051d60 DAT_020ed740;
extern int DAT_020f93d4;
// FUN_02051d60 @ 0x02051d60 (inventory code 0x3a, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 204.
 */
void FUN_02051d60(int kind){Callbacks_02051d60 table;void (*callback)(void);table=DAT_020ed740;if(kind!=-1&&kind<14&&kind!=DAT_020f93d4){callback=table.entries[kind];if(callback){DAT_020f93d4=kind;callback();}}}

/* ROM table, callback ABI, full extent and relocs: notes/reference/resume2-low-20261112/FUN_02051d60-proof.json. */
