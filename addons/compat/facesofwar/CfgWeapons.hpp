class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class fow_itemBase: CBA_MiscItem {
        detectRange = 0;
        simulation = "Weapon";
        type = TYPE_ITEM;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
            type = TYPE_BIPOD;
        };
    };
};