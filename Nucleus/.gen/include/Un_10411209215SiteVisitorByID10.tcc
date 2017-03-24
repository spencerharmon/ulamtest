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
#include "Uq_10106Random10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Uq_10109212DecisionTree10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Un_10411209215SiteVisitorByID10<EC>::Un_10411209215SiteVisitorByID10() : UlamTransient<EC>(MFM_UUID_FOR("Un10411209215SiteVisitorByID10", 0))
  { }

  template<class EC>
  Un_10411209215SiteVisitorByID10<EC>::~Un_10411209215SiteVisitorByID10(){} //gcnl:NodeBlockClass.cpp:1826


//! SiteVisitorByID.ulam:85: 	virtual Void visit(WindowScanner& wsrv, Atom & a, SiteNum sn){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_5visit(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Un_r10412489213WindowScanner10<EC>& Ur_4wsrv, Ui_Ut_r102961a<EC>& Ur_1a, Ui_Ut_10161u<EC>& Uv_2sn)
  {

//! SiteVisitorByID.ulam:86: 		ElementType et = (ElementType) au.getType(a);
    UlamRef<EC> Uh_3tur43547(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut43549 = Ur_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval43550(Uh_3tut43549); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321i<EC> Uh_5tlval43552 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7getType(uc, Uh_3tur43547, Uh_5tuval43550); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43553 = Uh_5tlval43552.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg43554 = _Int32ToUnsigned32(Uh_5tlreg43553, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161u<EC> Uv_2et(Uh_5tlreg43554); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:87: 		ID id = getID(sn);
    const u32 Uh_5tlreg43557 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43558(Uh_5tlreg43557); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102101u<EC> Uh_5tlval43560 = THE_INSTANCE.Uf_5getID(uc, ur, Uh_5tlval43558); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43561 = Uh_5tlval43560.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102101u<EC> Uv_2id(Uh_5tlreg43561); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:88: 		Seqno seqno = getSeqno(sn);
    const u32 Uh_5tlreg43564 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43565(Uh_5tlreg43564); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43567 = THE_INSTANCE.Uf_8getSeqno(uc, ur, Uh_5tlval43565); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43568 = Uh_5tlval43567.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg43568); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
    {

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
      const u32 Uh_5tlreg43569 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43570 = _Int32ToUnsigned32(Uh_5tlreg43569, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43570); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
      while(true)
      {
        const u32 Uh_5tlreg43571 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43573 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43574 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43573, Uh_5tlreg43571, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43574, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
        {

//! SiteVisitorByID.ulam:91: 			if(mSeqno[i] > 0){
          {

//! SiteVisitorByID.ulam:91: 			if(mSeqno[i] > 0){
            const u32 Uh_5tlreg43575 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43576 = _Int32ToInt32(Uh_5tlreg43575, 2, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43578 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg43578 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10161u<EC> Uh_6tlref43580(ur, Uh_5tlreg43578 * 6u + 0u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg43581 = Uh_6tlref43580.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg43582 = _Unsigned32ToInt32(Uh_5tlreg43581, 6, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43583 = _BinOpCompareGreaterThanInt32(Uh_5tlreg43582, Uh_5tlreg43576, 7); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43583, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:92: 				if (mInUse[i] && mType[i] == et && (ID) mID[i] == (ID) id && mSeqno[i] == seqno){
                {

//! SiteVisitorByID.ulam:92: 				if (mInUse[i] && mType[i] == et && (ID) mID[i] == (ID) id && mSeqno[i] == seqno){
                  u32 Uh_5tlreg43584 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg43585 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg43586 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg43588 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg43588 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref43590(ur, Uh_5tlreg43588 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg43591 = Uh_6tlref43590.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg43591, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43593 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43595 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg43595 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref43597(ur, Uh_5tlreg43595 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg43598 = Uh_6tlref43597.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43599 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43598, Uh_5tlreg43593, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43586 = Uh_5tlreg43599; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43586, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43601 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43603 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg43603 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref43605(ur, Uh_5tlreg43603 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg43606 = Uh_6tlref43605.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43607 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43606, Uh_5tlreg43601, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43585 = Uh_5tlreg43607; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43585, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43609 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43611 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg43611 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r10161u<EC> Uh_6tlref43613(ur, Uh_5tlreg43611 * 6u + 0u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg43614 = Uh_6tlref43613.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43615 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43614, Uh_5tlreg43609, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43584 = Uh_5tlreg43615; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43584, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:93: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur43617(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg43619 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval43620(Uh_5tlreg43619); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg43622 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg43623 = _Unsigned32ToUnsigned32(Uh_5tlreg43622, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval43624(Uh_5tlreg43623); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval43626 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur43617, Uh_5tlval43620, Uh_5tlval43624); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg43627 = Uh_5tlval43626.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:96: 			if(mInvert[i]){
          {

//! SiteVisitorByID.ulam:96: 			if(mInvert[i]){
            const u32 Uh_5tlreg43629 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg43629 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref43631(ur, Uh_5tlreg43629 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg43632 = Uh_6tlref43631.read(); //gcnl:Node.cpp:657
            if(_Bool32ToCbool(Uh_5tlreg43632, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:97: 				if (mInUse[i] && (mType[i] != et || (ID) mID[i] != (ID) id)){
                {

//! SiteVisitorByID.ulam:97: 				if (mInUse[i] && (mType[i] != et || (ID) mID[i] != (ID) id)){
                  u32 Uh_5tlreg43633 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg43635 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg43635 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref43637(ur, Uh_5tlreg43635 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg43638 = Uh_6tlref43637.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg43638, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    u32 Uh_5tlreg43639 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
                    const u32 Uh_5tlreg43641 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43643 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg43643 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref43645(ur, Uh_5tlreg43643 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg43646 = Uh_6tlref43645.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43647 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg43646, Uh_5tlreg43641, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    if(!_Bool32ToCbool(Uh_5tlreg43647, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
                    {
                      const u32 Uh_5tlreg43649 = Uv_2id.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg43651 = Uv_1i.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg43651 >= 32) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r102101u<EC> Uh_6tlref43653(ur, Uh_5tlreg43651 * 10u + 192u); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg43654 = Uh_6tlref43653.read(); //gcnl:Node.cpp:657
                      const u32 Uh_5tlreg43655 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg43654, Uh_5tlreg43649, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                      Uh_5tlreg43639 = Uh_5tlreg43655; //gcnl:NodeBinaryOpLogicalOr.cpp:146
                    }
                    else
                    {
                      Uh_5tlreg43639 = Uh_5tlreg43647; //gcnl:NodeBinaryOpLogicalOr.cpp:163
                    }
                    Uh_5tlreg43633 = Uh_5tlreg43639; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43633, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:98: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur43657(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg43659 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval43660(Uh_5tlreg43659); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg43662 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg43663 = _Unsigned32ToUnsigned32(Uh_5tlreg43662, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval43664(Uh_5tlreg43663); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval43666 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur43657, Uh_5tlval43660, Uh_5tlval43664); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg43667 = Uh_5tlval43666.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:101: 			if(!mInvert[i] && mNeighbor[i]){
          {

//! SiteVisitorByID.ulam:101: 			if(!mInvert[i] && mNeighbor[i]){
            u32 Uh_5tlreg43668 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg43670 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg43670 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref43672(ur, Uh_5tlreg43670 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg43673 = Uh_6tlref43672.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg43674 = _LogicalBangBool32(Uh_5tlreg43673, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg43674, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg43676 = Uv_1i.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg43676 >= 32) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref43678(ur, Uh_5tlreg43676 * 1u + 1088u); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg43679 = Uh_6tlref43678.read(); //gcnl:Node.cpp:657
              Uh_5tlreg43668 = Uh_5tlreg43679; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg43668, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:102: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] != (ID) id)){
                {

//! SiteVisitorByID.ulam:102: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] != (ID) id)){
                  u32 Uh_5tlreg43680 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg43681 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg43683 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg43683 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref43685(ur, Uh_5tlreg43683 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg43686 = Uh_6tlref43685.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg43686, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43688 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43690 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg43690 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref43692(ur, Uh_5tlreg43690 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg43693 = Uh_6tlref43692.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43694 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43693, Uh_5tlreg43688, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43681 = Uh_5tlreg43694; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43681, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43696 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43698 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg43698 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref43700(ur, Uh_5tlreg43698 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg43701 = Uh_6tlref43700.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43702 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg43701, Uh_5tlreg43696, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43680 = Uh_5tlreg43702; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43680, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:103: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur43704(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg43706 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval43707(Uh_5tlreg43706); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg43709 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg43710 = _Unsigned32ToUnsigned32(Uh_5tlreg43709, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval43711(Uh_5tlreg43710); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval43713 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur43704, Uh_5tlval43707, Uh_5tlval43711); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg43714 = Uh_5tlval43713.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:106: 			if(!mInvert[i] && !mNeighbor[i]){
          {

//! SiteVisitorByID.ulam:106: 			if(!mInvert[i] && !mNeighbor[i]){
            u32 Uh_5tlreg43715 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg43717 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg43717 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref43719(ur, Uh_5tlreg43717 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg43720 = Uh_6tlref43719.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg43721 = _LogicalBangBool32(Uh_5tlreg43720, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg43721, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg43723 = Uv_1i.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg43723 >= 32) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref43725(ur, Uh_5tlreg43723 * 1u + 1088u); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg43726 = Uh_6tlref43725.read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43727 = _LogicalBangBool32(Uh_5tlreg43726, 1); //gcnl:NodeUnaryOp.cpp:449
              Uh_5tlreg43715 = Uh_5tlreg43727; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg43715, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:107: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] == (ID) id)){
                {

//! SiteVisitorByID.ulam:107: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] == (ID) id)){
                  u32 Uh_5tlreg43728 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg43729 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg43731 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg43731 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref43733(ur, Uh_5tlreg43731 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg43734 = Uh_6tlref43733.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg43734, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43736 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43738 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg43738 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref43740(ur, Uh_5tlreg43738 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg43741 = Uh_6tlref43740.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43742 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43741, Uh_5tlreg43736, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43729 = Uh_5tlreg43742; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43729, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43744 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43746 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg43746 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref43748(ur, Uh_5tlreg43746 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg43749 = Uh_6tlref43748.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43750 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43749, Uh_5tlreg43744, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43728 = Uh_5tlreg43750; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43728, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:108: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur43752(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg43754 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval43755(Uh_5tlreg43754); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg43757 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg43758 = _Unsigned32ToUnsigned32(Uh_5tlreg43757, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval43759(Uh_5tlreg43758); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval43761 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur43752, Uh_5tlval43755, Uh_5tlval43759); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg43762 = Uh_5tlval43761.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
Ul_214endcontrolloop216:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
        const u32 Uh_5tlreg43763 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43764 = _Int32ToUnsigned32(Uh_5tlreg43763, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43766 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43767 = _BinOpAddUnsigned32(Uh_5tlreg43766, Uh_5tlreg43764, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg43767); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_5visit



//! SiteVisitorByID.ulam:35: 	Void setType(Category c, ElementType et) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_7setType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_102161u<EC>& Uv_2et) const
  {

//! SiteVisitorByID.ulam:36: 		mType[c] = et;
    const u32 Uh_5tlreg43769 = Uv_2et.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43771 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43771 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102161u<EC> Uh_6tlref43773(ur, Uh_5tlreg43771 * 16u + 512u); //gcnl:Node.cpp:1303
    Uh_6tlref43773.write(Uh_5tlreg43769);

//! SiteVisitorByID.ulam:37: 		mInUse[c] = true;
    const u32 Uh_5tlreg43774 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43776 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43776 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref43778(ur, Uh_5tlreg43776 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref43778.write(Uh_5tlreg43774);

  } // Uf_7setType



//! SiteVisitorByID.ulam:40: 	Void setID(Category c, ID id) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_5setID(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! SiteVisitorByID.ulam:41: 		mID[c] = id;
    const u32 Uh_5tlreg43780 = Uv_2id.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43782 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43782 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102101u<EC> Uh_6tlref43784(ur, Uh_5tlreg43782 * 10u + 192u); //gcnl:Node.cpp:1303
    Uh_6tlref43784.write(Uh_5tlreg43780);

//! SiteVisitorByID.ulam:42: 		mInUse[c] = true;
    const u32 Uh_5tlreg43785 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43787 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43787 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref43789(ur, Uh_5tlreg43787 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref43789.write(Uh_5tlreg43785);

  } // Uf_5setID



//! SiteVisitorByID.ulam:69: 	Void invert(Category c){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_6invert(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:70: 		mInvert[c] = true;
    const u32 Uh_5tlreg43790 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43792 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43792 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref43794(ur, Uh_5tlreg43792 * 1u + 1056u); //gcnl:Node.cpp:1303
    Uh_6tlref43794.write(Uh_5tlreg43790);

  } // Uf_6invert



//! SiteVisitorByID.ulam:72: 	Void neighborCell(Category c){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_9212neighborCell(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:73: 		mNeighbor[c] = true;
    const u32 Uh_5tlreg43795 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43797 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43797 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref43799(ur, Uh_5tlreg43797 * 1u + 1088u); //gcnl:Node.cpp:1303
    Uh_6tlref43799.write(Uh_5tlreg43795);

  } // Uf_9212neighborCell



//! SiteVisitorByID.ulam:30: 	Void reset() {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_5reset(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
    {

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
      const u32 Uh_5tlreg43800 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43801 = _Int32ToUnsigned32(Uh_5tlreg43800, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg43801); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg43802 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43804 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43805 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43804, Uh_5tlreg43802, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43805, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! SiteVisitorByID.ulam:32: 			unsetType((Category) i);

//! SiteVisitorByID.ulam:32: 			unsetType((Category) i);
          const u32 Uh_5tlreg43808 = Uv_1i.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg43809 = _Unsigned32ToUnsigned32(Uh_5tlreg43808, 32, 5); //gcnl:NodeCast.cpp:723
          Ui_Ut_10151u<EC> Uh_5tlval43810(Uh_5tlreg43809); //func arg& //gcnl:Node.cpp:1128
          THE_INSTANCE.Uf_919unsetType(uc, ur, Uh_5tlval43810); //gcnl:NodeFunctionCall.cpp:1006

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
Ul_214endcontrolloop215:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
        const u32 Uh_5tlreg43812 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43813 = _Int32ToUnsigned32(Uh_5tlreg43812, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43815 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43816 = _BinOpAddUnsigned32(Uh_5tlreg43815, Uh_5tlreg43813, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg43816); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_5reset



//! SiteVisitorByID.ulam:50: 	Void unsetType(Category c) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_919unsetType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:51: 		mInUse[c] = false;
    const u32 Uh_5tlreg43817 = 0u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43819 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43819 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref43821(ur, Uh_5tlreg43819 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref43821.write(Uh_5tlreg43817);

//! SiteVisitorByID.ulam:52: 		mType[c] = 0;
    const u32 Uh_5tlreg43822 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43823 = _Int32ToUnsigned32(Uh_5tlreg43822, 2, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43825 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43825 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102161u<EC> Uh_6tlref43827(ur, Uh_5tlreg43825 * 16u + 512u); //gcnl:Node.cpp:1303
    Uh_6tlref43827.write(Uh_5tlreg43823);

  } // Uf_919unsetType



//! SiteVisitorByID.ulam:45: 	Void setSeqno(Category c, Seqno seqno) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_8setSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_10161u<EC>& Uv_5seqno) const
  {

//! SiteVisitorByID.ulam:46: 		mSeqno[c] = seqno;
    const u32 Uh_5tlreg43829 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43831 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43831 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref43833(ur, Uh_5tlreg43831 * 6u + 0u); //gcnl:Node.cpp:1303
    Uh_6tlref43833.write(Uh_5tlreg43829);

//! SiteVisitorByID.ulam:47: 		mInUse[c] = true;
    const u32 Uh_5tlreg43834 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43836 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg43836 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref43838(ur, Uh_5tlreg43836 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref43838.write(Uh_5tlreg43834);

  } // Uf_8setSeqno



//! SiteVisitorByID.ulam:55: 	ID getID(SiteNum sn){
  template<class EC>
  Ui_Ut_102101u<EC> Un_10411209215SiteVisitorByID10<EC>::Uf_5getID(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn) const
  {

//! SiteVisitorByID.ulam:56: 		Atom a = ew[sn];
    UlamRef<EC> Uh_3tur43840(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43842 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43843(Uh_5tlreg43842); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval43845 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43840, Uh_5tlval43843); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43845.read()); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
    {

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
      const T Uh_3tut43847 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43848 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43847); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43848, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval43849 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval43849, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43849.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:58: 			return a.id;
          const u32 Uh_5tlreg43852 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval43853(Uh_5tlreg43852); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43853); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
    {

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
      const T Uh_3tut43855 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43856 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43855); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43856, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval43857 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval43857, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43857.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:61: 			return a.id;
          const u32 Uh_5tlreg43860 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval43861(Uh_5tlreg43860); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43861); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! SiteVisitorByID.ulam:64: 			return 0;
          const u32 Uh_5tlreg43862 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43863 = _Int32ToUnsigned32(Uh_5tlreg43862, 2, 10); //gcnl:NodeCast.cpp:723
          Ui_Ut_102101u<EC> Uh_5tlval43864(Uh_5tlreg43863); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43864); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_5getID



//! SiteVisitorByID.ulam:75: 	Seqno getSeqno(SiteNum sn){
  template<class EC>
  Ui_Ut_10161u<EC> Un_10411209215SiteVisitorByID10<EC>::Uf_8getSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn) const
  {

//! SiteVisitorByID.ulam:76: 		Atom a = ew[sn];
    UlamRef<EC> Uh_3tur43866(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43868 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43869(Uh_5tlreg43868); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval43871 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43866, Uh_5tlval43869); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43871.read()); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
    {

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
      const T Uh_3tut43873 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43874 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43873); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43874, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval43875 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval43875, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43875.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:78: 			return a.seqno;
          const u32 Uh_5tlreg43878 = UlamRef<EC>(Uv_1a, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43879(Uh_5tlreg43878); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43879); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! SiteVisitorByID.ulam:81: 			return (Seqno)0;
          const u32 Uh_5tlreg43880 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43881 = _Int32ToUnsigned32(Uh_5tlreg43880, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval43882(Uh_5tlreg43881); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43882); //gcnl:NodeReturnStatement.cpp:343
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

