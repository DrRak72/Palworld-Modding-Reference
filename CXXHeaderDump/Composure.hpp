#ifndef UE4SS_SDK_Composure_HPP
#define UE4SS_SDK_Composure_HPP

#include "Composure_enums.hpp"

struct FCompositingMaterial : public FCompositingParamPayload
{
    class UMaterialInterface* Material;                                               // 0x00F0 (size: 0x8)
    TMap<class FName, class FName> ParamPassMappings;                                 // 0x00F8 (size: 0x50)
    TMap<class FName, class FNamedCompMaterialParam> RequiredMaterialParams;          // 0x0148 (size: 0x50)
    class UMaterialInstanceDynamic* CachedMID;                                        // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FCompositingParamPayload
{
    TMap<FName, float> ScalarParamOverrides;                                          // 0x0000 (size: 0x50)
    TMap<class FName, class FLinearColor> VectorParamOverrides;                       // 0x0050 (size: 0x50)
    TMap<class FName, class UTexture*> TextureParamOverrides;                         // 0x00A0 (size: 0x50)

}; // Size: 0xF0

struct FComposurePostMoveSettings
{
    FVector2D Pivot;                                                                  // 0x0000 (size: 0x10)
    FVector2D Translation;                                                            // 0x0010 (size: 0x10)
    float RotationAngle;                                                              // 0x0020 (size: 0x4)
    float Scale;                                                                      // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FComposureUVMapSettings
{
    FMatrix PreUVDisplacementMatrix;                                                  // 0x0000 (size: 0x80)
    FMatrix PostUVDisplacementMatrix;                                                 // 0x0080 (size: 0x80)
    FVector2D DisplacementDecodeParameters;                                           // 0x0100 (size: 0x10)
    class UTexture* DisplacementTexture;                                              // 0x0110 (size: 0x8)
    uint8 bUseDisplacementBlueAndAlphaChannels;                                       // 0x0118 (size: 0x1)

}; // Size: 0x120

struct FMovieSceneComposureExportPass
{
    FName TransformPassName;                                                          // 0x0000 (size: 0x8)
    bool bRenamePass;                                                                 // 0x0008 (size: 0x1)
    FName ExportedAs;                                                                 // 0x000C (size: 0x8)

}; // Size: 0x14

struct FMovieSceneComposureExportSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneComposureExportPass Pass;                                              // 0x0020 (size: 0x14)

}; // Size: 0x38

struct FMovieSceneComposurePostMoveSettingsSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Pivot;                                                    // 0x0038 (size: 0x220)
    FMovieSceneFloatChannel Translation;                                              // 0x0258 (size: 0x220)
    FMovieSceneFloatChannel RotationAngle;                                            // 0x0478 (size: 0x110)
    FMovieSceneFloatChannel Scale;                                                    // 0x0588 (size: 0x110)
    EMovieSceneBlendType BlendType;                                                   // 0x0698 (size: 0x1)

}; // Size: 0x6A0

struct FNamedCompMaterialParam
{
    FName ParamName;                                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

class ACompositingCaptureBase : public ACompositingElement
{
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0580 (size: 0x8)
    bool bApplyDistortion;                                                            // 0x0588 (size: 0x1)
    FComponentReference LensComponentPicker;                                          // 0x0590 (size: 0x28)
    float OverscanFactor;                                                             // 0x05B8 (size: 0x4)
    float OriginalFocalLength;                                                        // 0x05BC (size: 0x4)
    class UMaterialInstanceDynamic* LastDistortionMID;                                // 0x05C0 (size: 0x8)

