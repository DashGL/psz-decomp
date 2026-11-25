// FUN_0208d98c @ 0x0208d98c (0x2a, thumb) - ported from FUN_0209a110 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: initialize the24-byte entity request consumed by0209a1a0.
 * Header initialization02057b20 takes original request pointer; configure
 * through02057b30(request,2,12,24). Clear position,angle,mode,type and set
 * ID sentinel0xffffffff, preserving word/halfword/byte widths and order.
 * Request header category meanings are ???; roles of following fields
 * follow banked0209a1a0's constructor/dispatch contracts. Return original.
 * Evidence: scratch/draft-coverage/batch21/0209a110-asm.txt and banked caller.
 */
typedef unsigned int u32;
typedef struct {u32 header;u32 x,y,z;unsigned short angle;unsigned char mode,type;u32 id;} Request;
extern void FUN_02036094(Request *),FUN_020360a4(Request *,u32,u32,u32);
Request *FUN_0208d98c(Request *request)
{
    FUN_02036094(request);
    FUN_020360a4(request,2,12,24);
    request->x=0;request->y=0;request->z=0;
    request->angle=0;request->mode=0;request->type=0;request->id=~0u;
    return request;
}
