/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_102128EggShell10.h"
#include "Uq_1010919SiteUtils10.h"
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
#include "Uq_10106Random10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_10411209215SiteVisitorByID10.h"
#include "Uq_10109212DecisionTree10.h"
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
    const u32 Uh_5tlreg3258 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3259(Uh_5tlreg3258); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3261 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3259); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3262 = Uh_5tlval3261.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3263(Uh_5tlreg3262); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3265 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3263); //gcnl:NodeFunctionCall.cpp:1006
    if(_IsLocal((void *) &Uh_5tuval3265.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef3266(Uh_5tuval3265); //gcnl:Node.cpp:1586
    return (Uh_6turef3266); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg3270 = Uv_6coord1.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3271(Uh_5tlreg3270); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3273 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3271); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3274 = Uh_5tlval3273.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3275(Uh_5tlreg3274); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3278 = Uv_6coord2.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3279(Uh_5tlreg3278); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3281 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3279); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3282 = Uh_5tlval3281.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3283(Uh_5tlreg3282); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3285 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval3275, Uh_5tlval3283); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3286 = Uh_5tlval3285.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval3287(Uh_5tlreg3286); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3287); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3288 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3291 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3292(Uh_5tlreg3291); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3294 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3292); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3295 = Uh_5tlval3294.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3295, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3299 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3300(Uh_5tlreg3299); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3302 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3300); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3303 = Uh_5tlval3302.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3304(Uh_5tlreg3303); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3306 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3304); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3307 = Uh_5tlval3306.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3288 = Uh_5tlreg3307; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3308(Uh_5tlreg3288); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3308); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg3309 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3312 = Uv_5index.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3313(Uh_5tlreg3312); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3315 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3313); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3316 = Uh_5tlval3315.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3316, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur3318(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg3321 = Uv_5index.read(); //gcnl:Node.cpp:691
      Ui_Ut_10161u<EC> Uh_5tlval3322(Uh_5tlreg3321); //func arg& //gcnl:Node.cpp:1128
      Ui_Ut_r102961a<EC> Uh_5tuval3324 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3322); //gcnl:NodeFunctionCall.cpp:1006
      Ui_Ut_102961a<EC> Uh_5tuval3325(Uh_5tuval3324); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3327 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur3318, Uh_5tuval3325); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3328 = Uh_5tlval3327.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3309 = Uh_5tlreg3328; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3329(Uh_5tlreg3309); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3329); //gcnl:NodeReturnStatement.cpp:343

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
    const Ui_Ut_102321u<EC> Uh_5tlval3332 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3333 = Uh_5tlval3332.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg3333); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur3335(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3336 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3337 = _Unsigned32ToUnsigned32(Uh_5tlreg3336, 1, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3339 = Uv_3rad.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3340 = _BinOpAddUnsigned32(Uh_5tlreg3339, Uh_5tlreg3337, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg3341 = _Unsigned32ToUnsigned32(Uh_5tlreg3340, 32, 3); //gcnl:NodeCast.cpp:723
    Ui_Ut_10131u<EC> Uh_5tlval3342(Uh_5tlreg3341); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3344 = Ui_Uq_10105MDist10<EC>::Us::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur3335, Uh_5tlval3342); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3345 = Uh_5tlval3344.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3346(Uh_5tlreg3345); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3346); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3350 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3351(Uh_5tlreg3350); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3353 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3351); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3354 = Uh_5tlval3353.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3355(Uh_5tlreg3354); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3357 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3355); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3358 = Uh_5tlval3357.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval3359(Uh_5tlreg3358); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3359); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval3362 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3363 = Uh_5tlval3362.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3365 = Uv_5index.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3366 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3365, Uh_5tlreg3363, 6); //gcnl:NodeBinaryOpCompare.cpp:313
    Ui_Ut_10111b<EC> Uh_5tlval3367(Uh_5tlreg3366); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3367); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3368 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3371 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3372(Uh_5tlreg3371); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3374 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3372); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3375 = Uh_5tlval3374.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3375, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3379 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3380(Uh_5tlreg3379); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3382 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3380); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3383 = Uh_5tlval3382.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3384(Uh_5tlreg3383); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3386 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval3384); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3387 = Uh_5tlval3386.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3368 = Uh_5tlreg3387; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3388(Uh_5tlreg3368); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3388); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg3389 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval3392 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3393 = Uh_5tlval3392.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3395 = Uv_5index.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3396 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3395, Uh_5tlreg3393, 6); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg3396, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3399 = Uv_5index.read(); //gcnl:Node.cpp:691
      Ui_Ut_10161u<EC> Uh_5tlval3400(Uh_5tlreg3399); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3402 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3400); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3403 = Uh_5tlval3402.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3389 = Uh_5tlreg3403; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3404(Uh_5tlreg3389); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3404); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3405 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3408 = Uv_5coord.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3409(Uh_5tlreg3408); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval3411 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3409); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3412 = Uh_5tlval3411.read(); //gcnl:Node.cpp:1156
    if(_Bool32ToCbool(Uh_5tlreg3412, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3416 = Uv_5coord.read(); //gcnl:Node.cpp:691
      Ui_Uq_102323C2D10<EC> Uh_5tlval3417(Uh_5tlreg3416); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval3419 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3417); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3420 = Uh_5tlval3419.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uh_5tlval3421(Uh_5tlreg3420); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval3423 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3421); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3424 = Uh_5tlval3423.read(); //gcnl:Node.cpp:1156
      Uh_5tlreg3405 = Uh_5tlreg3424; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3425(Uh_5tlreg3405); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3425); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg3427 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10131u<EC> Uh_5tlval3428(Uh_5tlreg3427); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10131u<EC> Uh_5tlval3430 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3428); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3431 = Uh_5tlval3430.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg3431); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg3434 = Uv_7siteNum.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3435(Uh_5tlreg3434); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval3437 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval3435); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval3437.read()); //gcnl:NodeVarDecl.cpp:1060

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg3440 = Uv_3old.read(); //gcnl:Node.cpp:691
    Ui_Ut_10131u<EC> Uh_5tlval3441(Uh_5tlreg3440); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10131u<EC> Uh_5tlval3443 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3441); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3444 = Uh_5tlval3443.read(); //gcnl:Node.cpp:1156

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg3446 = Uv_3raw.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval3447(Uh_5tlreg3446); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3447); //gcnl:NodeReturnStatement.cpp:343

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

