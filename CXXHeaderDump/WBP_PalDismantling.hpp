#ifndef UE4SS_SDK_WBP_PalDismantling_HPP
#define UE4SS_SDK_WBP_PalDismantling_HPP

class UWBP_PalDismantling_C : public UPalUIDismantling
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anm_Demolish;                                             // 0x0428 (size: 0x8)
    class UImage* Base;                                                               // 0x0430 (size: 0x8)
    class UImage* Base_L;                                                             // 0x0438 (size: 0x8)
    class UImage* Base_R;                                                             // 0x0440 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0448 (size: 0x8)
    class UImage* Image_L;                                                            // 0x0450 (size: 0x8)
    class UImage* Image_R;                                                            // 0x0458 (size: 0x8)
    class UWBP_IngameConstruction_Dismantling_C* WBP_IngameConstruction_Dismantling;  // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput;                  // 0x0468 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_02;               // 0x0470 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_03;               // 0x0478 (size: 0x8)
    FPalDataTableRowName_UIInputAction ForceCloseDismantlingActionInput;              // 0x0480 (size: 0x8)
    FPalDataTableRowName_UIInputAction DismantleObjectActionInput;                    // 0x0488 (size: 0x8)
    class UPalUIDismantlingModel* Model;                                              // 0x0490 (size: 0x8)
    class UPalBuilderComponent* BuilderComponent;                                     // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction DismantleObjectContinuousActionInput;          // 0x04A0 (size: 0x8)
    class APalBuildObject* DismantleTargetObject;                                     // 0x04A8 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_FromRadialMenu;   // 0x04B0 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_FromRadialMenu_0; // 0x04B8 (size: 0x8)

    void EmptyFunction();
    void DismantleObjectSuccessed();
    void DismantleObjectFailed();
    void InitUI();
    void ResetUI();
    void UpdateUI();
    void GetWarningText(FText& WarningText);
    void DisposeModel();
    void FinishDismantling();
    void DismantleObjectContinuous();
    void DismantlingObject();
    void ReturnToMainMenu();
    void SetupInputAction();
    void Setup Model();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void Destruct();
    void ExecuteUbergraph_WBP_PalDismantling(int32 EntryPoint);
}; // Size: 0x4C0

#endif
