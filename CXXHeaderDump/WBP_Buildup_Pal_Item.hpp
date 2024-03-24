#ifndef UE4SS_SDK_WBP_Buildup_Pal_Item_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_Item_HPP

class UWBP_Buildup_Pal_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* IconHaveItem;                                                       // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HaveNum;                                           // 0x0288 (size: 0x8)

    void SetIcon(int32 IconIndex);
    void SetNum(int32 Num);
    void ExecuteUbergraph_WBP_Buildup_Pal_Item(int32 EntryPoint);
}; // Size: 0x290

#endif
