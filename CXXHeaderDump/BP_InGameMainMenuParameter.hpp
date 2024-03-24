#ifndef UE4SS_SDK_BP_InGameMainMenuParameter_HPP
#define UE4SS_SDK_BP_InGameMainMenuParameter_HPP

class UBP_InGameMainMenuParameter_C : public UPalHUDDispatchParameterBase
{
    TEnumAsByte<EPalUIInGameMainMenuTabType::Type> TabType;                           // 0x0038 (size: 0x1)
    EPalBuildObjectTypeA BuildMenuInitialTypeA;                                       // 0x0039 (size: 0x1)

}; // Size: 0x3A

#endif
