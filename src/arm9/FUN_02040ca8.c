// FUN_02040ca8 @ 0x02040ca8 (0x2a, thumb) - ported from FUN_0205a288 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Via5a2c8/5a2ec -> af5e0 -> table-qualified46918. Arrayb8, signed
 * countbc, stride280. First record whose word08 equals key is returned;
 * nonpositive count/no match returns null. Record semantic role ???.
 * Evidence: scratch/draft-coverage/batch204/. No frozen-count/gameplay claim.
 */
void *FUN_02040ca8(const char *self,unsigned int key)
{
 char *record=*(char *const *)(self+0xb8);
 int count=*(const int *)(self+0xbc),i;
 for(i=0;i<count;i++,record+=280) if(*(unsigned int *)(record+8)==key) return record;
 return 0;
}
