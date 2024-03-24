#ifndef UE4SS_SDK_SlateCore_HPP
#define UE4SS_SDK_SlateCore_HPP

#include "SlateCore_enums.hpp"

struct FAnalogInputEvent : public FKeyEvent
{
}; // Size: 0x48

struct FButtonStyle : public FSlateWidgetStyle
{
    FSlateBrush Normal;                                                               // 0x0010 (size: 0xD0)
    FSlateBrush Hovered;                                                              // 0x00E0 (size: 0xD0)
    FSlateBrush Pressed;                                                              // 0x01B0 (size: 0xD0)
    FSlateBrush Disabled;                                                             // 0x0280 (size: 0xD0)
    FSlateColor NormalForeground;                                                     // 0x0350 (size: 0x14)
    FSlateColor HoveredForeground;                                                    // 0x0364 (size: 0x14)
    FSlateColor PressedForeground;                                                    // 0x0378 (size: 0x14)
    FSlateColor DisabledForeground;                                                   // 0x038C (size: 0x14)
    FMargin NormalPadding;                                                            // 0x03A0 (size: 0x10)
    FMargin PressedPadding;                                                           // 0x03B0 (size: 0x10)
    FSlateSound PressedSlateSound;                                                    // 0x03C0 (size: 0x18)
    FSlateSound HoveredSlateSound;                                                    // 0x03D8 (size: 0x18)

}; // Size: 0x3F0

struct FCaptureLostEvent
{
}; // Size: 0x8

struct FCharacterEvent : public FInputEvent
{
}; // Size: 0x28

struct FCheckBoxStyle : public FSlateWidgetStyle
{
    TEnumAsByte<ESlateCheckBoxType::Type> CheckBoxType;                               // 0x0008 (size: 0x1)
    FSlateBrush UncheckedImage;                                                       // 0x0010 (size: 0xD0)
    FSlateBrush UncheckedHoveredImage;                                                // 0x00E0 (size: 0xD0)
    FSlateBrush UncheckedPressedImage;                                                // 0x01B0 (size: 0xD0)
    FSlateBrush CheckedImage;                                                         // 0x0280 (size: 0xD0)
    FSlateBrush CheckedHoveredImage;                                                  // 0x0350 (size: 0xD0)
    FSlateBrush CheckedPressedImage;                                                  // 0x0420 (size: 0xD0)
    FSlateBrush UndeterminedImage;                                                    // 0x04F0 (size: 0xD0)
    FSlateBrush UndeterminedHoveredImage;                                             // 0x05C0 (size: 0xD0)
    FSlateBrush UndeterminedPressedImage;                                             // 0x0690 (size: 0xD0)
    FMargin Padding;                                                                  // 0x0760 (size: 0x10)
    FSlateBrush BackgroundImage;                                                      // 0x0770 (size: 0xD0)
    FSlateBrush BackgroundHoveredImage;                                               // 0x0840 (size: 0xD0)
    FSlateBrush BackgroundPressedImage;                                               // 0x0910 (size: 0xD0)
    FSlateColor ForegroundColor;                                                      // 0x09E0 (size: 0x14)
    FSlateColor HoveredForeground;                                                    // 0x09F4 (size: 0x14)
    FSlateColor PressedForeground;                                                    // 0x0A08 (size: 0x14)
    FSlateColor CheckedForeground;                                                    // 0x0A1C (size: 0x14)
    FSlateColor CheckedHoveredForeground;                                             // 0x0A30 (size: 0x14)
    FSlateColor CheckedPressedForeground;                                             // 0x0A44 (size: 0x14)
    FSlateColor UndeterminedForeground;                                               // 0x0A58 (size: 0x14)
    FSlateColor BorderBackgroundColor;                                                // 0x0A6C (size: 0x14)
    FSlateSound CheckedSlateSound;                                                    // 0x0A80 (size: 0x18)
    FSlateSound UncheckedSlateSound;                                                  // 0x0A98 (size: 0x18)
    FSlateSound HoveredSlateSound;                                                    // 0x0AB0 (size: 0x18)

}; // Size: 0xAD0

