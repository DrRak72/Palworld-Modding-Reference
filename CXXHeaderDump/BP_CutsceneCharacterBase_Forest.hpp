#ifndef UE4SS_SDK_BP_CutsceneCharacterBase_Forest_HPP
#define UE4SS_SDK_BP_CutsceneCharacterBase_Forest_HPP

class ABP_CutsceneCharacterBase_Forest_C : public ABP_CutsceneCharacterBase_C
{
    class UPointLightComponent* PointLight_forestface;                                // 0x02A8 (size: 0x8)
    class URectLightComponent* RectLight_forestrim;                                   // 0x02B0 (size: 0x8)
    class UPalSkeletalMeshComponent* PalSkeletalMesh1;                                // 0x02B8 (size: 0x8)
    class UPalSkeletalMeshComponent* PalSkeletalMesh;                                 // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

#endif