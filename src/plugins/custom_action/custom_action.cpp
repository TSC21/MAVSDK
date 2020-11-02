// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see
// https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/custom_action/custom_action.proto)

#include <iomanip>

#include "custom_action_impl.h"
#include "plugins/custom_action/custom_action.h"

namespace mavsdk {

using ActionToExecute = CustomAction::ActionToExecute;

CustomAction::CustomAction(System& system) : PluginBase(), _impl{new CustomActionImpl(system)} {}

CustomAction::CustomAction(std::shared_ptr<System> system) :
    PluginBase(),
    _impl{new CustomActionImpl(system)}
{}

CustomAction::~CustomAction() {}

void CustomAction::set_custom_action_async(const ResultCallback callback)
{
    _impl->set_custom_action_async(callback);
}

CustomAction::Result CustomAction::set_custom_action() const
{
    return _impl->set_custom_action();
}

// void CustomAction::subscribe_custom_action(CustomActionCallback callback)
// {
//     _impl->custom_action_async(callback);
// }
//
// CustomAction::ActionToExecute
// CustomAction::custom_action() const
// {
//     return _impl->custom_action();
// }

bool operator==(const CustomAction::ActionToExecute& lhs, const CustomAction::ActionToExecute& rhs)
{
    return (rhs.action == lhs.action);
}

std::ostream& operator<<(std::ostream& str, CustomAction::ActionToExecute const& action_to_execute)
{
    str << std::setprecision(15);
    str << "action_to_execute:" << '\n' << "{\n";
    str << "    action: " << action_to_execute.action << '\n';
    str << '}';
    return str;
}

std::ostream& operator<<(std::ostream& str, CustomAction::Result const& result)
{
    switch (result) {
        case CustomAction::Result::Unknown:
            return str << "Unknown";
        case CustomAction::Result::Success:
            return str << "Success";
        case CustomAction::Result::Error:
            return str << "Error";
        case CustomAction::Result::Timeout:
            return str << "Timeout";
        case CustomAction::Result::Unsupported:
            return str << "Unsupported";
        default:
            return str << "Unknown";
    }
}

} // namespace mavsdk
