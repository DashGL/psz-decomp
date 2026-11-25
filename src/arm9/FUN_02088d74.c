typedef struct {unsigned char bytes[4];} Copy_02088d74;
// FUN_02088d74 @ 0x02088d74 (inventory code 0x64, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compare four header bytes and three descriptor words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Aggregate copy recovered2026-11-12; remaining codegen
 * residual parked. See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
int FUN_02088d74(unsigned char *s,unsigned char *item){unsigned char header[4];int i,equal;*(Copy_02088d74 *)header=*(const Copy_02088d74 *)item;equal=header[0]==s[0] && header[1]==s[1] && header[2]==s[2] && header[3]==s[3];for(i=0;i<3;i++)equal&=((int *)item)[i+1]==((int *)s)[i+1];return equal;}
