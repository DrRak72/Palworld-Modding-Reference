#ifndef UE4SS_SDK_WBP_IngameCommonSelectNum_HPP
#define UE4SS_SDK_WBP_IngameCommonSelectNum_HPP

class UWBP_IngameCommonSelectNum_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UCanvasPanel* Canvas_SelectNum;                                             // 0x0410 (size: 0x8)
    class USizeBox* SizeBox_1;                                                        // 0x0418 (size: 0x8)
    class USizeBox* SizeBox_10;                                                       // 0x0420 (size: 0x8)
    class USizeBox* SizeBox_100;                                                      // 0x0428 (size: 0x8)
    class USizeBox* SizeBox_1000;                                                     // 0x0430 (size: 0x8)
    class USizeBox* SizeBox_10000;                                                    // 0x0438 (size: 0x8)
    class USizeBox* SizeBox_100000;                                                   // 0x0440 (size: 0x8)
    class USizeBox* SizeBox_1000000;                                                  // 0x0448 (size: 0x8)
    class USizeBox* SizeBox_10000000;                                                 // 0x0450 (size: 0x8)
    class USizeBox* SizeBox_100000000;                                                // 0x0458 (size: 0x8)
    class USizeBox* SizeBox_1000000000;                                               // 0x0460 (size: 0x8)
    class USizeBox* SizeBox_LeftDoubleArrow;                                          // 0x0468 (size: 0x8)
    class USizeBox* SizeBox_LeftDoubleArrow_KeyGuide;                                 // 0x0470 (size: 0x8)
    class USizeBox* SizeBox_RightDoubleArrow;                                         // 0x0478 (size: 0x8)
    class USizeBox* SizeBox_RightDoubleArrow_KeyGuide;                                // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* Text_1;                                                 // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_10;                                                // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* Text_100;                                               // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_1000;                                              // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_10000;                                             // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_100000;                                            // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_1000000;                                           // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_10000000;                                          // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_100000000;                                         // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_1000000000;                                        // 0x04D0 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_NumArrow_Left_Double; // 0x04D8 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_NumArrow_Left_Single; // 0x04E0 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_NumArrow_Right_Double; // 0x04E8 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_NumArrow_Right_Single; // 0x04F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x04F8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x0500 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_2;                              // 0x0508 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Max;                            // 0x0510 (size: 0x8)
    int32 MinDisplayDigit;                                                            // 0x0518 (size: 0x4)
    TArray<class UBP_PalTextBlock_C*> NumTextArray;                                   // 0x0520 (size: 0x10)
    TArray<class USizeBox*> SizeBoxArray;                                             // 0x0530 (size: 0x10)
    int32 DoubleArrowNum;                                                             // 0x0540 (size: 0x4)
    int64 nowNum;                                                                     // 0x0548 (size: 0x8)
    FPalDataTableRowName_UIInputAction RightDoubleArrowInput_ForPad;                  // 0x0550 (size: 0x8)
    FPalDataTableRowName_UIInputAction LeftDoubleArrowInput_ForPad;                   // 0x0558 (size: 0x8)
    FPalDataTableRowName_UIInputAction RightArrowInput_ForPad;                        // 0x0560 (size: 0x8)
    FPalDataTableRowName_UIInputAction LeftArrowInput_ForPad;                         // 0x0568 (size: 0x8)
    FPalUIActionBindData RightDoubleArrowInputHandle;                                 // 0x0570 (size: 0x4)
    FPalUIActionBindData LeftDoubleArrowInputHandle;                                  // 0x0574 (size: 0x4)
    FPalUIActionBindData RightArrowInputHandle;                                       // 0x0578 (size: 0x4)
    FPalUIActionBindData LeftArrowInputHandle;                                        // 0x057C (size: 0x4)
    int64 Max Num;                                                                    // 0x0580 (size: 0x8)
    FWBP_IngameCommonSelectNum_COnUpdateNum OnUpdateNum;                              // 0x0588 (size: 0x10)
    void OnUpdateNum(int64 Num);
    FPalDataTableRowName_UIInputAction MaxSelectInput;                                // 0x0598 (size: 0x8)
    FPalUIActionBindData MaxSelectInputHandle;                                        // 0x05A0 (size: 0x4)
    int64 MinNum;                                                                     // 0x05A8 (size: 0x8)

    void UpdateArrowVisibility();
    void SetMinNum(int64 Num);
    void OnTriggerMaxSelect_ForPad();
    void SetMaxNum(int64 MaxNum);
    void OnTriggerLeftArrow_ForPad();
    void OnTriggerRightArrow_ForPad();
    void OnTriggerLeftDoubleArrow_ForPad();
    void OnTriggerRightDoubleArrow_ForPad();
    void AddNum(int64 Num);
    void GetNowSelectedNum(int64& Num);
    void UpdateDigit(int32 DIsplayDigitNum);
    void OnInputMethodChangedEvent(ECommonInputType bNewInputType);
    void SetNum(int64 NewNum);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_NumArrow_Right_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_NumArrow_Left_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_NumArrow_Right_Double_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_NumArrow_Left_Double_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameCommonSelectNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameCommonSelectNum(int32 EntryPoint);
    void OnUpdateNum__DelegateSignature(int64 Num);
}; // Size: 0x5B0

#endif
