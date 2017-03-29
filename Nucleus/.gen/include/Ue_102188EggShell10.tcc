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
#include "Un_10411209215SiteVisitorByID10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Ue_102188EggShell10<EC>::Ue_102188EggShell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102188EggShell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("E");  // figure this out later
    Element<EC>::SetName("EggShell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102188EggShell10<EC>::~Ue_102188EggShell10(){} //gcnl:NodeBlockClass.cpp:1743


//! EggShell.ulam:84: 	Void behave(){
  template<class EC>
  void Ue_102188EggShell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! EggShell.ulam:85: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur44949(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval44951 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur44949); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44951.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:86: 		Bool onN = onNucleus(a);
    const T Uh_3tut44954 = Uv_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44955(Uh_3tut44954); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval44957 = THE_INSTANCE.Uf_919onNucleus(uc, ur, Uh_5tuval44955); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44958 = Uh_5tlval44957.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uv_3onN(Uh_5tlreg44958); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:87: 		Bool onG = onGene(a);
    const T Uh_3tut44961 = Uv_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44962(Uh_3tut44961); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval44964 = THE_INSTANCE.Uf_6onGene(uc, ur, Uh_5tuval44962); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44965 = Uh_5tlval44964.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uv_3onG(Uh_5tlreg44965); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:88: 		if(onN){
    {

//! EggShell.ulam:88: 		if(onN){
      const u32 Uh_5tlreg44967 = Uv_3onN.read(); //gcnl:Node.cpp:691
      if(_Bool32ToCbool(Uh_5tlreg44967, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:89: 			onCell = true;
          const u32 Uh_5tlreg44968 = 1u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg44968); //gcnl:Node.cpp:885

//! EggShell.ulam:90: 			createNeighbor();
          THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:91: 			if(wait >= wait.maxof-1){
          {

//! EggShell.ulam:91: 			if(wait >= wait.maxof-1){
            const u32 Uh_5tlreg44972 = 6; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44974 = UlamRef<EC>(ur, 15u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44975 = _Unsigned32ToInt32(Uh_5tlreg44974, 3, 5); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44976 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg44975, Uh_5tlreg44972, 5); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44976, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:92: 				hatch();
                THE_INSTANCE.Uf_5hatch(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }

//! EggShell.ulam:94: 			++wait;
          const u32 Uh_5tlreg44979 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44980 = _Int32ToUnsigned32(Uh_5tlreg44979, 32, 3); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44982 = UlamRef<EC>(ur, 15u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          const u32 Uh_5tlreg44983 = _BinOpAddUnsigned32(Uh_5tlreg44982, Uh_5tlreg44980, 3); //gcnl:NodeBinaryOpEqualArith.cpp:128
          UlamRef<EC>(ur, 15u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg44983); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! EggShell.ulam:96: 		if(onG){
    {

//! EggShell.ulam:96: 		if(onG){
      const u32 Uh_5tlreg44985 = Uv_3onG.read(); //gcnl:Node.cpp:691
      if(_Bool32ToCbool(Uh_5tlreg44985, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:97: 			onCell = true;
          const u32 Uh_5tlreg44986 = 1u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg44986); //gcnl:Node.cpp:885

//! EggShell.ulam:98: 			createNeighbor();
          THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:99: 			if(wait >= 1){
          {

//! EggShell.ulam:99: 			if(wait >= 1){
            const u32 Uh_5tlreg44990 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44991 = _Int32ToInt32(Uh_5tlreg44990, 2, 4); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44993 = UlamRef<EC>(ur, 15u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44994 = _Unsigned32ToInt32(Uh_5tlreg44993, 3, 4); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44995 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg44994, Uh_5tlreg44991, 4); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44995, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:100: 				hatch();
                THE_INSTANCE.Uf_5hatch(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }

//! EggShell.ulam:102: 			++wait;
          const u32 Uh_5tlreg44998 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44999 = _Int32ToUnsigned32(Uh_5tlreg44998, 32, 3); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg45001 = UlamRef<EC>(ur, 15u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          const u32 Uh_5tlreg45002 = _BinOpAddUnsigned32(Uh_5tlreg45001, Uh_5tlreg44999, 3); //gcnl:NodeBinaryOpEqualArith.cpp:128
          UlamRef<EC>(ur, 15u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg45002); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! EggShell.ulam:104: 		clusterEgg();
    THE_INSTANCE.Uf_9210clusterEgg(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:105: 		if(!onN && !onG){
    {

//! EggShell.ulam:105: 		if(!onN && !onG){
      u32 Uh_5tlreg45005 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg45007 = Uv_3onN.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg45008 = _LogicalBangBool32(Uh_5tlreg45007, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg45008, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg45010 = Uv_3onG.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg45011 = _LogicalBangBool32(Uh_5tlreg45010, 1); //gcnl:NodeUnaryOp.cpp:449
        Uh_5tlreg45005 = Uh_5tlreg45011; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg45005, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:106: 			onCell = false;
          const u32 Uh_5tlreg45012 = 0u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg45012); //gcnl:Node.cpp:885

//! EggShell.ulam:107: 			if(first){
          {

//! EggShell.ulam:107: 			if(first){
            const u32 Uh_5tlreg45015 = UlamRef<EC>(ur, 14u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            if(_Bool32ToCbool(Uh_5tlreg45015, 1)) //gcnl:NodeControl.cpp:213
            {
              { /* empty */ } //gcnl:NodeBlockEmpty.cpp:64
            } // end if
          }

//! EggShell.ulam:110: 			++lost;
          const u32 Uh_5tlreg45016 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg45017 = _Int32ToUnsigned32(Uh_5tlreg45016, 32, 3); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg45019 = UlamRef<EC>(ur, 11u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          const u32 Uh_5tlreg45020 = _BinOpAddUnsigned32(Uh_5tlreg45019, Uh_5tlreg45017, 3); //gcnl:NodeBinaryOpEqualArith.cpp:128
          UlamRef<EC>(ur, 11u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg45020); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! EggShell.ulam:112: 		if(lost == lost.maxof){
    {

//! EggShell.ulam:112: 		if(lost == lost.maxof){
      const u32 Uh_5tlreg45021 = 7u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg45023 = UlamRef<EC>(ur, 11u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg45024 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg45023, Uh_5tlreg45021, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg45024, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:113: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:114: 			ew[0] = e;
          const T Uh_3tut45026 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur45028(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg45029 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg45030 = _Int32ToUnsigned32(Uh_5tlreg45029, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval45031(Uh_5tlreg45030); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval45033 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur45028, Uh_5tlval45031); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval45033.WriteAtom(Uh_3tut45026); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

  } // Uf_6behave



//! EggShell.ulam:27: 	Void createNeighbor(){
  template<class EC>
  void Ue_102188EggShell10<EC>::Uf_9214createNeighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:28: 		SiteNum slot = cl.emptySlotNearMe();
    UlamRef<EC> Uh_3tur45035(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10161u<EC> Uh_5tlval45037 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur45035); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg45038 = Uh_5tlval45037.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg45038); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:29: 		EggShell eg;
    Ui_Ue_102188EggShell10<EC> Uv_2eg; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:30: 		eg.id = id;
    const u32 Uh_5tlreg45040 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg45040); //gcnl:Node.cpp:885

//! EggShell.ulam:31: 		if(slot != 0){
    {

//! EggShell.ulam:31: 		if(slot != 0){
      const u32 Uh_5tlreg45043 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg45044 = _Int32ToInt32(Uh_5tlreg45043, 2, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg45046 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg45047 = _Unsigned32ToInt32(Uh_5tlreg45046, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg45048 = _BinOpCompareNotEqInt32(Uh_5tlreg45047, Uh_5tlreg45044, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg45048, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:32: 			ew[slot] = eg;
          const T Uh_3tut45050 = Uv_2eg.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur45052(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg45054 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval45055(Uh_5tlreg45054); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval45057 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur45052, Uh_5tlval45055); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval45057.WriteAtom(Uh_3tut45050); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

  } // Uf_9214createNeighbor



//! EggShell.ulam:35: 	Void hatch(){
  template<class EC>
  void Ue_102188EggShell10<EC>::Uf_5hatch(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:36: 		createNeighbor();
    THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:37: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur45061(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval45063 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur45061); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval45063.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:38: 		Empty e;
    Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:39: 		su.setBase(e);
    UlamRef<EC> Uh_3tur45065(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut45067 = Uv_1e.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval45068(Uh_3tut45067); //func arg& //gcnl:Node.cpp:1128
    Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7setBase(uc, Uh_3tur45065, Uh_5tuval45068); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:42: 			ew[0] = a;
    const T Uh_3tut45071 = Uv_1a.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur45073(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg45074 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg45075 = _Int32ToUnsigned32(Uh_5tlreg45074, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval45076(Uh_5tlreg45075); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval45078 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur45073, Uh_5tlval45076); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval45078.WriteAtom(Uh_3tut45071); //write into atomof ref //gcnl:Node.cpp:980

  } // Uf_5hatch



//! EggShell.ulam:45: 	Bool onNucleus(Atom a){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102188EggShell10<EC>::Uf_919onNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const
  {

//! EggShell.ulam:46: 		if(a as Nucleus){
    {

//! EggShell.ulam:46: 		if(a as Nucleus){
      const T Uh_3tut45080 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg45081 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut45080); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg45081, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:46: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval45082 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval45082, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval45082.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:47: 			if(a.id == id){
          {

//! EggShell.ulam:47: 			if(a.id == id){
            const u32 Uh_5tlreg45084 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg45087 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg45088 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg45087, Uh_5tlreg45084, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg45088, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:48: 				return true;
                const u32 Uh_5tlreg45089 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval45090(Uh_5tlreg45089); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval45090); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! EggShell.ulam:50: 				return false;
                const u32 Uh_5tlreg45091 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval45092(Uh_5tlreg45091); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval45092); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
      else
      {
        {

//! EggShell.ulam:53: 			return false;
          const u32 Uh_5tlreg45093 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval45094(Uh_5tlreg45093); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval45094); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_919onNucleus



//! EggShell.ulam:56: 	Bool onGene(Atom a){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102188EggShell10<EC>::Uf_6onGene(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const
  {

//! EggShell.ulam:57: 		if(a as Gene){
    {

//! EggShell.ulam:57: 		if(a as Gene){
      const T Uh_3tut45096 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg45097 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut45096); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg45097, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:57: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval45098 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval45098, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval45098.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:58: 			if(a.id == id){
          {

//! EggShell.ulam:58: 			if(a.id == id){
            const u32 Uh_5tlreg45100 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg45103 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg45104 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg45103, Uh_5tlreg45100, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg45104, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:59: 				return true;
                const u32 Uh_5tlreg45105 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval45106(Uh_5tlreg45105); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval45106); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! EggShell.ulam:61: 				return false;
                const u32 Uh_5tlreg45107 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval45108(Uh_5tlreg45107); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval45108); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
      else
      {
        {

//! EggShell.ulam:64: 			return false;
          const u32 Uh_5tlreg45109 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval45110(Uh_5tlreg45109); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval45110); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_6onGene



//! EggShell.ulam:67:         Void clusterEgg(){
  template<class EC>
  void Ue_102188EggShell10<EC>::Uf_9210clusterEgg(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:68:                 for(SiteNum i = 1; i <= 40;++i){
    {

//! EggShell.ulam:68:                 for(SiteNum i = 1; i <= 40;++i){
      const u32 Uh_5tlreg45111 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg45112 = _Int32ToUnsigned32(Uh_5tlreg45111, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg45112); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:68:                 for(SiteNum i = 1; i <= 40;++i){
      while(true)
      {
        const u32 Uh_5tlreg45113 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg45115 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg45116 = _Unsigned32ToInt32(Uh_5tlreg45115, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg45117 = _BinOpCompareLessEqualInt32(Uh_5tlreg45116, Uh_5tlreg45113, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg45117, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! EggShell.ulam:68:                 for(SiteNum i = 1; i <= 40;++i){
        {

//! EggShell.ulam:69:                         Atom a = ew[i];
          UlamRef<EC> Uh_3tur45119(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg45121 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval45122(Uh_5tlreg45121); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval45124 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur45119, Uh_5tlval45122); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval45124.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:70:                         if(a as EggShell){
          {

//! EggShell.ulam:70:                         if(a as EggShell){
            const T Uh_3tut45126 = Uv_1a.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg45127 = Ue_102188EggShell10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut45126); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg45127, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:70:                         if(a as EggShell){
                Ui_Ut_102961a<EC> & Uh_5tuval45128 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102188EggShell10<EC> Uv_1a(Uh_5tuval45128, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval45128.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:71:                                 if(a.id == id && onCell && !a.onCell){
                {

//! EggShell.ulam:71:                                 if(a.id == id && onCell && !a.onCell){
                  u32 Uh_5tlreg45129 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg45130 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg45132 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg45135 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg45136 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg45135, Uh_5tlreg45132, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg45136, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg45138 = UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                    Uh_5tlreg45130 = Uh_5tlreg45138; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg45130, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg45141 = UlamRef<EC>(Uv_1a, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg45142 = _LogicalBangBool32(Uh_5tlreg45141, 1); //gcnl:NodeUnaryOp.cpp:449
                    Uh_5tlreg45129 = Uh_5tlreg45142; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg45129, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! EggShell.ulam:72:                                         SiteNum e = cl.nonCellSlotNearMe(self,id,1);
                      UlamRef<EC> Uh_3tur45144(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const T Uh_3tut45146 = UlamRef<EC>(ur, 0u, 18u, &Ue_102188EggShell10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
                      Ui_Ut_102961a<EC> Uh_5tuval45147(Uh_3tut45146); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg45149 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                      Ui_Ut_102101u<EC> Uh_5tlval45150(Uh_5tlreg45149); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg45151 = 1; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg45152 = _Int32ToUnsigned32(Uh_5tlreg45151, 2, 2); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10121u<EC> Uh_5tlval45153(Uh_5tlreg45152); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval45155 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9217nonCellSlotNearMe(uc, Uh_3tur45144, Uh_5tuval45147, Uh_5tlval45150, Uh_5tlval45153); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg45156 = Uh_5tlval45155.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg45156); //gcnl:NodeVarDecl.cpp:1060
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! EggShell.ulam:68:                 for(SiteNum i = 1; i <= 40;++i){
Ul_214endcontrolloop221:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! EggShell.ulam:68:                 for(SiteNum i = 1; i <= 40;++i){
        const u32 Uh_5tlreg45157 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg45158 = _Int32ToUnsigned32(Uh_5tlreg45157, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg45160 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg45161 = _BinOpAddUnsigned32(Uh_5tlreg45160, Uh_5tlreg45158, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg45161); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210clusterEgg



//! EggShell.ulam:78: 	Void edgeBehavior(){
  template<class EC>
  void Ue_102188EggShell10<EC>::Uf_9212edgeBehavior(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:79: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:80: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

  } // Uf_9212edgeBehavior


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102188EggShell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_1010919SiteUtils10", "su", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_10109211ClusterByID10", "cl", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 3: { static UlamClassDataMemberInfo i("Ut_102101u", "id", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 4: { static UlamClassDataMemberInfo i("Ut_10111b", "onCell", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 5: { static UlamClassDataMemberInfo i("Ut_10131u", "lost", 11u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 6: { static UlamClassDataMemberInfo i("Ut_10111b", "first", 14u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 7: { static UlamClassDataMemberInfo i("Ut_10131u", "wait", 15u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102188EggShell10<EC>::GetDataMemberCount() const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102188EggShell10<EC>::GetMangledClassName() const
  {
    return "Ue_102188EggShell10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102188EggShell10<EC>::GetClassLength( ) const
  {
    return 18; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102188EggShell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102188EggShell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102188EggShell10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102188EggShell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102188EggShell10<EC>::Uf_6behave10) &Ue_102188EggShell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Ue_102188EggShell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Ue_102188EggShell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102188EggShell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102188EggShell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2404
  } //isMethod

  template<class EC>
  const u32 Ue_102188EggShell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2442
  } //ReadTypeField

  template<class EC>
  void Ue_102188EggShell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2464
  } //WriteTypeField

} //MFM