    void UpdateDistortion();
}; // Size: 0x5C8

class ACompositingElement : public AComposurePipelineBaseActor
{
    class UComposureCompositingTargetComponent* CompositingTarget;                    // 0x02B0 (size: 0x8)
    class UComposurePostProcessingPassProxy* PostProcessProxy;                        // 0x02B8 (size: 0x8)
    TArray<class UCompositingElementInput*> Inputs;                                   // 0x02C0 (size: 0x10)
    TArray<class UCompositingElementTransform*> TransformPasses;                      // 0x02D0 (size: 0x10)
    TArray<class UCompositingElementOutput*> Outputs;                                 // 0x02E0 (size: 0x10)
    ESceneCameraLinkType CameraSource;                                                // 0x02F0 (size: 0x4)
    TLazyObjectPtr<class ACameraActor> TargetCameraActor;                             // 0x02F4 (size: 0x1C)
    EInheritedSourceType ResolutionSource;                                            // 0x0310 (size: 0x4)
    FIntPoint RenderResolution;                                                       // 0x0314 (size: 0x8)
    TEnumAsByte<ETextureRenderTargetFormat> RenderFormat;                             // 0x031C (size: 0x1)
    bool bUseSharedTargetPool;                                                        // 0x031D (size: 0x1)
    int32 FreezeFrameMask;                                                            // 0x0350 (size: 0x4)
    FCompositingElementOnTransformPassRendered_BP OnTransformPassRendered_BP;         // 0x0358 (size: 0x10)
    void DynamicOnTransformPassRendered(class ACompositingElement* CompElement, class UTexture* Texture, FName PassName);
    FCompositingElementOnFinalPassRendered_BP OnFinalPassRendered_BP;                 // 0x0368 (size: 0x10)
    void DynamicOnFinalPassRendered(class ACompositingElement* CompElement, class UTexture* Texture);
    FName CompShotIdName;                                                             // 0x0378 (size: 0x8)
    class ACompositingElement* Parent;                                                // 0x0380 (size: 0x8)
    TArray<class ACompositingElement*> ChildLayers;                                   // 0x0388 (size: 0x10)
    float OutputOpacity;                                                              // 0x039C (size: 0x4)
    TMap<class UCompositingElementInput*, class ECompPassConstructionType> UserConstructedInputs; // 0x03A0 (size: 0x50)
    TMap<class UCompositingElementTransform*, class ECompPassConstructionType> UserConstructedTransforms; // 0x03F0 (size: 0x50)
    TMap<class UCompositingElementOutput*, class ECompPassConstructionType> UserConstructedOutputs; // 0x0440 (size: 0x50)
    TArray<class UCompositingElementInput*> InternalInputs;                           // 0x0490 (size: 0x10)
    TArray<class UCompositingElementTransform*> InternalTransformPasses;              // 0x04A0 (size: 0x10)
    TArray<class UCompositingElementOutput*> InternalOutputs;                         // 0x04B0 (size: 0x10)
    class UAlphaTransformPass* InternalAlphaPass;                                     // 0x04C0 (size: 0x8)

