// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x96, exact bytes and relocation targets.
// FUN_0208b0b4 @ 0x0208b0b4
// check: 2.0/sp2p3 target=0x96 candidate=0x96 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full switch/stack-argument semantics
 * decoded from named address. Evidence: scratch/coverage-high-game/inspect308.txt. */
extern int FUN_0208b09c(void *,const unsigned char *);int FUN_0208b0b4(void *s,const unsigned char *data){switch((data+FUN_0208b09c(s,data))[2]){case 1:case 2:case 3:case 4:case 5:return 0;case 41:case 42:case 43:return 1;case 21:case 22:case 23:case 24:case 25:case 26:return 2;case 17:case 18:case 19:case 20:return 3;case 28:case 29:case 30:case 40:case 44:return 4;case 31:case 32:case 33:case 34:case 35:case 36:case 37:case 38:case 39:return 5;case 15:case 16:return 6;default:return 7;}}
