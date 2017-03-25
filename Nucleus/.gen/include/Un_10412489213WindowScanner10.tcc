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
#include "Ue_102158EggShell10.h"
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
    UlamRef<EC> Uh_3tur43310(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43312 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43312 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43314(ur, Uh_5tlreg43312 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43315 = Uh_6tlref43314.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43316(Uh_5tlreg43315); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval43318 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur43310, Uh_5tlval43316); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval43319(Uh_5tlval43318); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43319); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getCoord



//! WindowScanner.ulam:33:   Void resetCategories() { mCategoriesInUse = 0; }
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_9215resetCategories(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:33:   Void resetCategories() { mCategoriesInUse = 0; }
    const u32 Uh_5tlreg43320 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43321 = _Int32ToUnsigned32(Uh_5tlreg43320, 2, 32); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43321); //gcnl:Node.cpp:885

  } // Uf_9215resetCategories



//! WindowScanner.ulam:35:   Category allocateCategory() {
  template<class EC>
  Ui_Ut_10151u<EC> Un_10412489213WindowScanner10<EC>::Uf_9216allocateCategory(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
    {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
      const u32 Uh_5tlreg43323 = 32u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43325 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43326 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg43325, Uh_5tlreg43323, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43326, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
          THE_INSTANCE.Uf_3die(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      } // end if
    }

//! WindowScanner.ulam:37:     Category ret = (Category) mCategoriesInUse;
    const u32 Uh_5tlreg43330 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43331 = _Unsigned32ToUnsigned32(Uh_5tlreg43330, 32, 5); //gcnl:NodeCast.cpp:723
    Ui_Ut_10151u<EC> Uv_3ret(Uh_5tlreg43331); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:38:     ++mCategoriesInUse;
    const u32 Uh_5tlreg43332 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43333 = _Int32ToUnsigned32(Uh_5tlreg43332, 32, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43335 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43336 = _BinOpAddUnsigned32(Uh_5tlreg43335, Uh_5tlreg43333, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43336); //gcnl:Node.cpp:885

//! WindowScanner.ulam:39:     return ret;
    const u32 Uh_5tlreg43338 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43339(Uh_5tlreg43338); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43339); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9216allocateCategory



//! WindowScanner.ulam:53:   Void scan(SiteVisitor& visitor) {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_4scan(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109211SiteVisitor10<EC>& Ur_7visitor) const
  {

//! WindowScanner.ulam:54:     scan(visitor, (Radius) 1, (Radius) ew.getRadius());
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43342(Ur_7visitor, 0u, Ur_7visitor.GetEffectiveSelf()); //gcnl:Node.cpp:1586
    const u32 Uh_5tlreg43343 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43344 = _Int32ToUnary32(Uh_5tlreg43343, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43345(Uh_5tlreg43344); //func arg& //gcnl:Node.cpp:1128
    UlamRef<EC> Uh_3tur43347(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321u<EC> Uh_5tlval43349 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_919getRadius(uc, Uh_3tur43347); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43350 = Uh_5tlval43349.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg43351 = _Unsigned32ToUnary32(Uh_5tlreg43350, 32, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43352(Uh_5tlreg43351); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4scan(uc, ur, Uh_6tlref43342, Uh_5tlval43345, Uh_5tlval43352); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4scan



//! WindowScanner.ulam:57:   Void scan(SiteVisitor& visitor, Radius inner, Radius outer) {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_4scan(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109211SiteVisitor10<EC>& Ur_7visitor, Ui_Ut_10141y<EC>& Uv_5inner, Ui_Ut_10141y<EC>& Uv_5outer) const
  {

//! WindowScanner.ulam:58:     initScan();
    THE_INSTANCE.Uf_8initScan(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! WindowScanner.ulam:60:     SiteNum end = mdist.getLastIndex(outer);
    UlamRef<EC> Uh_3tur43357(ur, 0u, 0u, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43359 = Uv_5outer.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43360 = _Unary32ToUnsigned32(Uh_5tlreg43359, 4, 3); //gcnl:NodeCast.cpp:723
    Ui_Ut_10131u<EC> Uh_5tlval43361(Uh_5tlreg43360); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43363 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9212getLastIndex(uc, Uh_3tur43357, Uh_5tlval43361); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43364 = Uh_5tlval43363.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_3end(Uh_5tlreg43364); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
    {

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
      UlamRef<EC> Uh_3tur43366(ur, 0u, 0u, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43368 = Uv_5inner.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43369 = _Unary32ToUnsigned32(Uh_5tlreg43368, 4, 3); //gcnl:NodeCast.cpp:723
      Ui_Ut_10131u<EC> Uh_5tlval43370(Uh_5tlreg43369); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval43372 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur43366, Uh_5tlval43370); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43373 = Uh_5tlval43372.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uv_2sn(Uh_5tlreg43373); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
      while(true)
      {
        const u32 Uh_5tlreg43375 = Uv_3end.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43377 = Uv_2sn.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43378 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg43377, Uh_5tlreg43375, 6); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43378, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
        {

//! WindowScanner.ulam:62:       Atom a = ew[sn];
          UlamRef<EC> Uh_3tur43380(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43382 = Uv_2sn.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43383(Uh_5tlreg43382); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval43385 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43380, Uh_5tlval43383); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43385.read()); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:63:       visitor.visit(self, a, sn);
          UlamRef<EC> Uh_3tur43387(Ur_7visitor, 0u); //gcnl:NodeFunctionCall.cpp:923
          Ui_Un_r10412489213WindowScanner10<EC> Uh_6turef43389(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1586
          Ui_Ut_r102961a<EC> Uh_6turef43391(Uv_1a, 0u, uc); //gcnl:Node.cpp:1542
          const u32 Uh_5tlreg43393 = Uv_2sn.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43394(Uh_5tlreg43393); //func arg& //gcnl:Node.cpp:1128
          VfuncPtr Uf_tvfp43395 = Uh_3tur43387.GetEffectiveSelf()->getVTableEntry(2); //gcnl:NodeFunctionCall.cpp:1144
          ((typename Uq_10109211SiteVisitor10<EC>::Uf_5visit13r10412489213WindowScanner10r102961a10161u) (Uf_tvfp43395)) (uc, Uh_3tur43387, Uh_6turef43389, Uh_6turef43391, Uh_5tlval43394); //gcnl:NodeFunctionCall.cpp:1006
        }

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
Ul_214endcontrolloop212:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
        const u32 Uh_5tlreg43396 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43397 = _Int32ToUnsigned32(Uh_5tlreg43396, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43399 = Uv_2sn.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43400 = _BinOpAddUnsigned32(Uh_5tlreg43399, Uh_5tlreg43397, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_2sn.write(Uh_5tlreg43400); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_4scan



//! WindowScanner.ulam:82:   SiteNum getSiteNum(Category categ) { return mSites[categ]; }
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210getSiteNum(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:82:   SiteNum getSiteNum(Category categ) { return mSites[categ]; }
    const u32 Uh_5tlreg43402 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43402 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43404(ur, Uh_5tlreg43402 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43405 = Uh_6tlref43404.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43406(Uh_5tlreg43405); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43406); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210getSiteNum



//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_3die(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1096

//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
    UlamRef<EC> Uh_3tur43408(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Uq_10104Fail10<EC>::Us::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43408); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_3die



//! WindowScanner.ulam:42:   Unsigned categoriesAvailable() {
  template<class EC>
  Ui_Ut_102321u<EC> Un_10412489213WindowScanner10<EC>::Uf_9219categoriesAvailable(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:43:     return (Unsigned) (cCATEGORY_COUNT - mCategoriesInUse);
    const u32 Uh_5tlreg43411 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43412 = 32u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43413 = _BinOpSubtractUnsigned32(Uh_5tlreg43412, Uh_5tlreg43411, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321u<EC> Uh_5tlval43414(Uh_5tlreg43413); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43414); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9219categoriesAvailable



//! WindowScanner.ulam:46:   Void initScan() {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_8initScan(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
    {

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
      const u32 Uh_5tlreg43415 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43416 = _Int32ToUnsigned32(Uh_5tlreg43415, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1c(Uh_5tlreg43416); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
      while(true)
      {
        const u32 Uh_5tlreg43417 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43419 = Uv_1c.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43420 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43419, Uh_5tlreg43417, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43420, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
        {

//! WindowScanner.ulam:48:       mSites[c] = SiteNum.maxof;
          const u32 Uh_5tlreg43421 = 63u; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43423 = Uv_1c.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43423 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10161u<EC> Uh_6tlref43425(ur, Uh_5tlreg43423 * 6u + 0u); //gcnl:Node.cpp:1303
          Uh_6tlref43425.write(Uh_5tlreg43421);

//! WindowScanner.ulam:49:       mWeights[c] = 0;
          const u32 Uh_5tlreg43426 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43427 = _Int32ToUnsigned32(Uh_5tlreg43426, 2, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg43429 = Uv_1c.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43429 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r102321u<EC> Uh_6tlref43431(ur, Uh_5tlreg43429 * 32u + 192u); //gcnl:Node.cpp:1303
          Uh_6tlref43431.write(Uh_5tlreg43427);
        }

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
Ul_214endcontrolloop211:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
        const u32 Uh_5tlreg43432 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43433 = _Int32ToUnsigned32(Uh_5tlreg43432, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43435 = Uv_1c.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43436 = _BinOpAddUnsigned32(Uh_5tlreg43435, Uh_5tlreg43433, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1c.write(Uh_5tlreg43436); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_8initScan



//! WindowScanner.ulam:67:   SiteNum categorize(SiteNum sn, Category categ) {
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210categorize(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:68:     return categorize(sn,categ,1);
    const u32 Uh_5tlreg43439 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43440(Uh_5tlreg43439); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43442 = Uv_5categ.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43443(Uh_5tlreg43442); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43444 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43445 = _Int32ToUnsigned32(Uh_5tlreg43444, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval43446(Uh_5tlreg43445); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43448 = THE_INSTANCE.Uf_9210categorize(uc, ur, Uh_5tlval43440, Uh_5tlval43443, Uh_5tlval43446); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43449 = Uh_5tlval43448.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval43450(Uh_5tlreg43449); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43450); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210categorize



//! WindowScanner.ulam:71:   SiteNum categorize(SiteNum sn, Category categ, Unsigned weight) {
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210categorize(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn, Ui_Ut_10151u<EC>& Uv_5categ, Ui_Ut_102321u<EC>& Uv_6weight) const
  {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
    {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
      const u32 Uh_5tlreg43452 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43454 = Uv_5categ.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43455 = _Unsigned32ToUnsigned32(Uh_5tlreg43454, 5, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43456 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg43455, Uh_5tlreg43452, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43456, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
          THE_INSTANCE.Uf_3die(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      } // end if
    }

//! WindowScanner.ulam:73:     mWeights[categ] += weight;
    const u32 Uh_5tlreg43460 = Uv_6weight.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43462 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43462 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102321u<EC> Uh_6tlref43464(ur, Uh_5tlreg43462 * 32u + 192u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43465 = Uh_6tlref43464.read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43466 = _BinOpAddUnsigned32(Uh_5tlreg43465, Uh_5tlreg43460, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
    Uh_6tlref43464.write(Uh_5tlreg43466);

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
    {

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
      const u32 Uh_5tlreg43467 = 0u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43468 = _Unsigned32ToUnsigned32(Uh_5tlreg43467, 1, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43470 = Uv_5categ.read(); //gcnl:Node.cpp:691
      if(Uh_5tlreg43470 >= 32) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r102321u<EC> Uh_6tlref43472(ur, Uh_5tlreg43470 * 32u + 192u); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg43473 = Uh_6tlref43472.read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43474 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43473, Uh_5tlreg43468, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43474, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
          const u32 Uh_5tlreg43475 = 63u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10161u<EC> Uh_5tlval43476(Uh_5tlreg43475); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43476); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! WindowScanner.ulam:75:     if (random.create(mWeights[categ]) < weight) {
    {

//! WindowScanner.ulam:75:     if (random.create(mWeights[categ]) < weight) {
      const u32 Uh_5tlreg43478 = Uv_6weight.read(); //gcnl:Node.cpp:691
      UlamRef<EC> Uh_3tur43480(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43482 = Uv_5categ.read(); //gcnl:Node.cpp:691
      if(Uh_5tlreg43482 >= 32) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r102321u<EC> Uh_6tlref43484(ur, Uh_5tlreg43482 * 32u + 192u); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg43485 = Uh_6tlref43484.read(); //gcnl:Node.cpp:657
      Ui_Ut_102321u<EC> Uh_5tlval43486(Uh_5tlreg43485); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval43488 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur43480, Uh_5tlval43486); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43489 = Uh_5tlval43488.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg43490 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43489, Uh_5tlreg43478, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43490, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! WindowScanner.ulam:76:       mSites[categ] = sn;
          const u32 Uh_5tlreg43492 = Uv_2sn.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg43494 = Uv_5categ.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43494 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10161u<EC> Uh_6tlref43496(ur, Uh_5tlreg43494 * 6u + 0u); //gcnl:Node.cpp:1303
          Uh_6tlref43496.write(Uh_5tlreg43492);
        }
      } // end if
    }

//! WindowScanner.ulam:78:     return mSites[categ];
    const u32 Uh_5tlreg43498 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43498 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43500(ur, Uh_5tlreg43498 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43501 = Uh_6tlref43500.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43502(Uh_5tlreg43501); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43502); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210categorize



//! WindowScanner.ulam:81:   Unsigned getHits(Category categ) { return mWeights[categ]; }
  template<class EC>
  Ui_Ut_102321u<EC> Un_10412489213WindowScanner10<EC>::Uf_7getHits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:81:   Unsigned getHits(Category categ) { return mWeights[categ]; }
    const u32 Uh_5tlreg43504 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43504 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102321u<EC> Uh_6tlref43506(ur, Uh_5tlreg43504 * 32u + 192u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43507 = Uh_6tlref43506.read(); //gcnl:Node.cpp:657
    Ui_Ut_102321u<EC> Uh_5tlval43508(Uh_5tlreg43507); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43508); //gcnl:NodeReturnStatement.cpp:343

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

