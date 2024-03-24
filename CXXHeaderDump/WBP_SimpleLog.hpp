#ifndef UE4SS_SDK_WBP_SimpleLog_HPP
#define UE4SS_SDK_WBP_SimpleLog_HPP

class UWBP_SimpleLog_C : public UPalLogWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0428 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0430 (size: 0x8)
    class UWidgetAnimation* SlideIn;                                                  // 0x0438 (size: 0x8)
    class UWBP_ItemGet_C* WBP_ItemGet;                                                // 0x0440 (size: 0x8)
    double ElapsedTimeBySpawn;                                                        // 0x0448 (size: 0x8)
    double SelfDestroyTime;                                                           // 0x0450 (size: 0x8)
    int32 State;                                                                      // 0x0458 (size: 0x4)

    void OverrideBgColor(EPalLogContentToneType toneType);
    void OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A(class UObject* Loaded);
    void OnFinishOpen();
    void OnFinishClose();
    void SetLogText(const FText& InText);
    void RequestInAnime();
    void RequestOutAnime();
    void RequestLoadIconTexture(const TSoftObjectPtr<UTexture2D>& softTexturePtr);
    void OnInitialized();
    void SetAdditionalData(const FPalLogAdditionalData& inAdditionalData);
    void ExecuteUbergraph_WBP_SimpleLog(int32 EntryPoint);
}; // Size: 0x45C

#endif
