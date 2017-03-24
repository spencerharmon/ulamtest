
#include "UlamCustomElements.h"

#ifdef ELEMENT_PLUG_IN

#include "StdEventConfig.h"
#include "ElementLibraryLoader.h"

extern "C" {

  static MFM::UlamElementInfoForUe_10105Empty10<MFM::StdEventConfig> _ueinfo10(MFM::Ue_10105Empty10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub10 (
      MFM::Ue_10105Empty10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo10);

  static MFM::UlamElementInfoForUe_102128EggShell10<MFM::StdEventConfig> _ueinfo11(MFM::Ue_102128EggShell10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub11 (
      MFM::Ue_102128EggShell10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo11);

  static MFM::UlamElementInfoForUe_102574Gene10<MFM::StdEventConfig> _ueinfo12(MFM::Ue_102574Gene10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub12 (
      MFM::Ue_102574Gene10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo12);

  static MFM::UlamElementInfoForUe_102717Nucleus10<MFM::StdEventConfig> _ueinfo13(MFM::Ue_102717Nucleus10<MFM::StdEventConfig>::THE_INSTANCE);
  static MFM::UlamElementLibraryStub<MFM::StdEventConfig> _uelstub13 (
      MFM::Ue_102717Nucleus10<MFM::StdEventConfig>::THE_INSTANCE,
      &_ueinfo13);

  static MFM::ElementLibraryStub<MFM::StdEventConfig> * (_elementStubPtrArray_[]) = {
    &_uelstub10,
    &_uelstub11,
    &_uelstub12,
    &_uelstub13
  };

  static MFM::UlamClass<MFM::StdEventConfig> * (_otherUlamClassPtrArray_[]) = {
    &MFM::Uq_10104Cell10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10104Fail10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10105MDist10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10106Random10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10106UrSelf10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_1010919AtomUtils10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_1010919SiteUtils10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109210ColorUtils10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109210DebugUtils10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109211ClusterByID10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109211EventWindow10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109211SiteVisitor10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_10109212DecisionTree10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Uq_102323C2D10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Un_102329211OutOfBounds10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Un_1035449217SiteVisitorByType10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Un_10411209215SiteVisitorByID10<MFM::StdEventConfig>::THE_INSTANCE,
    &MFM::Un_10412489213WindowScanner10<MFM::StdEventConfig>::THE_INSTANCE
  };
  static MFM::ElementLibrary<MFM::StdEventConfig> el = {
    MFM::ELEMENT_LIBRARY_MAGIC,
    MFM::ELEMENT_LIBRARY_VERSION,
    MFM::ELEMENT_LIBRARY_SUBVERSION,
    0,
    MFM_BUILD_DATE,
    MFM_BUILD_TIME,
    4,
    _elementStubPtrArray_,
    18,
    _otherUlamClassPtrArray_
  };
  void * MFM_ELEMENT_LIBRARY_LOADER_SYMBOL =  &el;
}

#endif /* ELEMENT_PLUG_IN */

