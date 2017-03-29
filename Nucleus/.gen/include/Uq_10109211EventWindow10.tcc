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
#include "Ue_102188EggShell10.h"
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
    const u32 Uh_5tlreg3304 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3305(Uh_5tlreg3304); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3307 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3305); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3308 = Uh_5tlval3307.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3309(Uh_5tlreg3308); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3311 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3309); //gcnl:NodeFunctionCall.cpp:1006
    if(_IsLocal((void *) &Uh_5tuval3311.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef3312(Uh_5tuval3311); //gcnl:Node.cpp:1586
    return (Uh_6turef3312); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg3313 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3316 = Uv_5index.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3317(Uh_5tlreg3316); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3319 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3317); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3320 = Uh_5tlval3319.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3320, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur3322(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg3325 = Uv_5index.read(); //gcnl:Node.cpp:691
      Ui_Ut_10161u<EC> Uh_5tlval3326(Uh_5tlreg3325); //func arg& //gcnl:Node.cpp:1128
      Ui_Ut_r102961a<EC> Uh_5tuval3328 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3326); //gcnl:NodeFunctionCall.cpp:1006
      Ui_Ut_102961a<EC> Uh_5tuval3329(Uh_5tuval3328); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3331 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur3322, Uh_5tuval3329); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3332 = Uh_5tlval3331.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3313 = Uh_5tlreg3332; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3333(Uh_5tlreg3313); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3333); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3334 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3337 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3338(Uh_5tlreg3337); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3340 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3338); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3341 = Uh_5tlval3340.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3341, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3345 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3346(Uh_5tlreg3345); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3348 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3346); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3349 = Uh_5tlval3348.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3350(Uh_5tlreg3349); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3352 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3350); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3353 = Uh_5tlval3352.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3334 = Uh_5tlreg3353; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3354(Uh_5tlreg3334); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3354); //gcnl:NodeReturnStatement.cpp:343

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
    const Ui_Ut_102321u<EC> Uh_5tlval3357 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3358 = Uh_5tlval3357.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg3358); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur3360(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3361 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3362 = _Unsigned32ToUnsigned32(Uh_5tlreg3361, 1, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3364 = Uv_3rad.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3365 = _BinOpAddUnsigned32(Uh_5tlreg3364, Uh_5tlreg3362, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg3366 = _Unsigned32ToUnsigned32(Uh_5tlreg3365, 32, 3); //gcnl:NodeCast.cpp:723
    Ui_Ut_10131u<EC> Uh_5tlval3367(Uh_5tlreg3366); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3369 = Ui_Uq_10105MDist10<EC>::Us::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur3360, Uh_5tlval3367); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3370 = Uh_5tlval3369.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3371(Uh_5tlreg3370); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3371); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval3374 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3375 = Uh_5tlval3374.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3377 = Uv_5index.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3378 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3377, Uh_5tlreg3375, 6); //gcnl:NodeBinaryOpCompare.cpp:313
    Ui_Ut_10111b<EC> Uh_5tlval3379(Uh_5tlreg3378); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3379); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3383 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3384(Uh_5tlreg3383); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3386 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3384); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3387 = Uh_5tlval3386.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3388(Uh_5tlreg3387); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3390 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3388); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3391 = Uh_5tlval3390.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval3392(Uh_5tlreg3391); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3392); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg3393 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval3396 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3397 = Uh_5tlval3396.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3399 = Uv_5index.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3400 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3399, Uh_5tlreg3397, 6); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg3400, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3403 = Uv_5index.read(); //gcnl:Node.cpp:691
      Ui_Ut_10161u<EC> Uh_5tlval3404(Uh_5tlreg3403); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3406 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3404); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3407 = Uh_5tlval3406.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3393 = Uh_5tlreg3407; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3408(Uh_5tlreg3393); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3408); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3409 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3412 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3413(Uh_5tlreg3412); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3415 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3413); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3416 = Uh_5tlval3415.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3416, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3420 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3421(Uh_5tlreg3420); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3423 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3421); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3424 = Uh_5tlval3423.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3425(Uh_5tlreg3424); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3427 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval3425); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3428 = Uh_5tlval3427.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3409 = Uh_5tlreg3428; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3429(Uh_5tlreg3409); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3429); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3430 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3433 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3434(Uh_5tlreg3433); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3436 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3434); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3437 = Uh_5tlval3436.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3437, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3441 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3442(Uh_5tlreg3441); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3444 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3442); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3445 = Uh_5tlval3444.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3446(Uh_5tlreg3445); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3448 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3446); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3449 = Uh_5tlval3448.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3430 = Uh_5tlreg3449; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3450(Uh_5tlreg3430); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3450); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg3454 = Uv_6coord1.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3455(Uh_5tlreg3454); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3457 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3455); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3458 = Uh_5tlval3457.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3459(Uh_5tlreg3458); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3462 = Uv_6coord2.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3463(Uh_5tlreg3462); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3465 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3463); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3466 = Uh_5tlval3465.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3467(Uh_5tlreg3466); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3469 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval3459, Uh_5tlval3467); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3470 = Uh_5tlval3469.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval3471(Uh_5tlreg3470); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3471); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg3473 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10131u<EC> Uh_5tlval3474(Uh_5tlreg3473); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10131u<EC> Uh_5tlval3476 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3474); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3477 = Uh_5tlval3476.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg3477); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg3480 = Uv_7siteNum.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3481(Uh_5tlreg3480); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval3483 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval3481); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval3483.read()); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg3486 = Uv_3old.read(); //gcnl:Node.cpp:691
    Ui_Ut_10131u<EC> Uh_5tlval3487(Uh_5tlreg3486); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10131u<EC> Uh_5tlval3489 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3487); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3490 = Uh_5tlval3489.read(); //gcnl:Node.cpp:1156

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg3492 = Uv_3raw.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3493(Uh_5tlreg3492); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3493); //gcnl:NodeReturnStatement.cpp:343

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