    void SetTargetCamera(class ACameraActor* NewCameraActor);
    void SetRenderResolution(FIntPoint NewResolution);
    void SetOpacity(const float NewOpacity);
    void SetElementName(const FName NewName);
    void SetEditorColorPickingTarget(class UTextureRenderTarget2D* PickingTarget);
    void SetEditorColorPickerDisplayImage(class UTexture* PickerDisplayImage);
    class UTextureRenderTarget2D* RequestNamedRenderTarget(const FName ReferenceName, const float RenderPercentage, ETargetUsageFlags UsageTag);
    class UTextureRenderTarget2D* RenderCompositingMaterialToTarget(FCompositingMaterial& CompMaterial, class UTextureRenderTarget2D* RenderTarget, FName ResultLookupName);
    class UTexture* RenderCompositingMaterial(FCompositingMaterial& CompMaterial, float RenderScale, FName ResultLookupName, ETargetUsageFlags UsageTag);
    class UTexture* RenderCompElement(bool bCameraCutThisFrame);
    bool ReleaseOwnedTarget(class UTextureRenderTarget2D* OwnedTarget);
    void RegisterPassResult(FName ReferenceName, class UTexture* PassResult, bool bSetAsLatestRenderResult);
    bool IsSubElement();
    TArray<class UCompositingElementTransform*> GetTransformsList();
    FIntPoint GetRenderResolution();
    int32 GetRenderPriority();
    TArray<class UCompositingElementOutput*> GetOutputsList();
    float GetOpacity();
    class UTexture* GetLatestRenderResult();
    TArray<class UCompositingElementInput*> GetInputsList();
    class ACompositingElement* GetElementParent();
    FName GetCompElementName();
    TArray<class ACompositingElement*> GetChildElements();
    class UCompositingElementTransform* FindTransformPass(TSubclassOf<class UCompositingElementTransform> TransformType, class UTexture*& PassResult, FName OptionalPassName);
    class ACameraActor* FindTargetCamera();
    class UCompositingElementOutput* FindOutputPass(TSubclassOf<class UCompositingElementOutput> OutputType, FName OptionalPassName);
    class UTexture* FindNamedRenderResult(FName PassName, bool bSearchSubElements);
    class UCompositingElementInput* FindInputPass(TSubclassOf<class UCompositingElementInput> InputType, class UTexture*& PassResult, FName OptionalPassName);
    bool DeletePass(class UCompositingElementPass* PassToDelete);
    class UCompositingElementTransform* CreateNewTransformPass(FName PassName, TSubclassOf<class UCompositingElementTransform> TransformType);
    class UCompositingElementOutput* CreateNewOutputPass(FName PassName, TSubclassOf<class UCompositingElementOutput> OutputType);
    class UCompositingElementInput* CreateNewInputPass(FName PassName, TSubclassOf<class UCompositingElementInput> InputType);
    class UCompositingElementTransform* AddNewTransformPass(FName PassName, TSubclassOf<class UCompositingElementTransform> TransformType);
    class UCompositingElementOutput* AddNewOutputPass(FName PassName, TSubclassOf<class UCompositingElementOutput> OutputType);
    class UCompositingElementInput* AddNewInputPass(FName PassName, TSubclassOf<class UCompositingElementInput> InputType);
}; // Size: 0x580

class AComposurePipelineBaseActor : public AActor
{
    bool bAutoRun;                                                                    // 0x0290 (size: 0x1)
    bool bAutoRunChildElementsAndSelf;                                                // 0x0291 (size: 0x1)

    void SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf);
    void SetAutoRun(bool bNewAutoRunVal);
    bool IsActivelyRunning();
    void EnqueueRendering(bool bCameraCutThisFrame);
    bool AreChildrenAndSelfAutoRun();
}; // Size: 0x2A8

class ICompEditorImagePreviewInterface : public IInterface
{
}; // Size: 0x28

class ICompImageColorPickerInterface : public ICompEditorImagePreviewInterface
{
}; // Size: 0x28

class ICompositingInputInterface : public IInterface
{

    void OnFrameEnd(class UCompositingInputInterfaceProxy* Proxy);
    void OnFrameBegin(class UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame);
    class UTexture* GenerateInput(class UCompositingInputInterfaceProxy* Proxy);
}; // Size: 0x28

class ICompositingTextureLookupTable : public IInterface
{

    bool FindNamedPassResult(FName LookupName, class UTexture*& OutTexture);
}; // Size: 0x28

class IComposurePlayerCompositingInterface : public IInterface
{
}; // Size: 0x28

class IMovieSceneComposureExportClient : public IInterface
{

    void InitializeForExport(class UMovieSceneComposureExportInitializer* ExportInitializer);
}; // Size: 0x28

class UAlphaTransformPass : public UCompositingElementTransform
{
    float AlphaScale;                                                                 // 0x0070 (size: 0x4)
    class UMaterialInterface* DefaultMaterial;                                        // 0x0078 (size: 0x8)
    class UMaterialInstanceDynamic* AlphaTransformMID;                                // 0x0080 (size: 0x8)

}; // Size: 0x88

