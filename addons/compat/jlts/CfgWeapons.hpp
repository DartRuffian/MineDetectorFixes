class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryWeapon_Base_F;
    SIMPLE_PATCH_VANILLA(JLTS_repairkit_weapon);
    SIMPLE_PATCH_VANILLA(JLTS_riot_shield_item);
    SIMPLE_PATCH(JLTS_droidCaller,ItemCore,InventoryItem_Base_F);
};