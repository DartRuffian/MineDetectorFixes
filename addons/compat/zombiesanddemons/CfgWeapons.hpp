class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    SIMPLE_PATCH(dat_ItemCore);

    class RyanZombiesAntiVirusCure_Item: dat_ItemCore {
        class ItemInfo: ItemInfo {
            mass = 1;
        };
    };

    class RyanZombiesAntiVirusTemporary_Item: dat_ItemCore {
        class ItemInfo: ItemInfo {
            mass = 1;
        };
    };
};