// FUN_02047bb8 @ 0x02047bb8 (0x22, thumb) - ported from FUN_0204ea34 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_02047bb8 @ 0x0204ea34 (0x22 Thumb; recorded 0x24 includes padding).
 * Initialize component, then copy type-specific value and supplied state.
 */
typedef unsigned int u32;
extern void FUN_020473e8(u32 *,u32 *,int);
void FUN_02047bb8(u32 *obj,u32 *input,u32 value) {
    FUN_020473e8(obj,input,1);
    obj[0x41]=input[0x15]; obj[0x42]=0; obj[0x43]=value;
}
