/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10106Primer10.h"
#include "Uq_10106Random10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10104Cell10.h"
#include "Uq_10109212DecisionTree10.h"
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
  Ue_102564Gene10<EC>::Ue_102564Gene10() : UlamElement<EC>(MFM_UUID_FOR("Ue102564Gene10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("G");  // figure this out later
    Element<EC>::SetName("Gene"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102564Gene10<EC>::~Ue_102564Gene10(){} //gcnl:NodeBlockClass.cpp:1743


//! Gene.ulam:172: 	Void behave(){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Gene.ulam:173: 		nucleusCheck();
    THE_INSTANCE.Uf_9212nucleusCheck(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:175: 		killCopies();
    THE_INSTANCE.Uf_9210killCopies(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:176: 		if(!cl.bringGenesCloser(id,self)){
    {

//! Gene.ulam:176: 		if(!cl.bringGenesCloser(id,self)){
      UlamRef<EC> Uh_3tur41627(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg41629 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      Ui_Ut_102101u<EC> Uh_5tlval41630(Uh_5tlreg41629); //func arg& //gcnl:Node.cpp:1128
      const T Uh_3tut41632 = UlamRef<EC>(ur, 0u, 56u, &Ue_102564Gene10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
      Ui_Ut_102961a<EC> Uh_5tuval41633(Uh_3tut41632); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval41635 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9216bringGenesCloser(uc, Uh_3tur41627, Uh_5tlval41630, Uh_5tuval41633); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg41636 = Uh_5tlval41635.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg41637 = _LogicalBangBool32(Uh_5tlreg41636, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg41637, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:177: 			cl.run();
          UlamRef<EC> Uh_3tur41639(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_3run(uc, Uh_3tur41639); //gcnl:NodeFunctionCall.cpp:1006
        }
      } // end if
    }

//! Gene.ulam:181: 		if(canSeeNucleus){
    {

//! Gene.ulam:181: 		if(canSeeNucleus){
      const u32 Uh_5tlreg41642 = UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      if(_Bool32ToCbool(Uh_5tlreg41642, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:182: 			eventsAlone = 0;
          const u32 Uh_5tlreg41643 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41644 = _Int32ToUnsigned32(Uh_5tlreg41643, 2, 3); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41644); //gcnl:Node.cpp:885
        }
      } // end if
      else
      {
        {

//! Gene.ulam:185: 			++eventsAlone;
          const u32 Uh_5tlreg41646 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41647 = _Int32ToUnsigned32(Uh_5tlreg41646, 32, 3); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41649 = UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          const u32 Uh_5tlreg41650 = _BinOpAddUnsigned32(Uh_5tlreg41649, Uh_5tlreg41647, 3); //gcnl:NodeBinaryOpEqualArith.cpp:128
          UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41650); //gcnl:Node.cpp:885
        }
      } //end else
    }

//! Gene.ulam:187: 		if(eventsAlone == 7){
    {

//! Gene.ulam:187: 		if(eventsAlone == 7){
      const u32 Uh_5tlreg41651 = 7; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41653 = UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg41654 = _Unsigned32ToInt32(Uh_5tlreg41653, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41655 = _BinOpCompareEqEqInt32(Uh_5tlreg41654, Uh_5tlreg41651, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41655, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:188: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:189: 			ew[0] = e;
          const T Uh_3tut41657 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur41659(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41660 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41661 = _Int32ToUnsigned32(Uh_5tlreg41660, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41662(Uh_5tlreg41661); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41664 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41659, Uh_5tlval41662); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval41664.WriteAtom(Uh_3tut41657); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! Gene.ulam:192: 		value = dt.selfEvaluate(seqno,id,comIn);
    UlamRef<EC> Uh_3tur41666(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41668 = UlamRef<EC>(ur, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval41669(Uh_5tlreg41668); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41671 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41672(Uh_5tlreg41671); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41674 = UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval41675(Uh_5tlreg41674); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41677 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_9212selfEvaluate(uc, Uh_3tur41666, Uh_5tlval41669, Uh_5tlval41672, Uh_5tlval41675); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41678 = Uh_5tlval41677.read(); //gcnl:Node.cpp:1156
    UlamRef<EC>(ur, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41678); //gcnl:Node.cpp:885

//! Gene.ulam:194: 		listen();
    THE_INSTANCE.Uf_6listen(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:197: 		speak();
    THE_INSTANCE.Uf_5speak(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:198: 		nucleusCheck();
    THE_INSTANCE.Uf_9212nucleusCheck(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_6behave



//! Gene.ulam:41: 	Void listen(){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_6listen(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:42: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:43:                 WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:45: 		sv.reset();
    UlamRef<EC> Uh_3tur41687(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5reset(uc, Uh_3tur41687); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:46:                 ws.resetCategories();
    UlamRef<EC> Uh_3tur41690(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur41690); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:47:                 Category cGene = ws.allocateCategory();
    UlamRef<EC> Uh_3tur41693(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval41695 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur41693); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41696 = Uh_5tlval41695.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_5cGene(Uh_5tlreg41696); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:48:                 Gene aGene;
    Ui_Ue_102564Gene10<EC> Uv_5aGene; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:49:                 ElementType tGene = au.getValidType(aGene);
    UlamRef<EC> Uh_3tur41698(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut41700 = Uv_5aGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41701(Uh_3tut41700); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval41703 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur41698, Uh_5tuval41701); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41704 = Uh_5tlval41703.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_5tGene(Uh_5tlreg41704); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:51:                 sv.setType(cGene,tGene);
    UlamRef<EC> Uh_3tur41706(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41708 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41709(Uh_5tlreg41708); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41711 = Uv_5tGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval41712(Uh_5tlreg41711); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur41706, Uh_5tlval41709, Uh_5tlval41712); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:52:                 sv.setID(cGene,id);
    UlamRef<EC> Uh_3tur41715(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41717 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41718(Uh_5tlreg41717); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41720 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41721(Uh_5tlreg41720); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur41715, Uh_5tlval41718, Uh_5tlval41721); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:53: 		sv.neighborCell(cGene);
    UlamRef<EC> Uh_3tur41724(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41726 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41727(Uh_5tlreg41726); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_9212neighborCell(uc, Uh_3tur41724, Uh_5tlval41727); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:54:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur41730(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval41731; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval41731); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41733(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41734(Uh_5tlval41733); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41730, Uh_6tlref41734); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:56: 		SiteNum slot = ws.getSiteNum(cGene);
    UlamRef<EC> Uh_3tur41737(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41739 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41740(Uh_5tlreg41739); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41742 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41737, Uh_5tlval41740); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41743 = Uh_5tlval41742.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41743); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:58: 		if(slot != (SiteNum)0 && slot <= 40){
    {

//! Gene.ulam:58: 		if(slot != (SiteNum)0 && slot <= 40){
      u32 Uh_5tlreg41744 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg41745 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41746 = _Int32ToUnsigned32(Uh_5tlreg41745, 2, 6); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41748 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41749 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg41748, Uh_5tlreg41746, 6); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41749, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg41750 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41752 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41753 = _Unsigned32ToInt32(Uh_5tlreg41752, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41754 = _BinOpCompareLessEqualInt32(Uh_5tlreg41753, Uh_5tlreg41750, 7); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg41744 = Uh_5tlreg41754; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg41744, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:59: 			Atom cell = ew[slot];
          UlamRef<EC> Uh_3tur41756(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41758 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41759(Uh_5tlreg41758); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41761 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41756, Uh_5tlval41759); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4cell(Uh_5tuval41761.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:60: 			if(cell as Gene){
          {

//! Gene.ulam:60: 			if(cell as Gene){
            const T Uh_3tut41763 = Uv_4cell.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41764 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41763); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41764, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:60: 			if(cell as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41765 = Uv_4cell; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_4cell(Uh_5tuval41765, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41765.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:61: 				comIn = cell.comOut;
                const u32 Uh_5tlreg41768 = UlamRef<EC>(Uv_4cell, 47u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41768); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
      else
      {
        {

//! Gene.ulam:65: 			comIn = 0;
          const u32 Uh_5tlreg41770 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41771 = _Int32ToUnsigned32(Uh_5tlreg41770, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41771); //gcnl:Node.cpp:885
        }
      } //end else
    }

  } // Uf_6listen



//! Gene.ulam:68: 	Void speak(){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_5speak(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:69:                 SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:70:                 WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:72: 		sv.reset();
    UlamRef<EC> Uh_3tur41774(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5reset(uc, Uh_3tur41774); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:73:                 ws.resetCategories();
    UlamRef<EC> Uh_3tur41777(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur41777); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:74:                 Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur41780(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval41782 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur41780); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41783 = Uh_5tlval41782.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg41783); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:75:                 Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:76:                 ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur41785(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut41787 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41788(Uh_3tut41787); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval41790 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur41785, Uh_5tuval41788); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41791 = Uh_5tlval41790.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg41791); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:78:                 sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur41793(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41795 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41796(Uh_5tlreg41795); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41798 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval41799(Uh_5tlreg41798); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur41793, Uh_5tlval41796, Uh_5tlval41799); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:79:                 sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur41802(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41804 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41805(Uh_5tlreg41804); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41807 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41808(Uh_5tlreg41807); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur41802, Uh_5tlval41805, Uh_5tlval41808); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:81:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur41811(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval41812; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval41812); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41814(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41815(Uh_5tlval41814); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41811, Uh_6tlref41815); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:83: 		SiteNum slot = ws.getSiteNum(cNucleus);
    UlamRef<EC> Uh_3tur41818(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41820 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41821(Uh_5tlreg41820); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41823 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41818, Uh_5tlval41821); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41824 = Uh_5tlval41823.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41824); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:84: 		if(slot <= 40){
    {

//! Gene.ulam:84: 		if(slot <= 40){
      const u32 Uh_5tlreg41825 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41827 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41828 = _Unsigned32ToInt32(Uh_5tlreg41827, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41829 = _BinOpCompareLessEqualInt32(Uh_5tlreg41828, Uh_5tlreg41825, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41829, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:85: 			Atom nucleus = ew[slot];
          UlamRef<EC> Uh_3tur41831(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41833 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41834(Uh_5tlreg41833); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41836 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41831, Uh_5tlval41834); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_7nucleus(Uh_5tuval41836.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:86: 			if(nucleus as Nucleus){
          {

//! Gene.ulam:86: 			if(nucleus as Nucleus){
            const T Uh_3tut41838 = Uv_7nucleus.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41839 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41838); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41839, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:86: 			if(nucleus as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval41840 = Uv_7nucleus; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_7nucleus(Uh_5tuval41840, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41840.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:87: 				comOut = nucleus.comOut;
                const u32 Uh_5tlreg41843 = UlamRef<EC>(Uv_7nucleus, 55u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 47u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41843); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_5speak



//! Gene.ulam:91: 	Void nucleusCheck(){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_9212nucleusCheck(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:108: 		canSeeNucleus = false;
    const u32 Uh_5tlreg41845 = 0u; //gcnl:NodeTerminal.cpp:721
    UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41845); //gcnl:Node.cpp:885

//! Gene.ulam:109: 		for(SiteNum slot = 0; slot <=40; ++slot){
    {

//! Gene.ulam:109: 		for(SiteNum slot = 0; slot <=40; ++slot){
      const u32 Uh_5tlreg41847 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41848 = _Int32ToUnsigned32(Uh_5tlreg41847, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41848); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:109: 		for(SiteNum slot = 0; slot <=40; ++slot){
      while(true)
      {
        const u32 Uh_5tlreg41849 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41851 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41852 = _Unsigned32ToInt32(Uh_5tlreg41851, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41853 = _BinOpCompareLessEqualInt32(Uh_5tlreg41852, Uh_5tlreg41849, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41853, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Gene.ulam:109: 		for(SiteNum slot = 0; slot <=40; ++slot){
        {

//! Gene.ulam:110: 			Atom nucleus = ew[slot];
          UlamRef<EC> Uh_3tur41855(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41857 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41858(Uh_5tlreg41857); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41860 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41855, Uh_5tlval41858); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_7nucleus(Uh_5tuval41860.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:112: 			if(nucleus as Nucleus){
          {

//! Gene.ulam:112: 			if(nucleus as Nucleus){
            const T Uh_3tut41862 = Uv_7nucleus.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41863 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41862); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41863, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:112: 			if(nucleus as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval41864 = Uv_7nucleus; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_7nucleus(Uh_5tuval41864, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41864.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:113: 				if(nucleus.id == id){
                {

//! Gene.ulam:113: 				if(nucleus.id == id){
                  const u32 Uh_5tlreg41866 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg41869 = UlamRef<EC>(Uv_7nucleus, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41870 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41869, Uh_5tlreg41866, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41870, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Gene.ulam:122: 					if(nucleus.reproducing){
                      {

//! Gene.ulam:122: 					if(nucleus.reproducing){
                        const u32 Uh_5tlreg41873 = UlamRef<EC>(Uv_7nucleus, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        if(_Bool32ToCbool(Uh_5tlreg41873, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Gene.ulam:123: 						ID childID = nucleus.childID;
                            const u32 Uh_5tlreg41876 = UlamRef<EC>(Uv_7nucleus, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uv_7childID(Uh_5tlreg41876); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:124: 						copy(childID);
                            const u32 Uh_5tlreg41879 = Uv_7childID.read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uh_5tlval41880(Uh_5tlreg41879); //func arg& //gcnl:Node.cpp:1128
                            THE_INSTANCE.Uf_4copy(uc, ur, Uh_5tlval41880); //gcnl:NodeFunctionCall.cpp:1006
                          }
                        } // end if
                      }

//! Gene.ulam:127: 					canSeeNucleus = true;
                      const u32 Uh_5tlreg41882 = 1u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41882); //gcnl:Node.cpp:885

//! Gene.ulam:128: 					return;
                      return; //gcnl:NodeReturnStatement.cpp:348
                    }
                  } // end if
                  else
                  {
                    {

//! Gene.ulam:131: 					canSeeNucleus = false;
                      const u32 Uh_5tlreg41884 = 0u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41884); //gcnl:Node.cpp:885
                    }
                  } //end else
                }
              }
            } // end if
            else
            {

//! Gene.ulam:134: 			else canSeeNucleus = false;
                const u32 Uh_5tlreg41886 = 0u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41886); //gcnl:Node.cpp:885
            } //end else
          }
        }

//! Gene.ulam:109: 		for(SiteNum slot = 0; slot <=40; ++slot){
Ul_214endcontrolloop15:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Gene.ulam:109: 		for(SiteNum slot = 0; slot <=40; ++slot){
        const u32 Uh_5tlreg41888 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41889 = _Int32ToUnsigned32(Uh_5tlreg41888, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41891 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41892 = _BinOpAddUnsigned32(Uh_5tlreg41891, Uh_5tlreg41889, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_4slot.write(Uh_5tlreg41892); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9212nucleusCheck



//! Gene.ulam:137: 	Void copy(ID childID){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_4copy(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_7childID) const
  {

//! Gene.ulam:140: 		SiteNum emptySlot = cl.emptySlotNearMe();
    UlamRef<EC> Uh_3tur41894(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10161u<EC> Uh_5tlval41896 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur41894); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41897 = Uh_5tlval41896.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_919emptySlot(Uh_5tlreg41897); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:141: 		Bool dontCopy = false;
    const u32 Uh_5tlreg41898 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_8dontCopy(Uh_5tlreg41898); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:142: 		Atom gene = self;
    const T Uh_3tut41900 = UlamRef<EC>(ur, 0u, 56u, &Ue_102564Gene10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
    Ui_Ut_102961a<EC> Uv_4gene(Uh_3tut41900); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:143: 		Atom base = su.getBase();
    UlamRef<EC> Uh_3tur41902(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval41904 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur41902); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_4base(Uh_5tuval41904.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:145: 		if(base as Nucleus){
    {

//! Gene.ulam:145: 		if(base as Nucleus){
      const T Uh_3tut41906 = Uv_4base.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41907 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41906); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41907, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:145: 		if(base as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval41908 = Uv_4base; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4base(Uh_5tuval41908, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41908.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:146: 			if(base.id == childID){
          {

//! Gene.ulam:146: 			if(base.id == childID){
            const u32 Uh_5tlreg41910 = Uv_7childID.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41913 = UlamRef<EC>(Uv_4base, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41914 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41913, Uh_5tlreg41910, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41914, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:147: 				dontCopy = true;
                const u32 Uh_5tlreg41915 = 1u; //gcnl:NodeTerminal.cpp:721
                Uv_8dontCopy.write(Uh_5tlreg41915); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! Gene.ulam:150: 		if(gene as Gene){
    {

//! Gene.ulam:150: 		if(gene as Gene){
      const T Uh_3tut41918 = Uv_4gene.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41919 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41918); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41919, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:150: 		if(gene as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval41920 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41920, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41920.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:151: 			if(!dontCopy){
          {

//! Gene.ulam:151: 			if(!dontCopy){
            const u32 Uh_5tlreg41922 = Uv_8dontCopy.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41923 = _LogicalBangBool32(Uh_5tlreg41922, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg41923, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:152: 				gene.id = childID;
                const u32 Uh_5tlreg41925 = Uv_7childID.read(); //gcnl:Node.cpp:691
                UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41925); //gcnl:Node.cpp:885

//! Gene.ulam:153: 				su.setBase(gene);
                UlamRef<EC> Uh_3tur41929(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const T Uh_3tut41931 = Uv_4gene.read(); //gcnl:Node.cpp:691
                Ui_Ut_102961a<EC> Uh_5tuval41932(Uh_3tut41931); //func arg& //gcnl:Node.cpp:1128
                Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7setBase(uc, Uh_3tur41929, Uh_5tuval41932); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_4copy



//! Gene.ulam:157: 	Void killCopies(){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_9210killCopies(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:158: 		for(SiteNum slot = 1; slot <=40; ++slot){
    {

//! Gene.ulam:158: 		for(SiteNum slot = 1; slot <=40; ++slot){
      const u32 Uh_5tlreg41934 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41935 = _Int32ToUnsigned32(Uh_5tlreg41934, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41935); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:158: 		for(SiteNum slot = 1; slot <=40; ++slot){
      while(true)
      {
        const u32 Uh_5tlreg41936 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41938 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41939 = _Unsigned32ToInt32(Uh_5tlreg41938, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41940 = _BinOpCompareLessEqualInt32(Uh_5tlreg41939, Uh_5tlreg41936, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41940, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Gene.ulam:158: 		for(SiteNum slot = 1; slot <=40; ++slot){
        {

//! Gene.ulam:159: 			Atom gene = ew[slot];
          UlamRef<EC> Uh_3tur41942(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41944 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41945(Uh_5tlreg41944); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41947 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41942, Uh_5tlval41945); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval41947.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:161: 			if(gene as Gene){
          {

//! Gene.ulam:161: 			if(gene as Gene){
            const T Uh_3tut41949 = Uv_4gene.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41950 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41949); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41950, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:161: 			if(gene as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41951 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41951, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41951.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:162: 				if(gene.id == id && gene.seqno == seqno){
                {

//! Gene.ulam:162: 				if(gene.id == id && gene.seqno == seqno){
                  u32 Uh_5tlreg41952 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg41954 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg41957 = UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41958 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41957, Uh_5tlreg41954, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41958, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg41960 = UlamRef<EC>(ur, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg41963 = UlamRef<EC>(Uv_4gene, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg41964 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41963, Uh_5tlreg41960, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg41952 = Uh_5tlreg41964; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg41952, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Gene.ulam:163: 					Empty e;
                      Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:164: 					ew[slot] = e;
                      const T Uh_3tut41966 = Uv_1e.read(); //gcnl:Node.cpp:691
                      UlamRef<EC> Uh_3tur41968(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg41970 = Uv_4slot.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval41971(Uh_5tlreg41970); //func arg& //gcnl:Node.cpp:1128
                      Ui_Ut_r102961a<EC> Uh_5tuval41973 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41968, Uh_5tlval41971); //gcnl:NodeFunctionCall.cpp:1006
                      Uh_5tuval41973.WriteAtom(Uh_3tut41966); //write into atomof ref //gcnl:Node.cpp:980
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! Gene.ulam:158: 		for(SiteNum slot = 1; slot <=40; ++slot){
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Gene.ulam:158: 		for(SiteNum slot = 1; slot <=40; ++slot){
        const u32 Uh_5tlreg41974 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41975 = _Int32ToUnsigned32(Uh_5tlreg41974, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41977 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41978 = _BinOpAddUnsigned32(Uh_5tlreg41977, Uh_5tlreg41975, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_4slot.write(Uh_5tlreg41978); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210killCopies


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102564Gene10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_10109211ClusterByID10", "cl", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 3: { static UlamClassDataMemberInfo i("Uq_10104Cell10", "cell", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 4: { static UlamClassDataMemberInfo i("Uq_10109212DecisionTree10", "dt", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 5: { static UlamClassDataMemberInfo i("Uq_1010919SiteUtils10", "su", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 6: { static UlamClassDataMemberInfo i("Ut_102101u", "id", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 7: { static UlamClassDataMemberInfo i("Ut_10161u", "seqno", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 8: { static UlamClassDataMemberInfo i("Ut_10111b", "canSeeNucleus", 16u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 9: { static UlamClassDataMemberInfo i("Ut_10121u", "operator", 17u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 10: { static UlamClassDataMemberInfo i("Ut_10121u", "tree0Type", 19u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 11: { static UlamClassDataMemberInfo i("Ut_10161u", "eqTree0", 21u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 12: { static UlamClassDataMemberInfo i("Ut_10121u", "tree1Type", 27u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 13: { static UlamClassDataMemberInfo i("Ut_10161u", "eqTree1", 29u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 14: { static UlamClassDataMemberInfo i("Ut_10161u", "value", 35u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 15: { static UlamClassDataMemberInfo i("Ut_10161u", "comIn", 41u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 16: { static UlamClassDataMemberInfo i("Ut_10161u", "comOut", 47u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 17: { static UlamClassDataMemberInfo i("Ut_10131u", "eventsAlone", 53u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102564Gene10<EC>::GetDataMemberCount() const
  {
    return 18; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102564Gene10<EC>::GetMangledClassName() const
  {
    return "Ue_102564Gene10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102564Gene10<EC>::GetClassLength( ) const
  {
    return 56; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102564Gene10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102564Gene10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102564Gene10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x0, 0x400000, 0x0 }; //gcnl:CompilerState.cpp:1351
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1357
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1373
      //correct runtime regnum for strings
    } //gcnl:CompilerState.cpp:1395
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102564Gene10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102564Gene10<EC>::Uf_6behave10) &Ue_102564Gene10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Ue_102564Gene10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Ue_102564Gene10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102564Gene10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102564Gene10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2404
  } //isMethod

  template<class EC>
  const u32 Ue_102564Gene10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2442
  } //ReadTypeField

  template<class EC>
  void Ue_102564Gene10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2464
  } //WriteTypeField

} //MFM

