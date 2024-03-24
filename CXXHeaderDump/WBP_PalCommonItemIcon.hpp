#ifndef UE4SS_SDK_WBP_PalCommonItemIcon_HPP
#define UE4SS_SDK_WBP_PalCommonItemIcon_HPP

class UWBP_PalCommonItemIcon_C : public UWBP_PalItemIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UCircularThrobber* CircularThrobber_96;                                     // 0x0448 (size: 0x8)
    class UImage* iconImage;                                                          // 0x0450 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicMaterial;                                  // 0x0458 (size: 0x8)

    void OnEmpty();
    void OnLoaded(class UTexture2D* loadedTexture);
    void OnStartLoad();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonItemIcon(int32 EntryPoint);
}; // Size: 0x460

#endif
