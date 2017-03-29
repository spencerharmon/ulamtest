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
#include "Ue_102188EggShell10.h"
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


//! Gene.ulam:170: 	Void behave(){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Gene.ulam:171: 		nucleusCheck();
    THE_INSTANCE.Uf_9212nucleusCheck(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:173: 		killCopies();
    THE_INSTANCE.Uf_9210killCopies(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:174: 		cl.bringGenesCloser(id,self);
    UlamRef<EC> Uh_3tur41629(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41631 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41632(Uh_5tlreg41631); //func arg& //gcnl:Node.cpp:1128
    const T Uh_3tut41634 = UlamRef<EC>(ur, 0u, 56u, &Ue_102564Gene10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
    Ui_Ut_102961a<EC> Uh_5tuval41635(Uh_3tut41634); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval41637 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9216bringGenesCloser(uc, Uh_3tur41629, Uh_5tlval41632, Uh_5tuval41635); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41638 = Uh_5tlval41637.read(); //gcnl:Node.cpp:1156

//! Gene.ulam:180: 		if(canSeeNucleus){
    {

//! Gene.ulam:180: 		if(canSeeNucleus){
      const u32 Uh_5tlreg41640 = UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      if(_Bool32ToCbool(Uh_5tlreg41640, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:181: 			eventsAlone = 0;
          const u32 Uh_5tlreg41641 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41642 = _Int32ToUnsigned32(Uh_5tlreg41641, 2, 3); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41642); //gcnl:Node.cpp:885
        }
      } // end if
      else
      {
        {

//! Gene.ulam:184: 			++eventsAlone;
          const u32 Uh_5tlreg41644 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41645 = _Int32ToUnsigned32(Uh_5tlreg41644, 32, 3); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41647 = UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          const u32 Uh_5tlreg41648 = _BinOpAddUnsigned32(Uh_5tlreg41647, Uh_5tlreg41645, 3); //gcnl:NodeBinaryOpEqualArith.cpp:128
          UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41648); //gcnl:Node.cpp:885
        }
      } //end else
    }

//! Gene.ulam:186: 		if(eventsAlone == 7){
    {

//! Gene.ulam:186: 		if(eventsAlone == 7){
      const u32 Uh_5tlreg41649 = 7; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41651 = UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg41652 = _Unsigned32ToInt32(Uh_5tlreg41651, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41653 = _BinOpCompareEqEqInt32(Uh_5tlreg41652, Uh_5tlreg41649, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41653, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:187: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:188: 			ew[0] = e;
          const T Uh_3tut41655 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur41657(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41658 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41659 = _Int32ToUnsigned32(Uh_5tlreg41658, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41660(Uh_5tlreg41659); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41662 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41657, Uh_5tlval41660); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval41662.WriteAtom(Uh_3tut41655); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! Gene.ulam:191: 		value = dt.selfEvaluate(seqno,id,comIn);
    UlamRef<EC> Uh_3tur41664(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41666 = UlamRef<EC>(ur, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval41667(Uh_5tlreg41666); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41669 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41670(Uh_5tlreg41669); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41672 = UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval41673(Uh_5tlreg41672); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41675 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_9212selfEvaluate(uc, Uh_3tur41664, Uh_5tlval41667, Uh_5tlval41670, Uh_5tlval41673); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41676 = Uh_5tlval41675.read(); //gcnl:Node.cpp:1156
    UlamRef<EC>(ur, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41676); //gcnl:Node.cpp:885

//! Gene.ulam:193: 		listen();
    THE_INSTANCE.Uf_6listen(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:196: 		speak();
    THE_INSTANCE.Uf_5speak(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:197: 		nucleusCheck();
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
    UlamRef<EC> Uh_3tur41685(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5reset(uc, Uh_3tur41685); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:46:                 ws.resetCategories();
    UlamRef<EC> Uh_3tur41688(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur41688); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:47:                 Category cGene = ws.allocateCategory();
    UlamRef<EC> Uh_3tur41691(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval41693 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur41691); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41694 = Uh_5tlval41693.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_5cGene(Uh_5tlreg41694); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:48:                 Gene aGene;
    Ui_Ue_102564Gene10<EC> Uv_5aGene; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:49:                 ElementType tGene = au.getValidType(aGene);
    UlamRef<EC> Uh_3tur41696(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut41698 = Uv_5aGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41699(Uh_3tut41698); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval41701 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur41696, Uh_5tuval41699); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41702 = Uh_5tlval41701.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_5tGene(Uh_5tlreg41702); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:51:                 sv.setType(cGene,tGene);
    UlamRef<EC> Uh_3tur41704(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41706 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41707(Uh_5tlreg41706); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41709 = Uv_5tGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval41710(Uh_5tlreg41709); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur41704, Uh_5tlval41707, Uh_5tlval41710); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:52:                 sv.setID(cGene,id);
    UlamRef<EC> Uh_3tur41713(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41715 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41716(Uh_5tlreg41715); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41718 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41719(Uh_5tlreg41718); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur41713, Uh_5tlval41716, Uh_5tlval41719); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:53: 		sv.neighborCell(cGene);
    UlamRef<EC> Uh_3tur41722(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41724 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41725(Uh_5tlreg41724); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_9212neighborCell(uc, Uh_3tur41722, Uh_5tlval41725); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:54:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur41728(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval41729; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval41729); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41731(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41732(Uh_5tlval41731); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41728, Uh_6tlref41732); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:56: 		SiteNum slot = ws.getSiteNum(cGene);
    UlamRef<EC> Uh_3tur41735(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41737 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41738(Uh_5tlreg41737); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41740 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41735, Uh_5tlval41738); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41741 = Uh_5tlval41740.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41741); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:58: 		if(slot != (SiteNum)0 && slot <= 40){
    {

//! Gene.ulam:58: 		if(slot != (SiteNum)0 && slot <= 40){
      u32 Uh_5tlreg41742 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg41743 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41744 = _Int32ToUnsigned32(Uh_5tlreg41743, 2, 6); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41746 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41747 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg41746, Uh_5tlreg41744, 6); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41747, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg41748 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41750 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41751 = _Unsigned32ToInt32(Uh_5tlreg41750, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41752 = _BinOpCompareLessEqualInt32(Uh_5tlreg41751, Uh_5tlreg41748, 7); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg41742 = Uh_5tlreg41752; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg41742, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:59: 			Atom cell = ew[slot];
          UlamRef<EC> Uh_3tur41754(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41756 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41757(Uh_5tlreg41756); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41759 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41754, Uh_5tlval41757); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4cell(Uh_5tuval41759.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:60: 			if(cell as Gene){
          {

//! Gene.ulam:60: 			if(cell as Gene){
            const T Uh_3tut41761 = Uv_4cell.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41762 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41761); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41762, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:60: 			if(cell as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41763 = Uv_4cell; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_4cell(Uh_5tuval41763, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41763.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:61: 				comIn = cell.comOut;
                const u32 Uh_5tlreg41766 = UlamRef<EC>(Uv_4cell, 47u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41766); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
      else
      {
        {

//! Gene.ulam:65: 			comIn = 0;
          const u32 Uh_5tlreg41768 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41769 = _Int32ToUnsigned32(Uh_5tlreg41768, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41769); //gcnl:Node.cpp:885
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
    UlamRef<EC> Uh_3tur41772(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5reset(uc, Uh_3tur41772); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:73:                 ws.resetCategories();
    UlamRef<EC> Uh_3tur41775(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur41775); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:74:                 Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur41778(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval41780 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur41778); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41781 = Uh_5tlval41780.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg41781); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:75:                 Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:76:                 ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur41783(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut41785 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41786(Uh_3tut41785); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval41788 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur41783, Uh_5tuval41786); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41789 = Uh_5tlval41788.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg41789); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:78:                 sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur41791(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41793 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41794(Uh_5tlreg41793); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41796 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval41797(Uh_5tlreg41796); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur41791, Uh_5tlval41794, Uh_5tlval41797); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:79:                 sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur41800(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41802 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41803(Uh_5tlreg41802); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41805 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41806(Uh_5tlreg41805); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur41800, Uh_5tlval41803, Uh_5tlval41806); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:81:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur41809(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval41810; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval41810); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41812(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41813(Uh_5tlval41812); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41809, Uh_6tlref41813); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:83: 		SiteNum slot = ws.getSiteNum(cNucleus);
    UlamRef<EC> Uh_3tur41816(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41818 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41819(Uh_5tlreg41818); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41821 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41816, Uh_5tlval41819); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41822 = Uh_5tlval41821.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41822); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:84: 		if(slot <= 40){
    {

//! Gene.ulam:84: 		if(slot <= 40){
      const u32 Uh_5tlreg41823 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41825 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41826 = _Unsigned32ToInt32(Uh_5tlreg41825, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41827 = _BinOpCompareLessEqualInt32(Uh_5tlreg41826, Uh_5tlreg41823, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41827, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:85: 			Atom nucleus = ew[slot];
          UlamRef<EC> Uh_3tur41829(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41831 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41832(Uh_5tlreg41831); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41834 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41829, Uh_5tlval41832); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_7nucleus(Uh_5tuval41834.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:86: 			if(nucleus as Nucleus){
          {

//! Gene.ulam:86: 			if(nucleus as Nucleus){
            const T Uh_3tut41836 = Uv_7nucleus.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41837 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41836); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41837, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:86: 			if(nucleus as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval41838 = Uv_7nucleus; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_7nucleus(Uh_5tuval41838, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41838.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:87: 				comOut = nucleus.comOut;
                const u32 Uh_5tlreg41841 = UlamRef<EC>(Uv_7nucleus, 55u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 47u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41841); //gcnl:Node.cpp:885
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

//! Gene.ulam:107: 		for(SiteNum slot = 0; slot <=40; ++slot){
    {

//! Gene.ulam:107: 		for(SiteNum slot = 0; slot <=40; ++slot){
      const u32 Uh_5tlreg41843 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41844 = _Int32ToUnsigned32(Uh_5tlreg41843, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41844); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:107: 		for(SiteNum slot = 0; slot <=40; ++slot){
      while(true)
      {
        const u32 Uh_5tlreg41845 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41847 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41848 = _Unsigned32ToInt32(Uh_5tlreg41847, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41849 = _BinOpCompareLessEqualInt32(Uh_5tlreg41848, Uh_5tlreg41845, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41849, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Gene.ulam:107: 		for(SiteNum slot = 0; slot <=40; ++slot){
        {

//! Gene.ulam:108: 			Atom nucleus = ew[slot];
          UlamRef<EC> Uh_3tur41851(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41853 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41854(Uh_5tlreg41853); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41856 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41851, Uh_5tlval41854); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_7nucleus(Uh_5tuval41856.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:110: 			if(nucleus as Nucleus){
          {

//! Gene.ulam:110: 			if(nucleus as Nucleus){
            const T Uh_3tut41858 = Uv_7nucleus.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41859 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41858); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41859, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:110: 			if(nucleus as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval41860 = Uv_7nucleus; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_7nucleus(Uh_5tuval41860, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41860.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:111: 				if(nucleus.id == id){
                {

//! Gene.ulam:111: 				if(nucleus.id == id){
                  const u32 Uh_5tlreg41862 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg41865 = UlamRef<EC>(Uv_7nucleus, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41866 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41865, Uh_5tlreg41862, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41866, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Gene.ulam:120: 					if(nucleus.reproducing){
                      {

//! Gene.ulam:120: 					if(nucleus.reproducing){
                        const u32 Uh_5tlreg41869 = UlamRef<EC>(Uv_7nucleus, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        if(_Bool32ToCbool(Uh_5tlreg41869, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Gene.ulam:121: 						ID childID = nucleus.childID;
                            const u32 Uh_5tlreg41872 = UlamRef<EC>(Uv_7nucleus, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uv_7childID(Uh_5tlreg41872); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:122: 						copy(childID);
                            const u32 Uh_5tlreg41875 = Uv_7childID.read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uh_5tlval41876(Uh_5tlreg41875); //func arg& //gcnl:Node.cpp:1128
                            THE_INSTANCE.Uf_4copy(uc, ur, Uh_5tlval41876); //gcnl:NodeFunctionCall.cpp:1006
                          }
                        } // end if
                      }

//! Gene.ulam:125: 					canSeeNucleus = true;
                      const u32 Uh_5tlreg41878 = 1u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41878); //gcnl:Node.cpp:885

//! Gene.ulam:126: 					return;
                      return; //gcnl:NodeReturnStatement.cpp:348
                    }
                  } // end if
                  else
                  {
                    {

//! Gene.ulam:129: 					canSeeNucleus = false;
                      const u32 Uh_5tlreg41880 = 0u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41880); //gcnl:Node.cpp:885
                    }
                  } //end else
                }
              }
            } // end if
            else
            {

//! Gene.ulam:132: 			else canSeeNucleus = false;
                const u32 Uh_5tlreg41882 = 0u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41882); //gcnl:Node.cpp:885
            } //end else
          }
        }

//! Gene.ulam:107: 		for(SiteNum slot = 0; slot <=40; ++slot){
Ul_214endcontrolloop15:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Gene.ulam:107: 		for(SiteNum slot = 0; slot <=40; ++slot){
        const u32 Uh_5tlreg41884 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41885 = _Int32ToUnsigned32(Uh_5tlreg41884, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41887 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41888 = _BinOpAddUnsigned32(Uh_5tlreg41887, Uh_5tlreg41885, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_4slot.write(Uh_5tlreg41888); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9212nucleusCheck



//! Gene.ulam:135: 	Void copy(ID childID){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_4copy(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_7childID) const
  {

//! Gene.ulam:138: 		SiteNum emptySlot = cl.emptySlotNearMe();
    UlamRef<EC> Uh_3tur41890(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10161u<EC> Uh_5tlval41892 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur41890); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41893 = Uh_5tlval41892.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_919emptySlot(Uh_5tlreg41893); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:139: 		Bool dontCopy = false;
    const u32 Uh_5tlreg41894 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_8dontCopy(Uh_5tlreg41894); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:140: 		Atom gene = self;
    const T Uh_3tut41896 = UlamRef<EC>(ur, 0u, 56u, &Ue_102564Gene10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
    Ui_Ut_102961a<EC> Uv_4gene(Uh_3tut41896); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:141: 		Atom base = su.getBase();
    UlamRef<EC> Uh_3tur41898(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval41900 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur41898); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_4base(Uh_5tuval41900.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:143: 		if(base as Nucleus){
    {

//! Gene.ulam:143: 		if(base as Nucleus){
      const T Uh_3tut41902 = Uv_4base.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41903 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41902); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41903, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:143: 		if(base as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval41904 = Uv_4base; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4base(Uh_5tuval41904, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41904.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:144: 			if(base.id == childID){
          {

//! Gene.ulam:144: 			if(base.id == childID){
            const u32 Uh_5tlreg41906 = Uv_7childID.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41909 = UlamRef<EC>(Uv_4base, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41910 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41909, Uh_5tlreg41906, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41910, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:145: 				dontCopy = true;
                const u32 Uh_5tlreg41911 = 1u; //gcnl:NodeTerminal.cpp:721
                Uv_8dontCopy.write(Uh_5tlreg41911); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! Gene.ulam:148: 		if(gene as Gene){
    {

//! Gene.ulam:148: 		if(gene as Gene){
      const T Uh_3tut41914 = Uv_4gene.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41915 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41914); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41915, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:148: 		if(gene as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval41916 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41916, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41916.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:149: 			if(!dontCopy){
          {

//! Gene.ulam:149: 			if(!dontCopy){
            const u32 Uh_5tlreg41918 = Uv_8dontCopy.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41919 = _LogicalBangBool32(Uh_5tlreg41918, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg41919, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:150: 				gene.id = childID;
                const u32 Uh_5tlreg41921 = Uv_7childID.read(); //gcnl:Node.cpp:691
                UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41921); //gcnl:Node.cpp:885

//! Gene.ulam:151: 				su.setBase(gene);
                UlamRef<EC> Uh_3tur41925(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const T Uh_3tut41927 = Uv_4gene.read(); //gcnl:Node.cpp:691
                Ui_Ut_102961a<EC> Uh_5tuval41928(Uh_3tut41927); //func arg& //gcnl:Node.cpp:1128
                Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7setBase(uc, Uh_3tur41925, Uh_5tuval41928); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_4copy



//! Gene.ulam:155: 	Void killCopies(){
  template<class EC>
  void Ue_102564Gene10<EC>::Uf_9210killCopies(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:156: 		for(SiteNum slot = 1; slot <=40; ++slot){
    {

//! Gene.ulam:156: 		for(SiteNum slot = 1; slot <=40; ++slot){
      const u32 Uh_5tlreg41930 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41931 = _Int32ToUnsigned32(Uh_5tlreg41930, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41931); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:156: 		for(SiteNum slot = 1; slot <=40; ++slot){
      while(true)
      {
        const u32 Uh_5tlreg41932 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41934 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41935 = _Unsigned32ToInt32(Uh_5tlreg41934, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41936 = _BinOpCompareLessEqualInt32(Uh_5tlreg41935, Uh_5tlreg41932, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41936, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Gene.ulam:156: 		for(SiteNum slot = 1; slot <=40; ++slot){
        {

//! Gene.ulam:157: 			Atom gene = ew[slot];
          UlamRef<EC> Uh_3tur41938(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41940 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41941(Uh_5tlreg41940); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41943 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41938, Uh_5tlval41941); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval41943.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:159: 			if(gene as Gene){
          {

//! Gene.ulam:159: 			if(gene as Gene){
            const T Uh_3tut41945 = Uv_4gene.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41946 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41945); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41946, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:159: 			if(gene as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41947 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_4gene(Uh_5tuval41947, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41947.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:160: 				if(gene.id == id && gene.seqno == seqno){
                {

//! Gene.ulam:160: 				if(gene.id == id && gene.seqno == seqno){
                  u32 Uh_5tlreg41948 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg41950 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg41953 = UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41954 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41953, Uh_5tlreg41950, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41954, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg41956 = UlamRef<EC>(ur, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg41959 = UlamRef<EC>(Uv_4gene, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg41960 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41959, Uh_5tlreg41956, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg41948 = Uh_5tlreg41960; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg41948, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Gene.ulam:161: 					Empty e;
                      Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:162: 					ew[slot] = e;
                      const T Uh_3tut41962 = Uv_1e.read(); //gcnl:Node.cpp:691
                      UlamRef<EC> Uh_3tur41964(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg41966 = Uv_4slot.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval41967(Uh_5tlreg41966); //func arg& //gcnl:Node.cpp:1128
                      Ui_Ut_r102961a<EC> Uh_5tuval41969 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41964, Uh_5tlval41967); //gcnl:NodeFunctionCall.cpp:1006
                      Uh_5tuval41969.WriteAtom(Uh_3tut41962); //write into atomof ref //gcnl:Node.cpp:980
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! Gene.ulam:156: 		for(SiteNum slot = 1; slot <=40; ++slot){
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Gene.ulam:156: 		for(SiteNum slot = 1; slot <=40; ++slot){
        const u32 Uh_5tlreg41970 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41971 = _Int32ToUnsigned32(Uh_5tlreg41970, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41973 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41974 = _BinOpAddUnsigned32(Uh_5tlreg41973, Uh_5tlreg41971, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_4slot.write(Uh_5tlreg41974); //gcnl:Node.cpp:885
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

