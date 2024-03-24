#ifndef UE4SS_SDK_WBP_Map_Base_HPP
#define UE4SS_SDK_WBP_Map_Base_HPP

class UWBP_Map_Base_C : public UPalUIWorldMap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_Respawn_In;                                           // 0x0438 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_1;                                          // 0x0440 (size: 0x8)
    class UCanvasPanel* BG;                                                           // 0x0448 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Filter;                                       // 0x0450 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Marker;                                       // 0x0458 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0460 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0468 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0470 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0478 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0480 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0488 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0490 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0498 (size: 0x8)
    class UImage* Image_11;                                                           // 0x04A0 (size: 0x8)
    class UImage* Image_12;                                                           // 0x04A8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x04B0 (size: 0x8)
    class UImage* Image_14;                                                           // 0x04B8 (size: 0x8)
    class UImage* Image_15;                                                           // 0x04C0 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x04C8 (size: 0x8)
    class UImage* Image_Grd;                                                          // 0x04D0 (size: 0x8)
    class UImage* Image_Grid;                                                         // 0x04D8 (size: 0x8)
    class UImage* Image_Stripe;                                                       // 0x04E0 (size: 0x8)
    class UOverlay* Overlay_RespawnMsg;                                               // 0x04E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CursorLocation;                                    // 0x04F0 (size: 0x8)
    class UWBP_Map_Body_C* WBP_Map_Body;                                              // 0x04F8 (size: 0x8)
    class UWBP_MapFilter_Win_C* WBP_MapFilter_Win;                                    // 0x0500 (size: 0x8)
    class UWBP_MapMarker_Win_C* WBP_MapMarker_Win;                                    // 0x0508 (size: 0x8)
    FName CloseMapActionName;                                                         // 0x0510 (size: 0x8)
    FName FocusPlayerActionName;                                                      // 0x0518 (size: 0x8)
    FName CustomMarkActionName;                                                       // 0x0520 (size: 0x8)
    FName FilterActionName;                                                           // 0x0528 (size: 0x8)
    FName TabActionName;                                                              // 0x0530 (size: 0x8)
    FVector Min Land Scape Position;                                                  // 0x0538 (size: 0x18)
    FVector Max Land Scape Position;                                                  // 0x0550 (size: 0x18)
    TMap<class FGuid, class UWBP_WorldMap_IconBase_NoDesign_C*> CreatedIconMap;       // 0x0568 (size: 0x50)
    TMap<class UPalLocationPoint*, class FGuid> DeathMarkMap;                         // 0x05B8 (size: 0x50)
    TArray<class UWBP_Map_IconDeath_C*> DeathMarks;                                   // 0x0608 (size: 0x10)
    TArray<class UWBP_Map_IconTower_C*> BossTowerIcons;                               // 0x0618 (size: 0x10)
    bool CustomMarkMode;                                                              // 0x0628 (size: 0x1)
    bool FilterOpened;                                                                // 0x0629 (size: 0x1)
    class UWBP_WorldMap_IconBase_NoDesign_C* CurrentSetupIcon;                        // 0x0630 (size: 0x8)
    bool For Respawn;                                                                 // 0x0638 (size: 0x1)
    TArray<class UWBP_Map_IconPlayer_C*> PlayerIcons;                                 // 0x0640 (size: 0x10)
    bool Can Fast Travel;                                                             // 0x0650 (size: 0x1)
    bool IsInitSelect;                                                                // 0x0651 (size: 0x1)
    TSet<EPalLocationType> FilterIconTypes;                                           // 0x0658 (size: 0x50)
    FDataTableRowHandle FTMsgID;                                                      // 0x06A8 (size: 0x10)
    FDataTableRowHandle RespawnMsgID;                                                 // 0x06B8 (size: 0x10)
    TArray<class UWBP_Map_IconBoss_C*> BossIcons;                                     // 0x06C8 (size: 0x10)
    FName DismantalActionName;                                                        // 0x06D8 (size: 0x8)
    FDataTableRowHandle InitSelectMsgID;                                              // 0x06E0 (size: 0x10)

    void OnRequestCampDismantal();
    void AddBossIcon(class ABP_PalSpawner_Standard_C* spawner, FVector Location);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnCustomMarkChanged(int32 Index);
    void ChangeFilter(EPalLocationType FilterMap, bool isEnable);
    void SetFilter();
    void ChangeCustomIcon(class UWBP_Map_IconCustom_C* Icon, int32 Index);
    void RemoveCustomIcon(class UWBP_Map_IconCustom_C* Icon);
    void OnCloseAction();
    void EnableCustomMark();
    void RefreshDeathMark(TMap<class FGuid, class UPalLocationBase*> LocationMap);
    void SetupIcon(EPalLocationType LocationType, class UPalLocationPoint* LocationPoint, class UWBP_WorldMap_IconBase_NoDesign_C*& Icon);
    void OnRemovedLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void Collect Boss Pal Spawner();
    void Collect Icon in Initialize();
    void CollectAndAddIcon(TSubclassOf<class AActor> CollectActorClass, TSubclassOf<class UWBP_WorldMap_IconBase_NoDesign_C> AddWidgetClass);
    void SetupLocationPointIcon(const FGuid& LocationId, class UPalLocationBase* Location);
    void SetupLocationIcon();
    void OnInputMethodChanged(ECommonInputType InputType);
    void OnRepliedDialog(bool bOK);
    void OnIconClicked(class UWBP_WorldMap_IconBase_NoDesign_C* Icon);
    class UWidget* BP_GetDesiredFocusTarget();
    void CloseMap();
    void OnSetup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Map_Base(int32 EntryPoint);
}; // Size: 0x6F0

#endif
