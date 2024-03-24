#ifndef UE4SS_SDK_BP_PalUIBuildModel_HPP
#define UE4SS_SDK_BP_PalUIBuildModel_HPP

class UBP_PalUIBuildModel_C : public UPalUIBuildModel
{
    EPalBuildObjectTypeA CurrentTabType;                                              // 0x0030 (size: 0x1)
    FBP_PalUIBuildModel_COnChangeTabType OnChangeTabType;                             // 0x0038 (size: 0x10)
    void OnChangeTabType(EPalBuildObjectTypeA TypeA);

    void ChangeToBackTab();
    void ChangeToNextTab();
    void ChangeTab(EPalBuildObjectTypeA TypeA);
    void OnChangeTabType__DelegateSignature(EPalBuildObjectTypeA TypeA);
}; // Size: 0x48

#endif
