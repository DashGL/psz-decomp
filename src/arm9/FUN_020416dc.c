// FUN_020416dc @ 0x020416dc (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020416dc @ 0x020416dc (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 115.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b115/020416dc.txt.
 */
extern const char DAT_020f8d24[], DAT_020f8d30[];
extern int FUN_0206d2e4(void *,void *),FUN_02041b58(void *,void *),FUN_020038ec(void *,unsigned int,const char *,...);extern void FUN_020bc3c0(void *,void *,int),FUN_02041afc(void *,void *,void *);void FUN_020416dc(char *s,void *key){char name[12],prefix[16],path[64];if(*(void **)s&&FUN_0206d2e4(key,name)){FUN_02041b58(prefix,name);FUN_020038ec(path,64,DAT_020f8d24,prefix,name);FUN_020bc3c0(*(void **)s,path,0);FUN_020038ec(path,64,DAT_020f8d30,prefix,name);FUN_02041afc(path,s+24,s+20);}}
