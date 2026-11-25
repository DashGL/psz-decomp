// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_02091ad4 @ 0x02091ad4 (0x18, thumb)
// flags: -O4,s
/* Evaluator81d94 calls this. Signed index must be>=0 and<count14;
 * nonnull array30 receives *parameter at4*index. Invalid cases skip input
 * dereference. Evidence: scratch/draft-coverage/batch213/.
 * No frozen-count/gameplay claim; parameter units ???.
 */
void FUN_02091ad4(char *self,int index,const unsigned int *parameter)
{
 unsigned int *array;
 if(index<0 || *(int *)(self+0x14)<=index) return;
 array=*(unsigned int **)(self+0x30);
 if(array) array[index]=*parameter;
}
