#ifndef UE4SS_SDK_BP_BuildingUIParameter_HPP
#define UE4SS_SDK_BP_BuildingUIParameter_HPP

class UBP_BuildingUIParameter_C : public UPalHUDDispatchParameterBase
{
    FName BuildObjectId;                                                              // 0x0038 (size: 0x8)
    bool bFromRadialMenu;                                                             // 0x0040 (size: 0x1)
    int32 SelectedIndex;                                                              // 0x0044 (size: 0x4)

}; // Size: 0x48

#endif
