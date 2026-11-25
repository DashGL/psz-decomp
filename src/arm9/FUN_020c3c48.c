// FUN_020c3c48 @ 0x020c3c48 (0x46, thumb) - ported from FUN_020a92f8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c3c48 @ 0x020a92f8 (0x46, Thumb; inventory includes 2-byte pad).
 * Removes a categorized node and resets it. The no-previous-node path
 * deliberately stores the node itself into the category head before reset;
 * retain this observed behavior rather than substituting a conventional unlink.
 */
typedef struct Node {
    unsigned int words[4];
    struct Node *next;
    struct Node *previous;
    unsigned int active;
    unsigned int category;
} Node;
extern int FUN_020c3c90(Node **, unsigned int);
extern void FUN_020c3a84(Node *);
void FUN_020c3c48(Node **heads, Node *node)
{
    if (node != 0) {
        if (FUN_020c3c90(heads, node->category) == 0) {
            if (node->previous == 0) {
                heads[node->category] = node;
                FUN_020c3a84(node);
                return;
            }
            node->previous->next = node->next;
            if (node->next == 0) {
                heads[node->category] = node->previous;
            } else {
                node->next->previous = node->previous;
            }
            FUN_020c3a84(node);
        }
    }
}
