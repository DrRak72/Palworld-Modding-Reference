#ifndef UE4SS_SDK_WBP_IngameMenu_CampLevelUp_HPP
#define UE4SS_SDK_WBP_IngameMenu_CampLevelUp_HPP

class UWBP_IngameMenu_CampLevelUp_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_LevelUp_Close;                                        // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_LevelUp;                                              // 0x0418 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelNum;                                          // 0x0420 (size: 0x8)

    void Finished_CFA6A904409DD4F86430DFBC13F511B5();
    void ShowLevelUp(int32 Level);
    void ExecuteUbergraph_WBP_IngameMenu_CampLevelUp(int32 EntryPoint);
}; // Size: 0x428

#endif
