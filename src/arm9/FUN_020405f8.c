// FUN_020405f8 @ 0x020405f8 (0x8, thumb) - ported from FUN_02063c44 [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_020405f8 @ 0x02063c44, Thumb, true size 0x8 (recorded 0x8).
 * 3-field setter: p->f44 = a2; p->f48 = a3; p->f4c = a4 (leaf, r0-r3).
 * MATCHED: first draft, FULLY family-neutral (ALL 24 builds), reloc-free.
 * Last scan-0921 queue item — queue complete.
 */
void FUN_020405f8(int *p, int a, int b, int c) {
    *(int *)((char *)p + 0x6c) = a;
    *(int *)((char *)p + 0x70) = b;
    *(int *)((char *)p + 0x74) = c;
}
