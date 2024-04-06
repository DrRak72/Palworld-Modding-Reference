#ifndef UE4SS_SDK_UI_MovieRenderPipelineScreenOverlay_HPP
#define UE4SS_SDK_UI_MovieRenderPipelineScreenOverlay_HPP

class UUI_MovieRenderPipelineScreenOverlay_C : public UMovieRenderDebugWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* CurrentSequenceRow;                  // 0x0280 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* ElapsedTimeRow;                      // 0x0288 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* EstimatedTimeRemainingRow;           // 0x0290 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* PipelineStateRow;                    // 0x0298 (size: 0x8)
    class UImage* ScenePreviewImage;                                                  // 0x02A0 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* ShotEngineWarmUpFramesRow;           // 0x02A8 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* ShotFrameCountRow;                   // 0x02B0 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* ShotHandleFramesRow;                 // 0x02B8 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* ShotNameRow;                         // 0x02C0 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* ShotStateRow;                        // 0x02C8 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* ShotSubFrameRow;                     // 0x02D0 (size: 0x8)
    class UUI_MovieRenderPipelineInfoTableRow_C* TotalFrameRow;                       // 0x02D8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x02E0 (size: 0x8)
    class UMoviePipeline* Pipeline;                                                   // 0x02E8 (size: 0x8)
    class UMaterialInstanceDynamic* PreviewMaterialInst;                              // 0x02F0 (size: 0x8)

    ESlateVisibility GetShotEngineWarm_Visibility();
    ESlateVisibility GetShotSampleRow_Visibility();
    void SetShotState_Color();
    void SetShotState_Text();
    void SetWarmUpFrames();
    void SetSubSample();
    void SetCurrentLocalFrame();
    void SetCurrentShotName();
    void SetPipelineState_Color();
    void SetPipelineState_Text();
    void SetEstimatedTime();
    void SetElapsedTime();
    void SetTotalFrames();
    void SetSequenceName();
    void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_MovieRenderPipelineScreenOverlay(int32 EntryPoint);
}; // Size: 0x2F8

#endif
