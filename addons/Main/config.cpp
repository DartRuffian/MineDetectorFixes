#include "script_component.hpp"


class CfgMods
{
    class Mod_Base;
    class PREFIX: Mod_Base
    {
        name = "Mine Detector Fixes";
        // logo = "\DA\MDF\Main\logo_mdf_ca.paa";
        // logoSmall = "\DA\MDF\Main\logo_mdf_ca.paa";
        // logoOver = "\DA\MDF\Main\logo_mdf_ca.paa";
        // picture = "\DA\MDF\Main\logo_mdf_ca.paa";
    };
};


class CfgPatches
{
    class ADDON
    {
        author = "DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder"
        };
        units[] = {};
        weapons[] = {};
    };
};