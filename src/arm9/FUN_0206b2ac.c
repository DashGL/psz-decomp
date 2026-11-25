// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// Typed fields at actual ROM literal-pool bases retain base-relative member
// accesses and avoid address folding or field-pointer hoisting.
extern struct { unsigned char pad_0[28]; unsigned int field_1c; } DAT_0211a180;
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA control and resource operations; helper return values retained.
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
unsigned int FUN_0206b2ac(void){unsigned int mask=FUN_020683d4();if(DAT_0211a180.field_1c){FUN_020683e8(mask);return 0;}DAT_0211a180.field_1c=1;FUN_020683e8(mask);return 1;}
