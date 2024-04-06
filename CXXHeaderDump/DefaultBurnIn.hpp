#ifndef UE4SS_SDK_DefaultBurnIn_HPP
#define UE4SS_SDK_DefaultBurnIn_HPP

class UDefaultBurnIn_C : public UMoviePipelineBurnInWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UTextBlock* BottomCenter;                                                   // 0x0280 (size: 0x8)
    class UTextBlock* BottomLeft;                                                     // 0x0288 (size: 0x8)
    class UTextBlock* BottomRight;                                                    // 0x0290 (size: 0x8)
    class UTextBlock* TopLeft;                                                        // 0x0298 (size: 0x8)
    class UTextBlock* TopRight;                                                       // 0x02A0 (size: 0x8)
    class UMultiLineEditableTextBox* UserJobComment;                                  // 0x02A8 (size: 0x8)

    void UpdateUserCommentText(class UMoviePipeline* For Pipeline);
    void UpdateBottomRightText(class UMoviePipeline* ForPipeline);
    void UpdateBottomCenter(class UMoviePipeline* ForPipeline);
    void UpdateBottomLeftText(class UMoviePipeline* ForPipeline);
    void UpdateTopRightText(class UMoviePipeline* ForPipeline);
    void UpdateTopLeftText(class UMoviePipeline* ForPipeline);
    void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
    void ExecuteUbergraph_DefaultBurnIn(int32 EntryPoint);
}; // Size: 0x2B0

#endif
