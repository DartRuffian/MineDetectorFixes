#include "script_component.hpp"

// Works for any cTab fork that keeps the same addon and class names

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Dart"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "cTab"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"