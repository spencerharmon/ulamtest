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
#include "Ue_102188EggShell10.h"
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
    const u32 Uh_5tlreg3580 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3581 = _Int32ToUnsigned32(Uh_5tlreg3580, 3, 32); //gcnl:NodeCast.cpp:723
    UlamRef<EC> Uh_3tur3583(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3584 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3585 = _Int32ToInt32(Uh_5tlreg3584, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval3586(Uh_5tlreg3585); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3588 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3583, Uh_5tlval3586); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3589 = Uh_5tlval3588.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3590 = _BinOpAddUnsigned32(Uh_5tlreg3589, Uh_5tlreg3581, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg3591 = _Unsigned32ToUnsigned32(Uh_5tlreg3590, 32, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_7numVars(Uh_5tlreg3591); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:180: 		Seqno seqno = (Seqno) (numVars+1);
    const u32 Uh_5tlreg3592 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3593 = _Int32ToInt32(Uh_5tlreg3592, 2, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3595 = Uv_7numVars.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg3596 = _Unsigned32ToInt32(Uh_5tlreg3595, 6, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg3597 = _BinOpAddInt32(Uh_5tlreg3596, Uh_5tlreg3593, 8); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg3598 = _Int32ToUnsigned32(Uh_5tlreg3597, 8, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg3598); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
    {

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
      const u32 Uh_5tlreg3599 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3600 = _Int32ToUnsigned32(Uh_5tlreg3599, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3600); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
      while(true)
      {
        const u32 Uh_5tlreg3602 = Uv_7numVars.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3604 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3605 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3604, Uh_5tlreg3602, 6); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg3605, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
        {

//! DecisionTree.ulam:185: 			seqno = initTree(i,seqno,numVars,id);
          const u32 Uh_5tlreg3608 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3609(Uh_5tlreg3608); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg3611 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3612(Uh_5tlreg3611); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg3614 = Uv_7numVars.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3615(Uh_5tlreg3614); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg3617 = Uv_2id.read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval3618(Uh_5tlreg3617); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval3620 = THE_INSTANCE.Uf_8initTree(uc, ur, Uh_5tlval3609, Uh_5tlval3612, Uh_5tlval3615, Uh_5tlval3618); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3621 = Uh_5tlval3620.read(); //gcnl:Node.cpp:1156
          Uv_5seqno.write(Uh_5tlreg3621); //gcnl:Node.cpp:885
        }

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
Ul_214endcontrolloop11:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
        const u32 Uh_5tlreg3623 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3624 = _Int32ToUnsigned32(Uh_5tlreg3623, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3626 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3627 = _BinOpAddUnsigned32(Uh_5tlreg3626, Uh_5tlreg3624, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg3627); //gcnl:Node.cpp:885
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
    const u32 Uh_5tlreg3629 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3629); //gcnl:Node.cpp:885

//! DecisionTree.ulam:30: 		gene.id = id;
    const u32 Uh_5tlreg3633 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3633); //gcnl:Node.cpp:885

//! DecisionTree.ulam:33: 		gene.operator = (Unsigned(2)) r.create(3);
    UlamRef<EC> Uh_3tur3637(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3638 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3639 = _Int32ToInt32(Uh_5tlreg3638, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval3640(Uh_5tlreg3639); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3642 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3637, Uh_5tlval3640); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3643 = Uh_5tlval3642.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg3644 = _Unsigned32ToUnsigned32(Uh_5tlreg3643, 32, 2); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(42u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3644); //gcnl:Node.cpp:885

//! DecisionTree.ulam:49: 		Unsigned valTypSwitch0;
    Ui_Ut_102321u<EC> Uv_9213valTypSwitch0; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:50: 		Unsigned valTypSwitch1;
    Ui_Ut_102321u<EC> Uv_9213valTypSwitch1; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:52: 		valTypSwitch0 = r.create(100);
    UlamRef<EC> Uh_3tur3648(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3649 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3650 = _Int32ToInt32(Uh_5tlreg3649, 8, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval3651(Uh_5tlreg3650); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3653 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3648, Uh_5tlval3651); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3654 = Uh_5tlval3653.read(); //gcnl:Node.cpp:1156
    Uv_9213valTypSwitch0.write(Uh_5tlreg3654); //gcnl:Node.cpp:885

//! DecisionTree.ulam:53: 		valTypSwitch1 = r.create(100);
    UlamRef<EC> Uh_3tur3657(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3658 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3659 = _Int32ToInt32(Uh_5tlreg3658, 8, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval3660(Uh_5tlreg3659); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval3662 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3657, Uh_5tlval3660); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3663 = Uh_5tlval3662.read(); //gcnl:Node.cpp:1156
    Uv_9213valTypSwitch1.write(Uh_5tlreg3663); //gcnl:Node.cpp:885

//! DecisionTree.ulam:56: 		if(valTypSwitch0 >= (Unsigned)0 && valTypSwitch0 < (Unsigned)30){
    {

//! DecisionTree.ulam:56: 		if(valTypSwitch0 >= (Unsigned)0 && valTypSwitch0 < (Unsigned)30){
      u32 Uh_5tlreg3665 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3666 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3667 = _Int32ToUnsigned32(Uh_5tlreg3666, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3669 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3670 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3669, Uh_5tlreg3667, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3670, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3671 = 30; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3672 = _Int32ToUnsigned32(Uh_5tlreg3671, 6, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3674 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3675 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3674, Uh_5tlreg3672, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3665 = Uh_5tlreg3675; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3665, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:58: 			gene.tree0Type = 0;
          const u32 Uh_5tlreg3676 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3677 = _Int32ToUnsigned32(Uh_5tlreg3676, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3677); //gcnl:Node.cpp:885

//! DecisionTree.ulam:59: 			gene.eqTree0 = (Unsigned(6)) r.create(63);
          UlamRef<EC> Uh_3tur3681(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3682 = 63; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3683 = _Int32ToInt32(Uh_5tlreg3682, 7, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval3684(Uh_5tlreg3683); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval3686 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3681, Uh_5tlval3684); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3687 = Uh_5tlval3686.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg3688 = _Unsigned32ToUnsigned32(Uh_5tlreg3687, 32, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3688); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:62: 		if(valTypSwitch0 >= (Unsigned)30 && valTypSwitch0 < (Unsigned)40){
    {

//! DecisionTree.ulam:62: 		if(valTypSwitch0 >= (Unsigned)30 && valTypSwitch0 < (Unsigned)40){
      u32 Uh_5tlreg3691 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3692 = 30; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3693 = _Int32ToUnsigned32(Uh_5tlreg3692, 6, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3695 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3696 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3695, Uh_5tlreg3693, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3696, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3697 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3698 = _Int32ToUnsigned32(Uh_5tlreg3697, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3700 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3701 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3700, Uh_5tlreg3698, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3691 = Uh_5tlreg3701; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3691, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:64: 			gene.tree0Type = 0;
          const u32 Uh_5tlreg3702 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3703 = _Int32ToUnsigned32(Uh_5tlreg3702, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3703); //gcnl:Node.cpp:885

//! DecisionTree.ulam:65: 			gene.eqTree0 = (StoredValue) 0;
          const u32 Uh_5tlreg3706 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3707 = _Int32ToUnsigned32(Uh_5tlreg3706, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3707); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:68: 		if(valTypSwitch0 >= (Unsigned)40 && valTypSwitch0 < (Unsigned)50){
    {

//! DecisionTree.ulam:68: 		if(valTypSwitch0 >= (Unsigned)40 && valTypSwitch0 < (Unsigned)50){
      u32 Uh_5tlreg3710 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3711 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3712 = _Int32ToUnsigned32(Uh_5tlreg3711, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3714 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3715 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3714, Uh_5tlreg3712, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3715, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3716 = 50; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3717 = _Int32ToUnsigned32(Uh_5tlreg3716, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3719 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3720 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3719, Uh_5tlreg3717, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3710 = Uh_5tlreg3720; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3710, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:74: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg3721 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3722 = _Int32ToUnsigned32(Uh_5tlreg3721, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3722); //gcnl:Node.cpp:885

//! DecisionTree.ulam:78: 			gene.eqTree0 = (StoredValue)0;
          const u32 Uh_5tlreg3725 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3726 = _Int32ToUnsigned32(Uh_5tlreg3725, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3726); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:80: 		if(valTypSwitch0 >= (Unsigned)50 && valTypSwitch0 < (Unsigned)75){
    {

//! DecisionTree.ulam:80: 		if(valTypSwitch0 >= (Unsigned)50 && valTypSwitch0 < (Unsigned)75){
      u32 Uh_5tlreg3729 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3730 = 50; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3731 = _Int32ToUnsigned32(Uh_5tlreg3730, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3733 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3734 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3733, Uh_5tlreg3731, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3734, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3735 = 75; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3736 = _Int32ToUnsigned32(Uh_5tlreg3735, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3738 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3739 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3738, Uh_5tlreg3736, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3729 = Uh_5tlreg3739; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3729, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:82: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg3740 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3741 = _Int32ToUnsigned32(Uh_5tlreg3740, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3741); //gcnl:Node.cpp:885

//! DecisionTree.ulam:85: 			++numberOfGenesToAddToMyTree;
          const u32 Uh_5tlreg3744 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3745 = _Int32ToUnsigned32(Uh_5tlreg3744, 32, 2); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3747 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg3748 = _BinOpAddUnsigned32(Uh_5tlreg3747, Uh_5tlreg3745, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9226numberOfGenesToAddToMyTree.write(Uh_5tlreg3748); //gcnl:Node.cpp:885

//! DecisionTree.ulam:87: 			if(isVar){
          {

//! DecisionTree.ulam:87: 			if(isVar){
            const u32 Uh_5tlreg3750 = Uv_5isVar.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg3750, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:88: 				gene.eqTree0 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree-1);
                const u32 Uh_5tlreg3751 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3752 = _Int32ToInt32(Uh_5tlreg3751, 2, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3754 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3755 = _Unsigned32ToUnsigned32(Uh_5tlreg3754, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3757 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3758 = _Unsigned32ToUnsigned32(Uh_5tlreg3757, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3759 = _BinOpAddUnsigned32(Uh_5tlreg3758, Uh_5tlreg3755, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3760 = _Unsigned32ToInt32(Uh_5tlreg3759, 7, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3761 = _BinOpSubtractInt32(Uh_5tlreg3760, Uh_5tlreg3752, 9); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3762 = _Int32ToUnsigned32(Uh_5tlreg3761, 9, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3762); //gcnl:Node.cpp:885
              }
            } // end if
            else
            {
              {

//! DecisionTree.ulam:91: 				gene.eqTree0 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree);
                const u32 Uh_5tlreg3766 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3767 = _Unsigned32ToUnsigned32(Uh_5tlreg3766, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3769 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3770 = _Unsigned32ToUnsigned32(Uh_5tlreg3769, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3771 = _BinOpAddUnsigned32(Uh_5tlreg3770, Uh_5tlreg3767, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3772 = _Unsigned32ToUnsigned32(Uh_5tlreg3771, 7, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3772); //gcnl:Node.cpp:885
              }
            } //end else
          }
        }
      } // end if
    }

//! DecisionTree.ulam:94: 		if(valTypSwitch0 >= (Unsigned)75 && valTypSwitch0 < (Unsigned)100){
    {

//! DecisionTree.ulam:94: 		if(valTypSwitch0 >= (Unsigned)75 && valTypSwitch0 < (Unsigned)100){
      u32 Uh_5tlreg3775 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3776 = 75; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3777 = _Int32ToUnsigned32(Uh_5tlreg3776, 8, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3779 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3780 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3779, Uh_5tlreg3777, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3780, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3781 = 100; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3782 = _Int32ToUnsigned32(Uh_5tlreg3781, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3784 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3785 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3784, Uh_5tlreg3782, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3775 = Uh_5tlreg3785; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3775, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:96: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg3786 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3787 = _Int32ToUnsigned32(Uh_5tlreg3786, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3787); //gcnl:Node.cpp:885

//! DecisionTree.ulam:100: 			gene.eqTree0 = (StoredValue)((StoredValue)r.create(specialVars)+(StoredValue)4);
          const u32 Uh_5tlreg3790 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3791 = _Int32ToUnsigned32(Uh_5tlreg3790, 4, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3792 = _Unsigned32ToUnsigned32(Uh_5tlreg3791, 6, 7); //gcnl:NodeCast.cpp:723
          UlamRef<EC> Uh_3tur3794(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3796 = Uv_9211specialVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg3797 = _Unsigned32ToUnsigned32(Uh_5tlreg3796, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval3798(Uh_5tlreg3797); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval3800 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3794, Uh_5tlval3798); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3801 = Uh_5tlval3800.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg3802 = _Unsigned32ToUnsigned32(Uh_5tlreg3801, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3803 = _Unsigned32ToUnsigned32(Uh_5tlreg3802, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3804 = _BinOpAddUnsigned32(Uh_5tlreg3803, Uh_5tlreg3792, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg3805 = _Unsigned32ToUnsigned32(Uh_5tlreg3804, 7, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3805); //gcnl:Node.cpp:885

//! DecisionTree.ulam:103: 			if(gene.eqTree0 == gene.seqno){
          {

//! DecisionTree.ulam:103: 			if(gene.eqTree0 == gene.seqno){
            const u32 Uh_5tlreg3810 = UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3813 = UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3814 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3813, Uh_5tlreg3810, 6); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3814, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:104: 				gene.tree0Type = 0;
                const u32 Uh_5tlreg3815 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3816 = _Int32ToUnsigned32(Uh_5tlreg3815, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3816); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! DecisionTree.ulam:108: 		if(valTypSwitch1 >= (Unsigned)0 && valTypSwitch1 < (Unsigned)30){
    {

//! DecisionTree.ulam:108: 		if(valTypSwitch1 >= (Unsigned)0 && valTypSwitch1 < (Unsigned)30){
      u32 Uh_5tlreg3819 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3820 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3821 = _Int32ToUnsigned32(Uh_5tlreg3820, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3823 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3824 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3823, Uh_5tlreg3821, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3824, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3825 = 30; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3826 = _Int32ToUnsigned32(Uh_5tlreg3825, 6, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3828 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3829 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3828, Uh_5tlreg3826, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3819 = Uh_5tlreg3829; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3819, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:110: 			gene.tree1Type = 0;
          const u32 Uh_5tlreg3830 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3831 = _Int32ToUnsigned32(Uh_5tlreg3830, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3831); //gcnl:Node.cpp:885

//! DecisionTree.ulam:111: 			gene.eqTree1 = (Unsigned(6)) r.create(63);
          UlamRef<EC> Uh_3tur3835(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3836 = 63; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3837 = _Int32ToInt32(Uh_5tlreg3836, 7, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval3838(Uh_5tlreg3837); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval3840 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3835, Uh_5tlval3838); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3841 = Uh_5tlval3840.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg3842 = _Unsigned32ToUnsigned32(Uh_5tlreg3841, 32, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3842); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:114: 		if(valTypSwitch1 >= (Unsigned)30 && valTypSwitch1 < (Unsigned)40){
    {

//! DecisionTree.ulam:114: 		if(valTypSwitch1 >= (Unsigned)30 && valTypSwitch1 < (Unsigned)40){
      u32 Uh_5tlreg3845 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3846 = 30; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3847 = _Int32ToUnsigned32(Uh_5tlreg3846, 6, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3849 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3850 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3849, Uh_5tlreg3847, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3850, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3851 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3852 = _Int32ToUnsigned32(Uh_5tlreg3851, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3854 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3855 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3854, Uh_5tlreg3852, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3845 = Uh_5tlreg3855; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3845, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:116: 			gene.tree1Type = 0;
          const u32 Uh_5tlreg3856 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3857 = _Int32ToUnsigned32(Uh_5tlreg3856, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3857); //gcnl:Node.cpp:885

//! DecisionTree.ulam:117: 			gene.eqTree1 = (StoredValue) 0;
          const u32 Uh_5tlreg3860 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3861 = _Int32ToUnsigned32(Uh_5tlreg3860, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3861); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:120: 		if(valTypSwitch1 >= (Unsigned)40 && valTypSwitch1 < (Unsigned)50){
    {

//! DecisionTree.ulam:120: 		if(valTypSwitch1 >= (Unsigned)40 && valTypSwitch1 < (Unsigned)50){
      u32 Uh_5tlreg3864 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3865 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3866 = _Int32ToUnsigned32(Uh_5tlreg3865, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3868 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3869 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3868, Uh_5tlreg3866, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3869, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3870 = 50; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3871 = _Int32ToUnsigned32(Uh_5tlreg3870, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3873 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3874 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3873, Uh_5tlreg3871, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3864 = Uh_5tlreg3874; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3864, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:126: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg3875 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3876 = _Int32ToUnsigned32(Uh_5tlreg3875, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3876); //gcnl:Node.cpp:885

//! DecisionTree.ulam:130: 			gene.eqTree1 = (StoredValue)0;
          const u32 Uh_5tlreg3879 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3880 = _Int32ToUnsigned32(Uh_5tlreg3879, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3880); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:132: 		if(valTypSwitch1 >= (Unsigned)50 && valTypSwitch1 < (Unsigned)75){
    {

//! DecisionTree.ulam:132: 		if(valTypSwitch1 >= (Unsigned)50 && valTypSwitch1 < (Unsigned)75){
      u32 Uh_5tlreg3883 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3884 = 50; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3885 = _Int32ToUnsigned32(Uh_5tlreg3884, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3887 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3888 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3887, Uh_5tlreg3885, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3888, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3889 = 75; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3890 = _Int32ToUnsigned32(Uh_5tlreg3889, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3892 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3893 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3892, Uh_5tlreg3890, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3883 = Uh_5tlreg3893; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3883, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:134: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg3894 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3895 = _Int32ToUnsigned32(Uh_5tlreg3894, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3895); //gcnl:Node.cpp:885

//! DecisionTree.ulam:137: 			++numberOfGenesToAddToMyTree;
          const u32 Uh_5tlreg3898 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3899 = _Int32ToUnsigned32(Uh_5tlreg3898, 32, 2); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3901 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg3902 = _BinOpAddUnsigned32(Uh_5tlreg3901, Uh_5tlreg3899, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9226numberOfGenesToAddToMyTree.write(Uh_5tlreg3902); //gcnl:Node.cpp:885

//! DecisionTree.ulam:139: 			if(isVar){
          {

//! DecisionTree.ulam:139: 			if(isVar){
            const u32 Uh_5tlreg3904 = Uv_5isVar.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg3904, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:140: 				gene.eqTree1 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree-1);
                const u32 Uh_5tlreg3905 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3906 = _Int32ToInt32(Uh_5tlreg3905, 2, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3908 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3909 = _Unsigned32ToUnsigned32(Uh_5tlreg3908, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3911 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3912 = _Unsigned32ToUnsigned32(Uh_5tlreg3911, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3913 = _BinOpAddUnsigned32(Uh_5tlreg3912, Uh_5tlreg3909, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3914 = _Unsigned32ToInt32(Uh_5tlreg3913, 7, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3915 = _BinOpSubtractInt32(Uh_5tlreg3914, Uh_5tlreg3906, 9); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3916 = _Int32ToUnsigned32(Uh_5tlreg3915, 9, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3916); //gcnl:Node.cpp:885
              }
            } // end if
            else
            {
              {

//! DecisionTree.ulam:143: 				gene.eqTree1 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree);
                const u32 Uh_5tlreg3920 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3921 = _Unsigned32ToUnsigned32(Uh_5tlreg3920, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3923 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3924 = _Unsigned32ToUnsigned32(Uh_5tlreg3923, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3925 = _BinOpAddUnsigned32(Uh_5tlreg3924, Uh_5tlreg3921, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg3926 = _Unsigned32ToUnsigned32(Uh_5tlreg3925, 7, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3926); //gcnl:Node.cpp:885
              }
            } //end else
          }
        }
      } // end if
    }

//! DecisionTree.ulam:146: 		if(valTypSwitch1 >= (Unsigned)75 && valTypSwitch1 < (Unsigned)100){
    {

//! DecisionTree.ulam:146: 		if(valTypSwitch1 >= (Unsigned)75 && valTypSwitch1 < (Unsigned)100){
      u32 Uh_5tlreg3929 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3930 = 75; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3931 = _Int32ToUnsigned32(Uh_5tlreg3930, 8, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3933 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3934 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3933, Uh_5tlreg3931, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3934, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3935 = 100; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3936 = _Int32ToUnsigned32(Uh_5tlreg3935, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3938 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3939 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3938, Uh_5tlreg3936, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3929 = Uh_5tlreg3939; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3929, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:148: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg3940 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3941 = _Int32ToUnsigned32(Uh_5tlreg3940, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3941); //gcnl:Node.cpp:885

//! DecisionTree.ulam:152: 			gene.eqTree1 = (StoredValue)((StoredValue)r.create(specialVars)+(StoredValue)4);
          const u32 Uh_5tlreg3944 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3945 = _Int32ToUnsigned32(Uh_5tlreg3944, 4, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3946 = _Unsigned32ToUnsigned32(Uh_5tlreg3945, 6, 7); //gcnl:NodeCast.cpp:723
          UlamRef<EC> Uh_3tur3948(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3950 = Uv_9211specialVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg3951 = _Unsigned32ToUnsigned32(Uh_5tlreg3950, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval3952(Uh_5tlreg3951); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval3954 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur3948, Uh_5tlval3952); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3955 = Uh_5tlval3954.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg3956 = _Unsigned32ToUnsigned32(Uh_5tlreg3955, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3957 = _Unsigned32ToUnsigned32(Uh_5tlreg3956, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg3958 = _BinOpAddUnsigned32(Uh_5tlreg3957, Uh_5tlreg3946, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg3959 = _Unsigned32ToUnsigned32(Uh_5tlreg3958, 7, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3959); //gcnl:Node.cpp:885

//! DecisionTree.ulam:155: 			if(gene.eqTree1 == gene.seqno){
          {

//! DecisionTree.ulam:155: 			if(gene.eqTree1 == gene.seqno){
            const u32 Uh_5tlreg3964 = UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3967 = UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3968 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3967, Uh_5tlreg3964, 6); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3968, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:156: 				gene.tree1Type = 0;
                const u32 Uh_5tlreg3969 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3970 = _Int32ToUnsigned32(Uh_5tlreg3969, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3970); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! DecisionTree.ulam:161: 		if(mySeqno <= (Seqno)40){
    {

//! DecisionTree.ulam:161: 		if(mySeqno <= (Seqno)40){
      const u32 Uh_5tlreg3973 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3974 = _Int32ToUnsigned32(Uh_5tlreg3973, 7, 6); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3976 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3977 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3976, Uh_5tlreg3974, 6); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3977, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:162: 			ew[mySeqno]=gene;
          const T Uh_3tut3979 = Uv_4gene.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur3981(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3983 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3984(Uh_5tlreg3983); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval3986 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3981, Uh_5tlval3984); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval3986.WriteAtom(Uh_3tut3979); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! DecisionTree.ulam:164: 		return numberOfGenesToAddToMyTree;
    const u32 Uh_5tlreg3988 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
    Ui_Ut_10121u<EC> Uh_5tlval3989(Uh_5tlreg3988); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3989); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8initGene



//! DecisionTree.ulam:188: 	Seqno initTree(Seqno i,Seqno seqno,Seqno numVars,ID id){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_8initTree(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1i, Ui_Ut_10161u<EC>& Uv_5seqno, Ui_Ut_10161u<EC>& Uv_7numVars, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! DecisionTree.ulam:189: 		Seqno genesLeftToCreate;
    Ui_Ut_10161u<EC> Uv_9217genesLeftToCreate; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:195: 		genesLeftToCreate += initGene(i,seqno,id,(Unsigned(4))(numVars-3),true);
    const u32 Uh_5tlreg3992 = Uv_1i.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3993(Uh_5tlreg3992); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3995 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3996(Uh_5tlreg3995); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3998 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval3999(Uh_5tlreg3998); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41000 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41001 = _Int32ToInt32(Uh_5tlreg41000, 3, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg41003 = Uv_7numVars.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg41004 = _Unsigned32ToInt32(Uh_5tlreg41003, 6, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg41005 = _BinOpSubtractInt32(Uh_5tlreg41004, Uh_5tlreg41001, 8); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg41006 = _Int32ToUnsigned32(Uh_5tlreg41005, 8, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141u<EC> Uh_5tlval41007(Uh_5tlreg41006); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41008 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval41009(Uh_5tlreg41008); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10121u<EC> Uh_5tlval41011 = THE_INSTANCE.Uf_8initGene(uc, ur, Uh_5tlval3993, Uh_5tlval3996, Uh_5tlval3999, Uh_5tlval41007, Uh_5tlval41009); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41012 = Uh_5tlval41011.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg41013 = _Unsigned32ToUnsigned32(Uh_5tlreg41012, 2, 6); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg41015 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg41016 = _BinOpAddUnsigned32(Uh_5tlreg41015, Uh_5tlreg41013, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
    Uv_9217genesLeftToCreate.write(Uh_5tlreg41016); //gcnl:Node.cpp:885

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
    {

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
      while(true)
      {
        const u32 Uh_5tlreg41017 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41018 = _Int32ToInt32(Uh_5tlreg41017, 2, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41020 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41021 = _Unsigned32ToInt32(Uh_5tlreg41020, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41022 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41021, Uh_5tlreg41018, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41022, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
        {

//! DecisionTree.ulam:198: 			genesLeftToCreate += initGene(seqno,seqno,id,(Unsigned(4))(numVars-3),false);
          const u32 Uh_5tlreg41025 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41026(Uh_5tlreg41025); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41028 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41029(Uh_5tlreg41028); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41031 = Uv_2id.read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval41032(Uh_5tlreg41031); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41033 = 3; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41034 = _Int32ToInt32(Uh_5tlreg41033, 3, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41036 = Uv_7numVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41037 = _Unsigned32ToInt32(Uh_5tlreg41036, 6, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41038 = _BinOpSubtractInt32(Uh_5tlreg41037, Uh_5tlreg41034, 8); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg41039 = _Int32ToUnsigned32(Uh_5tlreg41038, 8, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141u<EC> Uh_5tlval41040(Uh_5tlreg41039); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41041 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval41042(Uh_5tlreg41041); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10121u<EC> Uh_5tlval41044 = THE_INSTANCE.Uf_8initGene(uc, ur, Uh_5tlval41026, Uh_5tlval41029, Uh_5tlval41032, Uh_5tlval41040, Uh_5tlval41042); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg41045 = Uh_5tlval41044.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg41046 = _Unsigned32ToUnsigned32(Uh_5tlreg41045, 2, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41048 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41049 = _BinOpAddUnsigned32(Uh_5tlreg41048, Uh_5tlreg41046, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9217genesLeftToCreate.write(Uh_5tlreg41049); //gcnl:Node.cpp:885

//! DecisionTree.ulam:199: 			--genesLeftToCreate;
          const u32 Uh_5tlreg41050 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41051 = _Int32ToUnsigned32(Uh_5tlreg41050, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41053 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41054 = _BinOpSubtractUnsigned32(Uh_5tlreg41053, Uh_5tlreg41051, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9217genesLeftToCreate.write(Uh_5tlreg41054); //gcnl:Node.cpp:885

//! DecisionTree.ulam:200: 			++seqno;
          const u32 Uh_5tlreg41055 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41056 = _Int32ToUnsigned32(Uh_5tlreg41055, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41058 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41059 = _BinOpAddUnsigned32(Uh_5tlreg41058, Uh_5tlreg41056, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_5seqno.write(Uh_5tlreg41059); //gcnl:Node.cpp:885
        }

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
Ul_214endcontrolloop12:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DecisionTree.ulam:202: 		return seqno;
    const u32 Uh_5tlreg41061 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41062(Uh_5tlreg41061); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41062); //gcnl:NodeReturnStatement.cpp:343

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
      const u32 Uh_5tlreg41063 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41064 = _Int32ToUnsigned32(Uh_5tlreg41063, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41064); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
      while(true)
      {
        const u32 Uh_5tlreg41065 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41067 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41068 = _Unsigned32ToInt32(Uh_5tlreg41067, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41069 = _BinOpCompareLessEqualInt32(Uh_5tlreg41068, Uh_5tlreg41065, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41069, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
        {

//! DecisionTree.ulam:208: 			Atom gene = ew[i];
          UlamRef<EC> Uh_3tur41071(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41073 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41074(Uh_5tlreg41073); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41076 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41071, Uh_5tlval41074); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval41076.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:209: 			if(gene as Gene){
          {

//! DecisionTree.ulam:209: 			if(gene as Gene){
            const T Uh_3tut41078 = Uv_4gene.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41079 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41078); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41079, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:209: 			if(gene as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41080 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41080, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41080.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:210: 				if(gene.id == id && gene.seqno == seqno){
                {

//! DecisionTree.ulam:210: 				if(gene.id == id && gene.seqno == seqno){
                  u32 Uh_5tlreg41081 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg41083 = Uv_2id.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41086 = UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41087 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41086, Uh_5tlreg41083, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41087, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg41089 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg41092 = UlamRef<EC>(Uv_4gene, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg41093 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41092, Uh_5tlreg41089, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg41081 = Uh_5tlreg41093; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg41081, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:211: 					return gene;
                      const T Uh_3tut41095 = Uv_4gene.read(); //gcnl:Node.cpp:691
                      Ui_Ut_102961a<EC> Uh_5tuval41096(Uh_3tut41095); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tuval41096); //gcnl:NodeReturnStatement.cpp:343
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
        const u32 Uh_5tlreg41097 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41098 = _Int32ToUnsigned32(Uh_5tlreg41097, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41100 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41101 = _BinOpAddUnsigned32(Uh_5tlreg41100, Uh_5tlreg41098, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg41101); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DecisionTree.ulam:215: 		return e;		
    const T Uh_3tut41103 = Uv_1e.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41104(Uh_3tut41103); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tuval41104); //gcnl:NodeReturnStatement.cpp:343

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
    const u32 Uh_5tlreg41105 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_9213keepRecursing(Uh_5tlreg41105); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:233: 		Seqno seqno = var;
    const u32 Uh_5tlreg41107 = Uv_3var.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg41107); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:235: 		Unsigned(2) dejavu;
    Ui_Ut_10121u<EC> Uv_6dejavu; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:236: 		while(keepRecursing){
    {

//! DecisionTree.ulam:236: 		while(keepRecursing){
      while(true)
      {
        const u32 Uh_5tlreg41109 = Uv_9213keepRecursing.read(); //gcnl:Node.cpp:691

        if(!_Bool32ToCbool(Uh_5tlreg41109, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:236: 		while(keepRecursing){
        {

//! DecisionTree.ulam:237: 			if(evaluated[var]){
          {

//! DecisionTree.ulam:237: 			if(evaluated[var]){
            const u32 Uh_5tlreg41111 = Uv_3var.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41111 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref41113(Uv_919evaluated, Uh_5tlreg41111 * 1u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41114 = Uh_6tlref41113.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg41114, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:238: 				return value[var];
                const u32 Uh_5tlreg41116 = Uv_3var.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41116 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41118(Uv_5value, Uh_5tlreg41116 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41119 = Uh_6tlref41118.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41120(Uh_5tlreg41119); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41120); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }

//! DecisionTree.ulam:240: 			if(!evaluated[seqno] && !checked[seqno]){
          {

//! DecisionTree.ulam:240: 			if(!evaluated[seqno] && !checked[seqno]){
            u32 Uh_5tlreg41121 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41123 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41123 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref41125(Uv_919evaluated, Uh_5tlreg41123 * 1u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41126 = Uh_6tlref41125.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41127 = _LogicalBangBool32(Uh_5tlreg41126, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg41127, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41129 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg41129 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref41131(Uv_7checked, Uh_5tlreg41129 * 1u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg41132 = Uh_6tlref41131.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41133 = _LogicalBangBool32(Uh_5tlreg41132, 1); //gcnl:NodeUnaryOp.cpp:449
              Uh_5tlreg41121 = Uh_5tlreg41133; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41121, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:244: 				Atom gene = findSeqno(seqno, id);
                const u32 Uh_5tlreg41136 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41137(Uh_5tlreg41136); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41139 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval41140(Uh_5tlreg41139); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval41142 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval41137, Uh_5tlval41140); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval41142.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:249: 				++dejavu;
                const u32 Uh_5tlreg41143 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41144 = _Int32ToUnsigned32(Uh_5tlreg41143, 32, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg41146 = Uv_6dejavu.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg41147 = _BinOpAddUnsigned32(Uh_5tlreg41146, Uh_5tlreg41144, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
                Uv_6dejavu.write(Uh_5tlreg41147); //gcnl:Node.cpp:885

//! DecisionTree.ulam:250: 				if(dejavu > 1){
                {

//! DecisionTree.ulam:250: 				if(dejavu > 1){
                  const u32 Uh_5tlreg41148 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg41149 = _Int32ToInt32(Uh_5tlreg41148, 2, 3); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41151 = Uv_6dejavu.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41152 = _Unsigned32ToInt32(Uh_5tlreg41151, 2, 3); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41153 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41152, Uh_5tlreg41149, 3); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41153, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:251: 					return (StoredValue) 0;
                      const u32 Uh_5tlreg41154 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg41155 = _Int32ToUnsigned32(Uh_5tlreg41154, 2, 6); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10161u<EC> Uh_5tlval41156(Uh_5tlreg41155); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval41156); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                }

//! DecisionTree.ulam:253: 				if(gene as Gene){
                {

//! DecisionTree.ulam:253: 				if(gene as Gene){
                  const T Uh_3tut41158 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41159 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41158); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg41159, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:253: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval41160 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41160, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41160.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:254: 					checked[seqno] = true;
                      const u32 Uh_5tlreg41161 = 1u; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg41163 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41163 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10111b<EC> Uh_6tlref41165(Uv_7checked, Uh_5tlreg41163 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41165.write(Uh_5tlreg41161);

//! DecisionTree.ulam:256: 					operator[seqno] = gene.operator;
                      const u32 Uh_5tlreg41168 = UlamRef<EC>(Uv_4gene, 17u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41170 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41170 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121u<EC> Uh_6tlref41172(Uv_8operator, Uh_5tlreg41170 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41172.write(Uh_5tlreg41168);

//! DecisionTree.ulam:258: 					tree0Type[seqno] = gene.tree0Type;
                      const u32 Uh_5tlreg41175 = UlamRef<EC>(Uv_4gene, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41176 = _Unsigned32ToBits32(Uh_5tlreg41175, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg41178 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41178 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref41180(Uv_919tree0Type, Uh_5tlreg41178 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41180.write(Uh_5tlreg41176);

//! DecisionTree.ulam:259: 					eqTree0[seqno] = gene.eqTree0;
                      const u32 Uh_5tlreg41183 = UlamRef<EC>(Uv_4gene, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41185 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41185 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41187(Uv_7eqTree0, Uh_5tlreg41185 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41187.write(Uh_5tlreg41183);

//! DecisionTree.ulam:261: 					tree1Type[seqno] = gene.tree1Type;
                      const u32 Uh_5tlreg41190 = UlamRef<EC>(Uv_4gene, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41191 = _Unsigned32ToBits32(Uh_5tlreg41190, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg41193 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41193 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref41195(Uv_919tree1Type, Uh_5tlreg41193 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41195.write(Uh_5tlreg41191);

//! DecisionTree.ulam:262: 					eqTree1[seqno] = gene.eqTree1;
                      const u32 Uh_5tlreg41198 = UlamRef<EC>(Uv_4gene, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41200 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41200 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41202(Uv_7eqTree1, Uh_5tlreg41200 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41202.write(Uh_5tlreg41198);
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:268: 			if(tree0Type[seqno] == 1 && eqTree0[seqno] == 0){
          {

//! DecisionTree.ulam:268: 			if(tree0Type[seqno] == 1 && eqTree0[seqno] == 0){
            u32 Uh_5tlreg41203 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41204 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41205 = _Int32ToBits32(Uh_5tlreg41204, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41207 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41207 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref41209(Uv_919tree0Type, Uh_5tlreg41207 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41210 = Uh_6tlref41209.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41211 = _BinOpCompareEqEqBits32(Uh_5tlreg41210, Uh_5tlreg41205, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41211, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41212 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41213 = _Int32ToInt32(Uh_5tlreg41212, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41215 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg41215 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10161u<EC> Uh_6tlref41217(Uv_7eqTree0, Uh_5tlreg41215 * 6u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg41218 = Uh_6tlref41217.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41219 = _Unsigned32ToInt32(Uh_5tlreg41218, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41220 = _BinOpCompareEqEqInt32(Uh_5tlreg41219, Uh_5tlreg41213, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41203 = Uh_5tlreg41220; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41203, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:269: 				tree0Type[seqno] = 0;
                const u32 Uh_5tlreg41221 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41222 = _Int32ToBits32(Uh_5tlreg41221, 2, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg41224 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41224 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121t<EC> Uh_6tlref41226(Uv_919tree0Type, Uh_5tlreg41224 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41226.write(Uh_5tlreg41222);

//! DecisionTree.ulam:270: 				eqTree0[seqno] = comIn;
                const u32 Uh_5tlreg41228 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg41230 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41230 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41232(Uv_7eqTree0, Uh_5tlreg41230 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41232.write(Uh_5tlreg41228);
              }
            } // end if
          }

//! DecisionTree.ulam:272: 			if(tree1Type[seqno] == 1 && eqTree1[seqno] == 0){
          {

//! DecisionTree.ulam:272: 			if(tree1Type[seqno] == 1 && eqTree1[seqno] == 0){
            u32 Uh_5tlreg41233 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41234 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41235 = _Int32ToBits32(Uh_5tlreg41234, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41237 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41237 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref41239(Uv_919tree1Type, Uh_5tlreg41237 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41240 = Uh_6tlref41239.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41241 = _BinOpCompareEqEqBits32(Uh_5tlreg41240, Uh_5tlreg41235, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41241, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41242 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41243 = _Int32ToInt32(Uh_5tlreg41242, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41245 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg41245 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10161u<EC> Uh_6tlref41247(Uv_7eqTree1, Uh_5tlreg41245 * 6u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg41248 = Uh_6tlref41247.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41249 = _Unsigned32ToInt32(Uh_5tlreg41248, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41250 = _BinOpCompareEqEqInt32(Uh_5tlreg41249, Uh_5tlreg41243, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41233 = Uh_5tlreg41250; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41233, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:273: 				tree0Type[seqno] = 0;
                const u32 Uh_5tlreg41251 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41252 = _Int32ToBits32(Uh_5tlreg41251, 2, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg41254 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41254 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121t<EC> Uh_6tlref41256(Uv_919tree0Type, Uh_5tlreg41254 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41256.write(Uh_5tlreg41252);

//! DecisionTree.ulam:274: 				eqTree0[seqno] = comIn;
                const u32 Uh_5tlreg41258 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg41260 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41260 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41262(Uv_7eqTree0, Uh_5tlreg41260 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41262.write(Uh_5tlreg41258);
              }
            } // end if
          }

//! DecisionTree.ulam:280: 			if(tree0Type[seqno] == 0 && tree1Type[seqno] == 0){
          {

//! DecisionTree.ulam:280: 			if(tree0Type[seqno] == 0 && tree1Type[seqno] == 0){
            u32 Uh_5tlreg41263 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41264 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41265 = _Int32ToBits32(Uh_5tlreg41264, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41267 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41267 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref41269(Uv_919tree0Type, Uh_5tlreg41267 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41270 = Uh_6tlref41269.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41271 = _BinOpCompareEqEqBits32(Uh_5tlreg41270, Uh_5tlreg41265, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41271, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41272 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41273 = _Int32ToBits32(Uh_5tlreg41272, 2, 2); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41275 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg41275 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10121t<EC> Uh_6tlref41277(Uv_919tree1Type, Uh_5tlreg41275 * 2u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg41278 = Uh_6tlref41277.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41279 = _BinOpCompareEqEqBits32(Uh_5tlreg41278, Uh_5tlreg41273, 2); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41263 = Uh_5tlreg41279; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41263, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:281: 				value[seqno] = operate(eqTree0[seqno], operator[seqno], eqTree1[seqno]);
                const u32 Uh_5tlreg41282 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41282 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41284(Uv_7eqTree0, Uh_5tlreg41282 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41285 = Uh_6tlref41284.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41286(Uh_5tlreg41285); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41288 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41288 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121u<EC> Uh_6tlref41290(Uv_8operator, Uh_5tlreg41288 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41291 = Uh_6tlref41290.read(); //gcnl:Node.cpp:691
                Ui_Ut_10121u<EC> Uh_5tlval41292(Uh_5tlreg41291); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41294 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41294 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41296(Uv_7eqTree1, Uh_5tlreg41294 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41297 = Uh_6tlref41296.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41298(Uh_5tlreg41297); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval41300 = THE_INSTANCE.Uf_7operate(uc, ur, Uh_5tlval41286, Uh_5tlval41292, Uh_5tlval41298); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg41301 = Uh_5tlval41300.read(); //gcnl:Node.cpp:1156
                const u32 Uh_5tlreg41303 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41303 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41305(Uv_5value, Uh_5tlreg41303 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41305.write(Uh_5tlreg41301);

//! DecisionTree.ulam:282: 				evaluated[seqno] = true;
                const u32 Uh_5tlreg41306 = 1u; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41308 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41308 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10111b<EC> Uh_6tlref41310(Uv_919evaluated, Uh_5tlreg41308 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref41310.write(Uh_5tlreg41306);

//! DecisionTree.ulam:283: 				keepRecursing = true;
                const u32 Uh_5tlreg41311 = 1u; //gcnl:NodeTerminal.cpp:721
                Uv_9213keepRecursing.write(Uh_5tlreg41311); //gcnl:Node.cpp:885

//! DecisionTree.ulam:284: 				seqno = parent[seqno];
                const u32 Uh_5tlreg41314 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41314 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41316(Uv_6parent, Uh_5tlreg41314 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41317 = Uh_6tlref41316.read(); //gcnl:Node.cpp:691
                Uv_5seqno.write(Uh_5tlreg41317); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:289: 			if(tree0Type[seqno] == 1){
          {

//! DecisionTree.ulam:289: 			if(tree0Type[seqno] == 1){
            const u32 Uh_5tlreg41319 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41320 = _Int32ToBits32(Uh_5tlreg41319, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41322 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg41322 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref41324(Uv_919tree0Type, Uh_5tlreg41322 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg41325 = Uh_6tlref41324.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41326 = _BinOpCompareEqEqBits32(Uh_5tlreg41325, Uh_5tlreg41320, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41326, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:290: 				Seqno childseqno = (Seqno)eqTree0[seqno];
                const u32 Uh_5tlreg41328 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg41328 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref41330(Uv_7eqTree0, Uh_5tlreg41328 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg41331 = Uh_6tlref41330.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uv_9210childseqno(Uh_5tlreg41331); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:291: 				if(!evaluated[childseqno]){
                {

//! DecisionTree.ulam:291: 				if(!evaluated[childseqno]){
                  const u32 Uh_5tlreg41333 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg41333 >= 40) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref41335(Uv_919evaluated, Uh_5tlreg41333 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg41336 = Uh_6tlref41335.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41337 = _LogicalBangBool32(Uh_5tlreg41336, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg41337, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:292: 					parent[childseqno] = seqno;
                      const u32 Uh_5tlreg41339 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41341 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41341 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41343(Uv_6parent, Uh_5tlreg41341 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41343.write(Uh_5tlreg41339);

//! DecisionTree.ulam:293: 					seqno = childseqno;
                      const u32 Uh_5tlreg41345 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      Uv_5seqno.write(Uh_5tlreg41345); //gcnl:Node.cpp:885

//! DecisionTree.ulam:294: 					keepRecursing = true;
                      const u32 Uh_5tlreg41347 = 1u; //gcnl:NodeTerminal.cpp:721
                      Uv_9213keepRecursing.write(Uh_5tlreg41347); //gcnl:Node.cpp:885
                    }
                  } // end if
                  else
                  {
                    {

//! DecisionTree.ulam:297: 					tree0Type[seqno] = 0;
                      const u32 Uh_5tlreg41349 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg41350 = _Int32ToBits32(Uh_5tlreg41349, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg41352 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41352 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref41354(Uv_919tree0Type, Uh_5tlreg41352 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41354.write(Uh_5tlreg41350);

//! DecisionTree.ulam:298: 					eqTree0[seqno] = value[childseqno];
                      const u32 Uh_5tlreg41356 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41356 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41358(Uv_5value, Uh_5tlreg41356 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg41359 = Uh_6tlref41358.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg41361 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41361 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41363(Uv_7eqTree0, Uh_5tlreg41361 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref41363.write(Uh_5tlreg41359);

//! DecisionTree.ulam:299: 					keepRecursing = true;
                      const u32 Uh_5tlreg41364 = 1u; //gcnl:NodeTerminal.cpp:721
                      Uv_9213keepRecursing.write(Uh_5tlreg41364); //gcnl:Node.cpp:885
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
                  const u32 Uh_5tlreg41366 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg41367 = _Int32ToBits32(Uh_5tlreg41366, 2, 2); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41369 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg41369 >= 40) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10121t<EC> Uh_6tlref41371(Uv_919tree1Type, Uh_5tlreg41369 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg41372 = Uh_6tlref41371.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41373 = _BinOpCompareEqEqBits32(Uh_5tlreg41372, Uh_5tlreg41367, 2); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41373, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:304: 					Seqno childseqno = (Seqno)eqTree1[seqno];
                      const u32 Uh_5tlreg41375 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg41375 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref41377(Uv_7eqTree1, Uh_5tlreg41375 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg41378 = Uh_6tlref41377.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uv_9210childseqno(Uh_5tlreg41378); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:305: 					if(!evaluated[childseqno]){
                      {

//! DecisionTree.ulam:305: 					if(!evaluated[childseqno]){
                        const u32 Uh_5tlreg41380 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                        if(Uh_5tlreg41380 >= 40) //gcnl:NodeSquareBracket.cpp:794
                          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                        Ui_Ut_r10111b<EC> Uh_6tlref41382(Uv_919evaluated, Uh_5tlreg41380 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                        const u32 Uh_5tlreg41383 = Uh_6tlref41382.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg41384 = _LogicalBangBool32(Uh_5tlreg41383, 1); //gcnl:NodeUnaryOp.cpp:449
                        if(_Bool32ToCbool(Uh_5tlreg41384, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! DecisionTree.ulam:306: 						parent[childseqno] = seqno;
                            const u32 Uh_5tlreg41386 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            const u32 Uh_5tlreg41388 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg41388 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref41390(Uv_6parent, Uh_5tlreg41388 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref41390.write(Uh_5tlreg41386);

//! DecisionTree.ulam:307: 						seqno = childseqno;
                            const u32 Uh_5tlreg41392 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            Uv_5seqno.write(Uh_5tlreg41392); //gcnl:Node.cpp:885

//! DecisionTree.ulam:308: 						keepRecursing = true;
                            const u32 Uh_5tlreg41394 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_9213keepRecursing.write(Uh_5tlreg41394); //gcnl:Node.cpp:885
                          }
                        } // end if
                        else
                        {
                          {

//! DecisionTree.ulam:311: 						tree1Type[seqno] = 0;
                            const u32 Uh_5tlreg41396 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg41397 = _Int32ToBits32(Uh_5tlreg41396, 2, 2); //gcnl:NodeCast.cpp:723
                            const u32 Uh_5tlreg41399 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg41399 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10121t<EC> Uh_6tlref41401(Uv_919tree1Type, Uh_5tlreg41399 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref41401.write(Uh_5tlreg41397);

//! DecisionTree.ulam:312: 						eqTree1[seqno] = value[childseqno];
                            const u32 Uh_5tlreg41403 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg41403 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref41405(Uv_5value, Uh_5tlreg41403 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            const u32 Uh_5tlreg41406 = Uh_6tlref41405.read(); //gcnl:Node.cpp:691
                            const u32 Uh_5tlreg41408 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg41408 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref41410(Uv_7eqTree1, Uh_5tlreg41408 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref41410.write(Uh_5tlreg41406);

//! DecisionTree.ulam:313: 						keepRecursing = true;
                            const u32 Uh_5tlreg41411 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_9213keepRecursing.write(Uh_5tlreg41411); //gcnl:Node.cpp:885
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
    const u32 Uh_5tlreg41414 = Uv_3var.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg41414 >= 40) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref41416(Uv_5value, Uh_5tlreg41414 * 6u + 0u, uc); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg41417 = Uh_6tlref41416.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41418(Uh_5tlreg41417); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41418); //gcnl:NodeReturnStatement.cpp:343

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
      const u32 Uh_5tlreg41419 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41420 = _Int32ToInt32(Uh_5tlreg41419, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41422 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41423 = _Unsigned32ToInt32(Uh_5tlreg41422, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41424 = _BinOpCompareEqEqInt32(Uh_5tlreg41423, Uh_5tlreg41420, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41424, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:363: 			value = (StoredValue)(val1 + val2);
          const u32 Uh_5tlreg41426 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41427 = _Unsigned32ToUnsigned32(Uh_5tlreg41426, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41429 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41430 = _Unsigned32ToUnsigned32(Uh_5tlreg41429, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41431 = _BinOpAddUnsigned32(Uh_5tlreg41430, Uh_5tlreg41427, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg41432 = _Unsigned32ToUnsigned32(Uh_5tlreg41431, 7, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg41432); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:365: 		if(operator == 1){
    {

//! DecisionTree.ulam:365: 		if(operator == 1){
      const u32 Uh_5tlreg41434 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41435 = _Int32ToInt32(Uh_5tlreg41434, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41437 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41438 = _Unsigned32ToInt32(Uh_5tlreg41437, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41439 = _BinOpCompareEqEqInt32(Uh_5tlreg41438, Uh_5tlreg41435, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41439, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:366: 			value = (StoredValue)(val1 - val2);
          const u32 Uh_5tlreg41441 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41442 = _Unsigned32ToUnsigned32(Uh_5tlreg41441, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41444 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41445 = _Unsigned32ToUnsigned32(Uh_5tlreg41444, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41446 = _BinOpSubtractUnsigned32(Uh_5tlreg41445, Uh_5tlreg41442, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg41447 = _Unsigned32ToUnsigned32(Uh_5tlreg41446, 7, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg41447); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:368: 		if(operator == 2){
    {

//! DecisionTree.ulam:368: 		if(operator == 2){
      const u32 Uh_5tlreg41449 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41451 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41452 = _Unsigned32ToInt32(Uh_5tlreg41451, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41453 = _BinOpCompareEqEqInt32(Uh_5tlreg41452, Uh_5tlreg41449, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41453, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:369: 			value = (StoredValue)(val1 * val2);
          const u32 Uh_5tlreg41455 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41456 = _Unsigned32ToUnsigned32(Uh_5tlreg41455, 6, 12); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41458 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41459 = _Unsigned32ToUnsigned32(Uh_5tlreg41458, 6, 12); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41460 = _BinOpMultiplyUnsigned32(Uh_5tlreg41459, Uh_5tlreg41456, 12); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg41461 = _Unsigned32ToUnsigned32(Uh_5tlreg41460, 12, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg41461); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:371: 		if(operator == 3){
    {

//! DecisionTree.ulam:371: 		if(operator == 3){
      const u32 Uh_5tlreg41463 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41465 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41466 = _Unsigned32ToInt32(Uh_5tlreg41465, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41467 = _BinOpCompareEqEqInt32(Uh_5tlreg41466, Uh_5tlreg41463, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41467, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:372: 			value = (StoredValue)(val1 / val2);
          const u32 Uh_5tlreg41469 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41471 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg41472 = _BinOpDivideUnsigned32(Uh_5tlreg41471, Uh_5tlreg41469, 6); //gcnl:NodeBinaryOp.cpp:719
          Uv_5value.write(Uh_5tlreg41472); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:374: 		return value;
    const u32 Uh_5tlreg41475 = Uv_5value.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41476(Uh_5tlreg41475); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41476); //gcnl:NodeReturnStatement.cpp:343

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
    UlamRef<EC> Uh_3tur41478(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41479 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41480 = _Int32ToUnsigned32(Uh_5tlreg41479, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval41481(Uh_5tlreg41480); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval41483 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41478, Uh_5tlval41481); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_2my(Uh_5tuval41483.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:328: 		if(my as Gene){
    {

//! DecisionTree.ulam:328: 		if(my as Gene){
      const T Uh_3tut41485 = Uv_2my.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41486 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41485); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41486, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:328: 		if(my as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval41487 = Uv_2my; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_2my(Uh_5tuval41487, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41487.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:329: 			if(my.tree0Type == 1 && my.eqTree0 == 0){
          {

//! DecisionTree.ulam:329: 			if(my.tree0Type == 1 && my.eqTree0 == 0){
            u32 Uh_5tlreg41488 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41489 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41490 = _Int32ToInt32(Uh_5tlreg41489, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41493 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41494 = _Unsigned32ToInt32(Uh_5tlreg41493, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41495 = _BinOpCompareEqEqInt32(Uh_5tlreg41494, Uh_5tlreg41490, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41495, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41496 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41497 = _Int32ToInt32(Uh_5tlreg41496, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41500 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41501 = _Unsigned32ToInt32(Uh_5tlreg41500, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41502 = _BinOpCompareEqEqInt32(Uh_5tlreg41501, Uh_5tlreg41497, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41488 = Uh_5tlreg41502; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41488, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:330: 				my.tree0Type = 0;
                const u32 Uh_5tlreg41503 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41504 = _Int32ToUnsigned32(Uh_5tlreg41503, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41504); //gcnl:Node.cpp:885

//! DecisionTree.ulam:331: 				val0 = comIn;
                const u32 Uh_5tlreg41508 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                Uv_4val0.write(Uh_5tlreg41508); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:333: 			if(my.tree1Type == 1 && my.eqTree1 == 0){
          {

//! DecisionTree.ulam:333: 			if(my.tree1Type == 1 && my.eqTree1 == 0){
            u32 Uh_5tlreg41510 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg41511 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41512 = _Int32ToInt32(Uh_5tlreg41511, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41515 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41516 = _Unsigned32ToInt32(Uh_5tlreg41515, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41517 = _BinOpCompareEqEqInt32(Uh_5tlreg41516, Uh_5tlreg41512, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41517, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg41518 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41519 = _Int32ToInt32(Uh_5tlreg41518, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41522 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41523 = _Unsigned32ToInt32(Uh_5tlreg41522, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41524 = _BinOpCompareEqEqInt32(Uh_5tlreg41523, Uh_5tlreg41519, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41510 = Uh_5tlreg41524; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg41510, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:334: 				my.tree0Type = 0;
                const u32 Uh_5tlreg41525 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41526 = _Int32ToUnsigned32(Uh_5tlreg41525, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41526); //gcnl:Node.cpp:885

//! DecisionTree.ulam:335: 				val1 = comIn;
                const u32 Uh_5tlreg41530 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                Uv_4val1.write(Uh_5tlreg41530); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:338: 			if(my.tree0Type == 1){
          {

//! DecisionTree.ulam:338: 			if(my.tree0Type == 1){
            const u32 Uh_5tlreg41532 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41533 = _Int32ToInt32(Uh_5tlreg41532, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41536 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41537 = _Unsigned32ToInt32(Uh_5tlreg41536, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41538 = _BinOpCompareEqEqInt32(Uh_5tlreg41537, Uh_5tlreg41533, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41538, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:339: 				gene = findSeqno((Seqno)my.eqTree0, id);
                const u32 Uh_5tlreg41542 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41543(Uh_5tlreg41542); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41545 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval41546(Uh_5tlreg41545); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval41548 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval41543, Uh_5tlval41546); //gcnl:NodeFunctionCall.cpp:1006
                Uv_4gene.write(Uh_5tuval41548.read()); //gcnl:Node.cpp:885

//! DecisionTree.ulam:340: 				if(gene as Gene){
                {

//! DecisionTree.ulam:340: 				if(gene as Gene){
                  const T Uh_3tut41551 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41552 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41551); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg41552, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:340: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval41553 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41553, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41553.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:341: 					val0 = gene.value;
                      const u32 Uh_5tlreg41556 = UlamRef<EC>(Uv_4gene, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      Uv_4val0.write(Uh_5tlreg41556); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:344: 			if(my.tree0Type == 0){
          {

//! DecisionTree.ulam:344: 			if(my.tree0Type == 0){
            const u32 Uh_5tlreg41558 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41559 = _Int32ToInt32(Uh_5tlreg41558, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41562 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41563 = _Unsigned32ToInt32(Uh_5tlreg41562, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41564 = _BinOpCompareEqEqInt32(Uh_5tlreg41563, Uh_5tlreg41559, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41564, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:345: 				val0 = my.eqTree0;
                const u32 Uh_5tlreg41567 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Uv_4val0.write(Uh_5tlreg41567); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:347: 			if(my.tree1Type == 1){
          {

//! DecisionTree.ulam:347: 			if(my.tree1Type == 1){
            const u32 Uh_5tlreg41569 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41570 = _Int32ToInt32(Uh_5tlreg41569, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41573 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41574 = _Unsigned32ToInt32(Uh_5tlreg41573, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41575 = _BinOpCompareEqEqInt32(Uh_5tlreg41574, Uh_5tlreg41570, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41575, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:348: 				gene = findSeqno((Seqno)my.eqTree1, id);
                const u32 Uh_5tlreg41579 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41580(Uh_5tlreg41579); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41582 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval41583(Uh_5tlreg41582); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval41585 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval41580, Uh_5tlval41583); //gcnl:NodeFunctionCall.cpp:1006
                Uv_4gene.write(Uh_5tuval41585.read()); //gcnl:Node.cpp:885

//! DecisionTree.ulam:349: 				if(gene as Gene){
                {

//! DecisionTree.ulam:349: 				if(gene as Gene){
                  const T Uh_3tut41588 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41589 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41588); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg41589, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:349: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval41590 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41590, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41590.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:350: 					val1 = gene.value;
                      const u32 Uh_5tlreg41593 = UlamRef<EC>(Uv_4gene, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      Uv_4val1.write(Uh_5tlreg41593); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:353: 			if(my.tree1Type == 0){
          {

//! DecisionTree.ulam:353: 			if(my.tree1Type == 0){
            const u32 Uh_5tlreg41595 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41596 = _Int32ToInt32(Uh_5tlreg41595, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41599 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41600 = _Unsigned32ToInt32(Uh_5tlreg41599, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg41601 = _BinOpCompareEqEqInt32(Uh_5tlreg41600, Uh_5tlreg41596, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41601, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:354: 				val1 = my.eqTree1;
                const u32 Uh_5tlreg41604 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Uv_4val1.write(Uh_5tlreg41604); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:356: 			value = operate(val0, my.operator, val1);
          const u32 Uh_5tlreg41608 = Uv_4val0.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41609(Uh_5tlreg41608); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41612 = UlamRef<EC>(Uv_2my, 17u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10121u<EC> Uh_5tlval41613(Uh_5tlreg41612); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41615 = Uv_4val1.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41616(Uh_5tlreg41615); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval41618 = THE_INSTANCE.Uf_7operate(uc, ur, Uh_5tlval41609, Uh_5tlval41613, Uh_5tlval41616); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg41619 = Uh_5tlval41618.read(); //gcnl:Node.cpp:1156
          Uv_5value.write(Uh_5tlreg41619); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:358: 		return value;
    const u32 Uh_5tlreg41622 = Uv_5value.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41623(Uh_5tlreg41622); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41623); //gcnl:NodeReturnStatement.cpp:343

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

