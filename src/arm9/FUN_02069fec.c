// FUN_02069fec @ 0x02069fec (0x28, arm) - ported from FUN_02031214 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
extern int FUN_020688c0(int, unsigned int, int);

void FUN_02069fec(void)
{
    while (FUN_020688c0(7, 0, 0) < 0) {
    }
}
