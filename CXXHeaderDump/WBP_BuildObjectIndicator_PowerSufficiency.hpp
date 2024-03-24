#ifndef UE4SS_SDK_WBP_BuildObjectIndicator_PowerSufficiency_HPP
#define UE4SS_SDK_WBP_BuildObjectIndicator_PowerSufficiency_HPP

class UWBP_BuildObjectIndicator_PowerSufficiency_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UImage* Base;                                                               // 0x0410 (size: 0x8)
    class UCanvasPanel* ElectricPower;                                                // 0x0418 (size: 0x8)
    class UImage* Line;                                                               // 0x0420 (size: 0x8)
    class UCanvasPanel* RootCanvas;                                                   // 0x0428 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Electric;                                          // 0x0430 (size: 0x8)
    class UPalHUDDispatchParameter_MapObjectEnergyModule* Parameter;                  // 0x0438 (size: 0x8)
    FDataTableRowHandle PowerOnlineMSGID;                                             // 0x0440 (size: 0x10)
    FDataTableRowHandle PowerOfflineMSGID;                                            // 0x0450 (size: 0x10)

    void OnUpdateEnergyModuleState(class UPalMapObjectEnergyModule* Module);
    void SetupUI();
    void OnSetup();
    void ExecuteUbergraph_WBP_BuildObjectIndicator_PowerSufficiency(int32 EntryPoint);
}; // Size: 0x460

#endif
