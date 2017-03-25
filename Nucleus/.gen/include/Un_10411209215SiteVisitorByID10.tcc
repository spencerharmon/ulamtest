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
#include "Ue_102158EggShell10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Un_10411209215SiteVisitorByID10<EC>::Un_10411209215SiteVisitorByID10() : UlamTransient<EC>(MFM_UUID_FOR("Un10411209215SiteVisitorByID10", 0))
  { }

  template<class EC>
  Un_10411209215SiteVisitorByID10<EC>::~Un_10411209215SiteVisitorByID10(){} //gcnl:NodeBlockClass.cpp:1826


//! SiteVisitorByID.ulam:30: 	Void reset() {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_5reset(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
    {

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
      const u32 Uh_5tlreg44421 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44422 = _Int32ToUnsigned32(Uh_5tlreg44421, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg44422); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg44423 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44425 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44426 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44425, Uh_5tlreg44423, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg44426, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! SiteVisitorByID.ulam:32: 			unsetType((Category) i);

//! SiteVisitorByID.ulam:32: 			unsetType((Category) i);
          const u32 Uh_5tlreg44429 = Uv_1i.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44430 = _Unsigned32ToUnsigned32(Uh_5tlreg44429, 32, 5); //gcnl:NodeCast.cpp:723
          Ui_Ut_10151u<EC> Uh_5tlval44431(Uh_5tlreg44430); //func arg& //gcnl:Node.cpp:1128
          THE_INSTANCE.Uf_919unsetType(uc, ur, Uh_5tlval44431); //gcnl:NodeFunctionCall.cpp:1006

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
Ul_214endcontrolloop217:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
        const u32 Uh_5tlreg44433 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44434 = _Int32ToUnsigned32(Uh_5tlreg44433, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44436 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44437 = _BinOpAddUnsigned32(Uh_5tlreg44436, Uh_5tlreg44434, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg44437); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_5reset



//! SiteVisitorByID.ulam:35: 	Void setType(Category c, ElementType et) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_7setType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_102161u<EC>& Uv_2et) const
  {

//! SiteVisitorByID.ulam:36: 		mType[c] = et;
    const u32 Uh_5tlreg44439 = Uv_2et.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44441 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44441 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102161u<EC> Uh_6tlref44443(ur, Uh_5tlreg44441 * 16u + 512u); //gcnl:Node.cpp:1303
    Uh_6tlref44443.write(Uh_5tlreg44439);

//! SiteVisitorByID.ulam:37: 		mInUse[c] = true;
    const u32 Uh_5tlreg44444 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44446 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44446 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44448(ur, Uh_5tlreg44446 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref44448.write(Uh_5tlreg44444);

  } // Uf_7setType



//! SiteVisitorByID.ulam:40: 	Void setID(Category c, ID id) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_5setID(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! SiteVisitorByID.ulam:41: 		mID[c] = id;
    const u32 Uh_5tlreg44450 = Uv_2id.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44452 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44452 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102101u<EC> Uh_6tlref44454(ur, Uh_5tlreg44452 * 10u + 192u); //gcnl:Node.cpp:1303
    Uh_6tlref44454.write(Uh_5tlreg44450);

//! SiteVisitorByID.ulam:42: 		mInUse[c] = true;
    const u32 Uh_5tlreg44455 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44457 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44457 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44459(ur, Uh_5tlreg44457 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref44459.write(Uh_5tlreg44455);

  } // Uf_5setID



//! SiteVisitorByID.ulam:72: 	Void neighborCell(Category c){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_9212neighborCell(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:73: 		mNeighbor[c] = true;
    const u32 Uh_5tlreg44460 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44462 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44462 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44464(ur, Uh_5tlreg44462 * 1u + 1088u); //gcnl:Node.cpp:1303
    Uh_6tlref44464.write(Uh_5tlreg44460);

  } // Uf_9212neighborCell



//! SiteVisitorByID.ulam:85: 	virtual Void visit(WindowScanner& wsrv, Atom & a, SiteNum sn){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_5visit(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Un_r10412489213WindowScanner10<EC>& Ur_4wsrv, Ui_Ut_r102961a<EC>& Ur_1a, Ui_Ut_10161u<EC>& Uv_2sn)
  {

//! SiteVisitorByID.ulam:86: 		ElementType et = (ElementType) au.getType(a);
    UlamRef<EC> Uh_3tur44466(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut44468 = Ur_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44469(Uh_3tut44468); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321i<EC> Uh_5tlval44471 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7getType(uc, Uh_3tur44466, Uh_5tuval44469); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44472 = Uh_5tlval44471.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg44473 = _Int32ToUnsigned32(Uh_5tlreg44472, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161u<EC> Uv_2et(Uh_5tlreg44473); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:87: 		ID id = getID(sn);
    const u32 Uh_5tlreg44476 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44477(Uh_5tlreg44476); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102101u<EC> Uh_5tlval44479 = THE_INSTANCE.Uf_5getID(uc, ur, Uh_5tlval44477); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44480 = Uh_5tlval44479.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102101u<EC> Uv_2id(Uh_5tlreg44480); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:88: 		Seqno seqno = getSeqno(sn);
    const u32 Uh_5tlreg44483 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44484(Uh_5tlreg44483); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval44486 = THE_INSTANCE.Uf_8getSeqno(uc, ur, Uh_5tlval44484); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44487 = Uh_5tlval44486.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg44487); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
    {

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
      const u32 Uh_5tlreg44488 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44489 = _Int32ToUnsigned32(Uh_5tlreg44488, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg44489); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
      while(true)
      {
        const u32 Uh_5tlreg44490 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44492 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44493 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44492, Uh_5tlreg44490, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg44493, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
        {

//! SiteVisitorByID.ulam:91: 			if(mSeqno[i] > 0){
          {

//! SiteVisitorByID.ulam:91: 			if(mSeqno[i] > 0){
            const u32 Uh_5tlreg44494 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44495 = _Int32ToInt32(Uh_5tlreg44494, 2, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44497 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44497 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10161u<EC> Uh_6tlref44499(ur, Uh_5tlreg44497 * 6u + 0u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44500 = Uh_6tlref44499.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44501 = _Unsigned32ToInt32(Uh_5tlreg44500, 6, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44502 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44501, Uh_5tlreg44495, 7); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44502, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:92: 				if (mInUse[i] && mType[i] == et && (ID) mID[i] == (ID) id && mSeqno[i] == seqno){
                {

//! SiteVisitorByID.ulam:92: 				if (mInUse[i] && mType[i] == et && (ID) mID[i] == (ID) id && mSeqno[i] == seqno){
                  u32 Uh_5tlreg44503 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44504 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44505 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44507 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44507 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44509(ur, Uh_5tlreg44507 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44510 = Uh_6tlref44509.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg44510, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44512 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44514 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44514 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref44516(ur, Uh_5tlreg44514 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44517 = Uh_6tlref44516.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44518 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44517, Uh_5tlreg44512, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44505 = Uh_5tlreg44518; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44505, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44520 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44522 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44522 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref44524(ur, Uh_5tlreg44522 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44525 = Uh_6tlref44524.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44526 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44525, Uh_5tlreg44520, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44504 = Uh_5tlreg44526; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44504, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44528 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44530 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44530 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r10161u<EC> Uh_6tlref44532(ur, Uh_5tlreg44530 * 6u + 0u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44533 = Uh_6tlref44532.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44534 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44533, Uh_5tlreg44528, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44503 = Uh_5tlreg44534; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44503, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:93: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur44536(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44538 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44539(Uh_5tlreg44538); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44541 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44542 = _Unsigned32ToUnsigned32(Uh_5tlreg44541, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval44543(Uh_5tlreg44542); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44545 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur44536, Uh_5tlval44539, Uh_5tlval44543); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44546 = Uh_5tlval44545.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:96: 			if(mInvert[i]){
          {

//! SiteVisitorByID.ulam:96: 			if(mInvert[i]){
            const u32 Uh_5tlreg44548 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44548 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref44550(ur, Uh_5tlreg44548 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44551 = Uh_6tlref44550.read(); //gcnl:Node.cpp:657
            if(_Bool32ToCbool(Uh_5tlreg44551, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:97: 				if (mInUse[i] && (mType[i] != et || (ID) mID[i] != (ID) id)){
                {

//! SiteVisitorByID.ulam:97: 				if (mInUse[i] && (mType[i] != et || (ID) mID[i] != (ID) id)){
                  u32 Uh_5tlreg44552 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44554 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44554 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44556(ur, Uh_5tlreg44554 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44557 = Uh_6tlref44556.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg44557, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    u32 Uh_5tlreg44558 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
                    const u32 Uh_5tlreg44560 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44562 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44562 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref44564(ur, Uh_5tlreg44562 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44565 = Uh_6tlref44564.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44566 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg44565, Uh_5tlreg44560, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    if(!_Bool32ToCbool(Uh_5tlreg44566, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
                    {
                      const u32 Uh_5tlreg44568 = Uv_2id.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44570 = Uv_1i.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44570 >= 32) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r102101u<EC> Uh_6tlref44572(ur, Uh_5tlreg44570 * 10u + 192u); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg44573 = Uh_6tlref44572.read(); //gcnl:Node.cpp:657
                      const u32 Uh_5tlreg44574 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg44573, Uh_5tlreg44568, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                      Uh_5tlreg44558 = Uh_5tlreg44574; //gcnl:NodeBinaryOpLogicalOr.cpp:146
                    }
                    else
                    {
                      Uh_5tlreg44558 = Uh_5tlreg44566; //gcnl:NodeBinaryOpLogicalOr.cpp:163
                    }
                    Uh_5tlreg44552 = Uh_5tlreg44558; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44552, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:98: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur44576(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44578 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44579(Uh_5tlreg44578); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44581 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44582 = _Unsigned32ToUnsigned32(Uh_5tlreg44581, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval44583(Uh_5tlreg44582); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44585 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur44576, Uh_5tlval44579, Uh_5tlval44583); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44586 = Uh_5tlval44585.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:101: 			if(!mInvert[i] && mNeighbor[i]){
          {

//! SiteVisitorByID.ulam:101: 			if(!mInvert[i] && mNeighbor[i]){
            u32 Uh_5tlreg44587 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44589 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44589 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref44591(ur, Uh_5tlreg44589 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44592 = Uh_6tlref44591.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44593 = _LogicalBangBool32(Uh_5tlreg44592, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg44593, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44595 = Uv_1i.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg44595 >= 32) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref44597(ur, Uh_5tlreg44595 * 1u + 1088u); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg44598 = Uh_6tlref44597.read(); //gcnl:Node.cpp:657
              Uh_5tlreg44587 = Uh_5tlreg44598; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44587, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:102: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] != (ID) id)){
                {

//! SiteVisitorByID.ulam:102: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] != (ID) id)){
                  u32 Uh_5tlreg44599 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44600 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44602 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44602 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44604(ur, Uh_5tlreg44602 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44605 = Uh_6tlref44604.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg44605, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44607 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44609 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44609 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref44611(ur, Uh_5tlreg44609 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44612 = Uh_6tlref44611.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44613 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44612, Uh_5tlreg44607, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44600 = Uh_5tlreg44613; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44600, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44615 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44617 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44617 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref44619(ur, Uh_5tlreg44617 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44620 = Uh_6tlref44619.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44621 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg44620, Uh_5tlreg44615, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44599 = Uh_5tlreg44621; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44599, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:103: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur44623(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44625 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44626(Uh_5tlreg44625); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44628 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44629 = _Unsigned32ToUnsigned32(Uh_5tlreg44628, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval44630(Uh_5tlreg44629); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44632 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur44623, Uh_5tlval44626, Uh_5tlval44630); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44633 = Uh_5tlval44632.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:106: 			if(!mInvert[i] && !mNeighbor[i]){
          {

//! SiteVisitorByID.ulam:106: 			if(!mInvert[i] && !mNeighbor[i]){
            u32 Uh_5tlreg44634 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44636 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44636 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref44638(ur, Uh_5tlreg44636 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44639 = Uh_6tlref44638.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44640 = _LogicalBangBool32(Uh_5tlreg44639, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg44640, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44642 = Uv_1i.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg44642 >= 32) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref44644(ur, Uh_5tlreg44642 * 1u + 1088u); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg44645 = Uh_6tlref44644.read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg44646 = _LogicalBangBool32(Uh_5tlreg44645, 1); //gcnl:NodeUnaryOp.cpp:449
              Uh_5tlreg44634 = Uh_5tlreg44646; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44634, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:107: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] == (ID) id)){
                {

//! SiteVisitorByID.ulam:107: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] == (ID) id)){
                  u32 Uh_5tlreg44647 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44648 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44650 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44650 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44652(ur, Uh_5tlreg44650 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44653 = Uh_6tlref44652.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg44653, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44655 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44657 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44657 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref44659(ur, Uh_5tlreg44657 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44660 = Uh_6tlref44659.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44661 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44660, Uh_5tlreg44655, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44648 = Uh_5tlreg44661; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44648, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44663 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44665 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44665 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref44667(ur, Uh_5tlreg44665 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44668 = Uh_6tlref44667.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44669 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44668, Uh_5tlreg44663, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44647 = Uh_5tlreg44669; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44647, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:108: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur44671(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44673 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44674(Uh_5tlreg44673); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44676 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44677 = _Unsigned32ToUnsigned32(Uh_5tlreg44676, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval44678(Uh_5tlreg44677); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44680 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur44671, Uh_5tlval44674, Uh_5tlval44678); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44681 = Uh_5tlval44680.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
Ul_214endcontrolloop218:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
        const u32 Uh_5tlreg44682 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44683 = _Int32ToUnsigned32(Uh_5tlreg44682, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44685 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44686 = _BinOpAddUnsigned32(Uh_5tlreg44685, Uh_5tlreg44683, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg44686); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_5visit



//! SiteVisitorByID.ulam:69: 	Void invert(Category c){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_6invert(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:70: 		mInvert[c] = true;
    const u32 Uh_5tlreg44687 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44689 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44689 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44691(ur, Uh_5tlreg44689 * 1u + 1056u); //gcnl:Node.cpp:1303
    Uh_6tlref44691.write(Uh_5tlreg44687);

  } // Uf_6invert



//! SiteVisitorByID.ulam:50: 	Void unsetType(Category c) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_919unsetType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:51: 		mInUse[c] = false;
    const u32 Uh_5tlreg44692 = 0u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44694 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44694 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44696(ur, Uh_5tlreg44694 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref44696.write(Uh_5tlreg44692);

//! SiteVisitorByID.ulam:52: 		mType[c] = 0;
    const u32 Uh_5tlreg44697 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44698 = _Int32ToUnsigned32(Uh_5tlreg44697, 2, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg44700 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44700 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102161u<EC> Uh_6tlref44702(ur, Uh_5tlreg44700 * 16u + 512u); //gcnl:Node.cpp:1303
    Uh_6tlref44702.write(Uh_5tlreg44698);

  } // Uf_919unsetType



//! SiteVisitorByID.ulam:45: 	Void setSeqno(Category c, Seqno seqno) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_8setSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_10161u<EC>& Uv_5seqno) const
  {

//! SiteVisitorByID.ulam:46: 		mSeqno[c] = seqno;
    const u32 Uh_5tlreg44704 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44706 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44706 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref44708(ur, Uh_5tlreg44706 * 6u + 0u); //gcnl:Node.cpp:1303
    Uh_6tlref44708.write(Uh_5tlreg44704);

//! SiteVisitorByID.ulam:47: 		mInUse[c] = true;
    const u32 Uh_5tlreg44709 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44711 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44711 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44713(ur, Uh_5tlreg44711 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref44713.write(Uh_5tlreg44709);

  } // Uf_8setSeqno



//! SiteVisitorByID.ulam:55: 	ID getID(SiteNum sn){
  template<class EC>
  Ui_Ut_102101u<EC> Un_10411209215SiteVisitorByID10<EC>::Uf_5getID(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn) const
  {

//! SiteVisitorByID.ulam:56: 		Atom a = ew[sn];
    UlamRef<EC> Uh_3tur44715(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44717 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44718(Uh_5tlreg44717); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval44720 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44715, Uh_5tlval44718); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44720.read()); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
    {

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
      const T Uh_3tut44722 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44723 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44722); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg44723, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval44724 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval44724, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44724.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:58: 			return a.id;
          const u32 Uh_5tlreg44727 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval44728(Uh_5tlreg44727); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44728); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
    {

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
      const T Uh_3tut44730 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44731 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44730); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg44731, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval44732 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval44732, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44732.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:61: 			return a.id;
          const u32 Uh_5tlreg44735 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval44736(Uh_5tlreg44735); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44736); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! SiteVisitorByID.ulam:64: 			return 0;
          const u32 Uh_5tlreg44737 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44738 = _Int32ToUnsigned32(Uh_5tlreg44737, 2, 10); //gcnl:NodeCast.cpp:723
          Ui_Ut_102101u<EC> Uh_5tlval44739(Uh_5tlreg44738); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44739); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_5getID



//! SiteVisitorByID.ulam:75: 	Seqno getSeqno(SiteNum sn){
  template<class EC>
  Ui_Ut_10161u<EC> Un_10411209215SiteVisitorByID10<EC>::Uf_8getSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn) const
  {

//! SiteVisitorByID.ulam:76: 		Atom a = ew[sn];
    UlamRef<EC> Uh_3tur44741(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44743 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44744(Uh_5tlreg44743); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval44746 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44741, Uh_5tlval44744); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44746.read()); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
    {

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
      const T Uh_3tut44748 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44749 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44748); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg44749, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval44750 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval44750, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44750.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:78: 			return a.seqno;
          const u32 Uh_5tlreg44753 = UlamRef<EC>(Uv_1a, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44754(Uh_5tlreg44753); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44754); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! SiteVisitorByID.ulam:81: 			return (Seqno)0;
          const u32 Uh_5tlreg44755 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44756 = _Int32ToUnsigned32(Uh_5tlreg44755, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval44757(Uh_5tlreg44756); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44757); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_8getSeqno


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Un_10411209215SiteVisitorByID10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Ut_232161u", "mSeqno", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 3: { static UlamClassDataMemberInfo i("Ut_2322101u", "mID", 192u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 4: { static UlamClassDataMemberInfo i("Ut_2322161u", "mType", 512u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 5: { static UlamClassDataMemberInfo i("Ut_232111b", "mInUse", 1024u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 6: { static UlamClassDataMemberInfo i("Ut_232111b", "mInvert", 1056u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 7: { static UlamClassDataMemberInfo i("Ut_232111b", "mNeighbor", 1088u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Un_10411209215SiteVisitorByID10<EC>::GetDataMemberCount() const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Un_10411209215SiteVisitorByID10<EC>::GetMangledClassName() const
  {
    return "Un_10411209215SiteVisitorByID10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Un_10411209215SiteVisitorByID10<EC>::GetClassLength( ) const
  {
    return 1120; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Un_10411209215SiteVisitorByID10<EC>::GetString(u32 sidx)  const
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
  u32 Un_10411209215SiteVisitorByID10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::getDefaultTransient(u32 pos, BitStorage<EC>& bvsref) const
  {
    MFM_API_ASSERT_ARG((pos + bvsref.GetBitSize()) >= 1120u); //gcnl:NodeBlockClass.cpp:2219

    // Initialize any data members:
    static const u32 vales[(1120 + 31)/32] = { 0x0 }; //gcnl:CompilerState.cpp:1351
    static BitVector<1120> initBV; //gcnl:CompilerState.cpp:1357
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
  VfuncPtr Un_10411209215SiteVisitorByID10<EC>::m_vtable[3] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor),
    (VfuncPtr) ((typename Un_10411209215SiteVisitorByID10<EC>::Uf_5visit13r10412489213WindowScanner10r102961a10161u) &Un_10411209215SiteVisitorByID10<EC>::Uf_5visit)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Un_10411209215SiteVisitorByID10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 3) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Un_10411209215SiteVisitorByID10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109211SiteVisitor10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

