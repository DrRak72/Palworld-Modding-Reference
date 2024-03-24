#ifndef UE4SS_SDK_WBP_Ingame_Compass_HPP
#define UE4SS_SDK_WBP_Ingame_Compass_HPP

class UWBP_Ingame_Compass_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Center;                                                             // 0x0280 (size: 0x8)
    class UImage* CompassBase;                                                        // 0x0288 (size: 0x8)
    class UCanvasPanel* IconCanvas;                                                   // 0x0290 (size: 0x8)
    class UMaterialInstanceDynamic* CompassMaterial;                                  // 0x0298 (size: 0x8)
    TMap<class FGuid, class UWBP_CompassIconBase_C*> CreatedIconMap;                  // 0x02A0 (size: 0x50)
    TArray<FGuid> VisibleIconIds;                                                     // 0x02F0 (size: 0x10)
    TMap<class EPalLocationType, class TSubclassOf<UWBP_CompassIconBase_C>> IconWBPMap; // 0x0300 (size: 0x50)
    TSubclassOf<class UWBP_CompassIconBase_C> wbpIconBaseClass;                       // 0x0350 (size: 0x8)
    TArray<class UWBP_IngameCompass_DeathMark_C*> DeathMarks;                         // 0x0358 (size: 0x10)
    TMap<class UPalLocationPoint*, class FGuid> DeathMarkMap;                         // 0x0368 (size: 0x50)

    void GetVisibleIcons();
    void Refresh Death Mark(TMap<class FGuid, class UPalLocationBase*> LocationMap);
    void Setup Created Icon Widget(class UWBP_CompassIconBase_C* createdWidget, FGuid LocationId, FPalLocationUIData locationUIData);
    void UpdateIcon();
    void OnRemovedLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void On Added Location(const FGuid& LocationId, class UPalLocationBase* Location);
    void Update Rotation From Pawn(class APawn* targetPawn);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Ingame_Compass(int32 EntryPoint);
}; // Size: 0x3B8

#endif
