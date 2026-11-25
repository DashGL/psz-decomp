// FUN_020beb84 @ 0x020beb84 (0x8c, thumb) - ported from FUN_020ac118 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020beb84 @ 0x020ac118 (0x8c, Thumb).
 * Allocate reciprocal interaction results; release both on partial failure.
 * Static graph says dead, but supplied live-evidence.json has 8 entry hits.
 */
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct {int ent;u32 *out;u8 *cur;u8 cnt;} Pack;
extern void *FUN_020bf12c(void);
extern void *FUN_020bf29c(void *);
extern void FUN_020bf2bc(void *,void *);
extern void FUN_020bec10(int,void *,u8,u32 *,u8 *,u8,void *);
extern void FUN_020becac(int,int,void *);
void FUN_020beb84(int ctx,Pack *a,Pack *b)
{
    void *na=FUN_020bf29c(FUN_020bf12c());
    void *nb=FUN_020bf29c(FUN_020bf12c());
    if(na && nb) {
        void *ra=*(void **)(a->ent+0xc);
        FUN_020bec10(ctx,na,a->cnt,a->out,b->cur,b->cnt,*(void **)(b->ent+0xc));
        FUN_020bec10(ctx,nb,b->cnt,b->out,a->cur,a->cnt,ra);
        FUN_020becac(ctx,a->ent,na);
        FUN_020becac(ctx,b->ent,nb);
    } else {
        FUN_020bf2bc(FUN_020bf12c(),na);
        FUN_020bf2bc(FUN_020bf12c(),nb);
    }
}
