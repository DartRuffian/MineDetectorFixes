class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class JLTS_credits_10: CBA_MiscItem
    {
        detectRange = 0;
        simulation = "Weapon";
        type = TYPE_ITEM;

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            type = TYPE_BIPOD;
        };
    };

    class JLTS_droidCaller: CBA_MiscItem
    {
        detectRange = 0;
        simulation = "Weapon";
        type = TYPE_ITEM;

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            type = TYPE_BIPOD;
        };
    };
};