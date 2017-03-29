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
  Un_10412489213WindowScanner10<EC>::Un_10412489213WindowScanner10() : UlamTransient<EC>(MFM_UUID_FOR("Un10412489213WindowScanner10", 0))
  { }

  template<class EC>
  Un_10412489213WindowScanner10<EC>::~Un_10412489213WindowScanner10(){} //gcnl:NodeBlockClass.cpp:1826


//! WindowScanner.ulam:83:   C2D getCoord(Category categ) { return ew.getCoord(mSites[categ]); }
  template<class EC>
  Ui_Uq_102323C2D10<EC> Un_10412489213WindowScanner10<EC>::Uf_8getCoord(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:83:   C2D getCoord(Category categ) { return ew.getCoord(mSites[categ]); }
    UlamRef<EC> Uh_3tur43371(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43373 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43373 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43375(ur, Uh_5tlreg43373 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43376 = Uh_6tlref43375.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43377(Uh_5tlreg43376); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval43379 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur43371, Uh_5tlval43377); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval43380(Uh_5tlval43379); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43380); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getCoord



//! WindowScanner.ulam:33:   Void resetCategories() { mCategoriesInUse = 0; }
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_9215resetCategories(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:33:   Void resetCategories() { mCategoriesInUse = 0; }
    const u32 Uh_5tlreg43381 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43382 = _Int32ToUnsigned32(Uh_5tlreg43381, 2, 32); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43382); //gcnl:Node.cpp:885

  } // Uf_9215resetCategories



