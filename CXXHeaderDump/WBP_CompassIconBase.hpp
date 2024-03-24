#ifndef UE4SS_SDK_WBP_CompassIconBase_HPP
#define UE4SS_SDK_WBP_CompassIconBase_HPP

class UWBP_CompassIconBase_C : public UPalUICompassIconBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    FVector Target Location;                                                          // 0x0410 (size: 0x18)
    FGuid MyLocationID;                                                               // 0x0428 (size: 0x10)
    float HiddenDistance;                                                             // 0x0438 (size: 0x4)
    double CurrentDistance;                                                           // 0x0440 (size: 0x8)

    void PostSetup();
    void UpdateDistance();
    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
    void UpdateVisibility(bool& InDistance);
    void SetLocationId(FGuid LocationId);
    void SetTargetLocation(FVector TargetLocation);
    void Get Offset Value(double& offSetValue);
    void SetDisplayDistance(double Length);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_CompassIconBase(int32 EntryPoint);
}; // Size: 0x448

#endif
