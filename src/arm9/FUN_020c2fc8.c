// FUN_020c2fc8 @ 0x020c2fc8 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020c2fc8 @ 0x020c2fc8
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read signed display-control value; mode zero copies primary value to secondary before rereading primary.
 * Evidence: scratch/coverage-root/batch1/020c2fc8.txt.
 * Object identities and helper return contracts remain provisional.
 */
extern int FUN_0205cf38(void *);
extern void FUN_0205cf10(void *,int);
int FUN_020c2fc8(int mode) {
    switch(mode) {
    case 1: return (signed char)FUN_0205cf38((void *)0x0400006c);
    case 2: return (signed char)FUN_0205cf38((void *)0x0400106c);
    case 0: FUN_0205cf10((void *)0x0400106c,FUN_0205cf38((void *)0x0400006c)); return (signed char)FUN_0205cf38((void *)0x0400006c);
    default: return 0;
    }
}
