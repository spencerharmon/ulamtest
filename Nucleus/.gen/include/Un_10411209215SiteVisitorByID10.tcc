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
#include "Ue_102188EggShell10.h"
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
      const u32 Uh_5tlreg44611 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44612 = _Int32ToUnsigned32(Uh_5tlreg44611, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg44612); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
      while(true)
      {
        const u32 Uh_5tlreg44613 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44615 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44616 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44615, Uh_5tlreg44613, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg44616, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! SiteVisitorByID.ulam:32: 			unsetType((Category) i);

//! SiteVisitorByID.ulam:32: 			unsetType((Category) i);
          const u32 Uh_5tlreg44619 = Uv_1i.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44620 = _Unsigned32ToUnsigned32(Uh_5tlreg44619, 32, 5); //gcnl:NodeCast.cpp:723
          Ui_Ut_10151u<EC> Uh_5tlval44621(Uh_5tlreg44620); //func arg& //gcnl:Node.cpp:1128
          THE_INSTANCE.Uf_919unsetType(uc, ur, Uh_5tlval44621); //gcnl:NodeFunctionCall.cpp:1006

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
Ul_214endcontrolloop219:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SiteVisitorByID.ulam:31: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i) 
        const u32 Uh_5tlreg44623 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44624 = _Int32ToUnsigned32(Uh_5tlreg44623, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44626 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44627 = _BinOpAddUnsigned32(Uh_5tlreg44626, Uh_5tlreg44624, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg44627); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_5reset



//! SiteVisitorByID.ulam:35: 	Void setType(Category c, ElementType et) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_7setType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_102161u<EC>& Uv_2et) const
  {

//! SiteVisitorByID.ulam:36: 		mType[c] = et;
    const u32 Uh_5tlreg44629 = Uv_2et.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44631 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44631 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102161u<EC> Uh_6tlref44633(ur, Uh_5tlreg44631 * 16u + 512u); //gcnl:Node.cpp:1303
    Uh_6tlref44633.write(Uh_5tlreg44629);

//! SiteVisitorByID.ulam:37: 		mInUse[c] = true;
    const u32 Uh_5tlreg44634 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44636 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44636 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44638(ur, Uh_5tlreg44636 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref44638.write(Uh_5tlreg44634);

  } // Uf_7setType



//! SiteVisitorByID.ulam:40: 	Void setID(Category c, ID id) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_5setID(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! SiteVisitorByID.ulam:41: 		mID[c] = id;
    const u32 Uh_5tlreg44640 = Uv_2id.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44642 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44642 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102101u<EC> Uh_6tlref44644(ur, Uh_5tlreg44642 * 10u + 192u); //gcnl:Node.cpp:1303
    Uh_6tlref44644.write(Uh_5tlreg44640);

//! SiteVisitorByID.ulam:42: 		mInUse[c] = true;
    const u32 Uh_5tlreg44645 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44647 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44647 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44649(ur, Uh_5tlreg44647 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref44649.write(Uh_5tlreg44645);

  } // Uf_5setID



//! SiteVisitorByID.ulam:72: 	Void neighborCell(Category c){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_9212neighborCell(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:73: 		mNeighbor[c] = true;
    const u32 Uh_5tlreg44650 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44652 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44652 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44654(ur, Uh_5tlreg44652 * 1u + 1088u); //gcnl:Node.cpp:1303
    Uh_6tlref44654.write(Uh_5tlreg44650);

  } // Uf_9212neighborCell



//! SiteVisitorByID.ulam:85: 	virtual Void visit(WindowScanner& wsrv, Atom & a, SiteNum sn){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_5visit(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Un_r10412489213WindowScanner10<EC>& Ur_4wsrv, Ui_Ut_r102961a<EC>& Ur_1a, Ui_Ut_10161u<EC>& Uv_2sn)
  {

//! SiteVisitorByID.ulam:86: 		ElementType et = (ElementType) au.getType(a);
    UlamRef<EC> Uh_3tur44656(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut44658 = Ur_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44659(Uh_3tut44658); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321i<EC> Uh_5tlval44661 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7getType(uc, Uh_3tur44656, Uh_5tuval44659); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44662 = Uh_5tlval44661.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg44663 = _Int32ToUnsigned32(Uh_5tlreg44662, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161u<EC> Uv_2et(Uh_5tlreg44663); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:87: 		ID id = getID(sn);
    const u32 Uh_5tlreg44666 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44667(Uh_5tlreg44666); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102101u<EC> Uh_5tlval44669 = THE_INSTANCE.Uf_5getID(uc, ur, Uh_5tlval44667); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44670 = Uh_5tlval44669.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102101u<EC> Uv_2id(Uh_5tlreg44670); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:88: 		Seqno seqno = getSeqno(sn);
    const u32 Uh_5tlreg44673 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44674(Uh_5tlreg44673); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval44676 = THE_INSTANCE.Uf_8getSeqno(uc, ur, Uh_5tlval44674); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44677 = Uh_5tlval44676.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg44677); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
    {

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
      const u32 Uh_5tlreg44678 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44679 = _Int32ToUnsigned32(Uh_5tlreg44678, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uv_1i(Uh_5tlreg44679); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
      while(true)
      {
        const u32 Uh_5tlreg44680 = 32u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44682 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44683 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44682, Uh_5tlreg44680, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg44683, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
        {

//! SiteVisitorByID.ulam:91: 			if(mSeqno[i] > 0){
          {

//! SiteVisitorByID.ulam:91: 			if(mSeqno[i] > 0){
            const u32 Uh_5tlreg44684 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44685 = _Int32ToInt32(Uh_5tlreg44684, 2, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44687 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44687 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10161u<EC> Uh_6tlref44689(ur, Uh_5tlreg44687 * 6u + 0u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44690 = Uh_6tlref44689.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44691 = _Unsigned32ToInt32(Uh_5tlreg44690, 6, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44692 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44691, Uh_5tlreg44685, 7); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44692, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:92: 				if (mInUse[i] && mType[i] == et && (ID) mID[i] == (ID) id && mSeqno[i] == seqno){
                {

//! SiteVisitorByID.ulam:92: 				if (mInUse[i] && mType[i] == et && (ID) mID[i] == (ID) id && mSeqno[i] == seqno){
                  u32 Uh_5tlreg44693 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44694 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44695 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44697 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44697 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44699(ur, Uh_5tlreg44697 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44700 = Uh_6tlref44699.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg44700, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44702 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44704 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44704 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref44706(ur, Uh_5tlreg44704 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44707 = Uh_6tlref44706.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44708 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44707, Uh_5tlreg44702, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44695 = Uh_5tlreg44708; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44695, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44710 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44712 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44712 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref44714(ur, Uh_5tlreg44712 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44715 = Uh_6tlref44714.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44716 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44715, Uh_5tlreg44710, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44694 = Uh_5tlreg44716; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44694, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44718 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44720 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44720 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r10161u<EC> Uh_6tlref44722(ur, Uh_5tlreg44720 * 6u + 0u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44723 = Uh_6tlref44722.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44724 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44723, Uh_5tlreg44718, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44693 = Uh_5tlreg44724; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44693, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:93: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur44726(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44728 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44729(Uh_5tlreg44728); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44731 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44732 = _Unsigned32ToUnsigned32(Uh_5tlreg44731, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval44733(Uh_5tlreg44732); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44735 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur44726, Uh_5tlval44729, Uh_5tlval44733); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44736 = Uh_5tlval44735.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:96: 			if(mInvert[i]){
          {

//! SiteVisitorByID.ulam:96: 			if(mInvert[i]){
            const u32 Uh_5tlreg44738 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44738 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref44740(ur, Uh_5tlreg44738 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44741 = Uh_6tlref44740.read(); //gcnl:Node.cpp:657
            if(_Bool32ToCbool(Uh_5tlreg44741, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:97: 				if (mInUse[i] && (mType[i] != et || (ID) mID[i] != (ID) id)){
                {

//! SiteVisitorByID.ulam:97: 				if (mInUse[i] && (mType[i] != et || (ID) mID[i] != (ID) id)){
                  u32 Uh_5tlreg44742 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44744 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44744 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44746(ur, Uh_5tlreg44744 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44747 = Uh_6tlref44746.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg44747, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    u32 Uh_5tlreg44748 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
                    const u32 Uh_5tlreg44750 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44752 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44752 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref44754(ur, Uh_5tlreg44752 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44755 = Uh_6tlref44754.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44756 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg44755, Uh_5tlreg44750, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    if(!_Bool32ToCbool(Uh_5tlreg44756, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
                    {
                      const u32 Uh_5tlreg44758 = Uv_2id.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44760 = Uv_1i.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44760 >= 32) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r102101u<EC> Uh_6tlref44762(ur, Uh_5tlreg44760 * 10u + 192u); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg44763 = Uh_6tlref44762.read(); //gcnl:Node.cpp:657
                      const u32 Uh_5tlreg44764 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg44763, Uh_5tlreg44758, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                      Uh_5tlreg44748 = Uh_5tlreg44764; //gcnl:NodeBinaryOpLogicalOr.cpp:146
                    }
                    else
                    {
                      Uh_5tlreg44748 = Uh_5tlreg44756; //gcnl:NodeBinaryOpLogicalOr.cpp:163
                    }
                    Uh_5tlreg44742 = Uh_5tlreg44748; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44742, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:98: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur44766(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44768 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44769(Uh_5tlreg44768); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44771 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44772 = _Unsigned32ToUnsigned32(Uh_5tlreg44771, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval44773(Uh_5tlreg44772); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44775 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur44766, Uh_5tlval44769, Uh_5tlval44773); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44776 = Uh_5tlval44775.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:101: 			if(!mInvert[i] && mNeighbor[i]){
          {

//! SiteVisitorByID.ulam:101: 			if(!mInvert[i] && mNeighbor[i]){
            u32 Uh_5tlreg44777 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44779 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44779 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref44781(ur, Uh_5tlreg44779 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44782 = Uh_6tlref44781.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44783 = _LogicalBangBool32(Uh_5tlreg44782, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg44783, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44785 = Uv_1i.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg44785 >= 32) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref44787(ur, Uh_5tlreg44785 * 1u + 1088u); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg44788 = Uh_6tlref44787.read(); //gcnl:Node.cpp:657
              Uh_5tlreg44777 = Uh_5tlreg44788; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44777, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:102: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] != (ID) id)){
                {

//! SiteVisitorByID.ulam:102: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] != (ID) id)){
                  u32 Uh_5tlreg44789 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44790 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44792 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44792 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44794(ur, Uh_5tlreg44792 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44795 = Uh_6tlref44794.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg44795, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44797 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44799 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44799 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref44801(ur, Uh_5tlreg44799 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44802 = Uh_6tlref44801.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44803 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44802, Uh_5tlreg44797, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44790 = Uh_5tlreg44803; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44790, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44805 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44807 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44807 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref44809(ur, Uh_5tlreg44807 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44810 = Uh_6tlref44809.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44811 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg44810, Uh_5tlreg44805, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44789 = Uh_5tlreg44811; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44789, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:103: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur44813(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44815 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44816(Uh_5tlreg44815); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44818 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44819 = _Unsigned32ToUnsigned32(Uh_5tlreg44818, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval44820(Uh_5tlreg44819); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44822 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur44813, Uh_5tlval44816, Uh_5tlval44820); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44823 = Uh_5tlval44822.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }

//! SiteVisitorByID.ulam:106: 			if(!mInvert[i] && !mNeighbor[i]){
          {

//! SiteVisitorByID.ulam:106: 			if(!mInvert[i] && !mNeighbor[i]){
            u32 Uh_5tlreg44824 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44826 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44826 >= 32) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref44828(ur, Uh_5tlreg44826 * 1u + 1056u); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44829 = Uh_6tlref44828.read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44830 = _LogicalBangBool32(Uh_5tlreg44829, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg44830, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44832 = Uv_1i.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg44832 >= 32) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref44834(ur, Uh_5tlreg44832 * 1u + 1088u); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg44835 = Uh_6tlref44834.read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg44836 = _LogicalBangBool32(Uh_5tlreg44835, 1); //gcnl:NodeUnaryOp.cpp:449
              Uh_5tlreg44824 = Uh_5tlreg44836; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44824, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! SiteVisitorByID.ulam:107: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] == (ID) id)){
                {

//! SiteVisitorByID.ulam:107: 				if (mInUse[i] && (mType[i] == et) && ((ID) mID[i] == (ID) id)){
                  u32 Uh_5tlreg44837 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44838 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44840 = Uv_1i.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44840 >= 32) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44842(ur, Uh_5tlreg44840 * 1u + 1024u); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44843 = Uh_6tlref44842.read(); //gcnl:Node.cpp:657
                  if(_Bool32ToCbool(Uh_5tlreg44843, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44845 = Uv_2et.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44847 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44847 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102161u<EC> Uh_6tlref44849(ur, Uh_5tlreg44847 * 16u + 512u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44850 = Uh_6tlref44849.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44851 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44850, Uh_5tlreg44845, 16); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44838 = Uh_5tlreg44851; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44838, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44853 = Uv_2id.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44855 = Uv_1i.read(); //gcnl:Node.cpp:691
                    if(Uh_5tlreg44855 >= 32) //gcnl:NodeSquareBracket.cpp:794
                      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                    Ui_Ut_r102101u<EC> Uh_6tlref44857(ur, Uh_5tlreg44855 * 10u + 192u); //gcnl:Node.cpp:1303
                    const u32 Uh_5tlreg44858 = Uh_6tlref44857.read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg44859 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44858, Uh_5tlreg44853, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44837 = Uh_5tlreg44859; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44837, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SiteVisitorByID.ulam:108: 					wsrv.categorize(sn, (Category) i);
                      UlamRef<EC> Uh_3tur44861(Ur_4wsrv, 1248u); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44863 = Uv_2sn.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44864(Uh_5tlreg44863); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44866 = Uv_1i.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44867 = _Unsigned32ToUnsigned32(Uh_5tlreg44866, 32, 5); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10151u<EC> Uh_5tlval44868(Uh_5tlreg44867); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44870 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210categorize(uc, Uh_3tur44861, Uh_5tlval44864, Uh_5tlval44868); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44871 = Uh_5tlval44870.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
Ul_214endcontrolloop220:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SiteVisitorByID.ulam:90: 		for (Unsigned i = 0; i < cCATEGORY_COUNT; ++i){
        const u32 Uh_5tlreg44872 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44873 = _Int32ToUnsigned32(Uh_5tlreg44872, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44875 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44876 = _BinOpAddUnsigned32(Uh_5tlreg44875, Uh_5tlreg44873, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg44876); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_5visit



//! SiteVisitorByID.ulam:69: 	Void invert(Category c){
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_6invert(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:70: 		mInvert[c] = true;
    const u32 Uh_5tlreg44877 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44879 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44879 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44881(ur, Uh_5tlreg44879 * 1u + 1056u); //gcnl:Node.cpp:1303
    Uh_6tlref44881.write(Uh_5tlreg44877);

  } // Uf_6invert



//! SiteVisitorByID.ulam:50: 	Void unsetType(Category c) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_919unsetType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! SiteVisitorByID.ulam:51: 		mInUse[c] = false;
    const u32 Uh_5tlreg44882 = 0u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44884 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44884 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44886(ur, Uh_5tlreg44884 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref44886.write(Uh_5tlreg44882);

//! SiteVisitorByID.ulam:52: 		mType[c] = 0;
    const u32 Uh_5tlreg44887 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44888 = _Int32ToUnsigned32(Uh_5tlreg44887, 2, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg44890 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44890 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r102161u<EC> Uh_6tlref44892(ur, Uh_5tlreg44890 * 16u + 512u); //gcnl:Node.cpp:1303
    Uh_6tlref44892.write(Uh_5tlreg44888);

  } // Uf_919unsetType



//! SiteVisitorByID.ulam:45: 	Void setSeqno(Category c, Seqno seqno) {
  template<class EC>
  void Un_10411209215SiteVisitorByID10<EC>::Uf_8setSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c, Ui_Ut_10161u<EC>& Uv_5seqno) const
  {

//! SiteVisitorByID.ulam:46: 		mSeqno[c] = seqno;
    const u32 Uh_5tlreg44894 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44896 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44896 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref44898(ur, Uh_5tlreg44896 * 6u + 0u); //gcnl:Node.cpp:1303
    Uh_6tlref44898.write(Uh_5tlreg44894);

//! SiteVisitorByID.ulam:47: 		mInUse[c] = true;
    const u32 Uh_5tlreg44899 = 1u; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44901 = Uv_1c.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44901 >= 32) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10111b<EC> Uh_6tlref44903(ur, Uh_5tlreg44901 * 1u + 1024u); //gcnl:Node.cpp:1303
    Uh_6tlref44903.write(Uh_5tlreg44899);

  } // Uf_8setSeqno



//! SiteVisitorByID.ulam:55: 	ID getID(SiteNum sn){
  template<class EC>
  Ui_Ut_102101u<EC> Un_10411209215SiteVisitorByID10<EC>::Uf_5getID(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn) const
  {

//! SiteVisitorByID.ulam:56: 		Atom a = ew[sn];
    UlamRef<EC> Uh_3tur44905(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44907 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44908(Uh_5tlreg44907); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval44910 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44905, Uh_5tlval44908); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44910.read()); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
    {

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
      const T Uh_3tut44912 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44913 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44912); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg44913, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:57: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval44914 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval44914, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44914.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:58: 			return a.id;
          const u32 Uh_5tlreg44917 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval44918(Uh_5tlreg44917); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44918); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
    {

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
      const T Uh_3tut44920 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44921 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44920); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg44921, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:60: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval44922 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval44922, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44922.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:61: 			return a.id;
          const u32 Uh_5tlreg44925 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval44926(Uh_5tlreg44925); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44926); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! SiteVisitorByID.ulam:64: 			return 0;
          const u32 Uh_5tlreg44927 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44928 = _Int32ToUnsigned32(Uh_5tlreg44927, 2, 10); //gcnl:NodeCast.cpp:723
          Ui_Ut_102101u<EC> Uh_5tlval44929(Uh_5tlreg44928); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44929); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_5getID



//! SiteVisitorByID.ulam:75: 	Seqno getSeqno(SiteNum sn){
  template<class EC>
  Ui_Ut_10161u<EC> Un_10411209215SiteVisitorByID10<EC>::Uf_8getSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2sn) const
  {

//! SiteVisitorByID.ulam:76: 		Atom a = ew[sn];
    UlamRef<EC> Uh_3tur44931(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44933 = Uv_2sn.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44934(Uh_5tlreg44933); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval44936 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44931, Uh_5tlval44934); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44936.read()); //gcnl:NodeVarDecl.cpp:1060

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
    {

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
      const T Uh_3tut44938 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44939 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44938); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg44939, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SiteVisitorByID.ulam:77: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval44940 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval44940, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44940.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! SiteVisitorByID.ulam:78: 			return a.seqno;
          const u32 Uh_5tlreg44943 = UlamRef<EC>(Uv_1a, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44944(Uh_5tlreg44943); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44944); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! SiteVisitorByID.ulam:81: 			return (Seqno)0;
          const u32 Uh_5tlreg44945 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44946 = _Int32ToUnsigned32(Uh_5tlreg44945, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval44947(Uh_5tlreg44946); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44947); //gcnl:NodeReturnStatement.cpp:343
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