struct FComboBoxStyle : public FSlateWidgetStyle
{
    FComboButtonStyle ComboButtonStyle;                                               // 0x0010 (size: 0x600)
    FSlateSound PressedSlateSound;                                                    // 0x0610 (size: 0x18)
    FSlateSound SelectionChangeSlateSound;                                            // 0x0628 (size: 0x18)
    FMargin ContentPadding;                                                           // 0x0640 (size: 0x10)
    FMargin MenuRowPadding;                                                           // 0x0650 (size: 0x10)

}; // Size: 0x660

struct FComboButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle ButtonStyle;                                                         // 0x0010 (size: 0x3F0)
    FSlateBrush DownArrowImage;                                                       // 0x0400 (size: 0xD0)
    FVector2D ShadowOffset;                                                           // 0x04D0 (size: 0x10)
    FLinearColor ShadowColorAndOpacity;                                               // 0x04E0 (size: 0x10)
    FSlateBrush MenuBorderBrush;                                                      // 0x04F0 (size: 0xD0)
    FMargin MenuBorderPadding;                                                        // 0x05C0 (size: 0x10)
    FMargin ContentPadding;                                                           // 0x05D0 (size: 0x10)
    FMargin DownArrowPadding;                                                         // 0x05E0 (size: 0x10)
    TEnumAsByte<EVerticalAlignment> DownArrowAlign;                                   // 0x05F0 (size: 0x1)

}; // Size: 0x600

