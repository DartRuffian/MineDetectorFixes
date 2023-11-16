#include "script_component.hpp"
#include "CfgWeapons.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "DartRuffian";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "MDF_Main",
            QUOTE(ADDON),
            "JLTS_C_Credits",
            "JLTS_drones_MSE6"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};