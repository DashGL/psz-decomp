// FUN_overlay_19__02198780 @ 0x02198780 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198780 @ 0x02198780 (code 0x3e, full extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game/UI initialization, command
 * packaging or state transition; exact sequential getter/call behavior.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch394.md.
 */
typedef struct {signed char bytes[4];int sender,extra;} Command;extern void *FUN_02001540(void *,int,unsigned int);extern int FUN_02084cc0(void *);extern void FUN_overlay_19__02198bac(void *,void *);
void FUN_overlay_19__02198780(void *self,int value) { Command c;FUN_02001540(&c,0,12);c.bytes[2]=-1;c.sender=-1;c.extra=-1;c.bytes[0]=1;c.bytes[1]=5;c.sender=FUN_02084cc0((void *)0x0211a51c);c.bytes[2]=value;FUN_overlay_19__02198bac(self,&c); }