struct FCompositeFallbackFont
{
    FTypeface Typeface;                                                               // 0x0000 (size: 0x10)
    float ScalingFactor;                                                              // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCompositeFont
{
    FTypeface DefaultTypeface;                                                        // 0x0000 (size: 0x10)
    FCompositeFallbackFont FallbackTypeface;                                          // 0x0010 (size: 0x18)
    TArray<FCompositeSubFont> SubTypefaces;                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FCompositeSubFont : public FCompositeFallbackFont
{
    TArray<FInt32Range> CharacterRanges;                                              // 0x0018 (size: 0x10)
    FString Cultures;                                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FDockTabStyle : public FSlateWidgetStyle
{
    FButtonStyle CloseButtonStyle;                                                    // 0x0010 (size: 0x3F0)
    FSlateBrush NormalBrush;                                                          // 0x0400 (size: 0xD0)
    FSlateBrush ColorOverlayTabBrush;                                                 // 0x04D0 (size: 0xD0)
    FSlateBrush ColorOverlayIconBrush;                                                // 0x05A0 (size: 0xD0)
    FSlateBrush ForegroundBrush;                                                      // 0x0670 (size: 0xD0)
    FSlateBrush HoveredBrush;                                                         // 0x0740 (size: 0xD0)
    FSlateBrush ContentAreaBrush;                                                     // 0x0810 (size: 0xD0)
    FSlateBrush TabWellBrush;                                                         // 0x08E0 (size: 0xD0)
    FTextBlockStyle TabTextStyle;                                                     // 0x09B0 (size: 0x350)
    FMargin TabPadding;                                                               // 0x0D00 (size: 0x10)
    FVector2D IconSize;                                                               // 0x0D10 (size: 0x10)
    float OverlapWidth;                                                               // 0x0D20 (size: 0x4)
    FSlateColor FlashColor;                                                           // 0x0D24 (size: 0x14)
    FSlateColor NormalForegroundColor;                                                // 0x0D38 (size: 0x14)
    FSlateColor HoveredForegroundColor;                                               // 0x0D4C (size: 0x14)
    FSlateColor ActiveForegroundColor;                                                // 0x0D60 (size: 0x14)
    FSlateColor ForegroundForegroundColor;                                            // 0x0D74 (size: 0x14)
    float IconBorderPadding;                                                          // 0x0D88 (size: 0x4)

}; // Size: 0xD90

struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImageNormal;                                                // 0x0010 (size: 0xD0)
    FSlateBrush BackgroundImageHovered;                                               // 0x00E0 (size: 0xD0)
    FSlateBrush BackgroundImageFocused;                                               // 0x01B0 (size: 0xD0)
    FSlateBrush BackgroundImageReadOnly;                                              // 0x0280 (size: 0xD0)
    FMargin Padding;                                                                  // 0x0350 (size: 0x10)
    FTextBlockStyle TextStyle;                                                        // 0x0360 (size: 0x350)
    FSlateColor ForegroundColor;                                                      // 0x06B0 (size: 0x14)
    FSlateColor BackgroundColor;                                                      // 0x06C4 (size: 0x14)
    FSlateColor ReadOnlyForegroundColor;                                              // 0x06D8 (size: 0x14)
    FSlateColor FocusedForegroundColor;                                               // 0x06EC (size: 0x14)
    FMargin HScrollBarPadding;                                                        // 0x0700 (size: 0x10)
    FMargin VScrollBarPadding;                                                        // 0x0710 (size: 0x10)
    FScrollBarStyle ScrollBarStyle;                                                   // 0x0720 (size: 0x770)

}; // Size: 0xE90

struct FEditableTextStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;                                                              // 0x0008 (size: 0x60)
    FSlateColor ColorAndOpacity;                                                      // 0x0068 (size: 0x14)
    FSlateBrush BackgroundImageSelected;                                              // 0x0080 (size: 0xD0)
    FSlateBrush BackgroundImageComposing;                                             // 0x0150 (size: 0xD0)
    FSlateBrush CaretImage;                                                           // 0x0220 (size: 0xD0)

}; // Size: 0x2F0

struct FExpandableAreaStyle : public FSlateWidgetStyle
{
    FSlateBrush CollapsedImage;                                                       // 0x0010 (size: 0xD0)
    FSlateBrush ExpandedImage;                                                        // 0x00E0 (size: 0xD0)
    float RolloutAnimationSeconds;                                                    // 0x01B0 (size: 0x4)

}; // Size: 0x1C0

struct FFocusEvent
{
}; // Size: 0x8

struct FFontData
{
    FString FontFilename;                                                             // 0x0000 (size: 0x10)
    EFontHinting Hinting;                                                             // 0x0014 (size: 0x1)
    EFontLoadingPolicy LoadingPolicy;                                                 // 0x0015 (size: 0x1)
    int32 SubFaceIndex;                                                               // 0x0018 (size: 0x4)
    class UObject* FontFaceAsset;                                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FFontOutlineSettings
{
    int32 OutlineSize;                                                                // 0x0000 (size: 0x4)
    int32 OutlineBlur;                                                                // 0x0004 (size: 0x4)
    bool bSeparateFillAlpha;                                                          // 0x0008 (size: 0x1)
    bool bApplyOutlineToDropShadows;                                                  // 0x0009 (size: 0x1)
    class UObject* OutlineMaterial;                                                   // 0x0010 (size: 0x8)
    FLinearColor OutlineColor;                                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FGeometry
{
}; // Size: 0x40

struct FHeaderRowStyle : public FSlateWidgetStyle
{
    FTableColumnHeaderStyle ColumnStyle;                                              // 0x0010 (size: 0x760)
    FTableColumnHeaderStyle LastColumnStyle;                                          // 0x0770 (size: 0x760)
    FSplitterStyle ColumnSplitterStyle;                                               // 0x0ED0 (size: 0x1B0)
    float SplitterHandleSize;                                                         // 0x1080 (size: 0x4)
    FSlateBrush BackgroundBrush;                                                      // 0x1090 (size: 0xD0)
    FSlateColor ForegroundColor;                                                      // 0x1160 (size: 0x14)
    FSlateBrush HorizontalSeparatorBrush;                                             // 0x1180 (size: 0xD0)
    float HorizontalSeparatorThickness;                                               // 0x1250 (size: 0x4)

}; // Size: 0x1260

struct FHyperlinkStyle : public FSlateWidgetStyle
{
    FButtonStyle UnderlineStyle;                                                      // 0x0010 (size: 0x3F0)
    FTextBlockStyle TextStyle;                                                        // 0x0400 (size: 0x350)
    FMargin Padding;                                                                  // 0x0750 (size: 0x10)

}; // Size: 0x760

struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle EditableTextBoxStyle;                                       // 0x0010 (size: 0xE90)
    FTextBlockStyle TextStyle;                                                        // 0x0EA0 (size: 0x350)

}; // Size: 0x11F0

struct FInlineTextImageStyle : public FSlateWidgetStyle
{
    FSlateBrush Image;                                                                // 0x0010 (size: 0xD0)
    int16 Baseline;                                                                   // 0x00E0 (size: 0x2)

}; // Size: 0xF0

struct FInputEvent
{
}; // Size: 0x20

struct FKeyEvent : public FInputEvent
{
}; // Size: 0x40

struct FMargin
{
    float Left;                                                                       // 0x0000 (size: 0x4)
    float Top;                                                                        // 0x0004 (size: 0x4)
    float Right;                                                                      // 0x0008 (size: 0x4)
    float Bottom;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMotionEvent : public FInputEvent
{
}; // Size: 0x80

struct FNavigationEvent : public FInputEvent
{
}; // Size: 0x28

struct FPointerEvent : public FInputEvent
{
}; // Size: 0x98

struct FProgressBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;                                                      // 0x0010 (size: 0xD0)
    FSlateBrush FillImage;                                                            // 0x00E0 (size: 0xD0)
    FSlateBrush MarqueeImage;                                                         // 0x01B0 (size: 0xD0)
    bool EnableFillAnimation;                                                         // 0x0280 (size: 0x1)

}; // Size: 0x290

struct FScrollBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HorizontalBackgroundImage;                                            // 0x0010 (size: 0xD0)
    FSlateBrush VerticalBackgroundImage;                                              // 0x00E0 (size: 0xD0)
    FSlateBrush VerticalTopSlotImage;                                                 // 0x01B0 (size: 0xD0)
    FSlateBrush HorizontalTopSlotImage;                                               // 0x0280 (size: 0xD0)
    FSlateBrush VerticalBottomSlotImage;                                              // 0x0350 (size: 0xD0)
    FSlateBrush HorizontalBottomSlotImage;                                            // 0x0420 (size: 0xD0)
    FSlateBrush NormalThumbImage;                                                     // 0x04F0 (size: 0xD0)
    FSlateBrush HoveredThumbImage;                                                    // 0x05C0 (size: 0xD0)
    FSlateBrush DraggedThumbImage;                                                    // 0x0690 (size: 0xD0)
    float Thickness;                                                                  // 0x0760 (size: 0x4)

}; // Size: 0x770

struct FScrollBorderStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;                                                       // 0x0010 (size: 0xD0)
    FSlateBrush BottomShadowBrush;                                                    // 0x00E0 (size: 0xD0)

}; // Size: 0x1B0

