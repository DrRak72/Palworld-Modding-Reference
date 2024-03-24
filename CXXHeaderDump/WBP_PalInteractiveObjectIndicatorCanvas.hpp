#ifndef UE4SS_SDK_WBP_PalInteractiveObjectIndicatorCanvas_HPP
#define UE4SS_SDK_WBP_PalInteractiveObjectIndicatorCanvas_HPP

class UWBP_PalInteractiveObjectIndicatorCanvas_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0410 (size: 0x8)
    class UVerticalBox* AdditionalWidgetBOx;                                          // 0x0418 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0420 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0428 (size: 0x8)
    class UHorizontalBox* HorizontalBox_86;                                           // 0x0430 (size: 0x8)
    class UVerticalBox* IndicatorVerticalBox;                                         // 0x0438 (size: 0x8)
    TMap<class EPalInteractiveObjectActionType, class UWBP_PalInteractiveObjectIndicatorUI_C*> IndicatorUIs; // 0x0440 (size: 0x50)
    int32 ZOrder;                                                                     // 0x0490 (size: 0x4)
    bool bInteracting;                                                                // 0x0494 (size: 0x1)
    TScriptInterface<class IPalInteractiveObjectComponentInterface> Interactive Object; // 0x0498 (size: 0x10)
    FVector IndicatorBoxOffset;                                                       // 0x04A8 (size: 0x18)
    FPalInteractiveObjectActionInfoData OtomoIndicatorActionInfo;                     // 0x04C0 (size: 0xC)
    bool bOtomoIndicatorDisplaying;                                                   // 0x04CC (size: 0x1)
    double otomoInteractDistance;                                                     // 0x04D0 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings);
    void OnKeyConfigChanged(FPalKeyConfigSettings PreSetting, FPalKeyConfigSettings NewSetting);
    void GetIndicatorText(TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractiveObject, EPalInteractiveObjectIndicatorType IndicatorType, EPalInteractiveObjectButtonType buttonType, bool CanToggle, FText& NewParam);
    void OnRide(class AActor* RideActor);
    void SetupEvent();
    void HideInteractHUDInterfaceWidget();
    void ShowInteractHUDInterfaceWidget();
    void OnChangeOtomo();
    void SetupAfterCreatePlayer();
    void ShowOtomoIndicator(EPalInteractiveObjectActionType ActionType, FPalInteractiveObjectActionInfoData ActionInfo);
    void ShowOtomoIndicators();
    void UpdateOtomoIndicators();
    void UpdateOtomoIndicatorPosition();
    void CanDisplayCoop(bool& canDisplay);
    void UpdateIndicatorBoxPosition();
    void Update Indicator UIs();
    void HideIndicators();
    void ShowIndicator(EPalInteractiveObjectActionType ActionType, FPalInteractiveObjectActionInfoData actionInfoData);
    void ShowIndicators();
    void SetZOrder(int32 ZOrder);
    void CreateIndicatorUI();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnUpdateTargetInteractiveObject(TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractiveObject);
    void OnInitialized();
    void OnApplicationActivationStateChanged(bool bIsFocused);
    void ExecuteUbergraph_WBP_PalInteractiveObjectIndicatorCanvas(int32 EntryPoint);
}; // Size: 0x4D8

#endif
