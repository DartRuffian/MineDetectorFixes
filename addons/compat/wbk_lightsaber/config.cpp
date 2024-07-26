#include "script_component.hpp"
#include "CfgWeapons.hpp"


class CfgPatches {
    class SUBADDON {
        author = "Cannon";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "WBK_SomeSciFiWeapons"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};