struct FScrollBoxStyle : public FSlateWidgetStyle
{
    float BarThickness;                                                               // 0x0008 (size: 0x4)
    FSlateBrush TopShadowBrush;                                                       // 0x0010 (size: 0xD0)
    FSlateBrush BottomShadowBrush;                                                    // 0x00E0 (size: 0xD0)
    FSlateBrush LeftShadowBrush;                                                      // 0x01B0 (size: 0xD0)
    FSlateBrush RightShadowBrush;                                                     // 0x0280 (size: 0xD0)

}; // Size: 0x350

struct FSearchBoxStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle TextBoxStyle;                                               // 0x0010 (size: 0xE90)
    FSlateFontInfo ActiveFontInfo;                                                    // 0x0EA0 (size: 0x60)
    FSlateBrush UpArrowImage;                                                         // 0x0F00 (size: 0xD0)
    FSlateBrush DownArrowImage;                                                       // 0x0FD0 (size: 0xD0)
    FSlateBrush GlassImage;                                                           // 0x10A0 (size: 0xD0)
    FSlateBrush ClearImage;                                                           // 0x1170 (size: 0xD0)
    FMargin ImagePadding;                                                             // 0x1240 (size: 0x10)
    bool bLeftAlignButtons;                                                           // 0x1250 (size: 0x1)
    bool bLeftAlignSearchResultButtons;                                               // 0x1251 (size: 0x1)
    bool bLeftAlignGlassImageAndClearButton;                                          // 0x1252 (size: 0x1)

}; // Size: 0x1260

