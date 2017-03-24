/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_102128EggShell10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109211ClusterByID10.h"
#include "Uq_10104Cell10.h"
#include "Ue_102717Nucleus10.h"
#include "Ue_102574Gene10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10104Fail10.h"
#include "Uq_10105MDist10.h"
#include "Uq_102323C2D10.h"
#include "Un_10412489213WindowScanner10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_10411209215SiteVisitorByID10.h"
#include "Uq_10109212DecisionTree10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Uq_10106Random10<EC>::Uq_10106Random10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10106Random10", 0))
  { }

  template<class EC>
  Uq_10106Random10<EC>::~Uq_10106Random10(){} //gcnl:NodeBlockClass.cpp:1784


//! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_4bits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:16:     if (max <= 0) return 0;
    {

//! Random.ulam:16:     if (max <= 0) return 0;
      const u32 Uh_5tlreg43332 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43333 = _Int32ToInt32(Uh_5tlreg43332, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43335 = Uv_3max.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43336 = _BinOpCompareLessEqualInt32(Uh_5tlreg43335, Uh_5tlreg43333, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43336, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:16:     if (max <= 0) return 0;
          const u32 Uh_5tlreg43337 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43338 = _Int32ToUnsigned32(Uh_5tlreg43337, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval43339(Uh_5tlreg43338); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43339); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_5tlreg43342 = Uv_3max.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43343 = _Int32ToUnsigned32(Uh_5tlreg43342, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval43344(Uh_5tlreg43343); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval43346 = THE_INSTANCE.Uf_4bits(uc, ur, Uh_5tlval43344); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43347 = Uh_5tlval43346.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval43348(Uh_5tlreg43347); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43348); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4bits



//! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_6create(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:22:     if (max <= 0) return 0;
    {

//! Random.ulam:22:     if (max <= 0) return 0;
      const u32 Uh_5tlreg43349 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43350 = _Int32ToInt32(Uh_5tlreg43349, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43352 = Uv_3max.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43353 = _BinOpCompareLessEqualInt32(Uh_5tlreg43352, Uh_5tlreg43350, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43353, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:22:     if (max <= 0) return 0;
          const u32 Uh_5tlreg43354 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43355 = _Int32ToUnsigned32(Uh_5tlreg43354, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval43356(Uh_5tlreg43355); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43356); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_5tlreg43359 = Uv_3max.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43360 = _Int32ToUnsigned32(Uh_5tlreg43359, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval43361(Uh_5tlreg43360); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval43363 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval43361); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43364 = Uh_5tlval43363.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval43365(Uh_5tlreg43364); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43365); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6create



//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_5oneIn(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_4odds) const
  {

//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
    const u32 Uh_5tlreg43367 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43368 = _Int32ToUnsigned32(Uh_5tlreg43367, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval43369(Uh_5tlreg43368); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43371 = Uv_4odds.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321u<EC> Uh_5tlval43372(Uh_5tlreg43371); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval43374 = THE_INSTANCE.Uf_6oddsOf(uc, ur, Uh_5tlval43369, Uh_5tlval43372); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43375 = Uh_5tlval43374.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval43376(Uh_5tlreg43375); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43376); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5oneIn



//! Random.ulam:26:   Int between(Int lo, Int hi) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10106Random10<EC>::Uf_7between(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2lo, Ui_Ut_102321i<EC>& Uv_2hi) const
  {

//! Random.ulam:27:     if (lo > hi) {
    {

//! Random.ulam:27:     if (lo > hi) {
      const u32 Uh_5tlreg43378 = Uv_2hi.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43380 = Uv_2lo.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43381 = _BinOpCompareGreaterThanInt32(Uh_5tlreg43380, Uh_5tlreg43378, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43381, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Random.ulam:28:       Int t = hi;
          const u32 Uh_5tlreg43383 = Uv_2hi.read(); //gcnl:Node.cpp:691
          Ui_Ut_102321i<EC> Uv_1t(Uh_5tlreg43383); //gcnl:NodeVarDecl.cpp:1060

//! Random.ulam:29:       hi = lo;
          const u32 Uh_5tlreg43385 = Uv_2lo.read(); //gcnl:Node.cpp:691
          Uv_2hi.write(Uh_5tlreg43385); //gcnl:Node.cpp:885

//! Random.ulam:30:       lo = t;
          const u32 Uh_5tlreg43388 = Uv_1t.read(); //gcnl:Node.cpp:691
          Uv_2lo.write(Uh_5tlreg43388); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const u32 Uh_5tlreg43391 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43392 = _Int32ToInt32(Uh_5tlreg43391, 2, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43394 = Uv_2lo.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43396 = Uv_2hi.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43397 = _BinOpSubtractInt32(Uh_5tlreg43396, Uh_5tlreg43394, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43398 = _BinOpAddInt32(Uh_5tlreg43397, Uh_5tlreg43392, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321i<EC> Uh_5tlval43399(Uh_5tlreg43398); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval43401 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval43399); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43402 = Uh_5tlval43401.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg43403 = _Unsigned32ToInt32(Uh_5tlreg43402, 32, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43405 = Uv_2lo.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43406 = _BinOpAddInt32(Uh_5tlreg43405, Uh_5tlreg43403, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321i<EC> Uh_5tlval43407(Uh_5tlreg43406); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43407); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7between



//! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_8thisMany, Ui_Ut_102321i<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_5tlreg43409 = Uv_8thisMany.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43412 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321i<EC> Uh_5tlval43413(Uh_5tlreg43412); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval43415 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval43413); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43416 = Uh_5tlval43415.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg43417 = _Unsigned32ToInt32(Uh_5tlreg43416, 32, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43418 = _BinOpCompareLessThanInt32(Uh_5tlreg43417, Uh_5tlreg43409, 32); //gcnl:NodeBinaryOpCompare.cpp:313
    Ui_Ut_10111b<EC> Uh_5tlval43419(Uh_5tlreg43418); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43419); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8thisMany, Ui_Ut_102321u<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_5tlreg43421 = Uv_8thisMany.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43424 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321u<EC> Uh_5tlval43425(Uh_5tlreg43424); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval43427 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval43425); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43428 = Uh_5tlval43427.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg43429 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43428, Uh_5tlreg43421, 32); //gcnl:NodeBinaryOpCompare.cpp:313
    Ui_Ut_10111b<EC> Uh_5tlval43430(Uh_5tlreg43429); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43430); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10106Random10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10106Random10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10106Random10<EC>::GetMangledClassName() const
  {
    return "Uq_10106Random10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10106Random10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10106Random10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10106Random10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_10106Random10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10106Random10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_10106Random10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_10106Random10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10106Random10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