//! WindowScanner.ulam:35:   Category allocateCategory() {
  template<class EC>
  Ui_Ut_10151u<EC> Un_10412489213WindowScanner10<EC>::Uf_9216allocateCategory(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
    {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
      const u32 Uh_5tlreg43384 = 32u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43386 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43387 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg43386, Uh_5tlreg43384, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43387, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
          THE_INSTANCE.Uf_3die(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      } // end if
    }

//! WindowScanner.ulam:37:     Category ret = (Category) mCategoriesInUse;
    const u32 Uh_5tlreg43391 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43392 = _Unsigned32ToUnsigned32(Uh_5tlreg43391, 32, 5); //gcnl:NodeCast.cpp:723
    Ui_Ut_10151u<EC> Uv_3ret(Uh_5tlreg43392); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:38:     ++mCategoriesInUse;
    const u32 Uh_5tlreg43393 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43394 = _Int32ToUnsigned32(Uh_5tlreg43393, 32, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43396 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43397 = _BinOpAddUnsigned32(Uh_5tlreg43396, Uh_5tlreg43394, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43397); //gcnl:Node.cpp:885

//! WindowScanner.ulam:39:     return ret;
    const u32 Uh_5tlreg43399 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43400(Uh_5tlreg43399); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43400); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9216allocateCategory



//! WindowScanner.ulam:53:   Void scan(SiteVisitor& visitor) {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_4scan(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109211SiteVisitor10<EC>& Ur_7visitor) const
  {

//! WindowScanner.ulam:54:     scan(visitor, (Radius) 1, (Radius) ew.getRadius());
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43403(Ur_7visitor, 0u, Ur_7visitor.GetEffectiveSelf()); //gcnl:Node.cpp:1586
    const u32 Uh_5tlreg43404 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43405 = _Int32ToUnary32(Uh_5tlreg43404, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43406(Uh_5tlreg43405); //func arg& //gcnl:Node.cpp:1128
    UlamRef<EC> Uh_3tur43408(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321u<EC> Uh_5tlval43410 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_919getRadius(uc, Uh_3tur43408); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43411 = Uh_5tlval43410.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg43412 = _Unsigned32ToUnary32(Uh_5tlreg43411, 32, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43413(Uh_5tlreg43412); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4scan(uc, ur, Uh_6tlref43403, Uh_5tlval43406, Uh_5tlval43413); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4scan



//! WindowScanner.ulam:57:   Void scan(SiteVisitor& visitor, Radius inner, Radius outer) {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_4scan(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109211SiteVisitor10<EC>& Ur_7visitor, Ui_Ut_10141y<EC>& Uv_5inner, Ui_Ut_10141y<EC>& Uv_5outer) const
  {

//! WindowScanner.ulam:58:     initScan();
    THE_INSTANCE.Uf_8initScan(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! WindowScanner.ulam:60:     SiteNum end = mdist.getLastIndex(outer);
    UlamRef<EC> Uh_3tur43418(ur, 0u, 0u, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43420 = Uv_5outer.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43421 = _Unary32ToUnsigned32(Uh_5tlreg43420, 4, 3); //gcnl:NodeCast.cpp:723
    Ui_Ut_10131u<EC> Uh_5tlval43422(Uh_5tlreg43421); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43424 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9212getLastIndex(uc, Uh_3tur43418, Uh_5tlval43422); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43425 = Uh_5tlval43424.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_3end(Uh_5tlreg43425); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
    {

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
      UlamRef<EC> Uh_3tur43427(ur, 0u, 0u, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43429 = Uv_5inner.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43430 = _Unary32ToUnsigned32(Uh_5tlreg43429, 4, 3); //gcnl:NodeCast.cpp:723
      Ui_Ut_10131u<EC> Uh_5tlval43431(Uh_5tlreg43430); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval43433 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur43427, Uh_5tlval43431); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43434 = Uh_5tlval43433.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uv_2sn(Uh_5tlreg43434); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
      while(true)
      {
        const u32 Uh_5tlreg43436 = Uv_3end.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43438 = Uv_2sn.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43439 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg43438, Uh_5tlreg43436, 6); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43439, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
        {

//! WindowScanner.ulam:62:       Atom a = ew[sn];
          UlamRef<EC> Uh_3tur43441(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43443 = Uv_2sn.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43444(Uh_5tlreg43443); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval43446 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43441, Uh_5tlval43444); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43446.read()); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:63:       visitor.visit(self, a, sn);
          UlamRef<EC> Uh_3tur43448(Ur_7visitor, 0u); //gcnl:NodeFunctionCall.cpp:923
          Ui_Un_r10412489213WindowScanner10<EC> Uh_6turef43450(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1586
          Ui_Ut_r102961a<EC> Uh_6turef43452(Uv_1a, 0u, uc); //gcnl:Node.cpp:1542
          const u32 Uh_5tlreg43454 = Uv_2sn.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43455(Uh_5tlreg43454); //func arg& //gcnl:Node.cpp:1128
          VfuncPtr Uf_tvfp43456 = Uh_3tur43448.GetEffectiveSelf()->getVTableEntry(2); //gcnl:NodeFunctionCall.cpp:1144
          ((typename Uq_10109211SiteVisitor10<EC>::Uf_5visit13r10412489213WindowScanner10r102961a10161u) (Uf_tvfp43456)) (uc, Uh_3tur43448, Uh_6turef43450, Uh_6turef43452, Uh_5tlval43455); //gcnl:NodeFunctionCall.cpp:1006
        }

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
Ul_214endcontrolloop214:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
        const u32 Uh_5tlreg43457 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43458 = _Int32ToUnsigned32(Uh_5tlreg43457, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43460 = Uv_2sn.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43461 = _BinOpAddUnsigned32(Uh_5tlreg43460, Uh_5tlreg43458, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_2sn.write(Uh_5tlreg43461); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_4scan



//! WindowScanner.ulam:82:   SiteNum getSiteNum(Category categ) { return mSites[categ]; }
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210getSiteNum(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:82:   SiteNum getSiteNum(Category categ) { return mSites[categ]; }
    const u32 Uh_5tlreg43463 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43463 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43465(ur, Uh_5tlreg43463 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43466 = Uh_6tlref43465.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43467(Uh_5tlreg43466); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43467); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210getSiteNum



//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_3die(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1096

//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
    UlamRef<EC> Uh_3tur43469(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Uq_10104Fail10<EC>::Us::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43469); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_3die



//! WindowScanner.ulam:42:   Unsigned categoriesAvailable() {
  template<class EC>
  Ui_Ut_102321u<EC> Un_10412489213WindowScanner10<EC>::Uf_9219categoriesAvailable(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:43:     return (Unsigned) (cCATEGORY_COUNT - mCategoriesInUse);
    const u32 Uh_5tlreg43472 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43473 = 32u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43474 = _BinOpSubtractUnsigned32(Uh_5tlreg43473, Uh_5tlreg43472, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321u<EC> Uh_5tlval43475(Uh_5tlreg43474); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43475); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9219categoriesAvailable



//! WindowScanner.ulam:46:   Void initScan() {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_8initScan(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
    {

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
      const u32 Uh_5tlreg43476 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43477 = _Int32ToUnsigned32(Uh_5tlreg43476, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1c(Uh_5tlreg43477); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
      while(true)
      {
        const u32 Uh_5tlreg43478 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43480 = Uv_1c.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43481 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43480, Uh_5tlreg43478, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43481, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
        {

//! WindowScanner.ulam:48:       mSites[c] = SiteNum.maxof;
          const u32 Uh_5tlreg43482 = 63u; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43484 = Uv_1c.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43484 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10161u<EC> Uh_6tlref43486(ur, Uh_5tlreg43484 * 6u + 0u); //gcnl:Node.cpp:1303
          Uh_6tlref43486.write(Uh_5tlreg43482);

//! WindowScanner.ulam:49:       mWeights[c] = 0;
          const u32 Uh_5tlreg43487 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43488 = _Int32ToUnsigned32(Uh_5tlreg43487, 2, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg43490 = Uv_1c.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43490 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r102321u<EC> Uh_6tlref43492(ur, Uh_5tlreg43490 * 32u + 192u); //gcnl:Node.cpp:1303
          Uh_6tlref43492.write(Uh_5tlreg43488);
        }

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
Ul_214endcontrolloop213:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
        const u32 Uh_5tlreg43493 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43494 = _Int32ToUnsigned32(Uh_5tlreg43493, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43496 = Uv_1c.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43497 = _BinOpAddUnsigned32(Uh_5tlreg43496, Uh_5tlreg43494, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1c.write(Uh_5tlreg43497); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_8initScan



//! WindowScanner.ulam:67:   SiteNum categorize(SiteNum sn, Category categ) {
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210categorize(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:68:     return categorize(sn,categ,1);
    const u32 Uh_5tlreg43500 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43501(Uh_5tlreg43500); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43503 = Uv_5categ.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43504(Uh_5tlreg43503); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43505 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43506 = _Int32ToUnsigned32(Uh_5tlreg43505, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval43507(Uh_5tlreg43506); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43509 = THE_INSTANCE.Uf_9210categorize(uc, ur, Uh_5tlval43501, Uh_5tlval43504, Uh_5tlval43507); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43510 = Uh_5tlval43509.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval43511(Uh_5tlreg43510); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43511); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210categorize



//! WindowScanner.ulam:71:   SiteNum categorize(SiteNum sn, Category categ, Unsigned weight) {
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210categorize(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn, Ui_Ut_10151u<EC>& Uv_5categ, Ui_Ut_102321u<EC>& Uv_6weight) const
  {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
    {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
      const u32 Uh_5tlreg43513 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43515 = Uv_5categ.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43516 = _Unsigned32ToUnsigned32(Uh_5tlreg43515, 5, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43517 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg43516, Uh_5tlreg43513, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43517, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
          THE_INSTANCE.Uf_3die(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      } // end if
    }

//! WindowScanner.ulam:73:     mWeights[categ] += weight;
    const u32 Uh_5tlreg43521 = Uv_6weight.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43523 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43523 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102321u<EC> Uh_6tlref43525(ur, Uh_5tlreg43523 * 32u + 192u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43526 = Uh_6tlref43525.read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43527 = _BinOpAddUnsigned32(Uh_5tlreg43526, Uh_5tlreg43521, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
    Uh_6tlref43525.write(Uh_5tlreg43527);

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
    {

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
      const u32 Uh_5tlreg43528 = 0u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43529 = _Unsigned32ToUnsigned32(Uh_5tlreg43528, 1, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43531 = Uv_5categ.read(); //gcnl:Node.cpp:691
      if(Uh_5tlreg43531 >= 32) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r102321u<EC> Uh_6tlref43533(ur, Uh_5tlreg43531 * 32u + 192u); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg43534 = Uh_6tlref43533.read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43535 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43534, Uh_5tlreg43529, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43535, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
          const u32 Uh_5tlreg43536 = 63u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10161u<EC> Uh_5tlval43537(Uh_5tlreg43536); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43537); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! WindowScanner.ulam:75:     if (random.create(mWeights[categ]) < weight) {
    {

//! WindowScanner.ulam:75:     if (random.create(mWeights[categ]) < weight) {
      const u32 Uh_5tlreg43539 = Uv_6weight.read(); //gcnl:Node.cpp:691
      UlamRef<EC> Uh_3tur43541(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43543 = Uv_5categ.read(); //gcnl:Node.cpp:691
      if(Uh_5tlreg43543 >= 32) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r102321u<EC> Uh_6tlref43545(ur, Uh_5tlreg43543 * 32u + 192u); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg43546 = Uh_6tlref43545.read(); //gcnl:Node.cpp:657
      Ui_Ut_102321u<EC> Uh_5tlval43547(Uh_5tlreg43546); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval43549 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur43541, Uh_5tlval43547); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43550 = Uh_5tlval43549.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg43551 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43550, Uh_5tlreg43539, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43551, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! WindowScanner.ulam:76:       mSites[categ] = sn;
          const u32 Uh_5tlreg43553 = Uv_2sn.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg43555 = Uv_5categ.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43555 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10161u<EC> Uh_6tlref43557(ur, Uh_5tlreg43555 * 6u + 0u); //gcnl:Node.cpp:1303
          Uh_6tlref43557.write(Uh_5tlreg43553);
        }
      } // end if
    }

//! WindowScanner.ulam:78:     return mSites[categ];
    const u32 Uh_5tlreg43559 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43559 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43561(ur, Uh_5tlreg43559 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43562 = Uh_6tlref43561.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43563(Uh_5tlreg43562); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43563); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210categorize



//! WindowScanner.ulam:81:   Unsigned getHits(Category categ) { return mWeights[categ]; }
  template<class EC>
  Ui_Ut_102321u<EC> Un_10412489213WindowScanner10<EC>::Uf_7getHits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:81:   Unsigned getHits(Category categ) { return mWeights[categ]; }
    const u32 Uh_5tlreg43565 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43565 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102321u<EC> Uh_6tlref43567(ur, Uh_5tlreg43565 * 32u + 192u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43568 = Uh_6tlref43567.read(); //gcnl:Node.cpp:657
    Ui_Ut_102321u<EC> Uh_5tlval43569(Uh_5tlreg43568); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43569); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7getHits


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Un_10412489213WindowScanner10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10105MDist10", "mdist", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10106Random10", "random", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_10109210DebugUtils10", "debug", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 3: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 4: { static UlamClassDataMemberInfo i("Uq_10104Fail10", "fail", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 5: { static UlamClassDataMemberInfo i("Ut_232161u", "mSites", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 6: { static UlamClassDataMemberInfo i("Ut_2322321u", "mWeights", 192u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 7: { static UlamClassDataMemberInfo i("Ut_102321u", "mCategoriesInUse", 1216u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Un_10412489213WindowScanner10<EC>::GetDataMemberCount() const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Un_10412489213WindowScanner10<EC>::GetMangledClassName() const
  {
    return "Un_10412489213WindowScanner10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Un_10412489213WindowScanner10<EC>::GetClassLength( ) const
  {
    return 1248; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Un_10412489213WindowScanner10<EC>::GetString(u32 sidx)  const
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
  u32 Un_10412489213WindowScanner10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  void Un_10412489213WindowScanner10<EC>::getDefaultTransient(u32 pos, BitStorage<EC>& bvsref) const
  {
    MFM_API_ASSERT_ARG((pos + bvsref.GetBitSize()) >= 1248u); //gcnl:NodeBlockClass.cpp:2219

    // Initialize any data members:
    static const u32 vales[(1248 + 31)/32] = { 0x0 }; //gcnl:CompilerState.cpp:1351
    static BitVector<1248> initBV; //gcnl:CompilerState.cpp:1357
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
  VfuncPtr Un_10412489213WindowScanner10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Un_10412489213WindowScanner10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Un_10412489213WindowScanner10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Un_10412489213WindowScanner10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

