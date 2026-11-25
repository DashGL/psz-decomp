// FUN_0206a6a8 @ 0x0206a6a8 (0x34, arm) - ported from FUN_020318d0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0206a6a8 @ 0x020318d0 (recorded 0x34, ARM) -- census game.
 *
 * Bytes (ARM: 4-byte stride, `pop {r4,r5,r6,pc}` = e8bd8070):
 *   020318d0  e92d4070  push  {r4, r5, r6, lr}
 *   020318d4  e1a06000  mov   r6, r0              ; r6 = arg0 (array base)
 *   020318d8  e1a05001  mov   r5, r1              ; r5 = arg1 (index)
 *   020318dc  e1a04002  mov   r4, r2              ; r4 = arg2 (value)
 *   020318e0  ebffffa9  bl    02069964            ; refcount ACQUIRE (void, no args)
 *   020318e4  e286003c  add   r0, r6, #0x3c
 *   020318e8  e0825086  add   r2, r6, r5, lsl #2 ; r2 = base + index*4
 *   020318ec  e0805005  add   r0, r0, r5, lsl #2 ; r0 = (base+0x3c) + index*4
 *   020318f0  e3a01004  mov   r1, #4
 *   020318f4  e582403c  str   r4, [r2, #0x3c]     ; elem[index] = value   (WRITE)
 *   020318f8  ebffffef  bl    020673f0            ; D-cache clean by line (r0, 4)
 *   020318fc  ebffffa7  bl    02069978            ; refcount RELEASE (void, no args)
 *   02031900  e8bd8070  pop   {r4, r5, r6, pc}
 *
 * Semantics: SET ELEMENT of a 32-bit-element array living at base+0x3c,
 * wrapped in the input-state refcount acquire/release pair this region uses
 * everywhere (banked src/arm9/FUN_02069964.c and FUN_02069978.c, which tail
 * to FUN_0202d694 / FUN_0202d718 on the object at 0x20f6180).
 *
 * The interesting asymmetry, and the thing that took the reading: r0 and r2
 * are computed from DIFFERENT bases. r2 = base + index*4 and the store uses
 * displacement +0x3c; r0 = base + 0x3c + index*4 and is passed to the cache
 * clean. So the WRITE is `base->elems[index]` (array at +0x3c) while the
 * cache-flush address is `(char*)base + 0x3c + index*4`. They are the same
 * address computed two ways -- which is exactly what an
 * `elems[index] = v; DCacheClean(&elems[index], 4);` pair spells, and the
 * CACHE CLEAN (banked src/arm9/FUN_020673f0.c: `mcr p15,0,rX,c7,c10,1` per
 * 32-byte line over [start & ~0x1f, start+end)) is what makes the store
 * visible to the ARM9's cache-coherent engine. `mov r1,#4` is the length.
 *
 * Arities from the callees' OWN bodies (C8): both FUN_02069964 and
 * FUN_02069978 are 0x14-byte forwarding tail calls that MATERIALIZE r0
 * themselves (`LDR r0,=0x20f6180`) and take no argument -- so they are
 * spelled with no parameters here. FUN_020673f0 takes (start, endOff).
 *
 * TRUE SIZE: 0x34 recorded == exact. `pop` at +0x30 ends the body at 0x34 and
 * the next inventory entry FUN_02031904 begins at 0x02031904. No pool word.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern void FUN_02069964(void);
extern void FUN_02069978(void);
extern void FUN_020673f0(int start, int endOff);

typedef struct {
    u32 f00[15];      /* +0x00 .. +0x38 */
    u32 elems[1];     /* +0x3c : the indexed array (index*4 + 0x3c) */
} Rec318d0;

void FUN_0206a6a8(Rec318d0 *base, u32 index, u32 value)
{
    FUN_02069964();
    base->elems[index] = value;
    FUN_020673f0((int)&base->elems[index], 4);
    FUN_02069978();
}
