#ifndef UE4SS_SDK_BP_PalHUDLogin_HPP
#define UE4SS_SDK_BP_PalHUDLogin_HPP

class ABP_PalHUDLogin_C : public APalHUDInGame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0610 (size: 0x8)

    void Initialize();
    void ExecuteUbergraph_BP_PalHUDLogin(int32 EntryPoint);
}; // Size: 0x618

#endif
