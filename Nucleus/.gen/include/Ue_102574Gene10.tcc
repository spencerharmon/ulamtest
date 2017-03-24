/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_102128EggShell10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109211ClusterByID10.h"
#include "Uq_10104Cell10.h"
#include "Ue_102717Nucleus10.h"
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
#include "Un_10411209215SiteVisitorByID10.h"
#include "Uq_10109212DecisionTree10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Ue_102574Gene10<EC>::Ue_102574Gene10() : UlamElement<EC>(MFM_UUID_FOR("Ue102574Gene10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("G");  // figure this out later
    Element<EC>::SetName("Gene"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102574Gene10<EC>::~Ue_102574Gene10(){} //gcnl:NodeBlockClass.cpp:1743


//! Gene.ulam:167: 	Void behave(){
  template<class EC>
  void Ue_102574Gene10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Gene.ulam:169: 		killCopies();
    THE_INSTANCE.Uf_9210killCopies(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:171: 		nucleusCheck();
    THE_INSTANCE.Uf_9212nucleusCheck(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:172: 		if(!cl.bringGenesCloser(id,self)){
    {

//! Gene.ulam:172: 		if(!cl.bringGenesCloser(id,self)){
      UlamRef<EC> Uh_3tur41919(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg41921 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      Ui_Ut_102101u<EC> Uh_5tlval41922(Uh_5tlreg41921); //func arg& //gcnl:Node.cpp:1128
      const T Uh_3tut41924 = UlamRef<EC>(ur, 0u, 57u, &Ue_102574Gene10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
      Ui_Ut_102961a<EC> Uh_5tuval41925(Uh_3tut41924); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval41927 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9216bringGenesCloser(uc, Uh_3tur41919, Uh_5tlval41922, Uh_5tuval41925); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg41928 = Uh_5tlval41927.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg41929 = _LogicalBangBool32(Uh_5tlreg41928, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg41929, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:173: 			cl.run();
          UlamRef<EC> Uh_3tur41931(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_3run(uc, Uh_3tur41931); //gcnl:NodeFunctionCall.cpp:1006
        }
      } // end if
    }

//! Gene.ulam:177: 		if(canSeeNucleus){
    {

//! Gene.ulam:177: 		if(canSeeNucleus){
      const u32 Uh_5tlreg41934 = UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      if(_Bool32ToCbool(Uh_5tlreg41934, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:178: 			eventsAlone = 0;
          const u32 Uh_5tlreg41935 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41936 = _Int32ToUnsigned32(Uh_5tlreg41935, 2, 3); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41936); //gcnl:Node.cpp:885
        }
      } // end if
      else
      {
        {

//! Gene.ulam:181: 			++eventsAlone;
          const u32 Uh_5tlreg41938 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41939 = _Int32ToUnsigned32(Uh_5tlreg41938, 32, 3); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg41941 = UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          const u32 Uh_5tlreg41942 = _BinOpAddUnsigned32(Uh_5tlreg41941, Uh_5tlreg41939, 3); //gcnl:NodeBinaryOpEqualArith.cpp:128
          UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41942); //gcnl:Node.cpp:885
        }
      } //end else
    }

//! Gene.ulam:183: 		if(eventsAlone == 7){
    {

//! Gene.ulam:183: 		if(eventsAlone == 7){
      const u32 Uh_5tlreg41943 = 7; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41945 = UlamRef<EC>(ur, 53u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg41946 = _Unsigned32ToInt32(Uh_5tlreg41945, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41947 = _BinOpCompareEqEqInt32(Uh_5tlreg41946, Uh_5tlreg41943, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41947, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:184: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:185: 			ew[0] = e;
          const T Uh_3tut41949 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur41951(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41952 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41953 = _Int32ToUnsigned32(Uh_5tlreg41952, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41954(Uh_5tlreg41953); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41956 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41951, Uh_5tlval41954); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval41956.WriteAtom(Uh_3tut41949); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! Gene.ulam:188: 		value = dt.selfEvaluate(seqno,id,comIn);
    UlamRef<EC> Uh_3tur41958(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41960 = UlamRef<EC>(ur, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval41961(Uh_5tlreg41960); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41963 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41964(Uh_5tlreg41963); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41966 = UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_10161u<EC> Uh_5tlval41967(Uh_5tlreg41966); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41969 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_9212selfEvaluate(uc, Uh_3tur41958, Uh_5tlval41961, Uh_5tlval41964, Uh_5tlval41967); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41970 = Uh_5tlval41969.read(); //gcnl:Node.cpp:1156
    UlamRef<EC>(ur, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41970); //gcnl:Node.cpp:885

//! Gene.ulam:190: 		listen();
    THE_INSTANCE.Uf_6listen(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:193: 		speak();
    THE_INSTANCE.Uf_5speak(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_6behave



//! Gene.ulam:43: 	Void listen(){
  template<class EC>
  void Ue_102574Gene10<EC>::Uf_6listen(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:44: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:45:                 WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:47: 		sv.reset();
    UlamRef<EC> Uh_3tur41977(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5reset(uc, Uh_3tur41977); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:48:                 ws.resetCategories();
    UlamRef<EC> Uh_3tur41980(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur41980); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:49:                 Category cGene = ws.allocateCategory();
    UlamRef<EC> Uh_3tur41983(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval41985 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur41983); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41986 = Uh_5tlval41985.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_5cGene(Uh_5tlreg41986); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:50:                 Gene aGene;
    Ui_Ue_102574Gene10<EC> Uv_5aGene; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:51:                 ElementType tGene = au.getValidType(aGene);
    UlamRef<EC> Uh_3tur41988(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut41990 = Uv_5aGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41991(Uh_3tut41990); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval41993 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur41988, Uh_5tuval41991); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41994 = Uh_5tlval41993.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_5tGene(Uh_5tlreg41994); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:53:                 sv.setType(cGene,tGene);
    UlamRef<EC> Uh_3tur41996(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41998 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41999(Uh_5tlreg41998); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42001 = Uv_5tGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval42002(Uh_5tlreg42001); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur41996, Uh_5tlval41999, Uh_5tlval42002); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:54:                 sv.setID(cGene,id);
    UlamRef<EC> Uh_3tur42005(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42007 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval42008(Uh_5tlreg42007); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42010 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval42011(Uh_5tlreg42010); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur42005, Uh_5tlval42008, Uh_5tlval42011); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:55: 		sv.neighborCell(cGene);
    UlamRef<EC> Uh_3tur42014(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42016 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval42017(Uh_5tlreg42016); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_9212neighborCell(uc, Uh_3tur42014, Uh_5tlval42017); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:56:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur42020(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval42021; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval42021); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval42023(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref42024(Uh_5tlval42023); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur42020, Uh_6tlref42024); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:58: 		SiteNum slot = ws.getSiteNum(cGene);
    UlamRef<EC> Uh_3tur42027(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42029 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval42030(Uh_5tlreg42029); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval42032 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur42027, Uh_5tlval42030); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42033 = Uh_5tlval42032.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg42033); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:60: 		if(slot != (SiteNum)0 && slot <= 40){
    {

//! Gene.ulam:60: 		if(slot != (SiteNum)0 && slot <= 40){
      u32 Uh_5tlreg42034 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg42035 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42036 = _Int32ToUnsigned32(Uh_5tlreg42035, 2, 6); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42038 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42039 = _BinOpCompareNotEqUnsigned32(Uh_5tlreg42038, Uh_5tlreg42036, 6); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42039, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42040 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42042 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42043 = _Unsigned32ToInt32(Uh_5tlreg42042, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42044 = _BinOpCompareLessEqualInt32(Uh_5tlreg42043, Uh_5tlreg42040, 7); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42034 = Uh_5tlreg42044; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42034, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:61: 			Atom cell = ew[slot];
          UlamRef<EC> Uh_3tur42046(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42048 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval42049(Uh_5tlreg42048); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval42051 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42046, Uh_5tlval42049); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4cell(Uh_5tuval42051.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:62: 			if(cell as Gene){
          {

//! Gene.ulam:62: 			if(cell as Gene){
            const T Uh_3tut42053 = Uv_4cell.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42054 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42053); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42054, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:62: 			if(cell as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval42055 = Uv_4cell; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102574Gene10<EC> Uv_4cell(Uh_5tuval42055, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42055.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:63: 				comIn = cell.comOut;
                const u32 Uh_5tlreg42058 = UlamRef<EC>(Uv_4cell, 47u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42058); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
      else
      {
        {

//! Gene.ulam:67: 			comIn = 0;
          const u32 Uh_5tlreg42060 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42061 = _Int32ToUnsigned32(Uh_5tlreg42060, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 41u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42061); //gcnl:Node.cpp:885
        }
      } //end else
    }

  } // Uf_6listen



//! Gene.ulam:70: 	Void speak(){
  template<class EC>
  void Ue_102574Gene10<EC>::Uf_5speak(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:71:                 SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:72:                 WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:74: 		sv.reset();
    UlamRef<EC> Uh_3tur42064(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5reset(uc, Uh_3tur42064); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:75:                 ws.resetCategories();
    UlamRef<EC> Uh_3tur42067(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur42067); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:76:                 Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur42070(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval42072 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur42070); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42073 = Uh_5tlval42072.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg42073); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:77:                 Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:78:                 ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur42075(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut42077 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval42078(Uh_3tut42077); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval42080 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur42075, Uh_5tuval42078); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42081 = Uh_5tlval42080.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg42081); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:80:                 sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur42083(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42085 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval42086(Uh_5tlreg42085); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42088 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval42089(Uh_5tlreg42088); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur42083, Uh_5tlval42086, Uh_5tlval42089); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:81:                 sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur42092(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42094 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval42095(Uh_5tlreg42094); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42097 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval42098(Uh_5tlreg42097); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur42092, Uh_5tlval42095, Uh_5tlval42098); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:83:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur42101(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval42102; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval42102); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval42104(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref42105(Uh_5tlval42104); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur42101, Uh_6tlref42105); //gcnl:NodeFunctionCall.cpp:1006

//! Gene.ulam:85: 		SiteNum slot = ws.getSiteNum(cNucleus);
    UlamRef<EC> Uh_3tur42108(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42110 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval42111(Uh_5tlreg42110); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval42113 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur42108, Uh_5tlval42111); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42114 = Uh_5tlval42113.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg42114); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:86: 		if(slot <= 40){
    {

//! Gene.ulam:86: 		if(slot <= 40){
      const u32 Uh_5tlreg42115 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42117 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42118 = _Unsigned32ToInt32(Uh_5tlreg42117, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42119 = _BinOpCompareLessEqualInt32(Uh_5tlreg42118, Uh_5tlreg42115, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42119, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:87: 			Atom nucleus = ew[slot];
          UlamRef<EC> Uh_3tur42121(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42123 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval42124(Uh_5tlreg42123); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval42126 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42121, Uh_5tlval42124); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_7nucleus(Uh_5tuval42126.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:88: 			if(nucleus as Nucleus){
          {

//! Gene.ulam:88: 			if(nucleus as Nucleus){
            const T Uh_3tut42128 = Uv_7nucleus.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42129 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42128); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42129, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:88: 			if(nucleus as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval42130 = Uv_7nucleus; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_7nucleus(Uh_5tuval42130, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42130.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:89: 				comOut = nucleus.comOut;
                const u32 Uh_5tlreg42133 = UlamRef<EC>(Uv_7nucleus, 55u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 47u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42133); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_5speak



//! Gene.ulam:93: 	Void nucleusCheck(){
  template<class EC>
  void Ue_102574Gene10<EC>::Uf_9212nucleusCheck(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:109: 		canSeeNucleus = false;
    const u32 Uh_5tlreg42135 = 0u; //gcnl:NodeTerminal.cpp:721
    UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42135); //gcnl:Node.cpp:885

//! Gene.ulam:110: 		for(SiteNum slot = 0; slot <=40; ++slot){
    {

//! Gene.ulam:110: 		for(SiteNum slot = 0; slot <=40; ++slot){
      const u32 Uh_5tlreg42137 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42138 = _Int32ToUnsigned32(Uh_5tlreg42137, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg42138); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:110: 		for(SiteNum slot = 0; slot <=40; ++slot){
      while(true)
      {
        const u32 Uh_5tlreg42139 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42141 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42142 = _Unsigned32ToInt32(Uh_5tlreg42141, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42143 = _BinOpCompareLessEqualInt32(Uh_5tlreg42142, Uh_5tlreg42139, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42143, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Gene.ulam:110: 		for(SiteNum slot = 0; slot <=40; ++slot){
        {

//! Gene.ulam:111: 			Atom nucleus = ew[slot];
          UlamRef<EC> Uh_3tur42145(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42147 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval42148(Uh_5tlreg42147); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval42150 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42145, Uh_5tlval42148); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_7nucleus(Uh_5tuval42150.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:113: 			if(nucleus as Nucleus){
          {

//! Gene.ulam:113: 			if(nucleus as Nucleus){
            const T Uh_3tut42152 = Uv_7nucleus.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42153 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42152); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42153, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:113: 			if(nucleus as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval42154 = Uv_7nucleus; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_7nucleus(Uh_5tuval42154, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42154.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:114: 				if(nucleus.id == id){
                {

//! Gene.ulam:114: 				if(nucleus.id == id){
                  const u32 Uh_5tlreg42156 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg42159 = UlamRef<EC>(Uv_7nucleus, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg42160 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42159, Uh_5tlreg42156, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg42160, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Gene.ulam:116: 					canSeeNucleus = true;
                      const u32 Uh_5tlreg42161 = 1u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42161); //gcnl:Node.cpp:885

//! Gene.ulam:117: 					if(nucleus.reproducing){
                      {

//! Gene.ulam:117: 					if(nucleus.reproducing){
                        const u32 Uh_5tlreg42165 = UlamRef<EC>(Uv_7nucleus, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        if(_Bool32ToCbool(Uh_5tlreg42165, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Gene.ulam:118: 						ID childID = nucleus.childID;
                            const u32 Uh_5tlreg42168 = UlamRef<EC>(Uv_7nucleus, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uv_7childID(Uh_5tlreg42168); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:119: 						reproduced = true;
                            const u32 Uh_5tlreg42169 = 1u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 56u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42169); //gcnl:Node.cpp:885

//! Gene.ulam:120: 						copy(childID);
                            const u32 Uh_5tlreg42173 = Uv_7childID.read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uh_5tlval42174(Uh_5tlreg42173); //func arg& //gcnl:Node.cpp:1128
                            THE_INSTANCE.Uf_4copy(uc, ur, Uh_5tlval42174); //gcnl:NodeFunctionCall.cpp:1006
                          }
                        } // end if
                        else
                        {
                          {

//! Gene.ulam:123: 						reproduced = false;
                            const u32 Uh_5tlreg42176 = 0u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 56u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42176); //gcnl:Node.cpp:885
                          }
                        } //end else
                      }

//! Gene.ulam:125: 					return;
                      return; //gcnl:NodeReturnStatement.cpp:348
                    }
                  } // end if
                  else
                  {
                    {

//! Gene.ulam:128: 					canSeeNucleus = false;
                      const u32 Uh_5tlreg42178 = 0u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42178); //gcnl:Node.cpp:885
                    }
                  } //end else
                }
              }
            } // end if
            else
            {

//! Gene.ulam:131: 			else canSeeNucleus = false;
                const u32 Uh_5tlreg42180 = 0u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42180); //gcnl:Node.cpp:885
            } //end else
          }
        }

//! Gene.ulam:110: 		for(SiteNum slot = 0; slot <=40; ++slot){
Ul_214endcontrolloop211:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Gene.ulam:110: 		for(SiteNum slot = 0; slot <=40; ++slot){
        const u32 Uh_5tlreg42182 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42183 = _Int32ToUnsigned32(Uh_5tlreg42182, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42185 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42186 = _BinOpAddUnsigned32(Uh_5tlreg42185, Uh_5tlreg42183, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_4slot.write(Uh_5tlreg42186); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9212nucleusCheck



//! Gene.ulam:134: 	Void copy(ID childID){
  template<class EC>
  void Ue_102574Gene10<EC>::Uf_4copy(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_7childID) const
  {

//! Gene.ulam:137: 		SiteNum emptySlot = cl.emptySlotNearMe();
    UlamRef<EC> Uh_3tur42188(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10161u<EC> Uh_5tlval42190 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur42188); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42191 = Uh_5tlval42190.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_919emptySlot(Uh_5tlreg42191); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:138: 		Bool dontCopy = false;
    const u32 Uh_5tlreg42192 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_8dontCopy(Uh_5tlreg42192); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:139: 		Atom gene = self;
    const T Uh_3tut42194 = UlamRef<EC>(ur, 0u, 57u, &Ue_102574Gene10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
    Ui_Ut_102961a<EC> Uv_4gene(Uh_3tut42194); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:140: 		Atom base = su.getBase();
    UlamRef<EC> Uh_3tur42196(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval42198 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur42196); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_4base(Uh_5tuval42198.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:142: 		if(base as Nucleus){
    {

//! Gene.ulam:142: 		if(base as Nucleus){
      const T Uh_3tut42200 = Uv_4base.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42201 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42200); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg42201, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:142: 		if(base as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval42202 = Uv_4base; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4base(Uh_5tuval42202, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42202.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:143: 			if(base.id == childID){
          {

//! Gene.ulam:143: 			if(base.id == childID){
            const u32 Uh_5tlreg42204 = Uv_7childID.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42207 = UlamRef<EC>(Uv_4base, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42208 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42207, Uh_5tlreg42204, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg42208, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:144: 				dontCopy = true;
                const u32 Uh_5tlreg42209 = 1u; //gcnl:NodeTerminal.cpp:721
                Uv_8dontCopy.write(Uh_5tlreg42209); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! Gene.ulam:147: 		if(gene as Gene){
    {

//! Gene.ulam:147: 		if(gene as Gene){
      const T Uh_3tut42212 = Uv_4gene.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42213 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42212); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg42213, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Gene.ulam:147: 		if(gene as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval42214 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_4gene(Uh_5tuval42214, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42214.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:148: 			if(!dontCopy){
          {

//! Gene.ulam:148: 			if(!dontCopy){
            const u32 Uh_5tlreg42216 = Uv_8dontCopy.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42217 = _LogicalBangBool32(Uh_5tlreg42216, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg42217, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:149: 				gene.id = childID;
                const u32 Uh_5tlreg42219 = Uv_7childID.read(); //gcnl:Node.cpp:691
                UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42219); //gcnl:Node.cpp:885

//! Gene.ulam:150: 				su.setBase(gene);
                UlamRef<EC> Uh_3tur42223(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const T Uh_3tut42225 = Uv_4gene.read(); //gcnl:Node.cpp:691
                Ui_Ut_102961a<EC> Uh_5tuval42226(Uh_3tut42225); //func arg& //gcnl:Node.cpp:1128
                Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7setBase(uc, Uh_3tur42223, Uh_5tuval42226); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_4copy



//! Gene.ulam:154: 	Void killCopies(){
  template<class EC>
  void Ue_102574Gene10<EC>::Uf_9210killCopies(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Gene.ulam:155: 		for(SiteNum slot = 1; slot <=40; ++slot){
    {

//! Gene.ulam:155: 		for(SiteNum slot = 1; slot <=40; ++slot){
      const u32 Uh_5tlreg42228 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42229 = _Int32ToUnsigned32(Uh_5tlreg42228, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg42229); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:155: 		for(SiteNum slot = 1; slot <=40; ++slot){
      while(true)
      {
        const u32 Uh_5tlreg42230 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42232 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42233 = _Unsigned32ToInt32(Uh_5tlreg42232, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42234 = _BinOpCompareLessEqualInt32(Uh_5tlreg42233, Uh_5tlreg42230, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42234, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Gene.ulam:155: 		for(SiteNum slot = 1; slot <=40; ++slot){
        {

//! Gene.ulam:156: 			Atom gene = ew[slot];
          UlamRef<EC> Uh_3tur42236(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42238 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval42239(Uh_5tlreg42238); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval42241 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42236, Uh_5tlval42239); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval42241.read()); //gcnl:NodeVarDecl.cpp:1060

//! Gene.ulam:158: 			if(gene as Gene){
          {

//! Gene.ulam:158: 			if(gene as Gene){
            const T Uh_3tut42243 = Uv_4gene.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42244 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42243); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42244, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Gene.ulam:158: 			if(gene as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval42245 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102574Gene10<EC> Uv_4gene(Uh_5tuval42245, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42245.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Gene.ulam:159: 				if(gene.id == id && gene.seqno == seqno){
                {

//! Gene.ulam:159: 				if(gene.id == id && gene.seqno == seqno){
                  u32 Uh_5tlreg42246 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg42248 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg42251 = UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg42252 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42251, Uh_5tlreg42248, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg42252, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg42254 = UlamRef<EC>(ur, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg42257 = UlamRef<EC>(Uv_4gene, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg42258 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42257, Uh_5tlreg42254, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg42246 = Uh_5tlreg42258; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg42246, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Gene.ulam:160: 					Empty e;
                      Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Gene.ulam:161: 					ew[slot] = e;
                      const T Uh_3tut42260 = Uv_1e.read(); //gcnl:Node.cpp:691
                      UlamRef<EC> Uh_3tur42262(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg42264 = Uv_4slot.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval42265(Uh_5tlreg42264); //func arg& //gcnl:Node.cpp:1128
                      Ui_Ut_r102961a<EC> Uh_5tuval42267 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42262, Uh_5tlval42265); //gcnl:NodeFunctionCall.cpp:1006
                      Uh_5tuval42267.WriteAtom(Uh_3tut42260); //write into atomof ref //gcnl:Node.cpp:980
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! Gene.ulam:155: 		for(SiteNum slot = 1; slot <=40; ++slot){
Ul_214endcontrolloop212:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Gene.ulam:155: 		for(SiteNum slot = 1; slot <=40; ++slot){
        const u32 Uh_5tlreg42268 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42269 = _Int32ToUnsigned32(Uh_5tlreg42268, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42271 = Uv_4slot.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42272 = _BinOpAddUnsigned32(Uh_5tlreg42271, Uh_5tlreg42269, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_4slot.write(Uh_5tlreg42272); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210killCopies


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102574Gene10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
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
      case 18: { static UlamClassDataMemberInfo i("Ut_10111b", "reproduced", 56u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102574Gene10<EC>::GetDataMemberCount() const
  {
    return 19; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102574Gene10<EC>::GetMangledClassName() const
  {
    return "Ue_102574Gene10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102574Gene10<EC>::GetClassLength( ) const
  {
    return 57; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102574Gene10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102574Gene10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102574Gene10<EC>::BuildDefaultAtom( ) const
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
  VfuncPtr Ue_102574Gene10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102574Gene10<EC>::Uf_6behave10) &Ue_102574Gene10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Ue_102574Gene10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Ue_102574Gene10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102574Gene10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102574Gene10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2404
  } //isMethod

  template<class EC>
  const u32 Ue_102574Gene10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2442
  } //ReadTypeField

  template<class EC>
  void Ue_102574Gene10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2464
  } //WriteTypeField

} //MFM

