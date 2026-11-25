// FUN_02033e74 @ 0x02033e74 (0x22, thumb) - ported from FUN_020a50f8 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: resolve resource record and dispatch slot byte/payload to entity.
 * Banked entity state selector996bc supplies manager,handle and ID.
 * Lookup always precedes null-entity test. Record+12 byte selects entity
 * slot; payload at+c passes unchanged. Keep nested duplicate record guard
 * from ROM. Exact payload domain ???. Return from703d8 is ignored.
 * Evidence: scratch/draft-coverage/batch51/020a50f8-disassemble.txt.
 */
typedef unsigned int u32;
extern u32 FUN_02033cbc(u32,u32),FUN_020423f0(u32,int,u32);
void FUN_02033e74(u32 manager,u32 entity,u32 id)
{
    u32 record=FUN_02033cbc(manager,id);
    if(entity && record) {
        if(record) FUN_020423f0(entity,*(unsigned char *)(record+0x12),*(u32 *)(record+0xc));
    }
}
