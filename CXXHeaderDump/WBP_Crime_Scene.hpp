#ifndef UE4SS_SDK_WBP_Crime_Scene_HPP
#define UE4SS_SDK_WBP_Crime_Scene_HPP

class UWBP_Crime_Scene_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0288 (size: 0x8)
    bool CurrentEnable;                                                               // 0x0290 (size: 0x1)

    void Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A();
    void Finished_F33B774D46BB4A7E03FF64B35586069D();
    void SetCrimeSceneEnable(bool Enable);
    void ExecuteUbergraph_WBP_Crime_Scene(int32 EntryPoint);
}; // Size: 0x291

#endif