class UColorConverterOutputPass : public UCompositingElementOutput
{
    class UCompositingElementTransform* ColorConverter;                               // 0x0068 (size: 0x8)
    TSubclassOf<class UCompositingElementTransform> DefaultConverterClass;            // 0x0070 (size: 0x8)

}; // Size: 0x78

class UCompositingElementInput : public UCompositingElementPass
{
    bool bIntermediate;                                                               // 0x0060 (size: 0x1)

    class UTexture* GenerateInput();
}; // Size: 0x68

class UCompositingElementMaterialPass : public UCompositingPostProcessPass
{
    FCompositingMaterial Material;                                                    // 0x0088 (size: 0x1A8)

    bool SetParameterMapping(FName TextureParamName, FName ComposureLayerName);
    void SetMaterialInterface(class UMaterialInterface* NewMaterial);
    void ApplyMaterialParams(class UMaterialInstanceDynamic* Mid);
}; // Size: 0x230

class UCompositingElementOutput : public UCompositingElementPass
{

    void RelayOutput(class UTexture* FinalResult, class UComposurePostProcessingPassProxy* PostProcessProxy);
}; // Size: 0x60

class UCompositingElementPass : public UObject
{
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)
    FName PassName;                                                                   // 0x002C (size: 0x8)

    void SetPassEnabled(bool bSetEnabledTo);
    void Reset();
    class UTextureRenderTarget2D* RequestRenderTarget(FIntPoint Dimensions, TEnumAsByte<ETextureRenderTargetFormat> Format);
    class UTextureRenderTarget2D* RequestNativelyFormattedTarget(float RenderScale);
    bool ReleaseRenderTarget(class UTextureRenderTarget2D* AssignedTarget);
    void OnFrameEnd();
    void OnFrameBegin(bool bCameraCutThisFrame);
    void OnEnabled();
    void OnDisabled();
    bool IsPassEnabled();
}; // Size: 0x60

class UCompositingElementTransform : public UCompositingElementPass
{
    bool bIntermediate;                                                               // 0x0060 (size: 0x1)

    class UTexture* FindNamedPrePassResult(FName PassLookupName);
    class UTexture* ApplyTransform(class UTexture* Input, class UComposurePostProcessingPassProxy* PostProcessProxy, class ACameraActor* TargetCamera);
}; // Size: 0x70

class UCompositingInputInterfaceProxy : public UCompositingElementInput
{
    TScriptInterface<class ICompositingInputInterface> CompositingInput;              // 0x0068 (size: 0x10)

}; // Size: 0x78

class UCompositingMediaCaptureOutput : public UColorConverterOutputPass
{
    class UMediaOutput* CaptureOutput;                                                // 0x0078 (size: 0x8)
    class UMediaCapture* ActiveCapture;                                               // 0x0080 (size: 0x8)

}; // Size: 0x88

class UCompositingMediaInput : public UCompositingElementInput
{
    FCompositingMaterial MediaTransformMaterial;                                      // 0x0068 (size: 0x1A8)
    class UMaterialInterface* DefaultMaterial;                                        // 0x0210 (size: 0x8)
    class UMaterialInterface* DefaultTestPlateMaterial;                               // 0x0218 (size: 0x8)
    class UMaterialInstanceDynamic* FallbackMID;                                      // 0x0220 (size: 0x8)

}; // Size: 0x228

class UCompositingOpenColorIOPass : public UCompositingElementTransform
{
    FOpenColorIOColorConversionSettings ColorConversionSettings;                      // 0x0070 (size: 0x80)

}; // Size: 0xF0

