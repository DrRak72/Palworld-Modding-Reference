#ifndef UE4SS_SDK_BP_GuidedMissileLauncher_HPP
#define UE4SS_SDK_BP_GuidedMissileLauncher_HPP

class ABP_GuidedMissileLauncher_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x05A8 (size: 0x8)

    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void OnShoot();
    void OnReloadStart();
    void ExecuteUbergraph_BP_GuidedMissileLauncher(int32 EntryPoint);
}; // Size: 0x5B0

#endif
