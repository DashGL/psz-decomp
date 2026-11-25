// FUN_020bf0b4 @ 0x020bf0b4 (0x22, thumb) - ported from FUN_020ac63c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Direct call in live combat slot sweeper ac394. Snapshots next before
 * releasing each node through the current manager; release rewrites next.
 * Clears slot list head8 and byte3 after draining, including an empty list.
 * Node/free-list roles are proven in the banked ac830 header; byte3 role ???.
 * Evidence: scratch/draft-coverage/batch225/. No frozen-count/gameplay claim.
 */
typedef struct Node { unsigned char active,pad[3]; struct Node *next; } Node;
extern void *FUN_020bf12c(void);
extern void FUN_020bf2bc(void *,Node *);
void FUN_020bf0b4(char *slot)
{
 Node *current=*(Node **)(slot+8);
 while(current) {
  Node *next=current->next;
  FUN_020bf2bc(FUN_020bf12c(),current);
  current=next;
 }
 *(Node **)(slot+8)=0;
 slot[3]=0;
}
