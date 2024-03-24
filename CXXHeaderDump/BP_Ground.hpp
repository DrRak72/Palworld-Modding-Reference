#ifndef UE4SS_SDK_BP_Ground_HPP
#define UE4SS_SDK_BP_Ground_HPP

class ABP_Ground_C : public AStaticMeshActor
{
    class UStaticMeshComponent* BottomLayer;                                          // 0x02A0 (size: 0x8)
    int32 Mode;                                                                       // 0x02A8 (size: 0x4)
    class UMaterialInstance* UnlitOpaque;                                             // 0x02B0 (size: 0x8)
    class UMaterialInstance* LitOpaque;                                               // 0x02B8 (size: 0x8)
    class UMaterialInstance* UnlitTranslucent;                                        // 0x02C0 (size: 0x8)
    class UMaterialInstance* LitTranlucent;                                           // 0x02C8 (size: 0x8)
    class UMaterialInstance* LitMasked;                                               // 0x02D0 (size: 0x8)
    class UMaterialInstance* UnlitMasked;                                             // 0x02D8 (size: 0x8)

    void ChangeMode(int32 newMode);
    void UserConstructionScript();
}; // Size: 0x2E0

#endif
