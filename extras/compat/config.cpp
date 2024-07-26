#include "script_component.hpp"
#include "CfgWeapons.hpp"


class CfgPatches {
    class SUBADDON {
        author = "Your Name";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};