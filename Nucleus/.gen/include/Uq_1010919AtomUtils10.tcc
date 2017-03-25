/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10106Primer10.h"
#include "Uq_10106Random10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10104Cell10.h"
#include "Uq_10109212DecisionTree10.h"
#include "Ue_102564Gene10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10104Fail10.h"
#include "Uq_10105MDist10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_102717Nucleus10.h"
#include "Un_10412489213WindowScanner10.h"
#include "Uq_10109211ClusterByID10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Un_10411209215SiteVisitorByID10.h"
#include "Ue_102158EggShell10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Uq_1010919AtomUtils10<EC>::Uq_1010919AtomUtils10() : UlamQuark<EC>(MFM_UUID_FOR("Uq1010919AtomUtils10", 0))
  { }

  template<class EC>
  Uq_1010919AtomUtils10<EC>::~Uq_1010919AtomUtils10(){} //gcnl:NodeBlockClass.cpp:1784


//! AtomUtils.ulam:16:   Type getValidType(Atom a)
  template<class EC>
  Ui_Ut_102161u<EC> Uq_1010919AtomUtils10<EC>::Uf_9212getValidType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const
  {

//! AtomUtils.ulam:18:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1096

//! AtomUtils.ulam:19:     Int i = getType(a);
    const T Uh_3tut41981 = Uv_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41982(Uh_3tut41981); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321i<EC> Uh_5tlval41984 = THE_INSTANCE.Uf_7getType(uc, ur, Uh_5tuval41982); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41985 = Uh_5tlval41984.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg41985); //gcnl:NodeVarDecl.cpp:1060

//! AtomUtils.ulam:20:     if (i < 0) f.fail();
    {

//! AtomUtils.ulam:20:     if (i < 0) f.fail();
      const u32 Uh_5tlreg41986 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41987 = _Int32ToInt32(Uh_5tlreg41986, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41989 = Uv_1i.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41990 = _BinOpCompareLessThanInt32(Uh_5tlreg41989, Uh_5tlreg41987, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41990, 1)) //gcnl:NodeControl.cpp:213
      {

//! AtomUtils.ulam:20:     if (i < 0) f.fail();
          UlamRef<EC> Uh_3tur41992(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          Ui_Uq_10104Fail10<EC>::Us::THE_INSTANCE.Uf_4fail(uc, Uh_3tur41992); //gcnl:NodeFunctionCall.cpp:1006
      } // end if
    }

//! AtomUtils.ulam:21:     return (Type) i;
    const u32 Uh_5tlreg41995 = Uv_1i.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg41996 = _Int32ToUnsigned32(Uh_5tlreg41995, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161u<EC> Uh_5tlval41997(Uh_5tlreg41996); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41997); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212getValidType



//! AtomUtils.ulam:28:   Type getEmptyType() {
  template<class EC>
  Ui_Ut_102161u<EC> Uq_1010919AtomUtils10<EC>::Uf_9212getEmptyType(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! AtomUtils.ulam:29:     Empty a;
    Ui_Ue_10105Empty10<EC> Uv_1a; //gcnl:NodeVarDecl.cpp:1096

//! AtomUtils.ulam:30:     return getValidType((Atom) a);
    const T Uh_3tut42000 = Uv_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval42001(Uh_3tut42000); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval42003 = THE_INSTANCE.Uf_9212getValidType(uc, ur, Uh_5tuval42001); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42004 = Uh_5tlval42003.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uh_5tlval42005(Uh_5tlreg42004); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42005); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212getEmptyType



//! AtomUtils.ulam:37:   Bool isEmpty(Atom a) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_1010919AtomUtils10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const
  {

//! AtomUtils.ulam:38:     return getType(a)==getEmptyType();
    const Ui_Ut_102161u<EC> Uh_5tlval42008 = THE_INSTANCE.Uf_9212getEmptyType(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42009 = Uh_5tlval42008.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg42010 = _Unsigned32ToInt32(Uh_5tlreg42009, 16, 32); //gcnl:NodeCast.cpp:723
    const T Uh_3tut42013 = Uv_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval42014(Uh_3tut42013); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321i<EC> Uh_5tlval42016 = THE_INSTANCE.Uf_7getType(uc, ur, Uh_5tuval42014); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42017 = Uh_5tlval42016.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg42018 = _BinOpCompareEqEqInt32(Uh_5tlreg42017, Uh_5tlreg42010, 32); //gcnl:NodeBinaryOpCompare.cpp:313
    Ui_Ut_10111b<EC> Uh_5tlval42019(Uh_5tlreg42018); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42019); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_1010919AtomUtils10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_1010919AtomUtils10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_1010919AtomUtils10<EC>::GetMangledClassName() const
  {
    return "Uq_1010919AtomUtils10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_1010919AtomUtils10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_1010919AtomUtils10<EC>::GetString(u32 sidx)  const
  {
    const u32 USERSTRINGPOOLSIZE = 1; //gcnl:NodeBlockClass.cpp:2538
    static unsigned char UserStringPool[USERSTRINGPOOLSIZE + 1] = 
      "\000"
    ; //gcnl:StringPoolUser.cpp:126

    if(sidx == 0)
      FAIL(UNINITIALIZED_VALUE); //gcnl:NodeBlockClass.cpp:2547
    if(sidx >= USERSTRINGPOOLSIZE)
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2556
    return UserStringPool + sidx + 1; //gcnl:NodeBlockClass.cpp:2562
  } //GetString

  template<class EC>
  u32 Uq_1010919AtomUtils10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_1010919AtomUtils10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_1010919AtomUtils10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_1010919AtomUtils10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_1010919AtomUtils10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_1010919AtomUtils10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