class UCompositingPickerAsyncTask : public UBlueprintAsyncActionBase
{
    FCompositingPickerAsyncTaskOnPick OnPick;                                         // 0x0038 (size: 0x10)
    void OnPixelPicked(const FVector2D& PickedUV, const FLinearColor& SampledColor);
    FCompositingPickerAsyncTaskOnCancel OnCancel;                                     // 0x0048 (size: 0x10)
    void OnPixelPicked(const FVector2D& PickedUV, const FLinearColor& SampledColor);
    FCompositingPickerAsyncTaskOnAccept OnAccept;                                     // 0x0058 (size: 0x10)
    void OnPixelPicked(const FVector2D& PickedUV, const FLinearColor& SampledColor);
    class UTextureRenderTarget2D* PickerTarget;                                       // 0x0068 (size: 0x8)
    class UTexture* PickerDisplayImage;                                               // 0x0070 (size: 0x8)

    class UCompositingPickerAsyncTask* OpenCompositingPicker(class UTextureRenderTarget2D* PickerTarget, class UTexture* DisplayImage, FText WindowTitle, const bool bAverageColorOnDrag, const bool bUseImplicitGamma);
}; // Size: 0x80

class UCompositingPostProcessPass : public UCompositingElementTransform
{
    float RenderScale;                                                                // 0x0070 (size: 0x4)
    TArray<class UComposurePostProcessPassPolicy*> PostProcessPasses;                 // 0x0078 (size: 0x10)

}; // Size: 0x88

class UCompositingTonemapPass : public UCompositingElementTransform
{
    FColorGradingSettings ColorGradingSettings;                                       // 0x0070 (size: 0x290)
    FFilmStockSettings FilmStockSettings;                                             // 0x0300 (size: 0x14)
    float ChromaticAberration;                                                        // 0x0314 (size: 0x4)
    class UComposureTonemapperPassPolicy* TonemapPolicy;                              // 0x0318 (size: 0x8)

}; // Size: 0x320

class UComposureBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetUVMapSettingsToMaterialParameters(const FComposureUVMapSettings& UVMapSettings, class UMaterialInstanceDynamic* Material);
    void RequestRedrawComposureViewport();
    bool RenameComposureElement(const FName OriginalElementName, const FName NewElementName);
    void RefreshComposureElementList();
    bool IsComposureElementDrawing(class ACompositingElement* CompElement);
    void InvertUVDisplacementMapEncodingParameters(const FVector2D& In, FVector2D& Out);
    void GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, FVector2D& RedGreenUVFactors);
    void GetProjectionMatrixFromPostMoveSettings(const FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, FMatrix& ProjectionMatrix);
    void GetPlayerDisplayGamma(const class APlayerCameraManager* PlayerCameraManager, float& DisplayGamma);
    void GetCroppingUVTransformationMatrixFromPostMoveSettings(const FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, FMatrix& CropingUVTransformationMatrix, FMatrix& UncropingUVTransformationMatrix);
    class ACompositingElement* GetComposureElement(const FName ElementName);
    void DeleteComposureElementAndChildren(const FName ElementToDelete);
    class UComposurePlayerCompositingTarget* CreatePlayerCompositingTarget(class UObject* WorldContextObject);
    class ACompositingElement* CreateComposureElement(const FName ElementName, TSubclassOf<class ACompositingElement> ClassType, class AActor* LevelContext);
    void CopyCameraSettingsToSceneCapture(class UCameraComponent* SrcCamera, class USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor);
    bool AttachComposureElement(const FName ParentName, const FName ChildName);
}; // Size: 0x28

class UComposureCompositingTargetComponent : public UActorComponent
{
    class UTexture* DisplayTexture;                                                   // 0x00A8 (size: 0x8)

    void SetDisplayTexture(class UTexture* DisplayTexture);
    class UTexture* GetDisplayTexture();
}; // Size: 0xB0

class UComposureGameSettings : public UObject
{
    FSoftObjectPath StaticVideoPlateDebugImage;                                       // 0x0028 (size: 0x20)
    bool bSceneCapWarnOfMissingCam;                                                   // 0x0048 (size: 0x1)
    FSoftObjectPath FallbackCompositingTexture;                                       // 0x0050 (size: 0x20)
    class UTexture* FallbackCompositingTextureObj;                                    // 0x0070 (size: 0x8)

}; // Size: 0x78

