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
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10104Fail10.h"
#include "Uq_10105MDist10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_102717Nucleus10.h"
#include "Un_10412489213WindowScanner10.h"
#include "Uq_10109211ClusterByID10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Un_10411209215SiteVisitorByID10.h"
#include "Ue_102188EggShell10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"

namespace MFM{

  template<class EC>
  Un_1035449217SiteVisitorByType10<EC>::Un_1035449217SiteVisitorByType10() : UlamTransient<EC>(MFM_UUID_FOR("Un1035449217SiteVisitorByType10", 0))
  { }

  template<class EC>
  Un_1035449217SiteVisitorByType10<EC>::~Un_1035449217SiteVisitorByType10(){} //gcnl:NodeBlockClass.cpp:1826


//! SiteVisitor.ulam:37:   Void reset() {
  template<class EC>
  void Un_1035449217SiteVisitorByType10<EC>::Uf_5reset(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! SiteVisitor.ulam:38:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
    {

//! SiteVisitor.ulam:38:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
      const u32 Uh_5tlreg45277 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg45278 = _Int32ToUnsigned32(Uh_5tlreg45277, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg45278); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitor.ulam:38:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg45279 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg45281 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg45282 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg45281, Uh_5tlreg45279, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg45282, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! SiteVisitor.ulam:39:       unsetType((Category) i);

//! SiteVisitor.ulam:39:       unsetType((Category) i);
          const u32 Uh_5tlreg45285 = Uv_1i.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg45286 = _Unsigned32ToUnsigned32(Uh_5tlreg45285, 32, 5); //gcnl:NodeCast.cpp:723
          Ui_Ut_10151u<EC> Uh_5tlval45287(Uh_5tlreg45286); //func arg& //gcnl:Node.cpp:1128
          THE_INSTANCE.Uf_919unsetType(uc, ur, Uh_5tlval45287); //gcnl:NodeFunctionCall.cpp:1006

//! SiteVisitor.ulam:38:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
Ul_214endcontrolloop222:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SiteVisitor.ulam:38:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
        const u32 Uh_5tlreg45289 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg45290 = _Int32ToUnsigned32(Uh_5tlreg45289, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg45292 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg45293 = _BinOpAddUnsigned32(Uh_5tlreg45292, Uh_5tlreg45290, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg45293); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_5reset



//! SiteVisitor.ulam:42:   Void setType(Category c, ElementType et) {
  template<class EC>
  void Un_1035449217SiteVisitorByType10<EC>::Uf_7setType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_102161u<EC>& Uv_2et) const
  {

//! SiteVisitor.ulam:43:     mType[c] = et;
    const u32 Uh_5tlreg45295 = Uv_2et.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg45297 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg45297 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102161u<EC> Uh_6tlref45299(ur, Uh_5tlreg45297 * 16u + 0u); //gcnl:Node.cpp:1303
    Uh_6tlref45299.write(Uh_5tlreg45295);

//! SiteVisitor.ulam:44:     mInUse[c] = true;
    const u32 Uh_5tlreg45300 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg45302 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg45302 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref45304(ur, Uh_5tlreg45302 * 1u + 512u); //gcnl:Node.cpp:1303
    Uh_6tlref45304.write(Uh_5tlreg45300);

  } // Uf_7setType



//! SiteVisitor.ulam:52:   virtual Void visit(WindowScanner& wsrv, Atom & a, SiteNum sn) 
  template<class EC>
  void Un_1035449217SiteVisitorByType10<EC>::Uf_5visit(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Un_r10412489213WindowScanner10<EC>& Ur_4wsrv, Ui_Ut_r102961a<EC>& Ur_1a, Ui_Ut_10161u<EC>& Uv_2sn)
  {

//! SiteVisitor.ulam:54:     ElementType et = (ElementType) au.getType(a);
    UlamRef<EC> Uh_3tur45306(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut45308 = Ur_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval45309(Uh_3tut45308); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321i<EC> Uh_5tlval45311 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7getType(uc, Uh_3tur45306, Uh_5tuval45309); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg45312 = Uh_5tlval45311.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg45313 = _Int32ToUnsigned32(Uh_5tlreg45312, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161u<EC> Uv_2et(Uh_5tlreg45313); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitor.ulam:55:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i)
    {

//! SiteVisitor.ulam:55:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i)
      const u32 Uh_5tlreg45314 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg45315 = _Int32ToUnsigned32(Uh_5tlreg45314, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg45315); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitor.ulam:55:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i)
      while(true)
      {
        const u32 Uh_5tlreg45316 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg45318 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg45319 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg45318, Uh_5tlreg45316, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg45319, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! SiteVisitor.ulam:56:       if (mInUse[i] && mType[i] == et)

//! SiteVisitor.ulam:56:       if (mInUse[i] && mType[i] == et)
          {

//! SiteVisitor.ulam:56:       if (mInUse[i] && mType[i] == et)
            u32 Uh_5tlreg45320 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg45322 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg45322 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref45324(ur, Uh_5tlreg45322 * 1u + 512u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg45325 = Uh_6tlref45324.read(); //gcnl:Node.cpp:657
            if(_Bool32ToCbool(Uh_5tlreg45325, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg45327 = Uv_2et.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg45329 = Uv_1i.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg45329 >= 32) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r102161u<EC> Uh_6tlref45331(ur, Uh_5tlreg45329 * 16u + 0u); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg45332 = Uh_6tlref45331.read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg45333 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg45332, Uh_5tlreg45327, 16); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg45320 = Uh_5tlreg45333; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg45320, 1)) //gcnl:NodeControl.cpp:213
            {

//! SiteVisitor.ulam:57:         wsrv.categorize(sn, (Category) i);
                UlamRef<EC> Uh_3tur45335(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg45337 = Uv_2sn.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval45338(Uh_5tlreg45337); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg45340 = Uv_1i.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg45341 = _Unsigned32ToUnsigned32(Uh_5tlreg45340, 32, 5); //gcnl:NodeCast.cpp:723
                Ui_Ut_10151u<EC> Uh_5tlval45342(Uh_5tlreg45341); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval45344 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur45335, Uh_5tlval45338, Uh_5tlval45342); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg45345 = Uh_5tlval45344.read(); //gcnl:Node.cpp:1156
            } // end if
          }

//! SiteVisitor.ulam:55:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i)
Ul_214endcontrolloop223:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SiteVisitor.ulam:55:     for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i)
        const u32 Uh_5tlreg45346 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg45347 = _Int32ToUnsigned32(Uh_5tlreg45346, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg45349 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg45350 = _BinOpAddUnsigned32(Uh_5tlreg45349, Uh_5tlreg45347, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg45350); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_5visit



//! SiteVisitor.ulam:47:   Void unsetType(Category c) {
  template<class EC>
  void Un_1035449217SiteVisitorByType10<EC>::Uf_919unsetType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitor.ulam:48:     mInUse[c] = false;
    const u32 Uh_5tlreg45351 = 0u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg45353 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg45353 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref45355(ur, Uh_5tlreg45353 * 1u + 512u); //gcnl:Node.cpp:1303
    Uh_6tlref45355.write(Uh_5tlreg45351);

//! SiteVisitor.ulam:49:     mType[c] = 0;
    const u32 Uh_5tlreg45356 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg45357 = _Int32ToUnsigned32(Uh_5tlreg45356, 2, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg45359 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg45359 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102161u<EC> Uh_6tlref45361(ur, Uh_5tlreg45359 * 16u + 0u); //gcnl:Node.cpp:1303
    Uh_6tlref45361.write(Uh_5tlreg45357);

  } // Uf_919unsetType


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Un_1035449217SiteVisitorByType10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Ut_2322161u", "mType", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Ut_232111b", "mInUse", 512u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Un_1035449217SiteVisitorByType10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Un_1035449217SiteVisitorByType10<EC>::GetMangledClassName() const
  {
    return "Un_1035449217SiteVisitorByType10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Un_1035449217SiteVisitorByType10<EC>::GetClassLength( ) const
  {
    return 544; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Un_1035449217SiteVisitorByType10<EC>::GetString(u32 sidx)  const
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
  u32 Un_1035449217SiteVisitorByType10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  void Un_1035449217SiteVisitorByType10<EC>::getDefaultTransient(u32 pos, BitStorage<EC>& bvsref) const
  {
    MFM_API_ASSERT_ARG((pos + bvsref.GetBitSize()) >= 544u); //gcnl:NodeBlockClass.cpp:2219

    // Initialize any data members:
    static const u32 vales[(544 + 31)/32] = { 0x0 }; //gcnl:CompilerState.cpp:1351
    static BitVector<544> initBV; //gcnl:CompilerState.cpp:1357
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1373
      //correct runtime regnum for strings
    } //gcnl:CompilerState.cpp:1395
    bvsref.WriteBV(pos, initBV); //gcnl:NodeBlockClass.cpp:2233
  } //getDefaultTransient

  template<class EC>
  VfuncPtr Un_1035449217SiteVisitorByType10<EC>::m_vtable[3] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor),
    (VfuncPtr) ((typename Un_1035449217SiteVisitorByType10<EC>::Uf_5visit13r10412489213WindowScanner10r102961a10161u) &Un_1035449217SiteVisitorByType10<EC>::Uf_5visit)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Un_1035449217SiteVisitorByType10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 3) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Un_1035449217SiteVisitorByType10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109211SiteVisitor10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Un_1035449217SiteVisitorByType10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

