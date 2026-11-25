// FUN_overlay_12__0212d024 @ 0x0212d024 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d024 @ 0x0212d024 (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Player threshold predicate; network descriptor read only after successful fill. */
extern char *FUN_02086e3c(void), *FUN_020870c4(void *);
extern int FUN_0206e98c(signed char *);
int FUN_overlay_12__0212d024(int *condition) {
 signed char descriptor[8]; char *player=FUN_020870c4(FUN_02086e3c());
 if (condition[1]==6) return (unsigned char)player[86]>=(unsigned char)condition[3];
 if (condition[1]==20 && FUN_0206e98c(descriptor)==1) {
  unsigned total=0; int i;
  for(i=0;i<8;i++) total+=(unsigned char)player[78+i];
  return total>=(unsigned)descriptor[5];
 }
 return 0;
}
