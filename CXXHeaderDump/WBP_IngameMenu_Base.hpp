#ifndef UE4SS_SDK_WBP_IngameMenu_Base_HPP
#define UE4SS_SDK_WBP_IngameMenu_Base_HPP

class UWBP_IngameMenu_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UImage* Image_66;                                                           // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x0298 (size: 0x8)
    FWBP_IngameMenu_Base_COnFinishedCloseAnime OnFinishedCloseAnime;                  // 0x02A0 (size: 0x10)
    void OnFinishedCloseAnime();
    FVector4 Saturation;                                                              // 0x02B0 (size: 0x20)

    void SetText(FText InText);
    void Finished_4080B31D405C805940E1C0948928EDBB();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_Base(int32 EntryPoint);
    void OnFinishedCloseAnime__DelegateSignature();
}; // Size: 0x2D0

#endif
