#define SIMPLE_PATCH(CLASSNAME) class CLASSNAME##: CBA_MiscItem \
{ \
    detectRange = 0; \
    simulation = "Weapon"; \
    type = TYPE_ITEM; \
    class ItemInfo: CBA_MiscItem_ItemInfo \
    { \
        type = TYPE_BIPOD; \
    }; \
}