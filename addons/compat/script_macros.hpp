#define SIMPLE_PATCH(CLASSNAME) class CLASSNAME##: CBA_MiscItem { \
    detectRange = 0; \
    simulation = "Weapon"; \
    type = TYPE_ITEM; \
    class ItemInfo: CBA_MiscItem_ItemInfo { \
        type = TYPE_BIPOD; \
    }; \
}

#define SIMPLE_PATCH_TEST(className,baseClass,itemInfoBaseClass) class className: baseClass { \
    type = TYPE_ITEM; \
    simulation = "Weapon"; \
    detectRange = 0; \
    ace_asItem = 1; \
    class ItemInfo: itemInfoBaseClass { \
        type = TYPE_BIPOD; \
    }; \
}

#define SIMPLE_PATCH_DEFAULT(className) SIMPLE_PATCH_TEST(className,ItemCore,InventoryWeapon_Base_F)