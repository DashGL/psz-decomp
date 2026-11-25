//cpp
// flags: -O4,s
struct Group_0206d60c {
    short first;
    signed char count, state, selected, flags, missing, pad;
};
struct Spawn_0206d60c {
    signed char group, count;
    short first;
    signed char actor, flags, option0, option1, special, max_kind, pad[2];
};
struct Member_0206d60c {
    signed char id, slot, flags, pad;
    short group, pad2;
};
struct Pack_0206d60c { int *ids; int count; short option0, option1; };
struct Build_0206d60c {
    Group_0206d60c *groups;
    int count;
    Spawn_0206d60c *spawns;
    int spawn_capacity, *spawn_count;
    Member_0206d60c *members;
    int member_capacity, *member_count;
};
struct Self_0206d60c {
    Group_0206d60c *groups;
    int *group_count;
    Spawn_0206d60c *spawns;
    int *spawn_count;
    Member_0206d60c *members;
    int *member_count;
    int pad6;
    int quotas[4];
};
extern "C" {
extern void *DAT_02108d5c, *DAT_02108c64;
extern const char DAT_020f9780[];
extern void FUN_0204005c(void *), FUN_02040198(void *);
extern int FUN_02040218(void *, int), FUN_02032e30(void *, int), FUN_02032e78(void *, int);
extern void FUN_02032c10(void *, void *, int);
extern int FUN_0206d2e4(const int *, void *);
extern void *FUN_020401c8(void *, const char *, int);
extern int FUN_020038ec(char *, unsigned int, const char *, ...);
extern int FUN_0206da04(void *, void *);
extern Pack_0206d60c *FUN_0206da1c(void *, void *, unsigned int, unsigned int);
extern int FUN_02037584(int);
extern void *FUN_020780f4(void), *FUN_020ba8a0(int);
extern unsigned int FUN_0207816c(void *, unsigned int);
extern void FUN_020ba8b4(void *);
void FUN_0206d60c(Self_0206d60c *self, Build_0206d60c *build);
}

void FUN_0206d60c(Self_0206d60c *self, Build_0206d60c *build)
{
    int info[5];
    char name[9];
    int shuffle[8];
    int final_info[5];
    void *tables[2];
    int used[2];
    int group_count, total, special_at;
    int *spawn_count;
    Group_0206d60c *group;
    int spawn_index;
    Pack_0206d60c *pack;
    int j, member_index;
    int group_count2;
    Group_0206d60c *group2;
    int count2;
    Spawn_0206d60c *spawn2;
    int quota, selected, first, sum;
    int *member_count;
    int group_index, enabled, i, mode, id, kind;
    unsigned int bank;
    Spawn_0206d60c *spawn;
    Member_0206d60c *member;

    FUN_0204005c(DAT_02108d5c);
    {
        group_count = build->count;
        spawn_count = build->spawn_count;
        *spawn_count = 0;
        member_count = build->member_count;
        *member_count = 0;
        for (group_index = 0; group_index < group_count; group_index++) {
            enabled = FUN_02040218(DAT_02108d5c, group_index);
            FUN_02032c10(info, DAT_02108c64, (signed char)group_index);
            FUN_0206d2e4(info, name);
            tables[0] = FUN_020401c8(DAT_02108d5c, name, 0);
            FUN_020038ec(name, 9, DAT_020f9780, info[0]);
            tables[1] = FUN_020401c8(DAT_02108d5c, name, 1);
            if (!tables[0]) enabled = 0;
            total = 0;
            if (enabled > 0) total = FUN_0206da04(self, tables[0]);
            special_at = -1;
            if (total > 0 && FUN_02032e30(DAT_02108c64, group_index) && tables[1]) {
                special_at = total;
                total++;
            }
            for (i = 0; i < 2; i++) used[i] = 0;
            group = &build->groups[group_index];
            group->first = (short)*spawn_count;
            group->count = (signed char)total;
            group->state = 0;
            group->selected = -1;
            if (total <= 0) group->first = 0;
            mode = FUN_02032e78(DAT_02108c64, group_index);
            for (spawn_index = 0; spawn_index < total; spawn_index++, (*spawn_count)++) {
                bank = (special_at == spawn_index);
                used[bank] = 1;
                pack = FUN_0206da1c(self, tables[bank], bank, mode);
                j = pack->count;
                spawn = &build->spawns[*spawn_count];
                spawn->group = (signed char)group_index;
                spawn->first = (short)*member_count;
                spawn->count = (signed char)j;
                spawn->option0 = (signed char)pack->option0;
                spawn->option1 = (signed char)pack->option1;
                spawn->special = (signed char)bank;
                spawn->max_kind = 0;
                for (member_index = 0; member_index < j; member_index++, (*member_count)++) {
                    id = pack->ids[member_index];
                    member = &build->members[*member_count];
                    member->id = (signed char)id;
                    member->group = (short)*spawn_count;
                    member->slot = (signed char)member_index;
                    kind = FUN_02037584(id);
                    if (spawn->max_kind < kind) spawn->max_kind = (signed char)kind;
                    if (kind == 3) group->flags |= 4;
                }
            }
            for (i = 0; i < 2; i++) if (!used[i]) group->missing |= (1 << i);
        }
    }
    {
        group_count2 = *self->group_count;
        for (int group_index2 = 0; group_index2 < group_count2; group_index2++) {
            group2 = &self->groups[group_index2];
            if (!(((group2->flags & 4) ? 1 : 0))) {
                count2 = group2->count;
                for (int spawn_index2 = 0; spawn_index2 < count2; spawn_index2++) {
                    spawn2 = &self->spawns[group2->first + spawn_index2];
                    for (int k = 0; k < 8; k++) shuffle[k] = k;
                    for (int k = 0; k < 8; k++) {
                        int n = FUN_0207816c(FUN_020780f4(), 8);
                        int old = shuffle[k];
                        shuffle[k] = shuffle[n];
                        shuffle[n] = old;
                    }
                    int j2 = spawn2->count;
                    for (int k = 0; k < j2; k++)
                        self->members[spawn2->first + k].slot = (signed char)shuffle[k];
                }
            }
        }
    }
    {
        FUN_02032c10(final_info, DAT_02108c64, 0);
        quota = self->quotas[final_info[1]];
        int group_count3 = *self->group_count;
        int *order = (int *)FUN_020ba8a0(group_count3 * 4);
        for (int k = 0; k < group_count3; k++) order[k] = k;
        for (int k = 0; k < group_count3; k++) {
            int n = FUN_0207816c(FUN_020780f4(), group_count3);
            int old = order[k];
            order[k] = order[n];
            order[n] = old;
        }
        selected = 0;
        for (int k = 0; k < group_count3; k++) {
            if (selected >= quota) break;
            Group_0206d60c *g3 = &self->groups[order[k]];
            int cnt = g3->count;
            if (cnt <= 0) continue;
            if ((g3->flags & 4) ? 1 : 0) continue;
            first = -1;
            sum = 0;
            for (int m = 0; m < cnt; m++) {
                Spawn_0206d60c *s3 = &self->spawns[g3->first + m];
                sum += s3->count;
                if (first < 0) first = s3->first;
            }
            int pick = FUN_0207816c(FUN_020780f4(), sum);
            Member_0206d60c *m3 = &self->members[first + pick];
            Spawn_0206d60c *s3 = &self->spawns[m3->group];
            m3->flags |= 2;
            s3->flags |= 2;
            g3->flags |= 2;
            selected++;
        }
        if (order) FUN_020ba8b4(order);
    }
    FUN_02040198(DAT_02108d5c);
}
