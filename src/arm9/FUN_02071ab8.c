// FUN_02071ab8 @ 0x02071ab8 (0x40, thumb) - ported from FUN_0204bd24 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Copy type/position, clamp signed value below0, default nonpositive duration
 * to30 and cap at150; clear two counters and set final halfword5.
 * Exact field semantics ???. Evidence: scratch/draft-coverage/batch111/.
 */
typedef struct { int type,x,y,z,value,duration;short a,b,c,pad; } Record;
extern void FUN_02034680(volatile void *,const volatile void *);
void FUN_02071ab8(volatile Record *dest,const volatile Record *source)
{
    int value;
    dest->type=source->type;
    FUN_02034680(&dest->x,&source->x);
    value=source->value;dest->value=value;
    if (value<0) dest->value=0;
    value=source->duration;dest->duration=value;
    if (value<=0) dest->duration=30;
    if (dest->duration>=150) dest->duration=150;
    dest->a=0;dest->b=0;dest->c=5;
}
