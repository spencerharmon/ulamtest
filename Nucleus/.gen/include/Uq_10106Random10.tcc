/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10106Primer10.h"
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
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Uq_10106Random10<EC>::Uq_10106Random10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10106Random10", 0))
  { }

  template<class EC>
  Uq_10106Random10<EC>::~Uq_10106Random10(){} //gcnl:NodeBlockClass.cpp:1784


//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_5oneIn(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_4odds) const
  {

//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
    const u32 Uh_5tlreg3203 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3204 = _Int32ToUnsigned32(Uh_5tlreg3203, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval3205(Uh_5tlreg3204); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3207 = Uv_4odds.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321u<EC> Uh_5tlval3208(Uh_5tlreg3207); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3210 = THE_INSTANCE.Uf_6oddsOf(uc, ur, Uh_5tlval3205, Uh_5tlval3208); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3211 = Uh_5tlval3210.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval3212(Uh_5tlreg3211); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3212); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5oneIn



//! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_4bits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:16:     if (max <= 0) return 0;
    {

//! Random.ulam:16:     if (max <= 0) return 0;
      const u32 Uh_5tlreg3213 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3214 = _Int32ToInt32(Uh_5tlreg3213, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3216 = Uv_3max.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3217 = _BinOpCompareLessEqualInt32(Uh_5tlreg3216, Uh_5tlreg3214, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3217, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:16:     if (max <= 0) return 0;
          const u32 Uh_5tlreg3218 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3219 = _Int32ToUnsigned32(Uh_5tlreg3218, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval3220(Uh_5tlreg3219); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval3220); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_5tlreg3223 = Uv_3max.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3224 = _Int32ToUnsigned32(Uh_5tlreg3223, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval3225(Uh_5tlreg3224); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3227 = THE_INSTANCE.Uf_4bits(uc, ur, Uh_5tlval3225); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3228 = Uh_5tlval3227.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval3229(Uh_5tlreg3228); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3229); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4bits



//! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_6create(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:22:     if (max <= 0) return 0;
    {

//! Random.ulam:22:     if (max <= 0) return 0;
      const u32 Uh_5tlreg3230 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3231 = _Int32ToInt32(Uh_5tlreg3230, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3233 = Uv_3max.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3234 = _BinOpCompareLessEqualInt32(Uh_5tlreg3233, Uh_5tlreg3231, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3234, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:22:     if (max <= 0) return 0;
          const u32 Uh_5tlreg3235 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3236 = _Int32ToUnsigned32(Uh_5tlreg3235, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval3237(Uh_5tlreg3236); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval3237); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_5tlreg3240 = Uv_3max.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3241 = _Int32ToUnsigned32(Uh_5tlreg3240, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval3242(Uh_5tlreg3241); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3244 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3242); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3245 = Uh_5tlval3244.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval3246(Uh_5tlreg3245); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3246); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6create



//! Random.ulam:26:   Int between(Int lo, Int hi) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10106Random10<EC>::Uf_7between(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2lo, Ui_Ut_102321i<EC>& Uv_2hi) const
  {

//! Random.ulam:27:     if (lo > hi) {
    {

//! Random.ulam:27:     if (lo > hi) {
      const u32 Uh_5tlreg3248 = Uv_2hi.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3250 = Uv_2lo.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3251 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3250, Uh_5tlreg3248, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3251, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Random.ulam:28:       Int t = hi;
          const u32 Uh_5tlreg3253 = Uv_2hi.read(); //gcnl:Node.cpp:691
          Ui_Ut_102321i<EC> Uv_1t(Uh_5tlreg3253); //gcnl:NodeVarDecl.cpp:1060

//! Random.ulam:29:       hi = lo;
          const u32 Uh_5tlreg3255 = Uv_2lo.read(); //gcnl:Node.cpp:691
          Uv_2hi.write(Uh_5tlreg3255); //gcnl:Node.cpp:885

//! Random.ulam:30:       lo = t;
          const u32 Uh_5tlreg3258 = Uv_1t.read(); //gcnl:Node.cpp:691
          Uv_2lo.write(Uh_5tlreg3258); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const u32 Uh_5tlreg3261 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3262 = _Int32ToInt32(Uh_5tlreg3261, 2, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3264 = Uv_2lo.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3266 = Uv_2hi.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3267 = _BinOpSubtractInt32(Uh_5tlreg3266, Uh_5tlreg3264, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg3268 = _BinOpAddInt32(Uh_5tlreg3267, Uh_5tlreg3262, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321i<EC> Uh_5tlval3269(Uh_5tlreg3268); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3271 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3269); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3272 = Uh_5tlval3271.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3273 = _Unsigned32ToInt32(Uh_5tlreg3272, 32, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3275 = Uv_2lo.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3276 = _BinOpAddInt32(Uh_5tlreg3275, Uh_5tlreg3273, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321i<EC> Uh_5tlval3277(Uh_5tlreg3276); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3277); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7between



//! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_8thisMany, Ui_Ut_102321i<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_5tlreg3279 = Uv_8thisMany.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3282 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321i<EC> Uh_5tlval3283(Uh_5tlreg3282); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3285 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3283); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3286 = Uh_5tlval3285.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3287 = _Unsigned32ToInt32(Uh_5tlreg3286, 32, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3288 = _BinOpCompareLessThanInt32(Uh_5tlreg3287, Uh_5tlreg3279, 32); //gcnl:NodeBinaryOpCompare.cpp:313
    Ui_Ut_10111b<EC> Uh_5tlval3289(Uh_5tlreg3288); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3289); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8thisMany, Ui_Ut_102321u<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_5tlreg3291 = Uv_8thisMany.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3294 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321u<EC> Uh_5tlval3295(Uh_5tlreg3294); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3297 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3295); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3298 = Uh_5tlval3297.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3299 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3298, Uh_5tlreg3291, 32); //gcnl:NodeBinaryOpCompare.cpp:313
    Ui_Ut_10111b<EC> Uh_5tlval3300(Uh_5tlreg3299); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3300); //gcnl:NodeReturnStatement.cpp:343

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

