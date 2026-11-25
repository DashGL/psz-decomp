// FUN_020becac @ 0x020becac (0x20, thumb) - ported from FUN_020ac240 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020becac @ 0x020ac240, Thumb, size 0x20.
 * Append interaction result and increment wrapping byte count.
 */
typedef unsigned char u8;
typedef struct Node { unsigned state; struct Node *next; } Node;
typedef struct Entity { u8 pad[3]; u8 count; unsigned unk; Node *head; } Entity;
void FUN_020becac(void *unused, Entity *entity, Node *node)
{
    Node *tail = entity->head;
    if (tail != 0) {
        Node *next;
        for (next = tail->next; next != 0; next = next->next) {
            tail = next;
        }
        tail->next = node;
    } else {
        entity->head = node;
    }
    entity->count++;
}
