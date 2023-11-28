class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    SIMPLE_PATCH(kka3_itemcore);
    // Each item redefines ItemInfo instead of inheriting from kka3_itemcore
    class kka3_ace_extension_Campfire_burning_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_BagFence_Long_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_BagFence_Round_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_Camping_Light_off_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_CampingChair_V1_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_CampingTable_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_DrillAku_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_Pallet_vertical_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_PortableLight_single_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Land_Wrench_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_roadbarrier_f: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_roadbarrier_small_f: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_roadcone_f: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_roadcone_l_f: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_TapeSign_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
    class kka3_ace_extension_Target_F: kka3_itemcore
    {
        class ItemInfo: ItemInfo {};
    };
};