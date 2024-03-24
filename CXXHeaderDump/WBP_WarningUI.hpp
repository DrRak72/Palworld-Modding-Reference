#ifndef UE4SS_SDK_WBP_WarningUI_HPP
#define UE4SS_SDK_WBP_WarningUI_HPP

class UWBP_WarningUI_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWBP_Warning_C* WBP_Warning;                                                // 0x0410 (size: 0x8)

    void PlayWarning(FText TitleText, FText infoText);
    void Display(class UPalBaseCampModel* TargetBaseCamp, FPalInvaderDatabaseRow ChosenInvaderData);
    void OnInvaderStart(const FPalIncidentBroadcastParameter& Parameter);
    void RegisterEvents();
    void OnInitialized();
    void ExecuteUbergraph_WBP_WarningUI(int32 EntryPoint);
}; // Size: 0x418

#endif
