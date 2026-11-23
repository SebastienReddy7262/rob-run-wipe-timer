// checklist — part of rob-run-wipe-timer.

#pragma once

#include <string>
#include <vector>

namespace robrunwipetimer {

class Checklist {
public:
    explicit Checklist(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace robrunwipetimer
