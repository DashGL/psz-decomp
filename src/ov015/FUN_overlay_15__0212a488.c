// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_15__0212a488 @ 0x0212a488
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Stop operation, select new mode, clear shared field and install raw callback.
 * Field identities remain provisional.
 */
extern unsigned char data_0213e848[];
extern void FUN_overlay_15__021321d4(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02128050(int);
extern void FUN_overlay_15__02127de4(void *);
void FUN_overlay_15__0212a488(int mode) {FUN_overlay_15__021321d4();if(!mode){*data_0213e848=1;FUN_overlay_15__02132190(16);}else{*data_0213e848=2;FUN_overlay_15__02132190(18);}FUN_overlay_15__02128050(0);FUN_overlay_15__02127de4((void *)0x0212a369);}
