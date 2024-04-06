#ifndef UE4SS_SDK_BP_MeatLauncher2_HPP
#define UE4SS_SDK_BP_MeatLauncher2_HPP

class ABP_MeatLauncher2_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)

    void ChangeTransformForRocketWhenReloadIsDone(FVector Location, FRotator Lotation);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void OnReload(int32 bulletsNum);
    void ExecuteUbergraph_BP_MeatLauncher2(int32 EntryPoint);
}; // Size: 0x5A8

#endif
