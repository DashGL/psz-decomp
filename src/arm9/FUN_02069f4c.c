// FUN_02069f4c @ 0x02069f4c (0x1c, arm) - ported from FUN_02031174 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_02069f4c @ 0x02031174 (recorded 0x1c, true 0x1c, ARM) — live.
 * Audio pitch free-head remaining-capacity reader: 0x100 - FUN_02069ed4() -
 * FUN_02069f10(); head-count minus the used count of the shared audio
 * channel set. Caller: FUN_0202fdc8 (banked).
 *
 * SPELLING: the whole difference is one bare expression (no result temp);
 * the first call's r0 must sit in the saved r4 until both terms exist, so
 * the rsb stays in r1 over #0x100 and the sub closes on a second register.
 * Any intermediate local (or a statement-split left-1) folds the rsb into
 * r4 straight after call 1 = 0x18 / 6 insns, 1 word short.
 *
 * STATUS: dsi/1.1 = 0x1c / 7 insns, EXACT TARGET BYTES at both call
 * slots wild-carded (branch displacements match; reloc slots are the
 * linker's); verify_relocs clean. 1.2/1.x/2.0/* emit pop{lr};bxlr
 * (interworking epilogue) = codegen-equivalent, target uses pop{pc}.
 * NOT a recorded-span/pool case: 0x02031190 is the next function.
 */
typedef unsigned int u32;

extern int FUN_02069ed4(void);
extern int FUN_02069f10(void);

int FUN_02069f4c(void)
{
    return 0x100 - FUN_02069ed4() - FUN_02069f10();
}
