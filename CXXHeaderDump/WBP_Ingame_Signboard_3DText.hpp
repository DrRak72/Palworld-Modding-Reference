#ifndef UE4SS_SDK_WBP_Ingame_Signboard_3DText_HPP
#define UE4SS_SDK_WBP_Ingame_Signboard_3DText_HPP

class UWBP_Ingame_Signboard_3DText_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_54;                           // 0x0410 (size: 0x8)
    class UImage* Image_70;                                                           // 0x0418 (size: 0x8)
    FDataTableRowHandle NoNameMsgID;                                                  // 0x0420 (size: 0x10)

    void UpdateText(FString Text);
    void ExecuteUbergraph_WBP_Ingame_Signboard_3DText(int32 EntryPoint);
}; // Size: 0x430

#endif