struct FSegmentedControlStyle : public FSlateWidgetStyle
{
    FCheckBoxStyle ControlStyle;                                                      // 0x0010 (size: 0xAD0)
    FCheckBoxStyle FirstControlStyle;                                                 // 0x0AE0 (size: 0xAD0)
    FCheckBoxStyle LastControlStyle;                                                  // 0x15B0 (size: 0xAD0)
    FSlateBrush BackgroundBrush;                                                      // 0x2080 (size: 0xD0)
    FMargin UniformPadding;                                                           // 0x2150 (size: 0x10)

}; // Size: 0x2160

struct FSlateBrush
{
    uint8 bIsDynamicallyLoaded;                                                       // 0x0010 (size: 0x1)
    uint8 bHasUObject;                                                                // 0x0010 (size: 0x1)
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;                                    // 0x0011 (size: 0x1)
    TEnumAsByte<ESlateBrushTileType::Type> Tiling;                                    // 0x0012 (size: 0x1)
    TEnumAsByte<ESlateBrushMirrorType::Type> Mirroring;                               // 0x0013 (size: 0x1)
    TEnumAsByte<ESlateBrushImageType::Type> ImageType;                                // 0x0014 (size: 0x1)
    FVector2D ImageSize;                                                              // 0x0018 (size: 0x10)
    FMargin Margin;                                                                   // 0x0028 (size: 0x10)
    FSlateColor TintColor;                                                            // 0x0038 (size: 0x14)
    FSlateBrushOutlineSettings OutlineSettings;                                       // 0x0050 (size: 0x40)
    class UObject* ResourceObject;                                                    // 0x0090 (size: 0x8)
    FName ResourceName;                                                               // 0x0098 (size: 0x8)
    FBox2f UVRegion;                                                                  // 0x00A0 (size: 0x14)

}; // Size: 0xD0

