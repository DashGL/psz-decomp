# Readable layer (src-readable/) — contract and working conventions

*Established 2026-10-06 (phase start); `notes/project-direction.md` remains
the owner decisions. This doc is the CURRENT LAW organized by topic — not
a wave chronology. When a session's finding changes a rule, edit the rule
here (one-line edit; supersessions resolved inline) and add one row to
`notes/readable-ledger.md`; never append a new superseding section.
Verdicts, per-function measurements, and per-file histories live in the
twin headers (`src/`) — the readable file carries only the human doc +
site notes. The chronological wave record (R1 → now) lives in the
ledger.*

## Scope: when these rules apply

Owner, 2026-10-06: readable-layer rules apply ONLY in readability work —
when the owner explicitly asks to work on the readable layer or a
readable version of a function. A matching session (banking into `src/`,
drafting in `drafts/`) never produces readable files, never updates them,
and runs the matching gates only. Nothing in `src/` owes a readable
counterpart; matching progress is src/ progress only.

## The contract (current law)

Readability is not a scalar (R46): each P-rule is one objective
obligation — the byte gate proves BEHAVIOR survived; P6/P7/P8 prove
decompiler ARTIFACTS are eliminated or measured (the subtractive
half); P9 proves MEANING is decoded into names/roles/contracts (the
additive half); P6b proves the text COMMUNICATES (friction census)
and its claims MATCH the evidence (skeptic census: every question
gets a disposition). `Still unreadable` always decomposes into a
named deficit with a named instrument.

**What the layer is.** `src-readable/` mirrors `src/` one-for-one (same
file stems, one function per file): human-readable, idiomatic C per
function that MUST byte-match — permanently, no exceptions (verified per
file on every gate run). The layer's purpose (owner, 2026-10-06): the
repo's compounding goal — more knowledge, less dependency on the
expertise/instruments that produced it — for EFFICIENCY (no session
re-derives recorded work) and READABILITY for other people; the
`#define` bridges + struct typedefs accumulate into the project's
naming/type record as coverage grows.

**P1 — Sources (the R27 priority reversal).** GROUND TRUTH for reading =
the ASM (Ghidra listing/decompile, the carved bytes): every question
about behavior, schedule, or idiom is answered there first; consulting
it is normal work, not a "documentation gap" event (R26's rsb-negation
idiom was visible only in the listing). The src/ twin = ONE verbose
spelling that already byte-matches + the documentation carrier (proven
facts, callee contracts, negative grids, verdict archives banked R19).
The human form is written from both. Neither is the spelling template.

**P2 — The byte gate binds machine code, not C text (R22/R23
representation law).** The gate constrains the COMPILED MACHINE CODE:
identical words + identical relocs (entries, symbol names included)
under the twin's flags — that, plus the owner-bar linter, is the ONLY
judge. The twin specifies BEHAVIOR (compiled bytes + relocs + recorded
facts); its C text is one witness of the original source, never a
template — **and that includes the twin's STATEMENT spellings, not
just its types/flow: the readable file's default vocabulary is the
writer's (`i++`, `+=`, direct expressions), and carrying a twin
arithmetic/increment statement spelling (`i = i + 1`,
`x = x + 1`-shaped bumps) requires a MEASURED REJECT, the same
evidence bar as any note.** The R36b miss is the mechanism to
remember: a wave can apply every instrument and still ship the twin's
spelling wherever no rule fires. Any spelling compiling identical is
legitimate, however far it departs from the twin's text; decompiler
syntax (materialized temps, `!= 0` noise, `+= 1`/`i = i + 1`
vocabulary, `fN` field names, goto ladders that respell identical)
never justifies a keep, and "the twin's shape" is BANNED as note
language. The compiler/rig still rejects any semantic
deviation byte-for-byte, which is what makes P1's reversal safe.

**P3 — Naming: proven-semantic admission only.** The compiled function
name stays `FUN_<addr>` in both layers. Readable names touch symbols
ONLY via the `#define` bridge (see §File format), and a bridge name must
be PROVEN-semantic: banked-twin spelling it, sibling usage, caller/
callee evidence, a census verdict, a documented lead — and each word
needs its own provenance (why THIS word, not a synonym; sweep momentum
earns nothing). R11's restated violation (owner): behavior evidence
proves a ROLE, never a NAME — bridges shipped on roles alone
(`evaluate_pair`/`apply_match`, R11f) were over-admission. Interim
exception, in force since R23-R31 and owner-passed across R24–R32:
callee bridges through the twin's extern are proven by EXACT target
address (R25 confirmed convention, "same as ebd8/70fa0" — the
interpretation lives in the doc line, the address is machine fact); a
role reading without address evidence stays comment-only. STRUCT/FIELD
typedef names and local identifiers are NOT symbol names — they stay in
code freely (role words with real-offset comments); the gate applies to
names standing in for REAL address-named symbols. Interpretations stay
OUT of code: no define, no identifier that reads as fact; they live in
comments labeled `name reading (inferred)` (R6, `finish_effect`
precedent), promoted by one edit when evidence graduates them.
**Local identifiers carry ROLES, not placeholder letters (R40b, owner's
external-reader round): a drawn-object local is named for what the
function uses it AS (`colon` for the colon draw item), never `s`-style
placeholder shorthands — the same bar as the role-named fields. And a
typedef encoding a SINGLE observed field is not a recovered type: an
`{ u32 pad[N]; T f; }` shell over one field is an OFFSET ENCODING and
spells as a named accessor macro instead (`TIMER_HANDLE(p)` — the R31
accessor law; a struct pretends knowledge of the other 0xa0 words it
has not decoded). The `((T*)p)->f` vs `*(T*)((char*)p+off)` grammar
conveys nothing extra when the field count is one.**

