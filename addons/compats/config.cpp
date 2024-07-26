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
            "MDF_Main"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};