struct FSlateBrushOutlineSettings
{
    FVector4 CornerRadii;                                                             // 0x0000 (size: 0x20)
    FSlateColor Color;                                                                // 0x0020 (size: 0x14)
    float Width;                                                                      // 0x0034 (size: 0x4)
    TEnumAsByte<ESlateBrushRoundingType::Type> RoundingType;                          // 0x0038 (size: 0x1)
    bool bUseBrushTransparency;                                                       // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FSlateColor
{
    FLinearColor SpecifiedColor;                                                      // 0x0000 (size: 0x10)
    ESlateColorStylingMode ColorUseRule;                                              // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FSlateFontInfo
{
    class UObject* FontObject;                                                        // 0x0000 (size: 0x8)
    class UObject* FontMaterial;                                                      // 0x0008 (size: 0x8)
    FFontOutlineSettings OutlineSettings;                                             // 0x0010 (size: 0x28)
    FName TypefaceFontName;                                                           // 0x0048 (size: 0x8)
    int32 Size;                                                                       // 0x0050 (size: 0x4)
    int32 LetterSpacing;                                                              // 0x0054 (size: 0x4)
    float SkewAmount;                                                                 // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FSlateSound
{
    class UObject* ResourceObject;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FSlateWidgetStyle
{
}; // Size: 0x8

struct FSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalBarImage;                                                       // 0x0010 (size: 0xD0)
    FSlateBrush HoveredBarImage;                                                      // 0x00E0 (size: 0xD0)
    FSlateBrush DisabledBarImage;                                                     // 0x01B0 (size: 0xD0)
    FSlateBrush NormalThumbImage;                                                     // 0x0280 (size: 0xD0)
    FSlateBrush HoveredThumbImage;                                                    // 0x0350 (size: 0xD0)
    FSlateBrush DisabledThumbImage;                                                   // 0x0420 (size: 0xD0)
    float BarThickness;                                                               // 0x04F0 (size: 0x4)

}; // Size: 0x500

struct FSpinBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0010 (size: 0xD0)
    FSlateBrush ActiveBackgroundBrush;                                                // 0x00E0 (size: 0xD0)
    FSlateBrush HoveredBackgroundBrush;                                               // 0x01B0 (size: 0xD0)
    FSlateBrush ActiveFillBrush;                                                      // 0x0280 (size: 0xD0)
    FSlateBrush HoveredFillBrush;                                                     // 0x0350 (size: 0xD0)
    FSlateBrush InactiveFillBrush;                                                    // 0x0420 (size: 0xD0)
    FSlateBrush ArrowsImage;                                                          // 0x04F0 (size: 0xD0)
    FSlateColor ForegroundColor;                                                      // 0x05C0 (size: 0x14)
    FMargin TextPadding;                                                              // 0x05D4 (size: 0x10)
    FMargin InsetPadding;                                                             // 0x05E4 (size: 0x10)

}; // Size: 0x600

struct FSplitterStyle : public FSlateWidgetStyle
{
    FSlateBrush HandleNormalBrush;                                                    // 0x0010 (size: 0xD0)
    FSlateBrush HandleHighlightBrush;                                                 // 0x00E0 (size: 0xD0)

}; // Size: 0x1B0

struct FStyleColorList
{
    FLinearColor StyleColors;                                                         // 0x0000 (size: 0x3D0)

}; // Size: 0x988

struct FStyleTheme
{
}; // Size: 0x48

struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
    FSlateBrush SortPrimaryAscendingImage;                                            // 0x0010 (size: 0xD0)
    FSlateBrush SortPrimaryDescendingImage;                                           // 0x00E0 (size: 0xD0)
    FSlateBrush SortSecondaryAscendingImage;                                          // 0x01B0 (size: 0xD0)
    FSlateBrush SortSecondaryDescendingImage;                                         // 0x0280 (size: 0xD0)
    FSlateBrush NormalBrush;                                                          // 0x0350 (size: 0xD0)
    FSlateBrush HoveredBrush;                                                         // 0x0420 (size: 0xD0)
    FSlateBrush MenuDropdownImage;                                                    // 0x04F0 (size: 0xD0)
    FSlateBrush MenuDropdownNormalBorderBrush;                                        // 0x05C0 (size: 0xD0)
    FSlateBrush MenuDropdownHoveredBorderBrush;                                       // 0x0690 (size: 0xD0)

}; // Size: 0x760

struct FTableRowStyle : public FSlateWidgetStyle
{
    FSlateBrush SelectorFocusedBrush;                                                 // 0x0010 (size: 0xD0)
    FSlateBrush ActiveHoveredBrush;                                                   // 0x00E0 (size: 0xD0)
    FSlateBrush ActiveBrush;                                                          // 0x01B0 (size: 0xD0)
    FSlateBrush InactiveHoveredBrush;                                                 // 0x0280 (size: 0xD0)
    FSlateBrush InactiveBrush;                                                        // 0x0350 (size: 0xD0)
    bool bUseParentRowBrush;                                                          // 0x0420 (size: 0x1)
    FSlateBrush ParentRowBackgroundBrush;                                             // 0x0430 (size: 0xD0)
    FSlateBrush ParentRowBackgroundHoveredBrush;                                      // 0x0500 (size: 0xD0)
    FSlateBrush EvenRowBackgroundHoveredBrush;                                        // 0x05D0 (size: 0xD0)
    FSlateBrush EvenRowBackgroundBrush;                                               // 0x06A0 (size: 0xD0)
    FSlateBrush OddRowBackgroundHoveredBrush;                                         // 0x0770 (size: 0xD0)
    FSlateBrush OddRowBackgroundBrush;                                                // 0x0840 (size: 0xD0)
    FSlateColor TextColor;                                                            // 0x0910 (size: 0x14)
    FSlateColor SelectedTextColor;                                                    // 0x0924 (size: 0x14)
    FSlateBrush DropIndicator_Above;                                                  // 0x0940 (size: 0xD0)
    FSlateBrush DropIndicator_Onto;                                                   // 0x0A10 (size: 0xD0)
    FSlateBrush DropIndicator_Below;                                                  // 0x0AE0 (size: 0xD0)
    FSlateBrush ActiveHighlightedBrush;                                               // 0x0BB0 (size: 0xD0)
    FSlateBrush InactiveHighlightedBrush;                                             // 0x0C80 (size: 0xD0)

}; // Size: 0xD50

struct FTableViewStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0010 (size: 0xD0)

}; // Size: 0xE0

