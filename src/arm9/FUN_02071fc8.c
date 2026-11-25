// FUN_02071fc8 @ 0x02071fc8 (0x56, thumb) - ported from FUN_0204c204 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Direct handler in runtime-proven live updater4bd64. Conversion returns zero
 * on acceptance. Descriptor kind 53, wrapped fixed-point coordinates and
 * signed upper clamp follow the ROM. Domain meaning of kinds/handle ???.
 * Signed slot half18 is read after conversion and added to x before shift.
 * Initializer clears only first three halfwords; padding remains unspecified.
 * Evidence: scratch/draft-coverage/batch216/. No frozen-count/gameplay claim.
 */
typedef unsigned int u32;
typedef struct { unsigned short kind, field2, field4, padding; u32 x, y; } Request;
extern int FUN_020b8118(void *,u32 *,u32 *);
extern void FUN_02071d0c(Request *);
extern void FUN_020c32b4(Request *,u32);
void FUN_02071fc8(char *self,char *slot)
{
 u32 x=0,y=0;
 Request request;
 if(FUN_020b8118(slot+4,&x,&y)) return;
 FUN_02071d0c(&request);
 request.kind=53;
 request.x=(x-10u+(u32)*(short *)(slot+0x18))<<12;
 request.y=y<<12;
 if((int)request.y>=491520) request.y=491520;
 FUN_020c32b4(&request,*(u32 *)(self+0x280));
}
