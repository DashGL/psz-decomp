// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0205dfb4 @ 0x0205dfb4 (0x14, arm) - auto-matched by tools/templates.py [tailcall] (2026-08-28), verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
extern unsigned int func_0205de00(int);
unsigned int FUN_0205dfb4(void) { return func_0205de00(34678190); }

// Consumed-return ABI evidence: Actualov15:21370c4 stores returnedmask immediately; helper205de00 capturesLDRH originalmask, clears flags, and explicitly MOVr0,r4 before return.
