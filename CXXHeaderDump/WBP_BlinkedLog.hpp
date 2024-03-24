#ifndef UE4SS_SDK_WBP_BlinkedLog_HPP
#define UE4SS_SDK_WBP_BlinkedLog_HPP

class UWBP_BlinkedLog_C : public UPalLogWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Blink;                                                    // 0x0428 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0430 (size: 0x8)
    class UImage* Image_Effect;                                                       // 0x0438 (size: 0x8)
    class UImage* Image_Effect_1;                                                     // 0x0440 (size: 0x8)
    class UWBP_ItemGet_C* WBP_ItemGet;                                                // 0x0448 (size: 0x8)
    double ElapsedTimeBySpawn;                                                        // 0x0450 (size: 0x8)
    double SelfDestroyTime;                                                           // 0x0458 (size: 0x8)
    int32 State;                                                                      // 0x0460 (size: 0x4)
    class UMaterialInstanceDynamic* effectMat;                                        // 0x0468 (size: 0x8)
    double totalTime;                                                                 // 0x0470 (size: 0x8)
    bool isReverse;                                                                   // 0x0478 (size: 0x1)

    void OverrideBgColor(EPalLogContentToneType toneType);
    void OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1(class UObject* Loaded);
    void OnFinishOpen();
    void OnFinishClose();
    void SetLogText(const FText& InText);
    void RequestInAnime();
    void RequestOutAnime();
    void RequestLoadIconTexture(const TSoftObjectPtr<UTexture2D>& softTexturePtr);
    void OnInitialized();
    void SetAdditionalData(const FPalLogAdditionalData& inAdditionalData);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_BlinkedLog(int32 EntryPoint);
}; // Size: 0x479

#endif
