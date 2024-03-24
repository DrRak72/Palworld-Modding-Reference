#ifndef UE4SS_SDK_WBP_CommonWorkRequirement_HPP
#define UE4SS_SDK_WBP_CommonWorkRequirement_HPP

class UWBP_CommonWorkRequirement_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0410 (size: 0x8)

    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnSetup();
    void ExecuteUbergraph_WBP_CommonWorkRequirement(int32 EntryPoint);
}; // Size: 0x418

#endif
