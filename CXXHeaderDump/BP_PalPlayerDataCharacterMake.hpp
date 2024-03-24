#ifndef UE4SS_SDK_BP_PalPlayerDataCharacterMake_HPP
#define UE4SS_SDK_BP_PalPlayerDataCharacterMake_HPP

class UBP_PalPlayerDataCharacterMake_C : public UPalPlayerDataCharacterMake
{

    void GetRandomRawNameByDataTable(class UDataTable* DataTable, FName& RawName);
    FName GetRandomHeadMeshName();
    FName GetRandomHairMeshName();
    FName GetRandomBodyMeshName();
    void ConvertMakeInfo_RGBToHSV(FPalPlayerDataCharacterMakeInfo MakeInfo, double SVLimitValur, FPalPlayerDataCharacterMakeInfo& ConvertedMakeInfo);
    void CalcSubsurfaceColor(FLinearColor OriginalRGB, FLinearColor& SubsurfaceRGB);
    void RecalcHSV(FLinearColor BaseHSV, FLinearColor ShiftRGB, double SVLimit, FLinearColor& OutHSV);
    void GetEyeShiftRGB(FName HeadMeshName, FName EyeMaterialName, FLinearColor& OutRGB);
    void GetBrowShiftRGB(FName HaorMeshName, FLinearColor& OutRGB);
    void GetHairShiftRGB(FName HaorMeshName, FLinearColor& OutRGB);
    void GetBodyShiftRGB(FName BodyMeshName, FLinearColor& OutRGB);
    void RGBToHSV(FLinearColor InRGB, FLinearColor& OutHSV);
    void GetOriginalPresetMakeInfo(FName PresetName, FPalPlayerDataCharacterMakeInfo& OutMakeInfo);
    void GetPresetMakeInfo(class UObject* WorldContextObject, const FName& PresetName, FPalPlayerDataCharacterMakeInfo& OutMakeInfo);
}; // Size: 0xC0

#endif
