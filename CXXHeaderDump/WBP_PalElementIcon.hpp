#ifndef UE4SS_SDK_WBP_PalElementIcon_HPP
#define UE4SS_SDK_WBP_PalElementIcon_HPP

class UWBP_PalElementIcon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UImage* Icon_Element;                                                       // 0x0410 (size: 0x8)
    TMap<class EPalElementType, class UTexture2D*> IconMap;                           // 0x0418 (size: 0x50)
    TMap<class EPalElementType, class UTexture2D*> IconMap_L;                         // 0x0468 (size: 0x50)
    bool isLargeTexture;                                                              // 0x04B8 (size: 0x1)

    void Clear();
    void SetElement(EPalElementType ElementType);
    void Construct();
    void ExecuteUbergraph_WBP_PalElementIcon(int32 EntryPoint);
}; // Size: 0x4B9

#endif
