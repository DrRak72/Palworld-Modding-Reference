#ifndef UE4SS_SDK_BP_PalSphere_ThrowObject_Robbery_HPP
#define UE4SS_SDK_BP_PalSphere_ThrowObject_Robbery_HPP

class ABP_PalSphere_ThrowObject_Robbery_C : public ABP_PalSphere_ThrowObject_C
{

    void GetCaptureLevel(int32& Level);
    void GetBodyClass(TSubclassOf<class ABP_PalCaptureBodyBase_C>& bodyClass);
}; // Size: 0x42F

#endif
