#ifndef UE4SS_SDK_BP_CutsceneBoss_Grass_HPP
#define UE4SS_SDK_BP_CutsceneBoss_Grass_HPP

class ABP_CutsceneBoss_Grass_C : public ABP_CutsceneCharacterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x02B0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B8 (size: 0x8)
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;                            // 0x02C0 (size: 0x8)
    class UPalSkeletalMeshComponent* PalSkeletalMesh;                                 // 0x02C8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CutsceneBoss_Grass(int32 EntryPoint);
}; // Size: 0x2D0

#endif
