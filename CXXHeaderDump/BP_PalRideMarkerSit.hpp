#ifndef UE4SS_SDK_BP_PalRideMarkerSit_HPP
#define UE4SS_SDK_BP_PalRideMarkerSit_HPP

class UBP_PalRideMarkerSit_C : public UPalRideMarkerComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    double MaterialTimer;                                                             // 0x0648 (size: 0x8)
    double MaterialTime;                                                              // 0x0650 (size: 0x8)
    class UCurveFloat* MaterialCurve;                                                 // 0x0658 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;                         // 0x0660 (size: 0x10)
    bool isMaterialComplete;                                                          // 0x0670 (size: 0x1)

    void ResetMaterial();
    void SetMaterialProgress(double Progress);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnChangeRiding_イベント_0(bool isEnable);
    void ExecuteUbergraph_BP_PalRideMarkerSit(int32 EntryPoint);
}; // Size: 0x671

#endif
