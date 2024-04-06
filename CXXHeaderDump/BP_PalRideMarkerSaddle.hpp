#ifndef UE4SS_SDK_BP_PalRideMarkerSaddle_HPP
#define UE4SS_SDK_BP_PalRideMarkerSaddle_HPP

class UBP_PalRideMarkerSaddle_C : public UPalRideMarkerComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    class UNiagaraComponent* Effect;                                                  // 0x0648 (size: 0x8)
    double MinSpeed;                                                                  // 0x0650 (size: 0x8)
    double MaxSpeed;                                                                  // 0x0658 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnChangeRiding_イベント_0(bool isEnable);
    void ExecuteUbergraph_BP_PalRideMarkerSaddle(int32 EntryPoint);
}; // Size: 0x660

#endif
