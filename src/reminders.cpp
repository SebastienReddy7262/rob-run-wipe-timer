// reminders.cpp — part of rob-run-wipe-timer.

#include "robrunwipetimer/reminders.h"

#include <cstdio>

namespace robrunwipetimer {

Reminders::Reminders(const std::string& config_path)
    : config_path_(config_path) {}

void Reminders::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Reminders::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-wipe-timer] reminders: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunwipetimer
