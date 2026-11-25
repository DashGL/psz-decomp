// FUN_020c2174 @ 0x020c2174 (0x34, thumb) - ported from FUN_020a8800 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020c2174 @ 0x020a8800 (0x34, Thumb) — MATCHED dsi/1.1.
 * Load a file through FUN_020ba374(path, &out, -32), with out initially
 * zero, then pass allocation and input to FUN_02012aa4. Return allocation
 * on success; otherwise release through exact veneer FUN_020ba8c4 and
 * return zero. The first input is unused. The redundant release guard
 * is present in the ROM. The loader's detailed format is not asserted.
 * Callee inspection: aaf50 passes its first input to file-open ad50;
 * it is a path, not a byte count. The local out receives the load result.
 * BLX at 020a881a targets ARM function 02012aa4.
 * Evidence: saved-ROM Ghidra disassembly and extracted/arm9/arm9.bin;
 * 2026-10-14: match.py full words and relocation verification pass.
 */
typedef unsigned int u32;
extern u32 FUN_020ba374(u32,u32 *,int);
extern int FUN_02012aa4(u32,u32);
extern void FUN_020ba8c4(u32);
u32 FUN_020c2174(u32 unused,u32 input,u32 path) {
 u32 result;
 u32 out=0;
 result=FUN_020ba374(path,&out,-32);
 if(result) {
 if(FUN_02012aa4(result,input)) return result;
 if(result) FUN_020ba8c4(result);
 }
 return 0;
}
