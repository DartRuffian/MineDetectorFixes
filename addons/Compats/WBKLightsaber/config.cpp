#include "script_component.hpp"
#include "CfgWeapons.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "Cannon";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "MDF_Main",
            QUOTE(ADDON),
            "WBK_SomeSciFiWeapons"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
        skipWhenMissingDependencies = TRUE;
    };
};