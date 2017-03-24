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
#include "Uq_10106Random10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_10411209215SiteVisitorByID10.h"
#include "Uq_10109212DecisionTree10.h"
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
    UlamRef<EC> Uh_3tur43133(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43135 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43135 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43137(ur, Uh_5tlreg43135 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43138 = Uh_6tlref43137.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43139(Uh_5tlreg43138); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval43141 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur43133, Uh_5tlval43139); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval43142(Uh_5tlval43141); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43142); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getCoord



//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_3die(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1096

//! WindowScanner.ulam:27:   Void die() { Fail f; f.fail(); }
    UlamRef<EC> Uh_3tur43144(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Uq_10104Fail10<EC>::Us::THE_INSTANCE.Uf_4fail(uc, Uh_3tur43144); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_3die



//! WindowScanner.ulam:33:   Void resetCategories() { mCategoriesInUse = 0; }
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_9215resetCategories(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:33:   Void resetCategories() { mCategoriesInUse = 0; }
    const u32 Uh_5tlreg43146 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43147 = _Int32ToUnsigned32(Uh_5tlreg43146, 2, 32); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43147); //gcnl:Node.cpp:885

  } // Uf_9215resetCategories



//! WindowScanner.ulam:35:   Category allocateCategory() {
  template<class EC>
  Ui_Ut_10151u<EC> Un_10412489213WindowScanner10<EC>::Uf_9216allocateCategory(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
    {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
      const u32 Uh_5tlreg43149 = 32u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43151 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43152 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg43151, Uh_5tlreg43149, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43152, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:36:     if (mCategoriesInUse >= cCATEGORY_COUNT) die();
          THE_INSTANCE.Uf_3die(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      } // end if
    }

//! WindowScanner.ulam:37:     Category ret = (Category) mCategoriesInUse;
    const u32 Uh_5tlreg43156 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43157 = _Unsigned32ToUnsigned32(Uh_5tlreg43156, 32, 5); //gcnl:NodeCast.cpp:723
    Ui_Ut_10151u<EC> Uv_3ret(Uh_5tlreg43157); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:38:     ++mCategoriesInUse;
    const u32 Uh_5tlreg43158 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43159 = _Int32ToUnsigned32(Uh_5tlreg43158, 32, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43161 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43162 = _BinOpAddUnsigned32(Uh_5tlreg43161, Uh_5tlreg43159, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43162); //gcnl:Node.cpp:885

//! WindowScanner.ulam:39:     return ret;
    const u32 Uh_5tlreg43164 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43165(Uh_5tlreg43164); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43165); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9216allocateCategory



//! WindowScanner.ulam:42:   Unsigned categoriesAvailable() {
  template<class EC>
  Ui_Ut_102321u<EC> Un_10412489213WindowScanner10<EC>::Uf_9219categoriesAvailable(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:43:     return (Unsigned) (cCATEGORY_COUNT - mCategoriesInUse);
    const u32 Uh_5tlreg43167 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43168 = 32u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43169 = _BinOpSubtractUnsigned32(Uh_5tlreg43168, Uh_5tlreg43167, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321u<EC> Uh_5tlval43170(Uh_5tlreg43169); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43170); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9219categoriesAvailable



//! WindowScanner.ulam:46:   Void initScan() {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_8initScan(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
    {

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
      const u32 Uh_5tlreg43171 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43172 = _Int32ToUnsigned32(Uh_5tlreg43171, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1c(Uh_5tlreg43172); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
      while(true)
      {
        const u32 Uh_5tlreg43173 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43175 = Uv_1c.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43176 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43175, Uh_5tlreg43173, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43176, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
        {

//! WindowScanner.ulam:48:       mSites[c] = SiteNum.maxof;
          const u32 Uh_5tlreg43177 = 63u; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43179 = Uv_1c.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43179 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10161u<EC> Uh_6tlref43181(ur, Uh_5tlreg43179 * 6u + 0u); //gcnl:Node.cpp:1303
          Uh_6tlref43181.write(Uh_5tlreg43177);

//! WindowScanner.ulam:49:       mWeights[c] = 0;
          const u32 Uh_5tlreg43182 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43183 = _Int32ToUnsigned32(Uh_5tlreg43182, 2, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg43185 = Uv_1c.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43185 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r102321u<EC> Uh_6tlref43187(ur, Uh_5tlreg43185 * 32u + 192u); //gcnl:Node.cpp:1303
          Uh_6tlref43187.write(Uh_5tlreg43183);
        }

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
Ul_214endcontrolloop14:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! WindowScanner.ulam:47:     for (Unsigned c = 0; c < cCATEGORY_COUNT; ++c) {
        const u32 Uh_5tlreg43188 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43189 = _Int32ToUnsigned32(Uh_5tlreg43188, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43191 = Uv_1c.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43192 = _BinOpAddUnsigned32(Uh_5tlreg43191, Uh_5tlreg43189, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1c.write(Uh_5tlreg43192); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_8initScan



//! WindowScanner.ulam:53:   Void scan(SiteVisitor& visitor) {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_4scan(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109211SiteVisitor10<EC>& Ur_7visitor) const
  {

//! WindowScanner.ulam:54:     scan(visitor, (Radius) 1, (Radius) ew.getRadius());
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43195(Ur_7visitor, 0u, Ur_7visitor.GetEffectiveSelf()); //gcnl:Node.cpp:1586
    const u32 Uh_5tlreg43196 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43197 = _Int32ToUnary32(Uh_5tlreg43196, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43198(Uh_5tlreg43197); //func arg& //gcnl:Node.cpp:1128
    UlamRef<EC> Uh_3tur43200(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321u<EC> Uh_5tlval43202 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_919getRadius(uc, Uh_3tur43200); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43203 = Uh_5tlval43202.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg43204 = _Unsigned32ToUnary32(Uh_5tlreg43203, 32, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43205(Uh_5tlreg43204); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4scan(uc, ur, Uh_6tlref43195, Uh_5tlval43198, Uh_5tlval43205); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4scan



//! WindowScanner.ulam:57:   Void scan(SiteVisitor& visitor, Radius inner, Radius outer) {
  template<class EC>
  void Un_10412489213WindowScanner10<EC>::Uf_4scan(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109211SiteVisitor10<EC>& Ur_7visitor, Ui_Ut_10141y<EC>& Uv_5inner, Ui_Ut_10141y<EC>& Uv_5outer) const
  {

//! WindowScanner.ulam:58:     initScan();
    THE_INSTANCE.Uf_8initScan(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! WindowScanner.ulam:60:     SiteNum end = mdist.getLastIndex(outer);
    UlamRef<EC> Uh_3tur43210(ur, 0u, 0u, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43212 = Uv_5outer.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43213 = _Unary32ToUnsigned32(Uh_5tlreg43212, 4, 3); //gcnl:NodeCast.cpp:723
    Ui_Ut_10131u<EC> Uh_5tlval43214(Uh_5tlreg43213); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43216 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9212getLastIndex(uc, Uh_3tur43210, Uh_5tlval43214); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43217 = Uh_5tlval43216.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_3end(Uh_5tlreg43217); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
    {

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
      UlamRef<EC> Uh_3tur43219(ur, 0u, 0u, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43221 = Uv_5inner.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43222 = _Unary32ToUnsigned32(Uh_5tlreg43221, 4, 3); //gcnl:NodeCast.cpp:723
      Ui_Ut_10131u<EC> Uh_5tlval43223(Uh_5tlreg43222); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10161u<EC> Uh_5tlval43225 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur43219, Uh_5tlval43223); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43226 = Uh_5tlval43225.read(); //gcnl:Node.cpp:1156
      Ui_Ut_10161u<EC> Uv_2sn(Uh_5tlreg43226); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
      while(true)
      {
        const u32 Uh_5tlreg43228 = Uv_3end.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43230 = Uv_2sn.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43231 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg43230, Uh_5tlreg43228, 6); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43231, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
        {

//! WindowScanner.ulam:62:       Atom a = ew[sn];
          UlamRef<EC> Uh_3tur43233(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43235 = Uv_2sn.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43236(Uh_5tlreg43235); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval43238 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43233, Uh_5tlval43236); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43238.read()); //gcnl:NodeVarDecl.cpp:1060

//! WindowScanner.ulam:63:       visitor.visit(self, a, sn);
          UlamRef<EC> Uh_3tur43240(Ur_7visitor, 0u); //gcnl:NodeFunctionCall.cpp:923
          Ui_Un_r10412489213WindowScanner10<EC> Uh_6turef43242(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1586
          Ui_Ut_r102961a<EC> Uh_6turef43244(Uv_1a, 0u, uc); //gcnl:Node.cpp:1542
          const u32 Uh_5tlreg43246 = Uv_2sn.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43247(Uh_5tlreg43246); //func arg& //gcnl:Node.cpp:1128
          VfuncPtr Uf_tvfp43248 = Uh_3tur43240.GetEffectiveSelf()->getVTableEntry(2); //gcnl:NodeFunctionCall.cpp:1144
          ((typename Uq_10109211SiteVisitor10<EC>::Uf_5visit13r10412489213WindowScanner10r102961a10161u) (Uf_tvfp43248)) (uc, Uh_3tur43240, Uh_6turef43242, Uh_6turef43244, Uh_5tlval43247); //gcnl:NodeFunctionCall.cpp:1006
        }

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
Ul_214endcontrolloop15:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! WindowScanner.ulam:61:     for (SiteNum sn = mdist.getFirstIndex(inner); sn <= end; ++sn) {
        const u32 Uh_5tlreg43249 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43250 = _Int32ToUnsigned32(Uh_5tlreg43249, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43252 = Uv_2sn.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43253 = _BinOpAddUnsigned32(Uh_5tlreg43252, Uh_5tlreg43250, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_2sn.write(Uh_5tlreg43253); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_4scan



//! WindowScanner.ulam:67:   SiteNum categorize(SiteNum sn, Category categ) {
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210categorize(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:68:     return categorize(sn,categ,1);
    const u32 Uh_5tlreg43256 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43257(Uh_5tlreg43256); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43259 = Uv_5categ.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43260(Uh_5tlreg43259); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43261 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43262 = _Int32ToUnsigned32(Uh_5tlreg43261, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval43263(Uh_5tlreg43262); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43265 = THE_INSTANCE.Uf_9210categorize(uc, ur, Uh_5tlval43257, Uh_5tlval43260, Uh_5tlval43263); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43266 = Uh_5tlval43265.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval43267(Uh_5tlreg43266); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43267); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210categorize



//! WindowScanner.ulam:71:   SiteNum categorize(SiteNum sn, Category categ, Unsigned weight) {
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210categorize(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn, Ui_Ut_10151u<EC>& Uv_5categ, Ui_Ut_102321u<EC>& Uv_6weight) const
  {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
    {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
      const u32 Uh_5tlreg43269 = UlamRef<EC>(ur, 1216u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43271 = Uv_5categ.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43272 = _Unsigned32ToUnsigned32(Uh_5tlreg43271, 5, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43273 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg43272, Uh_5tlreg43269, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43273, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:72:     if (categ >= mCategoriesInUse) die();
          THE_INSTANCE.Uf_3die(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      } // end if
    }

//! WindowScanner.ulam:73:     mWeights[categ] += weight;
    const u32 Uh_5tlreg43277 = Uv_6weight.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43279 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43279 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102321u<EC> Uh_6tlref43281(ur, Uh_5tlreg43279 * 32u + 192u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43282 = Uh_6tlref43281.read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43283 = _BinOpAddUnsigned32(Uh_5tlreg43282, Uh_5tlreg43277, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
    Uh_6tlref43281.write(Uh_5tlreg43283);

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
    {

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
      const u32 Uh_5tlreg43284 = 0u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43285 = _Unsigned32ToUnsigned32(Uh_5tlreg43284, 1, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43287 = Uv_5categ.read(); //gcnl:Node.cpp:691
      if(Uh_5tlreg43287 >= 32) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r102321u<EC> Uh_6tlref43289(ur, Uh_5tlreg43287 * 32u + 192u); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg43290 = Uh_6tlref43289.read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43291 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43290, Uh_5tlreg43285, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43291, 1)) //gcnl:NodeControl.cpp:213
      {

//! WindowScanner.ulam:74:     if (mWeights[categ] == 0u) return SiteNum.maxof; // Flag value for bogons adding with no weight
          const u32 Uh_5tlreg43292 = 63u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10161u<EC> Uh_5tlval43293(Uh_5tlreg43292); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43293); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! WindowScanner.ulam:75:     if (random.create(mWeights[categ]) < weight) {
    {

//! WindowScanner.ulam:75:     if (random.create(mWeights[categ]) < weight) {
      const u32 Uh_5tlreg43295 = Uv_6weight.read(); //gcnl:Node.cpp:691
      UlamRef<EC> Uh_3tur43297(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43299 = Uv_5categ.read(); //gcnl:Node.cpp:691
      if(Uh_5tlreg43299 >= 32) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r102321u<EC> Uh_6tlref43301(ur, Uh_5tlreg43299 * 32u + 192u); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg43302 = Uh_6tlref43301.read(); //gcnl:Node.cpp:657
      Ui_Ut_102321u<EC> Uh_5tlval43303(Uh_5tlreg43302); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval43305 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur43297, Uh_5tlval43303); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43306 = Uh_5tlval43305.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg43307 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43306, Uh_5tlreg43295, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43307, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! WindowScanner.ulam:76:       mSites[categ] = sn;
          const u32 Uh_5tlreg43309 = Uv_2sn.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg43311 = Uv_5categ.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg43311 >= 32) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10161u<EC> Uh_6tlref43313(ur, Uh_5tlreg43311 * 6u + 0u); //gcnl:Node.cpp:1303
          Uh_6tlref43313.write(Uh_5tlreg43309);
        }
      } // end if
    }

//! WindowScanner.ulam:78:     return mSites[categ];
    const u32 Uh_5tlreg43315 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43315 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43317(ur, Uh_5tlreg43315 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43318 = Uh_6tlref43317.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43319(Uh_5tlreg43318); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43319); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210categorize



//! WindowScanner.ulam:81:   Unsigned getHits(Category categ) { return mWeights[categ]; }
  template<class EC>
  Ui_Ut_102321u<EC> Un_10412489213WindowScanner10<EC>::Uf_7getHits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:81:   Unsigned getHits(Category categ) { return mWeights[categ]; }
    const u32 Uh_5tlreg43321 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43321 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102321u<EC> Uh_6tlref43323(ur, Uh_5tlreg43321 * 32u + 192u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43324 = Uh_6tlref43323.read(); //gcnl:Node.cpp:657
    Ui_Ut_102321u<EC> Uh_5tlval43325(Uh_5tlreg43324); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43325); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7getHits



//! WindowScanner.ulam:82:   SiteNum getSiteNum(Category categ) { return mSites[categ]; }
  template<class EC>
  Ui_Ut_10161u<EC> Un_10412489213WindowScanner10<EC>::Uf_9210getSiteNum(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_5categ) const
  {

//! WindowScanner.ulam:82:   SiteNum getSiteNum(Category categ) { return mSites[categ]; }
    const u32 Uh_5tlreg43327 = Uv_5categ.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43327 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43329(ur, Uh_5tlreg43327 * 6u + 0u); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg43330 = Uh_6tlref43329.read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval43331(Uh_5tlreg43330); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43331); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9210getSiteNum


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

