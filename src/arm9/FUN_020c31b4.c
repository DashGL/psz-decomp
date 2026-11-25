// flags: -O4,p
// FUN_020c31b4 @ 0x020c31b4
/* USA ROM reconstruction, 2026-11-04.
 * Conditionally finalize two enabled drawing contexts and always finalize shared drawing state.
 * Evidence: scratch/coverage-root/batch4/020c31b4.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int DAT_020fcb20[];
extern unsigned char DAT_0211c8f0[];
extern unsigned char DAT_0211c90c[];
extern unsigned char DAT_0211c9b8[];
extern void FUN_020132ec(void *),FUN_02014374(void *);
void FUN_020c31b4(void) {
    if((DAT_020fcb20)[2]==1)FUN_020132ec((void *)DAT_0211c8f0);
    if((DAT_020fcb20)[0]==1)FUN_020132ec((void *)DAT_0211c90c);
    FUN_02014374((void *)DAT_0211c9b8);
}