class UComposureLensBloomPass : public UComposurePostProcessPass
{
    FLensBloomSettings Settings;                                                      // 0x02C0 (size: 0xC0)
    class UMaterialInstanceDynamic* TonemapperReplacingMID;                           // 0x0380 (size: 0x8)

    void SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic* Material);
    void BloomToRenderTarget();
}; // Size: 0x390

class UComposureLensBloomPassPolicy : public UComposurePostProcessPassPolicy
{
    FLensBloomSettings Settings;                                                      // 0x0028 (size: 0xC0)
    class UMaterialInterface* ReplacementMaterial;                                    // 0x00E8 (size: 0x8)
    FName BloomIntensityParamName;                                                    // 0x00F0 (size: 0x8)
    class UMaterialInstanceDynamic* TonemapperReplacmentMID;                          // 0x00F8 (size: 0x8)

}; // Size: 0x100

class UComposurePlayerCompositingCameraModifier : public UCameraModifier
{
    TScriptInterface<class IComposurePlayerCompositingInterface> Target;              // 0x0050 (size: 0x10)

}; // Size: 0x60

class UComposurePlayerCompositingTarget : public UObject
{
    class APlayerCameraManager* PlayerCameraManager;                                  // 0x0030 (size: 0x8)
    class UComposurePlayerCompositingCameraModifier* PlayerCameraModifier;            // 0x0038 (size: 0x8)
    class UMaterialInstanceDynamic* ReplaceTonemapperMID;                             // 0x0040 (size: 0x8)

    void SetRenderTarget(class UTextureRenderTarget2D* RenderTarget);
    class APlayerCameraManager* SetPlayerCameraManager(class APlayerCameraManager* PlayerCameraManager);
    class APlayerCameraManager* GetPlayerCameraManager();
}; // Size: 0x78

class UComposurePostProcessBlendable : public UObject
{
    class UComposurePostProcessPass* Target;                                          // 0x0030 (size: 0x8)

}; // Size: 0x38

class UComposurePostProcessPass : public USceneComponent
{
    class USceneCaptureComponent2D* SceneCapture;                                     // 0x02A0 (size: 0x8)
    class UComposurePostProcessBlendable* BlendableInterface;                         // 0x02A8 (size: 0x8)
    class UMaterialInterface* SetupMaterial;                                          // 0x02B0 (size: 0x8)
    class UMaterialInterface* TonemapperReplacement;                                  // 0x02B8 (size: 0x8)

    void SetSetupMaterial(class UMaterialInterface* Material);
    void SetOutputRenderTarget(class UTextureRenderTarget2D* RenderTarget);
    class UMaterialInterface* GetSetupMaterial();
    class UTextureRenderTarget2D* GetOutputRenderTarget();
}; // Size: 0x2C0

class UComposurePostProcessPassPolicy : public UObject
{

    void SetupPostProcess(class USceneCaptureComponent2D* SceneCapture, class UMaterialInterface*& TonemapperOverride);
}; // Size: 0x28

class UComposurePostProcessingPassProxy : public UComposurePostProcessPass
{
    class UMaterialInstanceDynamic* SetupMID;                                         // 0x02C0 (size: 0x8)

    void Execute(class UTexture* PrePassInput, class UComposurePostProcessPassPolicy* PostProcessPass);
}; // Size: 0x2D0

class UComposureTonemapperPass : public UComposurePostProcessPass
{
    FColorGradingSettings ColorGradingSettings;                                       // 0x02C0 (size: 0x290)
    FFilmStockSettings FilmStockSettings;                                             // 0x0550 (size: 0x14)
    float ChromaticAberration;                                                        // 0x0564 (size: 0x4)

    void TonemapToRenderTarget();
}; // Size: 0x570

