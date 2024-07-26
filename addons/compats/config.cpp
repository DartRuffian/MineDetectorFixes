#include "script_component.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "cba_common",
            "mdf_main"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};