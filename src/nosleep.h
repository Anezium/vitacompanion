#pragma once

#include <stdbool.h>

int nosleep_start(void);
void nosleep_end(void);
void nosleep_set_enabled(bool enabled);
bool nosleep_is_enabled(void);
void keep_screen_set_enabled(bool enabled);
bool keep_screen_is_enabled(void);
