// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// Typed fields at actual ROM literal-pool bases retain base-relative member
// accesses and avoid address folding or field-pointer hoisting.
extern struct { unsigned char pad_0[1]; unsigned char field_1; unsigned char pad_2[2]; char * field_4; } DAT_0211a994;
// FUN_020a751c @ 0x020a751c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset global state unless active object blocks transition.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a751c.txt.
 */
extern unsigned int *FUN_020a5240(void); void FUN_020a751c(void) { char *p=DAT_0211a994.field_4; if(!p || *(unsigned int *)(p+244)) { unsigned int *state; DAT_0211a994.field_1=0; state=FUN_020a5240(); state[6]=0; state[7]=1; } }
