#include "stats.h"

void emailAlerter();
void ledAlerter();

alerter_funcptr alerters[] = {emailAlerter, ledAlerter};
