/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10106Primer10.h"
#include "Uq_10106Random10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10104Cell10.h"
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
  Uq_10109212DecisionTree10<EC>::Uq_10109212DecisionTree10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109212DecisionTree10", 0))
  { }

  template<class EC>
  Uq_10109212DecisionTree10<EC>::~Uq_10109212DecisionTree10(){} //gcnl:NodeBlockClass.cpp:1784


//! DecisionTree.ulam:173: 	Void initVars(ID id){
  template<class EC>
  void Uq_10109212DecisionTree10<EC>::Uf_8initVars(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! DecisionTree.ulam:179: 		Seqno numVars = (Seqno)(r.create(3)+(Unsigned(32))3);
    const u32 Uh_5tlreg3578 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3579 = _Int32ToUnsigned32(Uh_5tlreg3578, 3, 32); //gcnl:NodeCast.cpp:723
    UlamRef<EC> Uh_3tur3581(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3582 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3583 = _Int32ToInt32(Uh_5tlreg3582, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval3584(Uh_5tlreg3583); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3586 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3581, Uh_5tlval3584); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3587 = Uh_5tlval3586.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3588 = _BinOpAddUnsigned32(Uh_5tlreg3587, Uh_5tlreg3579, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg3589 = _Unsigned32ToUnsigned32(Uh_5tlreg3588, 32, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_7numVars(Uh_5tlreg3589); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:180: 		Seqno seqno = (Seqno) (numVars+1);
    const u32 Uh_5tlreg3590 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3591 = _Int32ToInt32(Uh_5tlreg3590, 2, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3593 = Uv_7numVars.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3594 = _Unsigned32ToInt32(Uh_5tlreg3593, 6, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3595 = _BinOpAddInt32(Uh_5tlreg3594, Uh_5tlreg3591, 8); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg3596 = _Int32ToUnsigned32(Uh_5tlreg3595, 8, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg3596); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
    {

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
      const u32 Uh_5tlreg3597 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3598 = _Int32ToUnsigned32(Uh_5tlreg3597, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3598); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
      while(true)
      {
        const u32 Uh_5tlreg3600 = Uv_7numVars.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3602 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3603 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3602, Uh_5tlreg3600, 6); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg3603, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
        {

//! DecisionTree.ulam:185: 			seqno = initTree(i,seqno,numVars,id);
          const u32 Uh_5tlreg3606 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3607(Uh_5tlreg3606); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg3609 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3610(Uh_5tlreg3609); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg3612 = Uv_7numVars.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3613(Uh_5tlreg3612); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg3615 = Uv_2id.read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval3616(Uh_5tlreg3615); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval3618 = THE_INSTANCE.Uf_8initTree(uc, ur, Uh_5tlval3607, Uh_5tlval3610, Uh_5tlval3613, Uh_5tlval3616); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3619 = Uh_5tlval3618.read(); //gcnl:Node.cpp:1156
          Uv_5seqno.write(Uh_5tlreg3619); //gcnl:Node.cpp:885
        }

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
Ul_214endcontrolloop11:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
        const u32 Uh_5tlreg3621 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3622 = _Int32ToUnsigned32(Uh_5tlreg3621, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3624 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3625 = _BinOpAddUnsigned32(Uh_5tlreg3624, Uh_5tlreg3622, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg3625); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_8initVars



//! DecisionTree.ulam:19: 	Unsigned(2) initGene(Seqno mySeqno, Seqno refSeqno, ID id, Unsigned(4) specialVars,Bool isVar){
  template<class EC>
  Ui_Ut_10121u<EC> Uq_10109212DecisionTree10<EC>::Uf_8initGene(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7mySeqno, Ui_Ut_10161u<EC>& Uv_8refSeqno, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10141u<EC>& Uv_9211specialVars, Ui_Ut_10111b<EC>& Uv_5isVar) const
  {

//! DecisionTree.ulam:25: 		Unsigned(2) numberOfGenesToAddToMyTree;
    Ui_Ut_10121u<EC> Uv_9226numberOfGenesToAddToMyTree; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:27: 		Gene gene;
    Ui_Ue_102564Gene10<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:29: 		gene.seqno = mySeqno;
    const u32 Uh_5tlreg3627 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3627); //gcnl:Node.cpp:885

//! DecisionTree.ulam:30: 		gene.id = id;
    const u32 Uh_5tlreg3631 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3631); //gcnl:Node.cpp:885

//! DecisionTree.ulam:33: 		gene.operator = (Unsigned(2)) r.create(3);
    UlamRef<EC> Uh_3tur3635(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3636 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3637 = _Int32ToInt32(Uh_5tlreg3636, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval3638(Uh_5tlreg3637); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3640 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3635, Uh_5tlval3638); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3641 = Uh_5tlval3640.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3642 = _Unsigned32ToUnsigned32(Uh_5tlreg3641, 32, 2); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(42u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3642); //gcnl:Node.cpp:885

//! DecisionTree.ulam:49: 		Unsigned valTypSwitch0;
    Ui_Ut_102321u<EC> Uv_9213valTypSwitch0; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:50: 		Unsigned valTypSwitch1;
    Ui_Ut_102321u<EC> Uv_9213valTypSwitch1; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:52: 		valTypSwitch0 = r.create(100);
    UlamRef<EC> Uh_3tur3646(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3647 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3648 = _Int32ToInt32(Uh_5tlreg3647, 8, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval3649(Uh_5tlreg3648); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3651 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3646, Uh_5tlval3649); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3652 = Uh_5tlval3651.read(); //gcnl:Node.cpp:1156
    Uv_9213valTypSwitch0.write(Uh_5tlreg3652); //gcnl:Node.cpp:885

//! DecisionTree.ulam:53: 		valTypSwitch1 = r.create(100);
    UlamRef<EC> Uh_3tur3655(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3656 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3657 = _Int32ToInt32(Uh_5tlreg3656, 8, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval3658(Uh_5tlreg3657); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3660 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3655, Uh_5tlval3658); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3661 = Uh_5tlval3660.read(); //gcnl:Node.cpp:1156
    Uv_9213valTypSwitch1.write(Uh_5tlreg3661); //gcnl:Node.cpp:885

//! DecisionTree.ulam:56: 		if(valTypSwitch0 >= (Unsigned)0 && valTypSwitch0 < (Unsigned)30){
    {

//! DecisionTree.ulam:56: 		if(valTypSwitch0 >= (Unsigned)0 && valTypSwitch0 < (Unsigned)30){
      u32 Uh_5tlreg3663 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3664 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3665 = _Int32ToUnsigned32(Uh_5tlreg3664, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3667 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3668 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3667, Uh_5tlreg3665, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3668, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3669 = 30; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3670 = _Int32ToUnsigned32(Uh_5tlreg3669, 6, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3672 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3673 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3672, Uh_5tlreg3670, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3663 = Uh_5tlreg3673; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3663, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:58: 			gene.tree0Type = 0;
          const u32 Uh_5tlreg3674 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3675 = _Int32ToUnsigned32(Uh_5tlreg3674, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3675); //gcnl:Node.cpp:885

//! DecisionTree.ulam:59: 			gene.eqTree0 = (Unsigned(6)) r.create(63);
          UlamRef<EC> Uh_3tur3679(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3680 = 63; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3681 = _Int32ToInt32(Uh_5tlreg3680, 7, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval3682(Uh_5tlreg3681); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval3684 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3679, Uh_5tlval3682); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3685 = Uh_5tlval3684.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg3686 = _Unsigned32ToUnsigned32(Uh_5tlreg3685, 32, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3686); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:62: 		if(valTypSwitch0 >= (Unsigned)30 && valTypSwitch0 < (Unsigned)40){
    {

//! DecisionTree.ulam:62: 		if(valTypSwitch0 >= (Unsigned)30 && valTypSwitch0 < (Unsigned)40){
      u32 Uh_5tlreg3689 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3690 = 30; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3691 = _Int32ToUnsigned32(Uh_5tlreg3690, 6, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3693 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3694 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3693, Uh_5tlreg3691, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3694, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3695 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3696 = _Int32ToUnsigned32(Uh_5tlreg3695, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3698 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3699 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3698, Uh_5tlreg3696, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3689 = Uh_5tlreg3699; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3689, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:64: 			gene.tree0Type = 0;
          const u32 Uh_5tlreg3700 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3701 = _Int32ToUnsigned32(Uh_5tlreg3700, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3701); //gcnl:Node.cpp:885

//! DecisionTree.ulam:65: 			gene.eqTree0 = (StoredValue) 0;
          const u32 Uh_5tlreg3704 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3705 = _Int32ToUnsigned32(Uh_5tlreg3704, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3705); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:68: 		if(valTypSwitch0 >= (Unsigned)40 && valTypSwitch0 < (Unsigned)50){
    {

//! DecisionTree.ulam:68: 		if(valTypSwitch0 >= (Unsigned)40 && valTypSwitch0 < (Unsigned)50){
      u32 Uh_5tlreg3708 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3709 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3710 = _Int32ToUnsigned32(Uh_5tlreg3709, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3712 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3713 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3712, Uh_5tlreg3710, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3713, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3714 = 50; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3715 = _Int32ToUnsigned32(Uh_5tlreg3714, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3717 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3718 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3717, Uh_5tlreg3715, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3708 = Uh_5tlreg3718; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3708, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:74: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg3719 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3720 = _Int32ToUnsigned32(Uh_5tlreg3719, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3720); //gcnl:Node.cpp:885

//! DecisionTree.ulam:78: 			gene.eqTree0 = (StoredValue)0;
          const u32 Uh_5tlreg3723 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3724 = _Int32ToUnsigned32(Uh_5tlreg3723, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3724); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:80: 		if(valTypSwitch0 >= (Unsigned)50 && valTypSwitch0 < (Unsigned)75){
    {

//! DecisionTree.ulam:80: 		if(valTypSwitch0 >= (Unsigned)50 && valTypSwitch0 < (Unsigned)75){
      u32 Uh_5tlreg3727 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3728 = 50; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3729 = _Int32ToUnsigned32(Uh_5tlreg3728, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3731 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3732 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3731, Uh_5tlreg3729, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3732, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3733 = 75; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3734 = _Int32ToUnsigned32(Uh_5tlreg3733, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3736 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3737 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3736, Uh_5tlreg3734, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3727 = Uh_5tlreg3737; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3727, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:82: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg3738 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3739 = _Int32ToUnsigned32(Uh_5tlreg3738, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3739); //gcnl:Node.cpp:885

//! DecisionTree.ulam:85: 			++numberOfGenesToAddToMyTree;
          const u32 Uh_5tlreg3742 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3743 = _Int32ToUnsigned32(Uh_5tlreg3742, 32, 2); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3745 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg3746 = _BinOpAddUnsigned32(Uh_5tlreg3745, Uh_5tlreg3743, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9226numberOfGenesToAddToMyTree.write(Uh_5tlreg3746); //gcnl:Node.cpp:885

//! DecisionTree.ulam:87: 			if(isVar){
          {

//! DecisionTree.ulam:87: 			if(isVar){
            const u32 Uh_5tlreg3748 = Uv_5isVar.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg3748, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:88: 				gene.eqTree0 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree-1);
                const u32 Uh_5tlreg3749 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3750 = _Int32ToInt32(Uh_5tlreg3749, 2, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3752 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3753 = _Unsigned32ToUnsigned32(Uh_5tlreg3752, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3755 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3756 = _Unsigned32ToUnsigned32(Uh_5tlreg3755, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3757 = _BinOpAddUnsigned32(Uh_5tlreg3756, Uh_5tlreg3753, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3758 = _Unsigned32ToInt32(Uh_5tlreg3757, 7, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3759 = _BinOpSubtractInt32(Uh_5tlreg3758, Uh_5tlreg3750, 9); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3760 = _Int32ToUnsigned32(Uh_5tlreg3759, 9, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3760); //gcnl:Node.cpp:885
              }
            } // end if
            else
            {
              {

//! DecisionTree.ulam:91: 				gene.eqTree0 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree);
                const u32 Uh_5tlreg3764 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3765 = _Unsigned32ToUnsigned32(Uh_5tlreg3764, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3767 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3768 = _Unsigned32ToUnsigned32(Uh_5tlreg3767, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3769 = _BinOpAddUnsigned32(Uh_5tlreg3768, Uh_5tlreg3765, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3770 = _Unsigned32ToUnsigned32(Uh_5tlreg3769, 7, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3770); //gcnl:Node.cpp:885
              }
            } //end else
          }
        }
      } // end if
    }

//! DecisionTree.ulam:94: 		if(valTypSwitch0 >= (Unsigned)75 && valTypSwitch0 < (Unsigned)100){
    {

//! DecisionTree.ulam:94: 		if(valTypSwitch0 >= (Unsigned)75 && valTypSwitch0 < (Unsigned)100){
      u32 Uh_5tlreg3773 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3774 = 75; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3775 = _Int32ToUnsigned32(Uh_5tlreg3774, 8, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3777 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3778 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3777, Uh_5tlreg3775, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3778, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3779 = 100; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3780 = _Int32ToUnsigned32(Uh_5tlreg3779, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3782 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3783 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3782, Uh_5tlreg3780, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3773 = Uh_5tlreg3783; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3773, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:96: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg3784 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3785 = _Int32ToUnsigned32(Uh_5tlreg3784, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3785); //gcnl:Node.cpp:885

//! DecisionTree.ulam:100: 			gene.eqTree0 = (StoredValue)((StoredValue)r.create(specialVars)+(StoredValue)4);
          const u32 Uh_5tlreg3788 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3789 = _Int32ToUnsigned32(Uh_5tlreg3788, 4, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3790 = _Unsigned32ToUnsigned32(Uh_5tlreg3789, 6, 7); //gcnl:NodeCast.cpp:723
          UlamRef<EC> Uh_3tur3792(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3794 = Uv_9211specialVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg3795 = _Unsigned32ToUnsigned32(Uh_5tlreg3794, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval3796(Uh_5tlreg3795); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval3798 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3792, Uh_5tlval3796); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3799 = Uh_5tlval3798.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg3800 = _Unsigned32ToUnsigned32(Uh_5tlreg3799, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3801 = _Unsigned32ToUnsigned32(Uh_5tlreg3800, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3802 = _BinOpAddUnsigned32(Uh_5tlreg3801, Uh_5tlreg3790, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg3803 = _Unsigned32ToUnsigned32(Uh_5tlreg3802, 7, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3803); //gcnl:Node.cpp:885

//! DecisionTree.ulam:103: 			if(gene.eqTree0 == gene.seqno){
          {

//! DecisionTree.ulam:103: 			if(gene.eqTree0 == gene.seqno){
            const u32 Uh_5tlreg3808 = UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3811 = UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3812 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3811, Uh_5tlreg3808, 6); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3812, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:104: 				gene.tree0Type = 0;
                const u32 Uh_5tlreg3813 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3814 = _Int32ToUnsigned32(Uh_5tlreg3813, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3814); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! DecisionTree.ulam:108: 		if(valTypSwitch1 >= (Unsigned)0 && valTypSwitch1 < (Unsigned)30){
    {

//! DecisionTree.ulam:108: 		if(valTypSwitch1 >= (Unsigned)0 && valTypSwitch1 < (Unsigned)30){
      u32 Uh_5tlreg3817 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3818 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3819 = _Int32ToUnsigned32(Uh_5tlreg3818, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3821 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3822 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3821, Uh_5tlreg3819, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3822, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3823 = 30; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3824 = _Int32ToUnsigned32(Uh_5tlreg3823, 6, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3826 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3827 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3826, Uh_5tlreg3824, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3817 = Uh_5tlreg3827; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3817, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:110: 			gene.tree1Type = 0;
          const u32 Uh_5tlreg3828 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3829 = _Int32ToUnsigned32(Uh_5tlreg3828, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3829); //gcnl:Node.cpp:885

//! DecisionTree.ulam:111: 			gene.eqTree1 = (Unsigned(6)) r.create(63);
          UlamRef<EC> Uh_3tur3833(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3834 = 63; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3835 = _Int32ToInt32(Uh_5tlreg3834, 7, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval3836(Uh_5tlreg3835); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval3838 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3833, Uh_5tlval3836); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3839 = Uh_5tlval3838.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg3840 = _Unsigned32ToUnsigned32(Uh_5tlreg3839, 32, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3840); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:114: 		if(valTypSwitch1 >= (Unsigned)30 && valTypSwitch1 < (Unsigned)40){
    {

//! DecisionTree.ulam:114: 		if(valTypSwitch1 >= (Unsigned)30 && valTypSwitch1 < (Unsigned)40){
      u32 Uh_5tlreg3843 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3844 = 30; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3845 = _Int32ToUnsigned32(Uh_5tlreg3844, 6, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3847 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3848 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3847, Uh_5tlreg3845, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3848, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3849 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3850 = _Int32ToUnsigned32(Uh_5tlreg3849, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3852 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3853 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3852, Uh_5tlreg3850, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3843 = Uh_5tlreg3853; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3843, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:116: 			gene.tree1Type = 0;
          const u32 Uh_5tlreg3854 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3855 = _Int32ToUnsigned32(Uh_5tlreg3854, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3855); //gcnl:Node.cpp:885

//! DecisionTree.ulam:117: 			gene.eqTree1 = (StoredValue) 0;
          const u32 Uh_5tlreg3858 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3859 = _Int32ToUnsigned32(Uh_5tlreg3858, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3859); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:120: 		if(valTypSwitch1 >= (Unsigned)40 && valTypSwitch1 < (Unsigned)50){
    {

//! DecisionTree.ulam:120: 		if(valTypSwitch1 >= (Unsigned)40 && valTypSwitch1 < (Unsigned)50){
      u32 Uh_5tlreg3862 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3863 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3864 = _Int32ToUnsigned32(Uh_5tlreg3863, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3866 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3867 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3866, Uh_5tlreg3864, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3867, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3868 = 50; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3869 = _Int32ToUnsigned32(Uh_5tlreg3868, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3871 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3872 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3871, Uh_5tlreg3869, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3862 = Uh_5tlreg3872; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3862, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:126: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg3873 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3874 = _Int32ToUnsigned32(Uh_5tlreg3873, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3874); //gcnl:Node.cpp:885

//! DecisionTree.ulam:130: 			gene.eqTree1 = (StoredValue)0;
          const u32 Uh_5tlreg3877 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3878 = _Int32ToUnsigned32(Uh_5tlreg3877, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3878); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:132: 		if(valTypSwitch1 >= (Unsigned)50 && valTypSwitch1 < (Unsigned)75){
    {

//! DecisionTree.ulam:132: 		if(valTypSwitch1 >= (Unsigned)50 && valTypSwitch1 < (Unsigned)75){
      u32 Uh_5tlreg3881 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3882 = 50; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3883 = _Int32ToUnsigned32(Uh_5tlreg3882, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3885 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3886 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3885, Uh_5tlreg3883, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3886, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3887 = 75; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3888 = _Int32ToUnsigned32(Uh_5tlreg3887, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3890 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3891 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3890, Uh_5tlreg3888, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3881 = Uh_5tlreg3891; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3881, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:134: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg3892 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3893 = _Int32ToUnsigned32(Uh_5tlreg3892, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3893); //gcnl:Node.cpp:885

//! DecisionTree.ulam:137: 			++numberOfGenesToAddToMyTree;
          const u32 Uh_5tlreg3896 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3897 = _Int32ToUnsigned32(Uh_5tlreg3896, 32, 2); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3899 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg3900 = _BinOpAddUnsigned32(Uh_5tlreg3899, Uh_5tlreg3897, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9226numberOfGenesToAddToMyTree.write(Uh_5tlreg3900); //gcnl:Node.cpp:885

//! DecisionTree.ulam:139: 			if(isVar){
          {

//! DecisionTree.ulam:139: 			if(isVar){
            const u32 Uh_5tlreg3902 = Uv_5isVar.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg3902, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:140: 				gene.eqTree1 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree-1);
                const u32 Uh_5tlreg3903 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3904 = _Int32ToInt32(Uh_5tlreg3903, 2, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3906 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3907 = _Unsigned32ToUnsigned32(Uh_5tlreg3906, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3909 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3910 = _Unsigned32ToUnsigned32(Uh_5tlreg3909, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3911 = _BinOpAddUnsigned32(Uh_5tlreg3910, Uh_5tlreg3907, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3912 = _Unsigned32ToInt32(Uh_5tlreg3911, 7, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3913 = _BinOpSubtractInt32(Uh_5tlreg3912, Uh_5tlreg3904, 9); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3914 = _Int32ToUnsigned32(Uh_5tlreg3913, 9, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3914); //gcnl:Node.cpp:885
              }
            } // end if
            else
            {
              {

//! DecisionTree.ulam:143: 				gene.eqTree1 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree);
                const u32 Uh_5tlreg3918 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3919 = _Unsigned32ToUnsigned32(Uh_5tlreg3918, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3921 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3922 = _Unsigned32ToUnsigned32(Uh_5tlreg3921, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3923 = _BinOpAddUnsigned32(Uh_5tlreg3922, Uh_5tlreg3919, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3924 = _Unsigned32ToUnsigned32(Uh_5tlreg3923, 7, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3924); //gcnl:Node.cpp:885
              }
            } //end else
          }
        }
      } // end if
    }

//! DecisionTree.ulam:146: 		if(valTypSwitch1 >= (Unsigned)75 && valTypSwitch1 < (Unsigned)100){
    {

//! DecisionTree.ulam:146: 		if(valTypSwitch1 >= (Unsigned)75 && valTypSwitch1 < (Unsigned)100){
      u32 Uh_5tlreg3927 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3928 = 75; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3929 = _Int32ToUnsigned32(Uh_5tlreg3928, 8, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3931 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3932 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3931, Uh_5tlreg3929, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3932, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3933 = 100; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3934 = _Int32ToUnsigned32(Uh_5tlreg3933, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3936 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3937 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3936, Uh_5tlreg3934, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3927 = Uh_5tlreg3937; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3927, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:148: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg3938 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3939 = _Int32ToUnsigned32(Uh_5tlreg3938, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3939); //gcnl:Node.cpp:885

//! DecisionTree.ulam:152: 			gene.eqTree1 = (StoredValue)((StoredValue)r.create(specialVars)+(StoredValue)4);
          const u32 Uh_5tlreg3942 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3943 = _Int32ToUnsigned32(Uh_5tlreg3942, 4, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3944 = _Unsigned32ToUnsigned32(Uh_5tlreg3943, 6, 7); //gcnl:NodeCast.cpp:723
          UlamRef<EC> Uh_3tur3946(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3948 = Uv_9211specialVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg3949 = _Unsigned32ToUnsigned32(Uh_5tlreg3948, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval3950(Uh_5tlreg3949); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval3952 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3946, Uh_5tlval3950); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3953 = Uh_5tlval3952.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg3954 = _Unsigned32ToUnsigned32(Uh_5tlreg3953, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3955 = _Unsigned32ToUnsigned32(Uh_5tlreg3954, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3956 = _BinOpAddUnsigned32(Uh_5tlreg3955, Uh_5tlreg3944, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg3957 = _Unsigned32ToUnsigned32(Uh_5tlreg3956, 7, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3957); //gcnl:Node.cpp:885

//! DecisionTree.ulam:155: 			if(gene.eqTree1 == gene.seqno){
          {

//! DecisionTree.ulam:155: 			if(gene.eqTree1 == gene.seqno){
            const u32 Uh_5tlreg3962 = UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3965 = UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3966 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3965, Uh_5tlreg3962, 6); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3966, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:156: 				gene.tree1Type = 0;
                const u32 Uh_5tlreg3967 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3968 = _Int32ToUnsigned32(Uh_5tlreg3967, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3968); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! DecisionTree.ulam:161: 		if(mySeqno <= (Seqno)40){
    {

//! DecisionTree.ulam:161: 		if(mySeqno <= (Seqno)40){
      const u32 Uh_5tlreg3971 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3972 = _Int32ToUnsigned32(Uh_5tlreg3971, 7, 6); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3974 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3975 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3974, Uh_5tlreg3972, 6); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3975, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:162: 			ew[mySeqno]=gene;
          const T Uh_3tut3977 = Uv_4gene.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur3979(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3981 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3982(Uh_5tlreg3981); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval3984 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3979, Uh_5tlval3982); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval3984.WriteAtom(Uh_3tut3977); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! DecisionTree.ulam:164: 		return numberOfGenesToAddToMyTree;
    const u32 Uh_5tlreg3986 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
    Ui_Ut_10121u<EC> Uh_5tlval3987(Uh_5tlreg3986); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3987); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8initGene



//! DecisionTree.ulam:188: 	Seqno initTree(Seqno i,Seqno seqno,Seqno numVars,ID id){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_8initTree(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1i, Ui_Ut_10161u<EC>& Uv_5seqno, Ui_Ut_10161u<EC>& Uv_7numVars, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! DecisionTree.ulam:189: 		Seqno genesLeftToCreate;
    Ui_Ut_10161u<EC> Uv_9217genesLeftToCreate; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:195: 		genesLeftToCreate += initGene(i,seqno,id,(Unsigned(4))(numVars-3),true);
    const u32 Uh_5tlreg3990 = Uv_1i.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3991(Uh_5tlreg3990); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3993 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3994(Uh_5tlreg3993); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3996 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval3997(Uh_5tlreg3996); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3998 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3999 = _Int32ToInt32(Uh_5tlreg3998, 3, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg41001 = Uv_7numVars.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg41002 = _Unsigned32ToInt32(Uh_5tlreg41001, 6, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg41003 = _BinOpSubtractInt32(Uh_5tlreg41002, Uh_5tlreg3999, 8); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg41004 = _Int32ToUnsigned32(Uh_5tlreg41003, 8, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141u<EC> Uh_5tlval41005(Uh_5tlreg41004); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41006 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval41007(Uh_5tlreg41006); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10121u<EC> Uh_5tlval41009 = THE_INSTANCE.Uf_8initGene(uc, ur, Uh_5tlval3991, Uh_5tlval3994, Uh_5tlval3997, Uh_5tlval41005, Uh_5tlval41007); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41010 = Uh_5tlval41009.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg41011 = _Unsigned32ToUnsigned32(Uh_5tlreg41010, 2, 6); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg41013 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg41014 = _BinOpAddUnsigned32(Uh_5tlreg41013, Uh_5tlreg41011, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
    Uv_9217genesLeftToCreate.write(Uh_5tlreg41014); //gcnl:Node.cpp:885

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
    {

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
      while(true)
      {
        const u32 Uh_5tlreg41015 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41016 = _Int32ToInt32(Uh_5tlreg41015, 2, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41018 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41019 = _Unsigned32ToInt32(Uh_5tlreg41018, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41020 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41019, Uh_5tlreg41016, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41020, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
        {

//! DecisionTree.ulam:198: 			genesLeftToCreate += initGene(seqno,seqno,id,(Unsigned(4))(numVars-3),false);
          const u32 Uh_5tlreg41023 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41024(Uh_5tlreg41023); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41026 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41027(Uh_5tlreg41026); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41029 = Uv_2id.read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval41030(Uh_5tlreg41029); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41031 = 3; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41032 = _Int32ToInt32(Uh_5tlreg41031, 3, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41034 = Uv_7numVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41035 = _Unsigned32ToInt32(Uh_5tlreg41034, 6, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41036 = _BinOpSubtractInt32(Uh_5tlreg41035, Uh_5tlreg41032, 8); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg41037 = _Int32ToUnsigned32(Uh_5tlreg41036, 8, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141u<EC> Uh_5tlval41038(Uh_5tlreg41037); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41039 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval41040(Uh_5tlreg41039); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10121u<EC> Uh_5tlval41042 = THE_INSTANCE.Uf_8initGene(uc, ur, Uh_5tlval41024, Uh_5tlval41027, Uh_5tlval41030, Uh_5tlval41038, Uh_5tlval41040); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg41043 = Uh_5tlval41042.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg41044 = _Unsigned32ToUnsigned32(Uh_5tlreg41043, 2, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41046 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41047 = _BinOpAddUnsigned32(Uh_5tlreg41046, Uh_5tlreg41044, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9217genesLeftToCreate.write(Uh_5tlreg41047); //gcnl:Node.cpp:885

//! DecisionTree.ulam:199: 			--genesLeftToCreate;
          const u32 Uh_5tlreg41048 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41049 = _Int32ToUnsigned32(Uh_5tlreg41048, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41051 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41052 = _BinOpSubtractUnsigned32(Uh_5tlreg41051, Uh_5tlreg41049, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9217genesLeftToCreate.write(Uh_5tlreg41052); //gcnl:Node.cpp:885

//! DecisionTree.ulam:200: 			++seqno;
          const u32 Uh_5tlreg41053 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41054 = _Int32ToUnsigned32(Uh_5tlreg41053, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41056 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41057 = _BinOpAddUnsigned32(Uh_5tlreg41056, Uh_5tlreg41054, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_5seqno.write(Uh_5tlreg41057); //gcnl:Node.cpp:885
        }

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
Ul_214endcontrolloop12:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DecisionTree.ulam:202: 		return seqno;
    const u32 Uh_5tlreg41059 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41060(Uh_5tlreg41059); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41060); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8initTree



//! DecisionTree.ulam:204: 	Atom findSeqno(Seqno seqno, ID id){
  template<class EC>
  Ui_Ut_102961a<EC> Uq_10109212DecisionTree10<EC>::Uf_919findSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5seqno, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! DecisionTree.ulam:205: 		Empty e;
    Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
    {

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
      const u32 Uh_5tlreg41061 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41062 = _Int32ToUnsigned32(Uh_5tlreg41061, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41062); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
      while(true)
      {
        const u32 Uh_5tlreg41063 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41065 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41066 = _Unsigned32ToInt32(Uh_5tlreg41065, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41067 = _BinOpCompareLessEqualInt32(Uh_5tlreg41066, Uh_5tlreg41063, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41067, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
        {

//! DecisionTree.ulam:208: 			Atom gene = ew[i];
          UlamRef<EC> Uh_3tur41069(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41071 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41072(Uh_5tlreg41071); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41074 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41069, Uh_5tlval41072); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval41074.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:209: 			if(gene as Gene){
          {

//! DecisionTree.ulam:209: 			if(gene as Gene){
            const T Uh_3tut41076 = Uv_4gene.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41077 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41076); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41077, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:209: 			if(gene as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41078 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41078, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41078.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:210: 				if(gene.id == id && gene.seqno == seqno){
                {

//! DecisionTree.ulam:210: 				if(gene.id == id && gene.seqno == seqno){
                  u32 Uh_5tlreg41079 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg41081 = Uv_2id.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41084 = UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41085 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41084, Uh_5tlreg41081, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41085, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg41087 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg41090 = UlamRef<EC>(Uv_4gene, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg41091 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41090, Uh_5tlreg41087, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg41079 = Uh_5tlreg41091; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg41079, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:211: 					return gene;
                      const T Uh_3tut41093 = Uv_4gene.read(); //gcnl:Node.cpp:691
                      Ui_Ut_102961a<EC> Uh_5tuval41094(Uh_3tut41093); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tuval41094); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
Ul_214endcontrolloop13:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
        const u32 Uh_5tlreg41095 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41096 = _Int32ToUnsigned32(Uh_5tlreg41095, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41098 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41099 = _BinOpAddUnsigned32(Uh_5tlreg41098, Uh_5tlreg41096, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg41099); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DecisionTree.ulam:215: 		return e;		
    const T Uh_3tut41101 = Uv_1e.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41102(Uh_3tut41101); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tuval41102); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919findSeqno



//! DecisionTree.ulam:217: 	StoredValue evaluate(Seqno var, ID id, StoredValue comIn){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_8evaluate(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_3var, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10161u<EC>& Uv_5comIn) const
  {

//! DecisionTree.ulam:218: 		Bool evaluated[40];
    Ui_Ut_240111b<EC> Uv_919evaluated; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:219: 		Bool checked[40];
    Ui_Ut_240111b<EC> Uv_7checked; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:221: 		StoredValue value[40];
    Ui_Ut_240161u<EC> Uv_5value; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:222: 		Seqno parent[40];
    Ui_Ut_240161u<EC> Uv_6parent; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:224: 		Unsigned(2) operator[40];
    Ui_Ut_240121u<EC> Uv_8operator; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:226: 		Bits(2) tree0Type[40];
    Ui_Ut_240121t<EC> Uv_919tree0Type; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:227: 		StoredValue eqTree0[40];
    Ui_Ut_240161u<EC> Uv_7eqTree0; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:229: 		Bits(2) tree1Type[40];
    Ui_Ut_240121t<EC> Uv_919tree1Type; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:230: 		StoredValue eqTree1[40];
    Ui_Ut_240161u<EC> Uv_7eqTree1; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:232: 		Bool keepRecursing = true;
    const u32 Uh_5tlreg41103 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_9213keepRecursing(Uh_5tlreg41103); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:233: 		Seqno seqno = var;
    const u32 Uh_5tlreg41105 = Uv_3var.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg41105); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:235: 		Unsigned(2) dejavu;
    Ui_Ut_10121u<EC> Uv_6dejavu; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:236: 		while(keepRecursing){
    {

//! DecisionTree.ulam:236: 		while(keepRecursing){
      while(true)
      {
        const u32 Uh_5tlreg41107 = Uv_9213keepRecursing.read(); //gcnl:Node.cpp:691

        if(!_Bool32ToCbool(Uh_5tlreg41107, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:236: 		while(keepRecursing){
        {

//! DecisionTree.ulam:237: 			if(evaluated[var]){
          {

//! DecisionTree.ulam:237: 			if(evaluated[var]){
            const u32 Uh_5tlreg41109 = Uv_3var.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41109 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref41111(Uv_919evaluated, Uh_5tlreg41109 * 1u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41112 = Uh_6tlref41111.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg41112, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:238: 				return value[var];
                const u32 Uh_5tlreg41114 = Uv_3var.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41114 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41116(Uv_5value, Uh_5tlreg41114 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41117 = Uh_6tlref41116.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41118(Uh_5tlreg41117); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41118); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }

//! DecisionTree.ulam:240: 			if(!evaluated[seqno] && !checked[seqno]){
          {

//! DecisionTree.ulam:240: 			if(!evaluated[seqno] && !checked[seqno]){
            u32 Uh_5tlreg41119 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41121 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41121 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref41123(Uv_919evaluated, Uh_5tlreg41121 * 1u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41124 = Uh_6tlref41123.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41125 = _LogicalBangBool32(Uh_5tlreg41124, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg41125, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41127 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg41127 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref41129(Uv_7checked, Uh_5tlreg41127 * 1u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg41130 = Uh_6tlref41129.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41131 = _LogicalBangBool32(Uh_5tlreg41130, 1); //gcnl:NodeUnaryOp.cpp:449
              Uh_5tlreg41119 = Uh_5tlreg41131; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41119, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:244: 				Atom gene = findSeqno(seqno, id);
                const u32 Uh_5tlreg41134 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41135(Uh_5tlreg41134); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41137 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval41138(Uh_5tlreg41137); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval41140 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval41135, Uh_5tlval41138); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval41140.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:249: 				++dejavu;
                const u32 Uh_5tlreg41141 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41142 = _Int32ToUnsigned32(Uh_5tlreg41141, 32, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg41144 = Uv_6dejavu.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg41145 = _BinOpAddUnsigned32(Uh_5tlreg41144, Uh_5tlreg41142, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
                Uv_6dejavu.write(Uh_5tlreg41145); //gcnl:Node.cpp:885

//! DecisionTree.ulam:250: 				if(dejavu > 1){
                {

//! DecisionTree.ulam:250: 				if(dejavu > 1){
                  const u32 Uh_5tlreg41146 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg41147 = _Int32ToInt32(Uh_5tlreg41146, 2, 3); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41149 = Uv_6dejavu.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41150 = _Unsigned32ToInt32(Uh_5tlreg41149, 2, 3); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41151 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41150, Uh_5tlreg41147, 3); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41151, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:251: 					return (StoredValue) 0;
                      const u32 Uh_5tlreg41152 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg41153 = _Int32ToUnsigned32(Uh_5tlreg41152, 2, 6); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10161u<EC> Uh_5tlval41154(Uh_5tlreg41153); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval41154); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                }

//! DecisionTree.ulam:253: 				if(gene as Gene){
                {

//! DecisionTree.ulam:253: 				if(gene as Gene){
                  const T Uh_3tut41156 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41157 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41156); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg41157, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:253: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval41158 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41158, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41158.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:254: 					checked[seqno] = true;
                      const u32 Uh_5tlreg41159 = 1u; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg41161 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41161 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10111b<EC> Uh_6tlref41163(Uv_7checked, Uh_5tlreg41161 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41163.write(Uh_5tlreg41159);

//! DecisionTree.ulam:256: 					operator[seqno] = gene.operator;
                      const u32 Uh_5tlreg41166 = UlamRef<EC>(Uv_4gene, 17u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41168 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41168 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121u<EC> Uh_6tlref41170(Uv_8operator, Uh_5tlreg41168 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41170.write(Uh_5tlreg41166);

//! DecisionTree.ulam:258: 					tree0Type[seqno] = gene.tree0Type;
                      const u32 Uh_5tlreg41173 = UlamRef<EC>(Uv_4gene, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41174 = _Unsigned32ToBits32(Uh_5tlreg41173, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg41176 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41176 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref41178(Uv_919tree0Type, Uh_5tlreg41176 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41178.write(Uh_5tlreg41174);

//! DecisionTree.ulam:259: 					eqTree0[seqno] = gene.eqTree0;
                      const u32 Uh_5tlreg41181 = UlamRef<EC>(Uv_4gene, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41183 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41183 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41185(Uv_7eqTree0, Uh_5tlreg41183 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41185.write(Uh_5tlreg41181);

//! DecisionTree.ulam:261: 					tree1Type[seqno] = gene.tree1Type;
                      const u32 Uh_5tlreg41188 = UlamRef<EC>(Uv_4gene, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41189 = _Unsigned32ToBits32(Uh_5tlreg41188, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg41191 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41191 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref41193(Uv_919tree1Type, Uh_5tlreg41191 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41193.write(Uh_5tlreg41189);

//! DecisionTree.ulam:262: 					eqTree1[seqno] = gene.eqTree1;
                      const u32 Uh_5tlreg41196 = UlamRef<EC>(Uv_4gene, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41198 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41198 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41200(Uv_7eqTree1, Uh_5tlreg41198 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41200.write(Uh_5tlreg41196);
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:268: 			if(tree0Type[seqno] == 1 && eqTree0[seqno] == 0){
          {

//! DecisionTree.ulam:268: 			if(tree0Type[seqno] == 1 && eqTree0[seqno] == 0){
            u32 Uh_5tlreg41201 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41202 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41203 = _Int32ToBits32(Uh_5tlreg41202, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41205 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41205 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref41207(Uv_919tree0Type, Uh_5tlreg41205 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41208 = Uh_6tlref41207.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41209 = _BinOpCompareEqEqBits32(Uh_5tlreg41208, Uh_5tlreg41203, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41209, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41210 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41211 = _Int32ToInt32(Uh_5tlreg41210, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41213 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg41213 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10161u<EC> Uh_6tlref41215(Uv_7eqTree0, Uh_5tlreg41213 * 6u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg41216 = Uh_6tlref41215.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41217 = _Unsigned32ToInt32(Uh_5tlreg41216, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41218 = _BinOpCompareEqEqInt32(Uh_5tlreg41217, Uh_5tlreg41211, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41201 = Uh_5tlreg41218; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41201, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:269: 				tree0Type[seqno] = 0;
                const u32 Uh_5tlreg41219 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41220 = _Int32ToBits32(Uh_5tlreg41219, 2, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg41222 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41222 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121t<EC> Uh_6tlref41224(Uv_919tree0Type, Uh_5tlreg41222 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41224.write(Uh_5tlreg41220);

//! DecisionTree.ulam:270: 				eqTree0[seqno] = comIn;
                const u32 Uh_5tlreg41226 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg41228 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41228 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41230(Uv_7eqTree0, Uh_5tlreg41228 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41230.write(Uh_5tlreg41226);
              }
            } // end if
          }

//! DecisionTree.ulam:272: 			if(tree1Type[seqno] == 1 && eqTree1[seqno] == 0){
          {

//! DecisionTree.ulam:272: 			if(tree1Type[seqno] == 1 && eqTree1[seqno] == 0){
            u32 Uh_5tlreg41231 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41232 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41233 = _Int32ToBits32(Uh_5tlreg41232, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41235 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41235 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref41237(Uv_919tree1Type, Uh_5tlreg41235 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41238 = Uh_6tlref41237.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41239 = _BinOpCompareEqEqBits32(Uh_5tlreg41238, Uh_5tlreg41233, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41239, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41240 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41241 = _Int32ToInt32(Uh_5tlreg41240, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41243 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg41243 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10161u<EC> Uh_6tlref41245(Uv_7eqTree1, Uh_5tlreg41243 * 6u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg41246 = Uh_6tlref41245.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41247 = _Unsigned32ToInt32(Uh_5tlreg41246, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41248 = _BinOpCompareEqEqInt32(Uh_5tlreg41247, Uh_5tlreg41241, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41231 = Uh_5tlreg41248; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41231, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:273: 				tree0Type[seqno] = 0;
                const u32 Uh_5tlreg41249 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41250 = _Int32ToBits32(Uh_5tlreg41249, 2, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg41252 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41252 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121t<EC> Uh_6tlref41254(Uv_919tree0Type, Uh_5tlreg41252 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41254.write(Uh_5tlreg41250);

//! DecisionTree.ulam:274: 				eqTree0[seqno] = comIn;
                const u32 Uh_5tlreg41256 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg41258 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41258 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41260(Uv_7eqTree0, Uh_5tlreg41258 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41260.write(Uh_5tlreg41256);
              }
            } // end if
          }

//! DecisionTree.ulam:280: 			if(tree0Type[seqno] == 0 && tree1Type[seqno] == 0){
          {

//! DecisionTree.ulam:280: 			if(tree0Type[seqno] == 0 && tree1Type[seqno] == 0){
            u32 Uh_5tlreg41261 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41262 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41263 = _Int32ToBits32(Uh_5tlreg41262, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41265 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41265 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref41267(Uv_919tree0Type, Uh_5tlreg41265 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41268 = Uh_6tlref41267.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41269 = _BinOpCompareEqEqBits32(Uh_5tlreg41268, Uh_5tlreg41263, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41269, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41270 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41271 = _Int32ToBits32(Uh_5tlreg41270, 2, 2); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41273 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg41273 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10121t<EC> Uh_6tlref41275(Uv_919tree1Type, Uh_5tlreg41273 * 2u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg41276 = Uh_6tlref41275.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41277 = _BinOpCompareEqEqBits32(Uh_5tlreg41276, Uh_5tlreg41271, 2); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41261 = Uh_5tlreg41277; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41261, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:281: 				value[seqno] = operate(eqTree0[seqno], operator[seqno], eqTree1[seqno]);
                const u32 Uh_5tlreg41280 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41280 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41282(Uv_7eqTree0, Uh_5tlreg41280 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41283 = Uh_6tlref41282.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41284(Uh_5tlreg41283); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41286 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41286 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121u<EC> Uh_6tlref41288(Uv_8operator, Uh_5tlreg41286 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41289 = Uh_6tlref41288.read(); //gcnl:Node.cpp:691
                Ui_Ut_10121u<EC> Uh_5tlval41290(Uh_5tlreg41289); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41292 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41292 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41294(Uv_7eqTree1, Uh_5tlreg41292 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41295 = Uh_6tlref41294.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41296(Uh_5tlreg41295); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval41298 = THE_INSTANCE.Uf_7operate(uc, ur, Uh_5tlval41284, Uh_5tlval41290, Uh_5tlval41296); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg41299 = Uh_5tlval41298.read(); //gcnl:Node.cpp:1156
                const u32 Uh_5tlreg41301 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41301 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41303(Uv_5value, Uh_5tlreg41301 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41303.write(Uh_5tlreg41299);

//! DecisionTree.ulam:282: 				evaluated[seqno] = true;
                const u32 Uh_5tlreg41304 = 1u; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41306 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41306 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10111b<EC> Uh_6tlref41308(Uv_919evaluated, Uh_5tlreg41306 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41308.write(Uh_5tlreg41304);

//! DecisionTree.ulam:283: 				keepRecursing = true;
                const u32 Uh_5tlreg41309 = 1u; //gcnl:NodeTerminal.cpp:721
                Uv_9213keepRecursing.write(Uh_5tlreg41309); //gcnl:Node.cpp:885

//! DecisionTree.ulam:284: 				seqno = parent[seqno];
                const u32 Uh_5tlreg41312 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41312 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41314(Uv_6parent, Uh_5tlreg41312 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41315 = Uh_6tlref41314.read(); //gcnl:Node.cpp:691
                Uv_5seqno.write(Uh_5tlreg41315); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:289: 			if(tree0Type[seqno] == 1){
          {

//! DecisionTree.ulam:289: 			if(tree0Type[seqno] == 1){
            const u32 Uh_5tlreg41317 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41318 = _Int32ToBits32(Uh_5tlreg41317, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41320 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41320 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref41322(Uv_919tree0Type, Uh_5tlreg41320 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41323 = Uh_6tlref41322.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41324 = _BinOpCompareEqEqBits32(Uh_5tlreg41323, Uh_5tlreg41318, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41324, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:290: 				Seqno childseqno = (Seqno)eqTree0[seqno];
                const u32 Uh_5tlreg41326 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41326 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41328(Uv_7eqTree0, Uh_5tlreg41326 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41329 = Uh_6tlref41328.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uv_9210childseqno(Uh_5tlreg41329); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:291: 				if(!evaluated[childseqno]){
                {

//! DecisionTree.ulam:291: 				if(!evaluated[childseqno]){
                  const u32 Uh_5tlreg41331 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg41331 >= 40) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref41333(Uv_919evaluated, Uh_5tlreg41331 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg41334 = Uh_6tlref41333.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41335 = _LogicalBangBool32(Uh_5tlreg41334, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg41335, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:292: 					parent[childseqno] = seqno;
                      const u32 Uh_5tlreg41337 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41339 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41339 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41341(Uv_6parent, Uh_5tlreg41339 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41341.write(Uh_5tlreg41337);

//! DecisionTree.ulam:293: 					seqno = childseqno;
                      const u32 Uh_5tlreg41343 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      Uv_5seqno.write(Uh_5tlreg41343); //gcnl:Node.cpp:885

//! DecisionTree.ulam:294: 					keepRecursing = true;
                      const u32 Uh_5tlreg41345 = 1u; //gcnl:NodeTerminal.cpp:721
                      Uv_9213keepRecursing.write(Uh_5tlreg41345); //gcnl:Node.cpp:885
                    }
                  } // end if
                  else
                  {
                    {

//! DecisionTree.ulam:297: 					tree0Type[seqno] = 0;
                      const u32 Uh_5tlreg41347 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg41348 = _Int32ToBits32(Uh_5tlreg41347, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg41350 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41350 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref41352(Uv_919tree0Type, Uh_5tlreg41350 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41352.write(Uh_5tlreg41348);

//! DecisionTree.ulam:298: 					eqTree0[seqno] = value[childseqno];
                      const u32 Uh_5tlreg41354 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41354 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41356(Uv_5value, Uh_5tlreg41354 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg41357 = Uh_6tlref41356.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41359 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41359 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41361(Uv_7eqTree0, Uh_5tlreg41359 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41361.write(Uh_5tlreg41357);

//! DecisionTree.ulam:299: 					keepRecursing = true;
                      const u32 Uh_5tlreg41362 = 1u; //gcnl:NodeTerminal.cpp:721
                      Uv_9213keepRecursing.write(Uh_5tlreg41362); //gcnl:Node.cpp:885
                    }
                  } //end else
                }
              }
            } // end if
            else
            {
              {

//! DecisionTree.ulam:303: 				if(tree1Type[seqno] == 1){
                {

//! DecisionTree.ulam:303: 				if(tree1Type[seqno] == 1){
                  const u32 Uh_5tlreg41364 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg41365 = _Int32ToBits32(Uh_5tlreg41364, 2, 2); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41367 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg41367 >= 40) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10121t<EC> Uh_6tlref41369(Uv_919tree1Type, Uh_5tlreg41367 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg41370 = Uh_6tlref41369.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41371 = _BinOpCompareEqEqBits32(Uh_5tlreg41370, Uh_5tlreg41365, 2); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41371, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:304: 					Seqno childseqno = (Seqno)eqTree1[seqno];
                      const u32 Uh_5tlreg41373 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41373 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41375(Uv_7eqTree1, Uh_5tlreg41373 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg41376 = Uh_6tlref41375.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uv_9210childseqno(Uh_5tlreg41376); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:305: 					if(!evaluated[childseqno]){
                      {

//! DecisionTree.ulam:305: 					if(!evaluated[childseqno]){
                        const u32 Uh_5tlreg41378 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                        if(Uh_5tlreg41378 >= 40) //gcnl:NodeSquareBracket.cpp:794
                          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                        Ui_Ut_r10111b<EC> Uh_6tlref41380(Uv_919evaluated, Uh_5tlreg41378 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                        const u32 Uh_5tlreg41381 = Uh_6tlref41380.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg41382 = _LogicalBangBool32(Uh_5tlreg41381, 1); //gcnl:NodeUnaryOp.cpp:449
                        if(_Bool32ToCbool(Uh_5tlreg41382, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! DecisionTree.ulam:306: 						parent[childseqno] = seqno;
                            const u32 Uh_5tlreg41384 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            const u32 Uh_5tlreg41386 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg41386 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref41388(Uv_6parent, Uh_5tlreg41386 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref41388.write(Uh_5tlreg41384);

//! DecisionTree.ulam:307: 						seqno = childseqno;
                            const u32 Uh_5tlreg41390 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            Uv_5seqno.write(Uh_5tlreg41390); //gcnl:Node.cpp:885

//! DecisionTree.ulam:308: 						keepRecursing = true;
                            const u32 Uh_5tlreg41392 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_9213keepRecursing.write(Uh_5tlreg41392); //gcnl:Node.cpp:885
                          }
                        } // end if
                        else
                        {
                          {

//! DecisionTree.ulam:311: 						tree1Type[seqno] = 0;
                            const u32 Uh_5tlreg41394 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg41395 = _Int32ToBits32(Uh_5tlreg41394, 2, 2); //gcnl:NodeCast.cpp:723
                            const u32 Uh_5tlreg41397 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg41397 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10121t<EC> Uh_6tlref41399(Uv_919tree1Type, Uh_5tlreg41397 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref41399.write(Uh_5tlreg41395);

//! DecisionTree.ulam:312: 						eqTree1[seqno] = value[childseqno];
                            const u32 Uh_5tlreg41401 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg41401 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref41403(Uv_5value, Uh_5tlreg41401 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            const u32 Uh_5tlreg41404 = Uh_6tlref41403.read(); //gcnl:Node.cpp:691
                            const u32 Uh_5tlreg41406 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg41406 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref41408(Uv_7eqTree1, Uh_5tlreg41406 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref41408.write(Uh_5tlreg41404);

//! DecisionTree.ulam:313: 						keepRecursing = true;
                            const u32 Uh_5tlreg41409 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_9213keepRecursing.write(Uh_5tlreg41409); //gcnl:Node.cpp:885
                          }
                        } //end else
                      }
                    }
                  } // end if
                }
              }
            } //end else
          }
        }

//! DecisionTree.ulam:236: 		while(keepRecursing){
Ul_214endcontrolloop14:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DecisionTree.ulam:320: 		return value[var];
    const u32 Uh_5tlreg41412 = Uv_3var.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg41412 >= 40) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref41414(Uv_5value, Uh_5tlreg41412 * 6u + 0u, uc); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg41415 = Uh_6tlref41414.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41416(Uh_5tlreg41415); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41416); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8evaluate



//! DecisionTree.ulam:360: 	StoredValue operate(StoredValue val1, Unsigned(2) operator, StoredValue val2){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_7operate(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_4val1, Ui_Ut_10121u<EC>& Uv_8operator, Ui_Ut_10161u<EC>& Uv_4val2) const
  {

//! DecisionTree.ulam:361: 		StoredValue value;
    Ui_Ut_10161u<EC> Uv_5value; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:362: 		if(operator == 0){
    {

//! DecisionTree.ulam:362: 		if(operator == 0){
      const u32 Uh_5tlreg41417 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41418 = _Int32ToInt32(Uh_5tlreg41417, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41420 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41421 = _Unsigned32ToInt32(Uh_5tlreg41420, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41422 = _BinOpCompareEqEqInt32(Uh_5tlreg41421, Uh_5tlreg41418, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41422, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:363: 			value = (StoredValue)(val1 + val2);
          const u32 Uh_5tlreg41424 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41425 = _Unsigned32ToUnsigned32(Uh_5tlreg41424, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41427 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41428 = _Unsigned32ToUnsigned32(Uh_5tlreg41427, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41429 = _BinOpAddUnsigned32(Uh_5tlreg41428, Uh_5tlreg41425, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg41430 = _Unsigned32ToUnsigned32(Uh_5tlreg41429, 7, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg41430); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:365: 		if(operator == 1){
    {

//! DecisionTree.ulam:365: 		if(operator == 1){
      const u32 Uh_5tlreg41432 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41433 = _Int32ToInt32(Uh_5tlreg41432, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41435 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41436 = _Unsigned32ToInt32(Uh_5tlreg41435, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41437 = _BinOpCompareEqEqInt32(Uh_5tlreg41436, Uh_5tlreg41433, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41437, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:366: 			value = (StoredValue)(val1 - val2);
          const u32 Uh_5tlreg41439 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41440 = _Unsigned32ToUnsigned32(Uh_5tlreg41439, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41442 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41443 = _Unsigned32ToUnsigned32(Uh_5tlreg41442, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41444 = _BinOpSubtractUnsigned32(Uh_5tlreg41443, Uh_5tlreg41440, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg41445 = _Unsigned32ToUnsigned32(Uh_5tlreg41444, 7, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg41445); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:368: 		if(operator == 2){
    {

//! DecisionTree.ulam:368: 		if(operator == 2){
      const u32 Uh_5tlreg41447 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41449 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41450 = _Unsigned32ToInt32(Uh_5tlreg41449, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41451 = _BinOpCompareEqEqInt32(Uh_5tlreg41450, Uh_5tlreg41447, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41451, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:369: 			value = (StoredValue)(val1 * val2);
          const u32 Uh_5tlreg41453 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41454 = _Unsigned32ToUnsigned32(Uh_5tlreg41453, 6, 12); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41456 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41457 = _Unsigned32ToUnsigned32(Uh_5tlreg41456, 6, 12); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41458 = _BinOpMultiplyUnsigned32(Uh_5tlreg41457, Uh_5tlreg41454, 12); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg41459 = _Unsigned32ToUnsigned32(Uh_5tlreg41458, 12, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg41459); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:371: 		if(operator == 3){
    {

//! DecisionTree.ulam:371: 		if(operator == 3){
      const u32 Uh_5tlreg41461 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41463 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41464 = _Unsigned32ToInt32(Uh_5tlreg41463, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41465 = _BinOpCompareEqEqInt32(Uh_5tlreg41464, Uh_5tlreg41461, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41465, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:372: 			value = (StoredValue)(val1 / val2);
          const u32 Uh_5tlreg41467 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41469 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41470 = _BinOpDivideUnsigned32(Uh_5tlreg41469, Uh_5tlreg41467, 6); //gcnl:NodeBinaryOp.cpp:719
          Uv_5value.write(Uh_5tlreg41470); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:374: 		return value;
    const u32 Uh_5tlreg41473 = Uv_5value.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41474(Uh_5tlreg41473); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41474); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7operate



//! DecisionTree.ulam:322: 	StoredValue selfEvaluate(Seqno var, ID id, StoredValue comIn){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_9212selfEvaluate(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_3var, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10161u<EC>& Uv_5comIn) const
  {

//! DecisionTree.ulam:323: 		StoredValue val0;
    Ui_Ut_10161u<EC> Uv_4val0; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:324: 		StoredValue val1;
    Ui_Ut_10161u<EC> Uv_4val1; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:325: 		StoredValue value;
    Ui_Ut_10161u<EC> Uv_5value; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:326: 		Atom gene;
    Ui_Ut_102961a<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:327: 		Atom my = ew[0];
    UlamRef<EC> Uh_3tur41476(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41477 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41478 = _Int32ToUnsigned32(Uh_5tlreg41477, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval41479(Uh_5tlreg41478); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval41481 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41476, Uh_5tlval41479); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_2my(Uh_5tuval41481.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:328: 		if(my as Gene){
    {

//! DecisionTree.ulam:328: 		if(my as Gene){
      const T Uh_3tut41483 = Uv_2my.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41484 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41483); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41484, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:328: 		if(my as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval41485 = Uv_2my; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_2my(Uh_5tuval41485, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41485.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:329: 			if(my.tree0Type == 1 && my.eqTree0 == 0){
          {

//! DecisionTree.ulam:329: 			if(my.tree0Type == 1 && my.eqTree0 == 0){
            u32 Uh_5tlreg41486 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41487 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41488 = _Int32ToInt32(Uh_5tlreg41487, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41491 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41492 = _Unsigned32ToInt32(Uh_5tlreg41491, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41493 = _BinOpCompareEqEqInt32(Uh_5tlreg41492, Uh_5tlreg41488, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41493, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41494 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41495 = _Int32ToInt32(Uh_5tlreg41494, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41498 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41499 = _Unsigned32ToInt32(Uh_5tlreg41498, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41500 = _BinOpCompareEqEqInt32(Uh_5tlreg41499, Uh_5tlreg41495, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41486 = Uh_5tlreg41500; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41486, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:330: 				my.tree0Type = 0;
                const u32 Uh_5tlreg41501 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41502 = _Int32ToUnsigned32(Uh_5tlreg41501, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41502); //gcnl:Node.cpp:885

//! DecisionTree.ulam:331: 				val0 = comIn;
                const u32 Uh_5tlreg41506 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                Uv_4val0.write(Uh_5tlreg41506); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:333: 			if(my.tree1Type == 1 && my.eqTree1 == 0){
          {

//! DecisionTree.ulam:333: 			if(my.tree1Type == 1 && my.eqTree1 == 0){
            u32 Uh_5tlreg41508 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41509 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41510 = _Int32ToInt32(Uh_5tlreg41509, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41513 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41514 = _Unsigned32ToInt32(Uh_5tlreg41513, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41515 = _BinOpCompareEqEqInt32(Uh_5tlreg41514, Uh_5tlreg41510, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41515, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41516 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41517 = _Int32ToInt32(Uh_5tlreg41516, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41520 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41521 = _Unsigned32ToInt32(Uh_5tlreg41520, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41522 = _BinOpCompareEqEqInt32(Uh_5tlreg41521, Uh_5tlreg41517, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41508 = Uh_5tlreg41522; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41508, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:334: 				my.tree0Type = 0;
                const u32 Uh_5tlreg41523 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41524 = _Int32ToUnsigned32(Uh_5tlreg41523, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41524); //gcnl:Node.cpp:885

//! DecisionTree.ulam:335: 				val1 = comIn;
                const u32 Uh_5tlreg41528 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                Uv_4val1.write(Uh_5tlreg41528); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:338: 			if(my.tree0Type == 1){
          {

//! DecisionTree.ulam:338: 			if(my.tree0Type == 1){
            const u32 Uh_5tlreg41530 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41531 = _Int32ToInt32(Uh_5tlreg41530, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41534 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41535 = _Unsigned32ToInt32(Uh_5tlreg41534, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41536 = _BinOpCompareEqEqInt32(Uh_5tlreg41535, Uh_5tlreg41531, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41536, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:339: 				gene = findSeqno((Seqno)my.eqTree0, id);
                const u32 Uh_5tlreg41540 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41541(Uh_5tlreg41540); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41543 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval41544(Uh_5tlreg41543); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval41546 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval41541, Uh_5tlval41544); //gcnl:NodeFunctionCall.cpp:1006
                Uv_4gene.write(Uh_5tuval41546.read()); //gcnl:Node.cpp:885

//! DecisionTree.ulam:340: 				if(gene as Gene){
                {

//! DecisionTree.ulam:340: 				if(gene as Gene){
                  const T Uh_3tut41549 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41550 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41549); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg41550, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:340: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval41551 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41551, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41551.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:341: 					val0 = gene.value;
                      const u32 Uh_5tlreg41554 = UlamRef<EC>(Uv_4gene, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      Uv_4val0.write(Uh_5tlreg41554); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:344: 			if(my.tree0Type == 0){
          {

//! DecisionTree.ulam:344: 			if(my.tree0Type == 0){
            const u32 Uh_5tlreg41556 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41557 = _Int32ToInt32(Uh_5tlreg41556, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41560 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41561 = _Unsigned32ToInt32(Uh_5tlreg41560, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41562 = _BinOpCompareEqEqInt32(Uh_5tlreg41561, Uh_5tlreg41557, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41562, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:345: 				val0 = my.eqTree0;
                const u32 Uh_5tlreg41565 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Uv_4val0.write(Uh_5tlreg41565); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:347: 			if(my.tree1Type == 1){
          {

//! DecisionTree.ulam:347: 			if(my.tree1Type == 1){
            const u32 Uh_5tlreg41567 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41568 = _Int32ToInt32(Uh_5tlreg41567, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41571 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41572 = _Unsigned32ToInt32(Uh_5tlreg41571, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41573 = _BinOpCompareEqEqInt32(Uh_5tlreg41572, Uh_5tlreg41568, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41573, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:348: 				gene = findSeqno((Seqno)my.eqTree1, id);
                const u32 Uh_5tlreg41577 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41578(Uh_5tlreg41577); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41580 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval41581(Uh_5tlreg41580); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval41583 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval41578, Uh_5tlval41581); //gcnl:NodeFunctionCall.cpp:1006
                Uv_4gene.write(Uh_5tuval41583.read()); //gcnl:Node.cpp:885

//! DecisionTree.ulam:349: 				if(gene as Gene){
                {

//! DecisionTree.ulam:349: 				if(gene as Gene){
                  const T Uh_3tut41586 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41587 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41586); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg41587, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:349: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval41588 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41588, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41588.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:350: 					val1 = gene.value;
                      const u32 Uh_5tlreg41591 = UlamRef<EC>(Uv_4gene, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      Uv_4val1.write(Uh_5tlreg41591); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:353: 			if(my.tree1Type == 0){
          {

//! DecisionTree.ulam:353: 			if(my.tree1Type == 0){
            const u32 Uh_5tlreg41593 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41594 = _Int32ToInt32(Uh_5tlreg41593, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41597 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41598 = _Unsigned32ToInt32(Uh_5tlreg41597, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41599 = _BinOpCompareEqEqInt32(Uh_5tlreg41598, Uh_5tlreg41594, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41599, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:354: 				val1 = my.eqTree1;
                const u32 Uh_5tlreg41602 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Uv_4val1.write(Uh_5tlreg41602); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:356: 			value = operate(val0, my.operator, val1);
          const u32 Uh_5tlreg41606 = Uv_4val0.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41607(Uh_5tlreg41606); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41610 = UlamRef<EC>(Uv_2my, 17u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10121u<EC> Uh_5tlval41611(Uh_5tlreg41610); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41613 = Uv_4val1.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41614(Uh_5tlreg41613); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval41616 = THE_INSTANCE.Uf_7operate(uc, ur, Uh_5tlval41607, Uh_5tlval41611, Uh_5tlval41614); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg41617 = Uh_5tlval41616.read(); //gcnl:Node.cpp:1156
          Uv_5value.write(Uh_5tlreg41617); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:358: 		return value;
    const u32 Uh_5tlreg41620 = Uv_5value.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41621(Uh_5tlreg41620); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41621); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212selfEvaluate


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109212DecisionTree10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10106Random10", "r", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109212DecisionTree10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109212DecisionTree10<EC>::GetMangledClassName() const
  {
    return "Uq_10109212DecisionTree10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109212DecisionTree10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109212DecisionTree10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10109212DecisionTree10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_10109212DecisionTree10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109212DecisionTree10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_10109212DecisionTree10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_10109212DecisionTree10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109212DecisionTree10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

