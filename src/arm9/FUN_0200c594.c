// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-registration.md
// flags: -O4,s -noThumb
struct Registration_0200c594 { struct Registration_0200c594 *next; void (*cleanup)(void *); void *object; };
extern struct Registration_0200c594 *DAT_02101dd0;
void *FUN_0200c594(void *object,void (*cleanup)(void *),struct Registration_0200c594 *node){node->next=DAT_02101dd0;node->cleanup=cleanup;node->object=object;DAT_02101dd0=node;return object;}
