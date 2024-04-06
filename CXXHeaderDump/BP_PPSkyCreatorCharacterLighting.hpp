#ifndef UE4SS_SDK_BP_PPSkyCreatorCharacterLighting_HPP
#define UE4SS_SDK_BP_PPSkyCreatorCharacterLighting_HPP

class ABP_PPSkyCreatorCharacterLighting_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TSoftObjectPtr<APPSkyCreator> SkyCreator;                                         // 0x02A0 (size: 0x30)
    double Sun Emissive Intensity;                                                    // 0x02D0 (size: 0x8)
    double Moon Emissive Intensity;                                                   // 0x02D8 (size: 0x8)
    class APPSkyCreator* sky creator;                                                 // 0x02E0 (size: 0x8)
    double light intensity;                                                           // 0x02E8 (size: 0x8)

    void OnLoaded_406982714B2B2A9091DBB5A252BA6489(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting(int32 EntryPoint);
}; // Size: 0x2F0

#endif
