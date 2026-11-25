// FUN_020bec10 @ 0x020bec10 (0x9c, thumb) - ported from FUN_020ac1a4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020bec10 @ 0x020ac1a4, Thumb, target size 0x9c.
 * Build interaction payload, then assign its fields to result node.
 * Bytes 2/3 of flags are unspecified in original stack payload too.
 */
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct { u32 x,y; } Pair;
typedef struct { u32 w[8]; } Block32;
typedef struct { u32 w[9]; } Block36;
typedef struct { u8 a,b,c,d; Pair out; Block36 body; u32 x,y,id; Pair tail; } Payload;
typedef struct { u32 x,y,unk,z; Block32 block; u32 flags; } Rule;
typedef struct { u32 id; u32 pad[5]; Pair tail; } Rules;
typedef struct { u32 pad[2]; Payload data; } Node;
extern void FUN_02034e8c(Pair *, const Pair *);
extern void FUN_020be564(Pair *, const Pair *);
void FUN_020bec10(int unused,Node *node,u8 a,const Pair *out,const Rule *rule,u8 b,const Rules *rules)
{
    Payload temp;
    Payload p;
    temp.a=a; temp.b=b;
    FUN_02034e8c(&temp.out,out);
    temp.body.w[0]=rule->z;
    *(Block32 *)&temp.body.w[1]=rule->block;
    temp.x=rule->x; temp.y=rule->y; temp.id=rules->id;
    FUN_020be564(&temp.tail,&rules->tail);
    p=temp;
    node->data.a=p.a; node->data.b=p.b; node->data.c=p.c; node->data.d=p.d;
    node->data.out=p.out;
    node->data.body=p.body;
    node->data.x=p.x; node->data.y=p.y; node->data.id=p.id;
    node->data.tail=p.tail;
}
