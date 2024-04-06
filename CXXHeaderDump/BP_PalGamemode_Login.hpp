#ifndef UE4SS_SDK_BP_PalGamemode_Login_HPP
#define UE4SS_SDK_BP_PalGamemode_Login_HPP

class ABP_PalGamemode_Login_C : public APalGameModeLogin
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    TSoftObjectPtr<UWorld> TitleWorld;                                                // 0x0350 (size: 0x30)

    void GoToTitle();
    void ExecuteUbergraph_BP_PalGamemode_Login(int32 EntryPoint);
}; // Size: 0x380

#endif
