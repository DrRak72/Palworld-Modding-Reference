#ifndef UE4SS_SDK_WBP_PalBuilding_HPP
#define UE4SS_SDK_WBP_PalBuilding_HPP

class UWBP_PalBuilding_C : public UPalUIBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0428 (size: 0x8)
    class UWBP_BuildingReticle_C* WBP_BuildingReticle;                                // 0x0430 (size: 0x8)
    class UWBP_IngameConstruction_C* WBP_IngameConstruction;                          // 0x0438 (size: 0x8)
    class UBP_PalUIBuildingModel_C* Model;                                            // 0x0440 (size: 0x8)
    TMap<class EPalMapObjectOperationResult, class FDataTableRowHandle> FailedMessageMap; // 0x0448 (size: 0x50)
    FDataTableRowHandle FailedMessageOther;                                           // 0x0498 (size: 0x10)
    class UPalBuilderComponent* BuilderComponent;                                     // 0x04A8 (size: 0x8)
    EPalMapObjectOperationResult lastWarningType;                                     // 0x04B0 (size: 0x1)
    bool isExitMaterial;                                                              // 0x04B1 (size: 0x1)
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput;                     // 0x04B4 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput_02;                  // 0x04BC (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput_03;                  // 0x04C4 (size: 0x8)
    FPalDataTableRowName_UIInputAction ForceCloseBuildingActionInput;                 // 0x04CC (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildObjectActionInput;                        // 0x04D4 (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildObjectContinuousActionInput;              // 0x04DC (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput_ForRadialMenu;       // 0x04E4 (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildRotateRightActionInput;                   // 0x04EC (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildRotateLeftActionInput;                    // 0x04F4 (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildChangeMode;                               // 0x04FC (size: 0x8)
    bool NewVar;                                                                      // 0x0504 (size: 0x1)
    FTimerHandle UpdateDisplayTimer;                                                  // 0x0508 (size: 0x8)

    void ChangeModeOff();
    void ChangeModeOn();
    void UpdateOutsideBaseCampWarning();
    void OnLeaveBaseCamp();
    void OnEnterBaseCamp(class UPalBaseCampModel* Model);
    void UnregisterInsideBaseCampEvent();
    void RegisterInsideBaseCampEvent();
    void RotateLeft();
    void RotateRight();
    void Get Build Operation Result(EPalMapObjectOperationResult& Result);
    void EmptyFunction();
    void GetWarningText(EPalMapObjectOperationResult Result, FText& Text);
    void BuildObjectContinuous();
    void BuildObject();
    void Finish Building();
    void ReturnToMainMenu();
    void SetupInputAction();
    void ResetUI();
    void SetupUI();
    void DisposeModel();
    void Setup Model();
    void OnSetup();
    void Destruct();
    void UpdateDisplay();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PalBuilding(int32 EntryPoint);
}; // Size: 0x510

#endif