**P4 — The human-written bar (R7, R13).** The target is the file a
developer could have authored: the natural form of the ALGORITHM, not a
pretty decompilation.

- The rewrite = the audit pass (owner): writing cleanly forces
  confirming every detail it rests on. Header claims are LEADS, not
  proofs; verify through callee/caller bodies. Evidence wins over
  recorded claims (R5: the twin header said "count"; callees proved a
  handle) — the correction banks back into the twin's header
  (comments-only; src/ CODE is never edited).
- Spelling-class risk split (R9): NAMING/NATURALIZING spellings (named
  constants, decl-after-guard, castless calls via retyped externs)
  usually compile free — default-adopt, one measured verdict each.
  SEMANTIC REINTERPRETATIONS (bool over word store, NULL over 0
  compare, bitfields) change what the compiler thinks the type is —
  measure, expect rejection (measured: `armed:1` +2 words; NULL needs
  headers the unit doesn't take). Guard shapes are PER-FUNCTION facts.
- Proven semantics may be expressed naturally; proven vs guessed stays
  separated; no invented domain terminology (R13).
- Behavior-preserving is the floor; the byte match is the proof ceiling.

**P5 — Comment separation of concerns.** `src/` is the MAXIMALLY
documented version (AI/machine legibility; every compiler/backend fact
in its header). Readable comments serve the HUMAN reader: semantics,
intent, roles — and NOTHING else (R19). A readable file carries:
line-1 marker, ONE human semantic doc (**<=3 non-debt prose lines ENFORCED:
lint W17 (R54, the orientation budget for ordinary functions); 9 prose
lines is the absolute ceiling for genuinely complex ones — ???/name-prov
tagged entries are exempt and one line each (W20) — the sanctioned home
for what overflows the orientation; anything else banks to the twin**),
typed structs with
role fields + real-offset comments, bridges, compact one-line site
notes (**every comment outside the doc block is ONE physical line —
lint W19, R52, the owner's less-is-more ruling: src/ is the
maximally-documented copy, wrapped comment essays are twin-header
material**), a note names the CELL and the
divergence
("assignment order is match-sensitive (R40, 4/6 orders diverge)"),
never the narrative: evidence lives in the twin header + ledger, and
the file must survive re-generation with different doc verbosity
(R40c). **The doc is an ORIENTATION (R53): state the purpose in one
or two sentences — the code is the primary explanation, and every
comment must justify its presence (non-obvious intent, role/layout
constraint, evidence-backed invariant, a typed unknown); a comment
that restates its site's declaration, expression, or call — or
narrates an immediately visible step — is deleted (procedure-8
deletion pass; judgment class, deliberately no regex).**
**Archive/verdict prose (wave-id references, "see the
ledger", matched/measured-differs claims) is BANNED from the
editable comments (lint W18) — it is twin-header material; the ???
(name-kind-tagged) and name-prov convention lines are the P9 worklist
and stay. Definition parameters are NAMED (lint E11 — C99 requires
it; names compile free; role words per P3/R40b; the twin's
Ghidra-style unusedN/param_1 names do not carry when UNSUITED —
the ban is on unjustified carried names; a CHOSEN `unused_N` for an
evidence-backed unknown role is legal WITH its name-prov receipt,
the receipt being the audit record, not the spelling shape (R53:
c318's registrar args).** Verdict archives
(free/reject lists, wave history, measurement
receipts) NEVER live in the readable file — twins absorb them.
Carried-but-kept local names carry a `name-prov:` line in the doc
block (R42 — the NAME AUDIT's receipt: `name-prov: <name> - <role>
(kept)`); audit_readable reports `NAME-AUDIT ... unacked` for any
carried name lacking one, which fails procedure 8 item 4.

**P6 — The readability gate is the artifact linter.**
`tools/probes/lint_readable.py` (v2.5): restrictive pass/fail, 0E/0W
promotion floor with no NEW waivers — **E *and* W findings both fail
the run (R40b: a shipped W was a floor violation hiding as a
warning; there are no advisory findings at the gate)**. Rules (each
grounded in a measured
record, never taste — see the rule header comments in the file):
E1 body casts (typed-pointer rule), E2 hex-offset pointer arithmetic,
E3 goto/label (R10/R17: measured per function), E4 bool-select
materialization, E5 single-use return temp, E8 f-number field
spellings, E9 decompile-vocabulary identifiers (arg0/p0/paramN/local_N/
loc_N/ret_N/uVarN/iVarN/undefinedN; role words measured free —
R18's live catch: BOTH texts byte-matched while c7c8/c7f0 carried
decompile arg names; only the lint exposed it), W6 hoarded decl
blocks, W7 volatile in the body, W9 `!= 0` in conditions, W10
result-only temps (rename to a role word when the temp is the twin's
entry-materialized shape), W11 single-statement braces (a block INSIDE
a block; v2.4: re-implemented on the full stripped text with line
mapping — the v2 per-line search could never match the spanning shape,
the rule was dead since v2; a function body holding one statement is
exempt, mirror = driver S11), W12 no-op
statements (lone `;` + empty inline tails — spin-wait idioms exempt),
W13 unused-but-cast-to-void locals (suppressors; result-ignored CALLS
are semantics and exempt), W15 empty `{}` statement
arms (multi-line + inline + keyword-line forms; call-in-head spin-waits
exempt; W11's blind spot), W16 self-increment spelled as a full
assignment (`i = i + 1;` — the readable default is the writer's
vocabulary; a count-word RHS is exempt; the macro-accessor-LHS cell
deliberately routes to driver S10, not the regex), W19 one-physical-line
comments outside the doc block (R52 — the P5 less-is-more bar; wrapped
essays move to the twin header; comments compile free so this is
human:doc-trim class, no lattice candidate space), W20 one-line
convention entries inside the doc block (R53 — each ???/name-prov
entry is ONE physical line: tag + question + boundary inline; R46's
kind taxonomy governs content, W20 governs shape; human:doc-trim). A
note:-exempted
line reads the RAW text
(comments are stripped first) in a window of 3 lines back / 1 forward.
New W-rules measure their bytes first — a rule flagging what the twin
needs verbatim forces a waiver for a non-artifact (the v2.1 lesson) —
and every instrument change runs `tools/probes/self_test.py` (R57:
all four mutation/calibration rigs in one command; a rig that is
missing or removed is a rig unrun — the R48 lesson is checked there) —
and are checked against the EXISTING rules for overlap before they
keep their id (W14 shipped and folded same-session: literal-constant
casts are a strict subset of E1; the class survives as lattice class
The mirror-image rule: every lint artifact class must also exist
as a lattice-driver spelled class (S7–S11), or the sweep cannot repair
what the linter flags. **The mapping is enforced mechanically now
(R49): `tools/probes/audit_instrument_mirror.py` diffs the linter's
rule ids against the driver's class ids both ways in the gate chain;
a new lint rule the law and the mapping table do not name FAILS.**
Calibration contract (anti-reversed-C instrument, R18, extended R34):
artifact templates flag (`scratch/rd34/lint_probe.py`), the owner's
example body lints clean, v1-era files flag with correct rule ids,
post-wave files stay clean. A rule with zero live fires is presumed
mis-implemented until calibrated both ways (v1's W6 was dead code for
the whole layer's history; W15's blank-line + keyword-paren exemption
holes — measured and closed same-session).

**P6b — The legibility gate is the ignorance-isolated reader round
(R42/R43, owner: "do we need independent evaluation?").** The byte
gate proves correctness, lint proves format — NO machine instrument
proves the text communicates, because every machine check shares the
drafting session's assumptions. The instrument is a reader with
ENFORCED IGNORANCE, dispatched per promoted file:
**R49 enforcement: the promotion receipt (progress/readable_receipts/,
outside the readable file — R46 rejected in-FILE archives; this is the
data-dir form the owner adopted 2026-10-18) is the gate: a file whose
receipt lacks both stances, whose CODE changed after the receipt, or
whose TWIN was amended after the receipt FAILS
`tools/probes/readable_receipts.py check` in the chain — the
twin-amendment tripwire is the ratchet fix (twin bank-backs now force a
readable reconcile); receipt-debt rows (`reader: unproven`, pre-receipt
corpus only) stay visible until paid — and paying is ENFORCED now
(R55): `make` refuses a body adoption while the debt is unpaid, the
debt row's own "run both stances next time this file is touched"
instruction being a gate, not a note. The walls re-measure RAN HAND
during R52-R56 (`instruments.walls` hand-patched into receipts; two
of those writes silently never persisted) — since R57 `make` RUNS
the walls grid itself (memoized per invocation) and records it
atomically (`record_round.py` writes paid reader rounds the same
way); a fresh body delta always earns a FRESH walls run, never a
stale confirm. Twin-header citations resolve too (R57:
`audit_twin_cites.py` — paths must resolve in src/ or drafts/; a
carrier cite ("the decode lives on X's twin") against a thin header
= the ad50 phantom shape, a WARNING lead; reader rounds grade
through `grade_reader_census.py`'s INHERENT-rubric pre-pass (R57,
reviewer-blind — the rubric applies on the GRADING side only),
leaving the residue for judgment).**
- The packet (`tools/probes/read_eval.py`) is the readable file and
  NOTHING else — no twin, no law, no history, no feature-domain
  grant (R44: "knows HUD idioms" leaked c318's domain into the
  general prompt; naming the domain primes false relevance — the
  grant is general C + console fluency only, domain deliberately
  absent for ANY function class).
- The reviewer reports FRICTION (where it had to guess), never
  prescriptions — a prescription list imports the reviewer's taste
  as a new bias; friction observations are reports of the reader's
  own confusion and cannot smuggle assumptions.
- Findings are CANDIDATES. The grader (omniscient session) sorts
  them into a DISPOSITION CENSUS (R46): body-friction routes to
  measure-as-cell (byte verdict decides), apply-existing-law (no
  cell needed), or INHERENT (the file deliberately says only what
  is known — outsider friction at that boundary is the design
  working, not a defect); every reader QUESTION gets an evidence
  disposition: ANSWERED (the file answers and the twin/ASM backs
  it — the census entry cites the backing), UNKNOWN (the file
  deliberately marks the boundary — the ??? convention), or
  UNSUPPORTED (the file appears to answer, but the twin/ASM cannot
  back the answer; R45's shipped "copied at call time" invention
  is the live catch of the class). UNSUPPORTED's repair branches on
  what the evidence says: it CONTRADICTS the claim — CORRECT the
  claim to the evidence and bank the correction back into the twin
  header (P4); it is SILENT — DEMOTE the claim to a hedged
  ???/interpretation line or remove it. Lack of evidence for a
  claim means it cannot be stated as FACT, not that the underlying
  reading is false (the ??? philosophy). One of the two repairs, or
  the file does not promote. The byte gate stays the ONLY
  acceptance judge; the reader extends WHAT GETS CAUGHT, never
  WHAT SHIPS — UNSUPPORTED is the disposition that REPAIRS an
  assertion (correct or demote) rather than measuring it, and the
  census tally (which
  claim rode which disposition) is recorded with the wave, never
  in the readable file.
- Pilot evidence (R43 on c318): 3 adopted (two were blind spots in
  the instruments shipped same-wave — dead extern, twin-carried
  PARAMETER names outside the name-prov scanner), 1 bad candidate
  (algebraic `elapsed/60`) caught by the verdict before promotion.
- **Two stances run per promoted file (R45 A/B-tested):** the
  FRICTION reviewer (where did reading hurt — finds presentational
  gaps: names, twin vocabulary, dead text) and the SKEPTIC
  reviewer (a question census — R46 sharpens the ask to every
  question a competent maintainer would need answered before
  SAFELY MODIFYING the function, A/B-tested against the R45
  comprehension yield on the next promotions — both stances graded
  yield-by-disposition (questions, UNSUPPORTED findings, adopted
  fixes, false positives) over the run, and a stance finding no
  defect CLASS the friction/skeptic machinery misses is REMOVED:
  new instrumentation earns permanence only by a new catch; finds
  evidential
  gaps: claims the text cannot verify, contracts stated only by
  comments, unverifiable invariants). The question census
  is the mechanical flag for the most dangerous session bias:
  UNSOURCED ANSWERS written into the file (R45: "the item is
  copied at call time" shipped as an invented mechanism; the twin
  body proved field consumption — the rule is NEVER answer a
  reviewer question inline without a twin/bridge read; a reader
  question the text answers but the twin cannot back is a lead,
  not a fact). Report-vs-artifact skew is a named failure mode
  (R43 claimed the machine reasoning was stated in-file; the
  skeptic census proved it wasn't).
- MAINTENANCE SIMULATION (R46; periodic calibration, NOT a
  per-promotion gate): give a fresh knowledge-isolated reader ONLY
  the readable file plus a concrete change task (`change the
  timeout from 60 to 30`); grade the lines they would modify, the
  invariant they must preserve, and the downstream effects they
  expect — the answer key is the TWIN/ASM, never the grading
  session's intent. This tests operational readability (can an
  outsider safely modify from the file alone), which no other
  round measures; the disposition census grades its output. Run it
  per calibration wave, not per promotion.

**P7 — Measured residuals, not inherited verdicts.** Where the natural
spelling provably costs bytes, the readable file keeps the twin shape
with a one-line `note:` AT ITS SITE — and every keep-note is a
SPELLING-NOT-YET-FOUND marker, not a function property:

- **Note content (R22/R20/R31): a surviving note is a BEHAVIOR note
  about the machine** ("the twin materializes this bool; plain-test
  respell drops N bytes") citing its evidence span + the exhaustion
  log, naming the spelling state it was measured on. "The twin's
  shape", "load-bearing" unmeasured, and archive-style prose are
  banned; the note budget is small (five one-liners on the biggest
  function shipped post-R20) and zero notes is the normal state on a
  clean file.
- **Falsification is the system working (R31, third standing note this
  way by R32): any adopted spelling change — macro, typedef, constant,
  declaration, condition fold — changes the compiler's view of the
  whole function and RE-OPENS every standing keep/reject verdict.**
  Re-measure after every adoption; a "load-bearing" claim is an
  artifact of the current base state until re-proven. Banked
  falsifications: c8d4's "+2 words early return" died on a
  better-typed base (R15); abfb8's "+0xc aliases"/"bool-expr shifts
  the register file" died at G14/R21; c9e4's "cur triple role is
  load-bearing" dissolved the moment accessor macros arrived.
- **Hunt the declaration space before believing any note (R20).** The
  compiler derives shapes from declarations: extern qualifiers
  (volatile/const on a hot table — the way DS engines declare
  hardware-shared tables), extern types (array vs scalar vs pointer —
  c894's scalar-extern test +4 and stays array-decay), typedef member
  types, param types, local flag width. Body-space respells could
  never find the volatile-table extern that dissolved the R12
  volatile-pointee note byte-for-byte with NO note.
- Keep a twin shape only when the class is measured (the early-return
  alternative +2 words = FUN_0200c894 precedent) — and note shapes that
  only hold at lint by construction stay exempt via the note, not the
  waiver, when the evidence is at hand.
- **The P7 loop is ENFORCED (R51): `tools/probes/audit_standing_walls.py`
  runs in the chain.** Every standing note/waiver must blame newer than —
  or file (in its receipt's `instruments.walls`) — a re-measure/confirm
  dated at/after the file's last body adoption; the gate's `make`
  REFUSES a re-promotion whose adoption lacks the walls record. Live
  catch: ebd8's E3 waiver predated the R35 rebuild (the re-open was
  skipped); the no-goto falsifier class was re-run fresh (4 cells all
  differ — the wall confirmed, filed).

**P8 — The exhaustion gate (R21; the objective stop rule).** A spelling
hunt is done when `tools/simplify_lattice.py <twin> <draft>` reports
EXHAUSTED ... 0 adoptions — never when hand ideas run out. The driver
enumerates candidate spellings per class (condition noise, point-of-use
decls, declaration space, bool selects, constant vocabulary, call
forms, no-op tails, literal casts, empty arms, self-increments),
byte-gates every candidate, adopts winners, re-runs the FULL
enumeration on the evolved base, and terminates only at a zero round.
Every round line prints the per-class OFFER TALLY (`offered: s1=0 ...
s10=0`, R38) — that tally is the proof-of-sweep record: a class whose
shape the file visibly carries offering zero is the matcher-bug case
the tally exists to expose.
**Generators are HUMAN-PREFERENCE ordered (R55, live catch): when two
spellings of a class both byte-match, the round adopts whichever
candidate comes first, so candidate ORDER is adoption policy — S11's
single-direction flip put ebd8's `x < 0` to `0 > x` for two waves; the
class now reorders only constant-first comparisons toward the
variable-first idiom and offers nothing at already-preferred sites.
A generator whose candidates tie on bytes owes that preference order in
its own contract text.**
Adopt the driver's staged form when it matches; a surviving note cites
the exhaustion log. Hand-hunting remains welcome; hand lists do NOT
replace the driver's sweep (both R21 hand-standing notes were
falsified by the driver's spellings). The class list is a FLOOR, and
every class must actually OFFER candidates — zero offered on a shape
the file visibly carries is a matcher bug, not a clean file.
**The lowering/INLINING suspicion (R51, owner question): an ugly twin
shape or an inlined helper may be COMPILER-INJECTED — blocking a better
idiomatic spelling (an operator/intrinsic respell that compiles
identical). The suspicion is a P1 semantic guess (the listing proposes;
the driver cannot guess operators) — queue it the same wave in
progress/readable/unoffered_shapes.md, the wave-end census lists open
rows, and a suspicion that fires twice becomes a rule/debt/law row
(procedure 9). The c318 falsified decl-order note is the worked
example: re-measurement ADOPTED the natural order free.**

**P9 — The magic-number gate (R29/R30, owner's taxonomy pass).** Before
promotion, EVERY structure field offset and integer constant in the
function is decoded into named meaning — a hex offset or constant a
human cannot read means the work is not finished. The decode is a
FAMILY CENSUS, not guesswork:

- **First classify, THEN chase (owner, R29/R30): ask which taxon the
  constant belongs to — actual value (enum/id/sentinel), bitmask,
  structure offset, size/stride, or function/address/table offset —
  because each has different evidence and different expression:**
  values get named enums/sentinels; masks get bit names; offsets get
  structs or `#define`s; sizes/strides get element-type evidence (a
  count times a stride); addresses/tables get the table's element type
  and indexing idiom. Stay skeptical at the idiom level: a stored word
  is not an intrusive field unless someone READS it as one (c9e4's
  +0x78 shipped as written-only-handle; R47's census found the read —
  banked twin FUN_0202cf80 READS cur+0x78 and passes it as
  FUN_0202ca90's release handle — evidence wins over the recorded
  claim); an argument is not a
  size because a size would be convenient (the 0x110 misread,
  corrected: a DSP command id).
- Sweep the whole `src/` corpus + Ghidra decompile for every other
  function touching the same structure (offset grep + BL caller/callee
  census from the carved ROM + vtable walk when the object's +0 slot
  is a descriptor); derive each field's role from its WRITES before
  its reads (who initializes, who clears on teardown) and record the
  evidence. Worked example: c9e4's Queue/NODE_* decode via the
  ca5c/cfdc/d02c/d094/d100/cc84 family (R29/R30).
- Express the decode in the readable file: typed structs for layouts
  the compiler tolerates; named `#define` field offsets where raw
  accesses are machine-real (the scheduler model); named constants for
  domain values (ids, codes, angles, flags; the fixed-point compass
  and its ATAN_INDEX_SHIFT = R32's example).
- **Scope — decode everything the unit STATES (R36b: return values sit
  inside this gate too).** Before promotion the doc's WHAT line and the
  body agree: every constant the body OPERATES ON (operands, offsets,
  indices, shifts) AND every constant the function RETURNS/WRITES
  (return values, error/sentinel ids, stored values) is decoded into
  named meaning — the reader asks not only "what does this compute"
  but "what does it GIVE me and what do I do with it": the idiom-level
  taxon question extends to the callee/consumer side. The R36 miss
  (`0xffff` returned bare through a wave that decoded every operand)
  is the boundary that was silently narrower than intended; "a hex
  constant a human cannot read" NOW READS as: any constant the file
  states, in any position.
- Residual unknowns stay VISIBLE: a hedged name plus a `???` doc line
  naming exactly what could not be recovered and where
  — and WHICH KIND of knowledge is unrecovered
  (R46): identity (what the thing is), role (what it is used as), value
  (what the constant means), contract (what the callee
  guarantees), invariant (what relation holds) — so a skeptic
  question targets a named kind, never a vague complaint (R30's
  54c08 doc: the +0xa0 consumer, the class-id game concept). Never
  promote silent `0x7c`s; never invent semantics the census did not
  show. **R49: the ???/inferred lines are a STANDING WORKLIST —
  `tools/probes/audit_evidence_debt.py` re-censuses them every
  readable session/wave (kind tag REQUIRED or the census fails; the
  closed taxonomy: identity, role, value, contract, invariant, intent,
  mechanism, units, state, lifecycle, layout — a debt needs a NEW kind
  = the taxonomy edit lands WITH the debt line, R57: the auditor
  failing silently under piped chains is the exact reason gates must
  check rc); a
  line resolved by a new census is edited out the wave the evidence
  lands, and a long-open debt is a work item, not a feature.**

## File format

```c
// FUN_<addr> - readable. matched: src/<module>/<stem>.c      <- line 1, exact
// lint-waiver: <rule> - <evidence>                            <- (if needed) BELOW line 1
/* ONE human semantic doc: what it does, why, cross-refs (1-9 lines) */

#define readable_name FUN_<addr>        <- proven names only (P3);
                                           the ONLY place names touch symbols

typedef struct { ... role-named fields, real-offset comments ... } Role;

/* site note: one-line behavior note with evidence span (P5, P9) */
void readable_name(Role *owner)
{
    ... idiomatic C ...
}
```

- Line 1 is exactly `// FUN_<addr> - readable. matched: <twin path>`
  (the audit requires it, anchored to line 1 only — a file-wide search
  lets prose smuggling pass). Waivers sit BELOW the line-1 marker (the
  header check matches line 1 exactly; the linter reads waivers
  anywhere — the marker wins the placement war; R17 b31, waiver above
  line 1 failed the audit).
- NO `// flags:` / `// version:` markers — compiler reality is
  inherited from the twin (and must never be PROSE-COPIED into the
  file's text: the audit compiles the readable file under the TWIN's
  markers read from the TWIN file, while the twin's own parser splits
  on the first literal marker TOKEN — a literal `// flags:` string in
  readable prose risks the same marker-smuggling failure class as src/
  files; spell the concept, not the token). No inline-assembly keyword
  in Thumb readable prose.
- Readable files never enter the normal project link (duplicate symbol
  names by design). Nothing globs the mirror dir except the readable
  audit/builder — and the CLEAN-AIR RULE (R23): staging lives in
  `scratch/lattice_stage/` (driver `--stage-dir`), NEVER inside the
  mirror dir: the audit counts every FUN_* file it contains, so a
  staged evolved sibling fails the gate (and candidates compare in an
  OS temp dir, never as a scratch sibling beside real files).

## The compile rig (compiler reality: inherited, never re-declared)

The twin is compiled FIRST under its own markers and verified against
the ROM (the normal match.py chain); then the readable file is compiled
under the SAME flags + version and requires: identical code bytes,
identical relocation offset set, identical relocation entries (symbol
names included). No wildcards. Pin mechanics (R52 phantom-resolve):
`match.py` WITHOUT `--version` compiles under the repo CANONICAL and
does NOT read the file's `// version:` marker — a pinned twin reads as
a phantom mismatch under a hand invocation (29e74's 0xa0 head coloring
exists only under 2.0/base; dsi/1.1's natural size is 0xa4). Marker-
aware verification goes through `audit_readable.py`, or pass
`--version` explicitly. The reloc-ENTRY equality is what catches
extern substitution: a callee reached through the twin's extern is
named by THAT extern even when a nearer twin of the callee exists
(FUN_020ab5b0 over FUN_020ab4e0, R2-era class; c894's first draft
failed exactly this way on callee c3e0-vs-c3fc, R15 — one live catch of
the class). Iterate with `scratch/rdp2_iter.py` (compile candidate vs
twin offline, never guessing); most idiomatic respells match
first-try. The twin's header is actively maintained (comments-only
write-back of proven corrections and newly confirmed facts) but its
CODE is never edited; the twin survives the layer intact.

## `#define` bridge (naming without renaming)

```c
#define finish_effect FUN_02070fa0
```

The body and cross-file calls use the readable name; the compiled
symbol is the real address-named one, so byte-matching and every
existing tool are unaffected. Struct types (`EffectRec.count`,
`SpanOwner.fields->limit`) are plain local type definitions spelling
the real offsets. When a naming pass happens, these defines + struct
typedefs are harvested per file — they ARE the naming record. Admission
governed by P3.

## Working procedure per function (owner-validated rhythm)

1. **Read the ASM first (P1):** Ghidra listing + decompile of the
   target; mine idioms (negated constants, addressing modes,
   materialized values) into spelling hypotheses.
2. **Read the twin in `src/`** — body + header notes (semantics, struct
   maps, callee arities, compiler-reality history, verdict archives).
   Header claims are LEADS, not proofs (P4). **The twin is the FACT
   source; never the SHAPE template (R58 makes it a gate): the FACTS go
   into the head, the first BODY comes out of the human hand below.**
2b. **Draft the HUMAN C first (R58, the idiomatic-first decree; the
   answer to "we keep the decompiler's artifacts by inertia"):** read
   the ASM's BEHAVIOR (P1's step-1 read), then write the plain
   developer's C — idiom order, guard clauses, helpers where the
   repeated shape asks for one, named constants — WITHOUT the twin's
   block sequence in view. Run the rig on it. Then walk TOWARD the
   machine: every divergence = one measured cell (the §rig verdict
   names it), adopted one spelling at a time; what cannot converge
   stays OUT of the file as `iter_cells` rows (the RECEIPT's
   instruments.iter_cells — `record_round.py --cell`, each with a
   committed evidence path; `make` REFUSES a body change with no
   draft trail) and the twin's surviving shape enters ONLY through a
   measured cell of its own. The outside-AI INTAKE is this step with
   someone else's code as the entry draft (R55/ebd8 is the worked
   example: the helper/guards reference measured DIFFER fresh, the
   machine's shared tail + anti-predication shape became the recorded
   wall) — external code is a HYPOTHESIS, never truth, and its
   semantic divergences get graded like any reader find.
3. **Draft in scratch** (never under the mirror dir before it matches):
   bridge (P3), struct types, idiomatic body, 1–3-line semantic
   comment. Keep the draft committed for provenance when the iteration
   is nontrivial.
4. **Iterate offline** (`scratch/rdp2_iter.py`) until MATCH (§rig).
   One spelling change per draft; re-measure combinations shipped
   together (an unmeasured confound ships an unreliable verdict).
   Ad-hoc probes MUST compile through the RIG's flag construction
   (`apply_flags_marker` / the twin's markers) — never re-type a
   partial flag string; a probe that types its own flags measures a
   DIFFERENT compiler (R40: a 6-cell order sweep said 3 match under
   bare `-O4,s`, 2 under the rig's full set). (P2)
5. **Consult = bank back (P4).** When documentation doesn't settle
   something, ASM is the normal consult — and the finding is written
   back into the twin's header (comments only), so src/ answers it
   next time. A consult that ends without a bank-back hasn't finished.
   The twin header is amended BEFORE the commit, not after (R40: the
   9:59:59 clamp correction sat only in the readable doc for one
   session); the wave checklist ends "twin header amended → commit."
6. **Magic-number gate (P9):** classify every offset/constant by taxon,
   decode via the family census, name in the file, `???` the residue.
7. **The push (R21/R22; owner: "further and further to the limits"):**
   7a. Run the exhaustion driver (P8) — adopt its winners, re-run on
       the evolved base until EXHAUSTED 0.
   7b. After EVERY adoption, re-test every hand cell AND standing
       rejects on the new base (P7 base-state rule) — a free win can
       free more.
   7c. When the natural draft resists, run the reattempt playbook
       (R17, reusable, `notes/reference/ebd8-reattempt-R17-2026-10-06/`
       + `scratch/rdp3/`): sbs-decode the twin vs the closest natural
       draft (halfword/word diff), name every delta, re-derive the
       draft FROM the twin verbatim, convert ONE spelling per draft,
       measure each. Goto-hop rule: a goto whose label immediately
       follows is deletable scaffolding (measured free); a goto whose
       label sits far away (a function-scope tail) POSITIONS blocks
       (R17: label placement = block placement; removing reshuffles
       even at equal size) — test it, expect the placement to be the
       found spelling. Measure the spelling CLASS a reject names, not
       its exact shape (R12: "rec_b reuse" was generalized into a
       class verdict the typed compound-read spelling never measured —
       it matched free).
8. **The reversed-C sweep (R18, mandatory; part of the same gate):**
   run the linter on the draft — 0E/0W, no new waivers (P6). Fix every
   flag by its natural spelling (role renames, `if (x)` conditions,
   direct returns) and re-measure; keep a twin shape only with a site
   note citing the measurement. Then re-read the BODY AND THE
   TYPEDEF BLOCK by eye for the classes a regex cannot judge: role
   names everywhere, recognizable intent per line — and the enum/
   define block gets the same vocabulary sweep as the body (junk
   register-named field names measured free to rename; body-scoped
   lint rules never see typedef-internal names). **The eye sweep is
   a checklist, not a mood (R36/R36b): (1) every loop/counter walks
   the vocabulary list — `i++`/`+= k`, never `i = i + 1` unless that
   cell measured REJECT; (2) every RETURN/STORED constant is named
   or documented (P9 covers what the function GIVES, not just what
   it consumes); (3) the `note:` opener is literal — `note:
   (source)`, never `note (source):` (the variant silently drops
   the lint exemption); (4) the NAME AUDIT (R40/R40b/R40c: three
   waves of twin-carried names caught by outside readers — the name
   axis has NO byte gate, since names compile free): read the
   function's locals aloud against the procedure-2 SEMANTICS (not
   the twin's spellings) and justify each from the body's role —
   a name that survives was CHOSEN, one that can't be justified was
   CARRIED; the twin's local names are decompiler-legacy witnesses,
   never defaults (E9's bar applied below its regex floor:
   `iVarN` is machine-caught, `t/sec/min`-class carried names are
   the human catch).** (5) the ALGORITHM pass + DELETION pass (R53,
   the rd53 finding-to-rule trace): with comments stripped the code
   alone must identify the inputs, transformations, and outputs
   (algorithm pass — the doc is an orientation, the body is the
   explanation), and every comment that restates its site or narrates
   an immediately visible step is deleted (deletion pass) — judgment
   class, deliberately no regex: a redundant-comment rule is
   gameable exactly like the name axis was.**
9. **Place, gate, commit.** File under `src-readable/<module>/` with
   line 1 set; run `build_readable.bat` (§Gates); record BOTH reader
   stances in the file's receipt
   (`tools/probes/readable_receipts.py` — make REFUSES without them)
   as part of the gate; commit (message
   names the twin + corrections banked back into src/). **A reader
   shape-class that fires on two files becomes a lint/driver rule, a
   debt-census row, or a law sentence the SAME wave — a recurring
   finding never just lives in prose reports (R49, the reader→rule
   mirror direction).**

## Gates / build

- `build_readable.bat` = `[1] lint` (P6) + `[2] audit` (per-file:
  twin re-verified vs ROM, then readable compiled under the twin's
  markers — §rig) + `[3] receipts` (R49) + `[4] instrument mirror`
  (R49 lint/driver mapping) + `[5] evidence-debt census` (R49) +
  `[6] contract consistency` (R49 shared-callee claims) +
  `[7] tools/build_readable_rom.py` (relinks the
  whole arm9 from **src-readable/ + the carved delinked objects** —
  src/ is never consulted; each readable file swapped into its twin's
  delinked object, reloc slots restored to ROM values, linked image
  REQUIRED byte-identical to retail, then spliced:
  `match/build/PSZERO-MINI-readable.nds`) + `[8] tools/status.py`.
- The whole-image relink is a STRICTER instrument than the per-function
  audit with carve-wildcards (the carve gap can conceal byte drift the
  image compare cannot); affordable because the readable tree is tiny.
  Any tool stricter than the audit must adopt the audit's own compare-
  window wildcard classes, or it false-flags the two known windowed
  respells (FUN_02064124 +0x3e mirrored cmp operands, FUN_020a790c +0xc
  addressing respell — src/-audit non-findings, R16).
- `python tools/readable_status.py` — computed census (paired/unpaired
  + game-logic join; game class = game/game_bridge/game_leaf +
  lit-evidence demotions). Nothing in src-readable/ affects the
  byte-exact layer's gates (not in build.bat's chain) — except the
  readable ROM build, which OVERWRITES a twin's delinked object with
  the readable compile and relinks (the sanctioned link exception);
  its symbol enters exactly once. The clean-air rule (§File format)
  keeps evolution files out of that census.
- Negative-test evidence (R1 wave, still valid): body-change,
  marker-smuggling, and wrong-twin-link mutations all FAIL
  (`scratch/rdp1_neg_tests.py`); the reloc-entry equality proved live
  on the ab5b0/ab4e0 extern swap.

## Wave record (bookkeeping — lives in the ledger)

The chronological wave record (R1 → now), the per-wave lessons, and
the commit map live in `notes/readable-ledger.md` (the same split as
`match-ledger.md`): this file is CURRENT LAW ONLY — when a wave
changes a rule, the finding is edited into the rule here (one-line
edit; supersessions resolved inline, and the rule text never
narrates the change) and the wave gets one row in the ledger.
Per-function verdict grids stay in the twin headers (`src/`).
