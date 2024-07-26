#include "script_component.hpp"
#include "CfgWeapons.hpp"


class CfgPatches {
    class SUBADDON {
        author = "DartRuffian";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "KKA3_ACE_Extension_Placeables_Items"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};