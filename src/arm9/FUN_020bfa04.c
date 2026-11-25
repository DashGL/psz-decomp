// FUN_020bfa04 @ 0x020bfa04 (0x24, thumb) - ported from FUN_020acf4c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Direct liveace84 callee. Zero vector skips all helpers; otherwise sum of
 * rounded squares -> e7ac -> in-place scale6e90c. Normalization is the apparent
 * role; e7ac's internals are outside this draft's modeled-helper proof.
 * Evidence: scratch/draft-coverage/batch235/. No frozen-count/gameplay claim.
 */
extern unsigned int FUN_020bf7d8(const int *);
extern int FUN_0205c574(unsigned int);
extern void FUN_02034e98(unsigned int *,int);
void FUN_020bfa04(unsigned int *vector)
{
 if(vector[0] || vector[1]) {
  int scalar=FUN_0205c574(FUN_020bf7d8((const int *)vector));
  FUN_02034e98(vector,scalar);
 }
}
