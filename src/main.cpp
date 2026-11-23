// main.cpp — entry point. Wires config and subsystems together.

#include "robrunwipetimer/settings.h"
#include "robrunwipetimer/timer.h"
#include "robrunwipetimer/reminders.h"
#include "robrunwipetimer/checklist.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robrunwipetimer::Settings settings = robrunwipetimer::Settings::load_default();
    robrunwipetimer::Timer timer(settings.store_path);
    robrunwipetimer::Reminders reminders(settings.store_path);
    robrunwipetimer::Checklist checklist(settings.store_path);
    std::fprintf(stderr, "[rob-run-wipe-timer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