class UComposureTonemapperPassPolicy : public UComposurePostProcessPassPolicy
{
    FColorGradingSettings ColorGradingSettings;                                       // 0x0030 (size: 0x290)
    FFilmStockSettings FilmStockSettings;                                             // 0x02C0 (size: 0x14)
    float ChromaticAberration;                                                        // 0x02D4 (size: 0x4)

}; // Size: 0x2E0

class UEXRFileCompositingOutput : public UCompositingElementOutput
{
    FDirectoryPath OutputDirectiory;                                                  // 0x0060 (size: 0x10)
    FString FilenameFormat;                                                           // 0x0070 (size: 0x10)
    FFrameRate OutputFrameRate;                                                       // 0x0080 (size: 0x8)
    EExrCompressionOptions Compression;                                               // 0x0088 (size: 0x1)

}; // Size: 0x98

class UMediaTextureCompositingInput : public UCompositingMediaInput
{
    class UMediaTexture* MediaSource;                                                 // 0x0228 (size: 0x8)

}; // Size: 0x230

class UMovieSceneComposureExportInitializer : public UObject
{

    void ExportSceneCaptureBuffers(class ACompositingElement* CompShotElement, class USceneCaptureComponent2D* SceneCapture, const TArray<FString>& BuffersToExport);
}; // Size: 0x38

class UMovieSceneComposureExportSection : public UMovieSceneSection
{
}; // Size: 0xF0

class UMovieSceneComposureExportTrack : public UMovieSceneTrack
{
    FMovieSceneComposureExportPass Pass;                                              // 0x00A0 (size: 0x14)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UMovieSceneComposurePostMoveSettingsSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel Pivot;                                                    // 0x00F0 (size: 0x220)
    FMovieSceneFloatChannel Translation;                                              // 0x0310 (size: 0x220)
    FMovieSceneFloatChannel RotationAngle;                                            // 0x0530 (size: 0x110)
    FMovieSceneFloatChannel Scale;                                                    // 0x0640 (size: 0x110)

}; // Size: 0x750

class UMovieSceneComposurePostMoveSettingsTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xD0

class UMultiPassChromaKeyer : public UCompositingElementTransform
{
    TArray<FLinearColor> KeyColors;                                                   // 0x0070 (size: 0x10)
    FCompositingMaterial KeyerMaterial;                                               // 0x0080 (size: 0x1A8)
    class UTexture* DefaultWhiteTexture;                                              // 0x0228 (size: 0x8)

}; // Size: 0x230

class UMultiPassDespill : public UCompositingElementTransform
{
    TArray<FLinearColor> KeyColors;                                                   // 0x0070 (size: 0x10)
    FCompositingMaterial KeyerMaterial;                                               // 0x0080 (size: 0x1A8)
    class UTexture* DefaultWhiteTexture;                                              // 0x0228 (size: 0x8)

}; // Size: 0x230

class UPlayerCompOutputCameraModifier : public UCameraModifier
{
    class UPlayerViewportCompositingOutput* Owner;                                    // 0x0048 (size: 0x8)

}; // Size: 0x50

class UPlayerViewportCompositingOutput : public UColorConverterOutputPass
{
    int32 PlayerIndex;                                                                // 0x0080 (size: 0x4)
    bool ApplyToneCurve;                                                              // 0x0084 (size: 0x1)
    class UPlayerCompOutputCameraModifier* ActiveCamModifier;                         // 0x0090 (size: 0x8)
    class UMaterialInterface* TonemapperBaseMat;                                      // 0x0098 (size: 0x8)
    class UMaterialInterface* PreTonemapBaseMat;                                      // 0x00A0 (size: 0x8)
    class UMaterialInstanceDynamic* ViewportOverrideMID;                              // 0x00A8 (size: 0x8)

}; // Size: 0xB8

class URenderTargetCompositingOutput : public UCompositingElementOutput
{
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0060 (size: 0x8)

}; // Size: 0x68

#endif
