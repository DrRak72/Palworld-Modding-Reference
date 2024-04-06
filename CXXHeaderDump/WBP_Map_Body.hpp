#ifndef UE4SS_SDK_WBP_Map_Body_HPP
#define UE4SS_SDK_WBP_Map_Body_HPP

class UWBP_Map_Body_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UCanvasPanel* Canvas_ForIcon_Mask;                                          // 0x0410 (size: 0x8)
    class UCanvasPanel* Canvas_ForIcon_NoMask;                                        // 0x0418 (size: 0x8)
    class UCanvasPanel* Canvas_MapBody;                                               // 0x0420 (size: 0x8)
    class UCanvasPanel* Canvas_Outer;                                                 // 0x0428 (size: 0x8)
    class UImage* Image_MapBody;                                                      // 0x0430 (size: 0x8)
    class UImage* Image_MapMask;                                                      // 0x0438 (size: 0x8)
    class UWBP_Map_Cursor_C* WBP_Map_Cursor;                                          // 0x0440 (size: 0x8)
    class UWBP_MapPoint_Info_C* WBP_MapPoint_Info;                                    // 0x0448 (size: 0x8)
    class UWBP_MapPoint_Info_Respawn_C* WBP_MapPoint_Info_Respawn;                    // 0x0450 (size: 0x8)
    double InputAxisX;                                                                // 0x0458 (size: 0x8)
    double InputAxisY;                                                                // 0x0460 (size: 0x8)
    double ScrollSpeedMultiplier;                                                     // 0x0468 (size: 0x8)
    FVector2D targetPosition;                                                         // 0x0470 (size: 0x10)
    double ScrollSpeedMultiplierForMouseDrag;                                         // 0x0480 (size: 0x8)
    double ScrollInterpolationMultiplier;                                             // 0x0488 (size: 0x8)
    double ZoomSpeedMultiplier_Mouse;                                                 // 0x0490 (size: 0x8)
    double AddAxisXPerTick;                                                           // 0x0498 (size: 0x8)
    double AddAxisYPerTick;                                                           // 0x04A0 (size: 0x8)
    double AddZoomPerTick_Mouse;                                                      // 0x04A8 (size: 0x8)
    double ZoomSpeedMultiplier_Pad;                                                   // 0x04B0 (size: 0x8)
    double ZoomSpeedMultiplierForMouseWheel;                                          // 0x04B8 (size: 0x8)
    double DefaultMapZoomScale;                                                       // 0x04C0 (size: 0x8)
    double MaxZoomScale;                                                              // 0x04C8 (size: 0x8)
    double MinZoomScale;                                                              // 0x04D0 (size: 0x8)
    double AddZoomPerTick_Pad;                                                        // 0x04D8 (size: 0x8)
    double CachedMapScale;                                                            // 0x04E0 (size: 0x8)
    bool IsMouseMode;                                                                 // 0x04E8 (size: 0x1)
    bool IsMouseButtonDown;                                                           // 0x04E9 (size: 0x1)
    class UWBP_WorldMap_IconBase_NoDesign_C* HoveredIcon;                             // 0x04F0 (size: 0x8)
    FVector2D MinLandScapePosition;                                                   // 0x04F8 (size: 0x10)
    FVector2D MaxLandScapePosition;                                                   // 0x0508 (size: 0x10)
    FWBP_Map_Body_COnHoveredAnyIcon OnHoveredAnyIcon;                                 // 0x0518 (size: 0x10)
    void OnHoveredAnyIcon(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    FWBP_Map_Body_COnUnhoveredAnyIcon OnUnhoveredAnyIcon;                             // 0x0528 (size: 0x10)
    void OnUnhoveredAnyIcon(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    FWBP_Map_Body_COnClickedAnyIcon OnClickedAnyIcon;                                 // 0x0538 (size: 0x10)
    void OnClickedAnyIcon(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    TMap<class UWBP_Map_IconPlayer_C*, class APalPlayerState*> PlayerIconMaps;        // 0x0548 (size: 0x50)
    FTimerHandle PlayerIconUpdateTimer;                                               // 0x0598 (size: 0x8)
    double CanvasMaskMult;                                                            // 0x05A0 (size: 0x8)
    bool CursorOnMap;                                                                 // 0x05A8 (size: 0x1)
    bool EnableMapInfo;                                                               // 0x05A9 (size: 0x1)
    bool IsInitSelect;                                                                // 0x05AA (size: 0x1)
    class UMaterialInstanceDynamic* MaskTextureMaterial;                              // 0x05B0 (size: 0x8)
    bool CanFastTravel;                                                               // 0x05B8 (size: 0x1)

    void GetCursorScrollOffset(FVector2D& Offset);
    void RequestDismantal();
    void Update Player Icon();
    void Update Map Icon(class UWidget* Icon);
    void UpdateMapIcons();
    void FilteringByLocationType(TArray<EPalLocationType>& FilterLocationTypeArray);
    void AdjustScrollForRespawn();
    void Adjust Scroll Local Player Position();
    void SetupPlayerIcon(TArray<class UWBP_Map_IconPlayer_C*>& PlayerIcons);
    void Setup(FVector MinLandScapePosition, FVector MaxLandScapePosition);
    void Add Icon By Location(class UWBP_WorldMap_IconBase_NoDesign_C* Widget, FVector WorldLocation, bool IgnoreMask, bool& Added);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnClickedAnyIcon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void OnUnhoveredAnyIcon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void On Hovered Any Icon Internal(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void Add Icon(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget, bool& Added);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateCursorTransform();
    void UpdateMapTransform(double DeltaTime);
    void OnInputMethodChanged(ECommonInputType bNewInputType);
    void Update Map Zoom(double AddZoomValue, double DeltaTime, bool& IsUpdated);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateScrollOffset(bool& IsUpdated);
    void CalcMapImagePosition(FVector2D AddOffset, FVector2D& Position);
    void ScrollMapImage_Internal(FVector2D ScrollOffset);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnLoaded_D35D903A4572C11561B776A766C7733D(class UObject* Loaded);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Destruct();
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void LoadAndApplyDefaultMaskTexture();
    void ExecuteUbergraph_WBP_Map_Body(int32 EntryPoint);
    void OnClickedAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void OnUnhoveredAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void OnHoveredAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
}; // Size: 0x5B9

#endif
