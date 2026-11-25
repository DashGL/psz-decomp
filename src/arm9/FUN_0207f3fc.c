// FUN_0207f3fc @ 0x0207f3fc (0x10, thumb) - ported from FUN_0209b648 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Set the three signed-byte components to -1 and final byte to0, in order.
 * The paired validity helper0209b6e4 rejects any negative component.
 * Entity-state callsites (66e38,67568,7fd18) are preserved in
 * scratch/draft-coverage/batch94/0209b648.xrefs.txt; exact component meanings
 * remain ???. Live placement is verified separately against the live set.
 */
void FUN_0207f3fc(volatile signed char *id)
{
    id[0]=-1;
    id[1]=-1;
    id[2]=-1;
    id[3]=0;
}
