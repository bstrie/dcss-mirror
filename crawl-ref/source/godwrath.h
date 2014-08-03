/**
 * @file
 * @brief Divine retribution.
**/

#ifndef GODWRATH_H
#define GODWRATH_H

string god_wrath_name(god_type god) PURE;

bool divine_retribution(god_type god, bool no_bonus = false, bool force = false);
bool do_god_revenge(conduct_type thing_done);
void ash_reduce_penance(int amount);

void gozag_incite(monster *mon);
bool gozag_goldify(const item_def &it, int quant_got, bool quiet = false);
#endif
