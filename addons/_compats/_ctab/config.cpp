#include "script_component.hpp"
#include "CfgWeapons.hpp"

// Works for both cTab and cTab NSWDG edition
// Will likely work for other ctab versions as well

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
            QUOTE(ADDON),
            "cTab"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};