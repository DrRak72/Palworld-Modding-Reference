#ifndef UE4SS_SDK_WBP_EnemyExclamationMarkIcon_HPP
#define UE4SS_SDK_WBP_EnemyExclamationMarkIcon_HPP

class UWBP_EnemyExclamationMarkIcon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0410 (size: 0x8)
    class UWBP_EnemyNotice_Ex_C* WBP_EnemyNotice_Ex;                                  // 0x0418 (size: 0x8)
    class APalCharacter* TargetCharacter;                                             // 0x0420 (size: 0x8)
    class UCurveVector* ScaleCurve;                                                   // 0x0428 (size: 0x8)
    double Timer;                                                                     // 0x0430 (size: 0x8)
    double PosX;                                                                      // 0x0438 (size: 0x8)
    double DisplayTime;                                                               // 0x0440 (size: 0x8)

    void CheckEnd(bool& IsEnd);
    void Setup(class APalCharacter* TargetPal);
    void Finished_263A711A43F529A2B1BDFD9C84555BC8();
    void Finished_E6B9CD8740962A7164A9698FF7EA74CA();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_EnemyExclamationMarkIcon(int32 EntryPoint);
}; // Size: 0x448

#endif
