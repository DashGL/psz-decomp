// FUN_020bf44c @ 0x020bf44c (0x22, thumb) - ported from FUN_020ac9b8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef unsigned int u32;
typedef struct { u32 word[8]; } Body;
typedef struct { u32 first; Body body; } Block;
typedef struct { u32 prefix[3]; Block block; u32 tail; } Element;
typedef struct { u32 unknown; Element *elements; } Payload;
void FUN_020bf44c(Payload *payload, int index, const Block *source)
{
    Block *dest = &payload->elements[index].block;
    dest->first = source->first;
    dest->body = source->body;
}
