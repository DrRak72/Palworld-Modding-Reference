#ifndef UE4SS_SDK_UI_MovieRenderPipelineInfoTableRow_HPP
#define UE4SS_SDK_UI_MovieRenderPipelineInfoTableRow_HPP

class UUI_MovieRenderPipelineInfoTableRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UTextBlock* LeftTextBlock;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* RightTextBlock;                                                 // 0x0288 (size: 0x8)
    FText LeftColumnText;                                                             // 0x0290 (size: 0x18)
    FText RightColumnText;                                                            // 0x02A8 (size: 0x18)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetValueText(FText Text);
    void SetValueColor(FSlateColor Color);
    void ExecuteUbergraph_UI_MovieRenderPipelineInfoTableRow(int32 EntryPoint);
}; // Size: 0x2C0

#endif