struct FTextBlockStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;                                                              // 0x0008 (size: 0x60)
    FSlateColor ColorAndOpacity;                                                      // 0x0068 (size: 0x14)
    FVector2D ShadowOffset;                                                           // 0x0080 (size: 0x10)
    FLinearColor ShadowColorAndOpacity;                                               // 0x0090 (size: 0x10)
    FSlateColor SelectedBackgroundColor;                                              // 0x00A0 (size: 0x14)
    FSlateColor HighlightColor;                                                       // 0x00B4 (size: 0x14)
    FSlateBrush HighlightShape;                                                       // 0x00D0 (size: 0xD0)
    FSlateBrush StrikeBrush;                                                          // 0x01A0 (size: 0xD0)
    FSlateBrush UnderlineBrush;                                                       // 0x0270 (size: 0xD0)
    ETextTransformPolicy TransformPolicy;                                             // 0x0340 (size: 0x1)
    ETextOverflowPolicy OverflowPolicy;                                               // 0x0341 (size: 0x1)

}; // Size: 0x350

struct FToolBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0010 (size: 0xD0)
    FSlateBrush ExpandBrush;                                                          // 0x00E0 (size: 0xD0)
    FSlateBrush SeparatorBrush;                                                       // 0x01B0 (size: 0xD0)
    FTextBlockStyle LabelStyle;                                                       // 0x0280 (size: 0x350)
    FEditableTextBoxStyle EditableTextStyle;                                          // 0x05D0 (size: 0xE90)
    FCheckBoxStyle ToggleButton;                                                      // 0x1460 (size: 0xAD0)
    FComboButtonStyle ComboButtonStyle;                                               // 0x1F30 (size: 0x600)
    FButtonStyle SettingsButtonStyle;                                                 // 0x2530 (size: 0x3F0)
    FComboButtonStyle SettingsComboButton;                                            // 0x2920 (size: 0x600)
    FCheckBoxStyle SettingsToggleButton;                                              // 0x2F20 (size: 0xAD0)
    FButtonStyle ButtonStyle;                                                         // 0x39F0 (size: 0x3F0)
    FMargin LabelPadding;                                                             // 0x3DE0 (size: 0x10)
    FMargin SeparatorPadding;                                                         // 0x3DF0 (size: 0x10)
    FMargin ComboButtonPadding;                                                       // 0x3E00 (size: 0x10)
    FMargin ButtonPadding;                                                            // 0x3E10 (size: 0x10)
    FMargin CheckBoxPadding;                                                          // 0x3E20 (size: 0x10)
    FMargin BlockPadding;                                                             // 0x3E30 (size: 0x10)
    FMargin IndentedBlockPadding;                                                     // 0x3E40 (size: 0x10)
    FMargin BackgroundPadding;                                                        // 0x3E50 (size: 0x10)
    FVector2D IconSize;                                                               // 0x3E60 (size: 0x10)
    bool bShowLabels;                                                                 // 0x3E70 (size: 0x1)

}; // Size: 0x3E80

