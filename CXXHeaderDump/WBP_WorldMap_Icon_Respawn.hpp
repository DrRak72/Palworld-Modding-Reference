#ifndef UE4SS_SDK_WBP_WorldMap_Icon_Respawn_HPP
#define UE4SS_SDK_WBP_WorldMap_Icon_Respawn_HPP

class UWBP_WorldMap_Icon_Respawn_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0460 (size: 0x8)
    class UImage* Icon;                                                               // 0x0468 (size: 0x8)
    class UImage* Image_Wave;                                                         // 0x0470 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0478 (size: 0x8)
    FName Respawn Point ID;                                                           // 0x0480 (size: 0x8)

    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void ExecuteUbergraph_WBP_WorldMap_Icon_Respawn(int32 EntryPoint);
}; // Size: 0x488

#endif
