/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10106Primer10.h"
#include "Uq_10106Random10.h"
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
#include "Ue_102158EggShell10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Uq_10109211EventWindow10<EC>::Uq_10109211EventWindow10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109211EventWindow10", 0))
  { }

  template<class EC>
  Uq_10109211EventWindow10<EC>::~Uq_10109211EventWindow10(){} //gcnl:NodeBlockClass.cpp:1784


//! EventWindow.ulam:73:   Atom& aref(C2D coord) { return aref(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_r102961a<EC> Uq_10109211EventWindow10<EC>::Uf_4aref(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:73:   Atom& aref(C2D coord) { return aref(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3302 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3303(Uh_5tlreg3302); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3305 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3303); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3306 = Uh_5tlval3305.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3307(Uh_5tlreg3306); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3309 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3307); //gcnl:NodeFunctionCall.cpp:1006
    if(_IsLocal((void *) &Uh_5tuval3309.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef3310(Uh_5tuval3309); //gcnl:Node.cpp:1586
    return (Uh_6turef3310); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg3311 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3314 = Uv_5index.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3315(Uh_5tlreg3314); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3317 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3315); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3318 = Uh_5tlval3317.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3318, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur3320(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg3323 = Uv_5index.read(); //gcnl:Node.cpp:691
      Ui_Ut_10161u<EC> Uh_5tlval3324(Uh_5tlreg3323); //func arg& //gcnl:Node.cpp:1128
      Ui_Ut_r102961a<EC> Uh_5tuval3326 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3324); //gcnl:NodeFunctionCall.cpp:1006
      Ui_Ut_102961a<EC> Uh_5tuval3327(Uh_5tuval3326); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3329 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur3320, Uh_5tuval3327); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3330 = Uh_5tlval3329.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3311 = Uh_5tlreg3330; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3331(Uh_5tlreg3311); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3331); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3332 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3335 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3336(Uh_5tlreg3335); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3338 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3336); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3339 = Uh_5tlval3338.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3339, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3343 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3344(Uh_5tlreg3343); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3346 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3344); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3347 = Uh_5tlval3346.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3348(Uh_5tlreg3347); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3350 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3348); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3351 = Uh_5tlval3350.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3332 = Uh_5tlreg3351; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3352(Uh_5tlreg3332); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3352); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:64:   SiteNum getAccessibleSize() {
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211EventWindow10<EC>::Uf_9217getAccessibleSize(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EventWindow.ulam:65:     MDist md;
    Ui_Uq_10105MDist10<EC> Uv_2md; //gcnl:NodeVarDecl.cpp:1096

//! EventWindow.ulam:66:     typedef MDist.Radius Radius;

//! EventWindow.ulam:67:     typedef MDist.Index Index;

//! EventWindow.ulam:68:     Unsigned rad = getRadius();
    const Ui_Ut_102321u<EC> Uh_5tlval3355 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3356 = Uh_5tlval3355.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg3356); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur3358(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3359 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3360 = _Unsigned32ToUnsigned32(Uh_5tlreg3359, 1, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3362 = Uv_3rad.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3363 = _BinOpAddUnsigned32(Uh_5tlreg3362, Uh_5tlreg3360, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg3364 = _Unsigned32ToUnsigned32(Uh_5tlreg3363, 32, 3); //gcnl:NodeCast.cpp:723
    Ui_Ut_10131u<EC> Uh_5tlval3365(Uh_5tlreg3364); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3367 = Ui_Uq_10105MDist10<EC>::Us::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur3358, Uh_5tlval3365); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3368 = Uh_5tlval3367.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3369(Uh_5tlreg3368); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3369); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval3372 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3373 = Uh_5tlval3372.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3375 = Uv_5index.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3376 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3375, Uh_5tlreg3373, 6); //gcnl:NodeBinaryOpCompare.cpp:313
    Ui_Ut_10111b<EC> Uh_5tlval3377(Uh_5tlreg3376); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3377); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3381 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3382(Uh_5tlreg3381); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3384 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3382); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3385 = Uh_5tlval3384.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3386(Uh_5tlreg3385); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3388 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3386); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3389 = Uh_5tlval3388.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval3390(Uh_5tlreg3389); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3390); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg3391 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval3394 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3395 = Uh_5tlval3394.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3397 = Uv_5index.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3398 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3397, Uh_5tlreg3395, 6); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg3398, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3401 = Uv_5index.read(); //gcnl:Node.cpp:691
      Ui_Ut_10161u<EC> Uh_5tlval3402(Uh_5tlreg3401); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3404 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3402); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3405 = Uh_5tlval3404.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3391 = Uh_5tlreg3405; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3406(Uh_5tlreg3391); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3406); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3407 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3410 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3411(Uh_5tlreg3410); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3413 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3411); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3414 = Uh_5tlval3413.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3414, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3418 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3419(Uh_5tlreg3418); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3421 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3419); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3422 = Uh_5tlval3421.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3423(Uh_5tlreg3422); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3425 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval3423); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3426 = Uh_5tlval3425.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3407 = Uh_5tlreg3426; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3427(Uh_5tlreg3407); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3427); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3428 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3431 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3432(Uh_5tlreg3431); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3434 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3432); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3435 = Uh_5tlval3434.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3435, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3439 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3440(Uh_5tlreg3439); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3442 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3440); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3443 = Uh_5tlval3442.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3444(Uh_5tlreg3443); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3446 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3444); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3447 = Uh_5tlval3446.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3428 = Uh_5tlreg3447; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3448(Uh_5tlreg3428); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3448); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg3452 = Uv_6coord1.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3453(Uh_5tlreg3452); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3455 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3453); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3456 = Uh_5tlval3455.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3457(Uh_5tlreg3456); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3460 = Uv_6coord2.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3461(Uh_5tlreg3460); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3463 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3461); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3464 = Uh_5tlval3463.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3465(Uh_5tlreg3464); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3467 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval3457, Uh_5tlval3465); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3468 = Uh_5tlval3467.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval3469(Uh_5tlreg3468); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3469); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg3471 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10131u<EC> Uh_5tlval3472(Uh_5tlreg3471); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10131u<EC> Uh_5tlval3474 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3472); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3475 = Uh_5tlval3474.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg3475); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg3478 = Uv_7siteNum.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3479(Uh_5tlreg3478); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval3481 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval3479); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval3481.read()); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg3484 = Uv_3old.read(); //gcnl:Node.cpp:691
    Ui_Ut_10131u<EC> Uh_5tlval3485(Uh_5tlreg3484); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10131u<EC> Uh_5tlval3487 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3485); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3488 = Uh_5tlval3487.read(); //gcnl:Node.cpp:1156

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg3490 = Uv_3raw.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3491(Uh_5tlreg3490); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3491); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211getCoordRaw


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109211EventWindow10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109211EventWindow10<EC>::GetDataMemberCount() const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109211EventWindow10<EC>::GetMangledClassName() const
  {
    return "Uq_10109211EventWindow10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109211EventWindow10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109211EventWindow10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10109211EventWindow10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_10109211EventWindow10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109211EventWindow10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_10109211EventWindow10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_10109211EventWindow10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109211EventWindow10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

