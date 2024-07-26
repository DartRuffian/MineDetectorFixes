#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = "DartRuffian";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "JLTS_weapons_Core",
            "JLTS_weapons_shield",
            "JLTS_drones_MSE6"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"