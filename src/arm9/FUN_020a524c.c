// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// Typed fields at actual ROM literal-pool bases retain base-relative member
// accesses and avoid address folding or field-pointer hoisting.
extern struct { unsigned char pad_0[12]; int field_c; void * field_10; } DAT_0211a664;
// FUN_020a524c @ 0x020a524c (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy saved block into queued state with two byte parameters.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a524c.txt.
 */
extern void FUN_020963b0(void *),FUN_020655d8(void *,void *,unsigned int),FUN_020a97f8(void *,void *),FUN_020a751c(void);void FUN_020a524c(void *source,int a,int b){unsigned int data[193];if(DAT_0211a664.field_10){FUN_020963b0(data);FUN_020655d8(source,data,768);((unsigned char *)data)[768]=b;((unsigned char *)data)[769]=a;FUN_020a97f8(DAT_0211a664.field_10,data);DAT_0211a664.field_c=1;FUN_020a751c();}}
