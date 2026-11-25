// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x6a, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_4__0212cb30 @ 0x0212cb30 (0x6a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212cb30 @ 0x0212cb30 (code 0x6a, pool extent 0x6a, thumb)
// check: vers=2.0/sp2p3 target=0x6a candidate=0x6a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Handle cancel and accept inputs while the shared display transition is idle.
 * Field identities remain provisional.
 */
extern int FUN_020c2e38(void),FUN_020bbf6c(unsigned int);extern void FUN_020c193c(int,int,int,int,int);extern void *FUN_02072af0(void),*FUN_02077930(void);extern int FUN_02072c20(void *,int,int);extern void FUN_02077e34(void *,int,int,int);void FUN_overlay_4__0212cb30(void *unused_receiver){if(FUN_020c2e38())return;if(FUN_020bbf6c(2)){FUN_020c193c(0,1,0,0,-1);FUN_02072c20(FUN_02072af0(),1,1);}if(FUN_020bbf6c(8)){FUN_020c193c(0,4,0,0,-1);FUN_02077e34(FUN_02077930(),0,0,0);FUN_02072c20(FUN_02072af0(),0,1);}}

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