struct FTypeface
{
    TArray<FTypefaceEntry> Fonts;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTypefaceEntry
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FFontData Font;                                                                   // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FVolumeControlStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;                                                         // 0x0010 (size: 0x500)
    FSlateBrush HighVolumeImage;                                                      // 0x0510 (size: 0xD0)
    FSlateBrush MidVolumeImage;                                                       // 0x05E0 (size: 0xD0)
    FSlateBrush LowVolumeImage;                                                       // 0x06B0 (size: 0xD0)
    FSlateBrush NoVolumeImage;                                                        // 0x0780 (size: 0xD0)
    FSlateBrush MutedImage;                                                           // 0x0850 (size: 0xD0)

}; // Size: 0x920

struct FWindowStyle : public FSlateWidgetStyle
{
    FButtonStyle MinimizeButtonStyle;                                                 // 0x0010 (size: 0x3F0)
    FButtonStyle MaximizeButtonStyle;                                                 // 0x0400 (size: 0x3F0)
    FButtonStyle RestoreButtonStyle;                                                  // 0x07F0 (size: 0x3F0)
    FButtonStyle CloseButtonStyle;                                                    // 0x0BE0 (size: 0x3F0)
    FTextBlockStyle TitleTextStyle;                                                   // 0x0FD0 (size: 0x350)
    FSlateBrush ActiveTitleBrush;                                                     // 0x1320 (size: 0xD0)
    FSlateBrush InactiveTitleBrush;                                                   // 0x13F0 (size: 0xD0)
    FSlateBrush FlashTitleBrush;                                                      // 0x14C0 (size: 0xD0)
    FSlateColor BackgroundColor;                                                      // 0x1590 (size: 0x14)
    FSlateBrush OutlineBrush;                                                         // 0x15B0 (size: 0xD0)
    FSlateColor OutlineColor;                                                         // 0x1680 (size: 0x14)
    FSlateBrush BorderBrush;                                                          // 0x16A0 (size: 0xD0)
    FSlateColor BorderColor;                                                          // 0x1770 (size: 0x14)
    FSlateBrush BackgroundBrush;                                                      // 0x1790 (size: 0xD0)
    FSlateBrush ChildBackgroundBrush;                                                 // 0x1860 (size: 0xD0)
    int32 WindowCornerRadius;                                                         // 0x1930 (size: 0x4)
    FMargin BorderPadding;                                                            // 0x1934 (size: 0x10)

}; // Size: 0x1950

class IFontFaceInterface : public IInterface
{
}; // Size: 0x28

class IFontProviderInterface : public IInterface
{
}; // Size: 0x28

class ISlateWidgetStyleContainerInterface : public IInterface
{
}; // Size: 0x28

class UFontBulkData : public UObject
{
}; // Size: 0x70

class USlateThemeManager : public UObject
{
    FGuid CurrentThemeId;                                                             // 0x0028 (size: 0x10)
    FStyleColorList ActiveColors;                                                     // 0x0038 (size: 0x988)

}; // Size: 0x9C0

class USlateTypes : public UObject
{
}; // Size: 0x28

class USlateWidgetStyleAsset : public UObject
{
    class USlateWidgetStyleContainerBase* CustomStyle;                                // 0x0028 (size: 0x8)

}; // Size: 0x30

class USlateWidgetStyleContainerBase : public UObject
{
}; // Size: 0x30

#endif
