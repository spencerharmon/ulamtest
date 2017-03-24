/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
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
#include "Un_10411209215SiteVisitorByID10.h"
#include "Uq_10109212DecisionTree10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Ue_102128EggShell10<EC>::Ue_102128EggShell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102128EggShell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("E");  // figure this out later
    Element<EC>::SetName("EggShell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102128EggShell10<EC>::~Ue_102128EggShell10(){} //gcnl:NodeBlockClass.cpp:1743


//! EggShell.ulam:102: 	Void behave(){
  template<class EC>
  void Ue_102128EggShell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! EggShell.ulam:112: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur222(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval224 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur222); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval224.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:113: 		if(a as Nucleus){
    {

//! EggShell.ulam:113: 		if(a as Nucleus){
      const T Uh_3tut226 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg227 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut226); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg227, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:113: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval228 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval228, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval228.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:114: 			if(a.id == id){
          {

//! EggShell.ulam:114: 			if(a.id == id){
            const u32 Uh_5tlreg230 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg233 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg234 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg233, Uh_5tlreg230, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg234, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:115: 				onCell = true;
                const u32 Uh_5tlreg235 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg235); //gcnl:Node.cpp:885

//! EggShell.ulam:116: 				createNeighbor();
                THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }
        }
      } // end if
    }

//! EggShell.ulam:119: 		if(a as Gene){
    {

//! EggShell.ulam:119: 		if(a as Gene){
      const T Uh_3tut240 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg241 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut240); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg241, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:119: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval242 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval242, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval242.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:120: 			hatch();
          THE_INSTANCE.Uf_5hatch(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:121: 			createNeighbor();
          THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:122: 			if(a.id == id){
          {

//! EggShell.ulam:122: 			if(a.id == id){
            const u32 Uh_5tlreg248 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg251 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg252 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg251, Uh_5tlreg248, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg252, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:123: 				onCell = true;
                const u32 Uh_5tlreg253 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg253); //gcnl:Node.cpp:885

//! EggShell.ulam:124: 				createNeighbor();
                THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }
        }
      } // end if
    }

//! EggShell.ulam:127: 		if(a as Empty){
    {

//! EggShell.ulam:127: 		if(a as Empty){
      const T Uh_3tut258 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg259 = Ue_10105Empty10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut258); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg259, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:127: 		if(a as Empty){
          Ui_Ut_102961a<EC> & Uh_5tuval260 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r10105Empty10<EC> Uv_1a(Uh_5tuval260, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval260.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:128: 			ew.swap(0,1);
          UlamRef<EC> Uh_3tur262(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg263 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg264 = _Int32ToUnsigned32(Uh_5tlreg263, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval265(Uh_5tlreg264); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg266 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg267 = _Int32ToUnsigned32(Uh_5tlreg266, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval268(Uh_5tlreg267); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10111b<EC> Uh_5tlval270 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur262, Uh_5tlval265, Uh_5tlval268); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg271 = Uh_5tlval270.read(); //gcnl:Node.cpp:1156
        }
      } // end if
    }

  } // Uf_6behave



//! EggShell.ulam:23: 	Void onChildCell(){
  template<class EC>
  void Ue_102128EggShell10<EC>::Uf_9211onChildCell(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:24: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur273(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval275 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur273); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval275.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:25: 		if(a as Nucleus){
    {

//! EggShell.ulam:25: 		if(a as Nucleus){
      const T Uh_3tut277 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg278 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut277); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg278, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:25: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval279 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval279, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval279.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:26: 			if(a.id == id){
          {

//! EggShell.ulam:26: 			if(a.id == id){
            const u32 Uh_5tlreg281 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg284 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg285 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg284, Uh_5tlreg281, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg285, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:28: 				onCell = true;
                const u32 Uh_5tlreg286 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg286); //gcnl:Node.cpp:885

//! EggShell.ulam:29: 				createNeighbor();
                THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }
        }
      } // end if
    }

//! EggShell.ulam:32: 		if(a as Gene){
    {

//! EggShell.ulam:32: 		if(a as Gene){
      const T Uh_3tut291 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg292 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut291); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg292, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:32: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval293 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval293, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval293.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:33: 			if(a.id == id){
          {

//! EggShell.ulam:33: 			if(a.id == id){
            const u32 Uh_5tlreg295 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg298 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg299 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg298, Uh_5tlreg295, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg299, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:35: 				onCell = true;
                const u32 Uh_5tlreg3100 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3100); //gcnl:Node.cpp:885

//! EggShell.ulam:36: 				createNeighbor();
                THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_9211onChildCell



//! EggShell.ulam:41: 	Void createNeighbor(){
  template<class EC>
  void Ue_102128EggShell10<EC>::Uf_9214createNeighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:42: 		SiteNum slot = cl.emptySlotNearMe();
    UlamRef<EC> Uh_3tur3105(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10161u<EC> Uh_5tlval3107 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur3105); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3108 = Uh_5tlval3107.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg3108); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:43: 		EggShell eg;
    Ui_Ue_102128EggShell10<EC> Uv_2eg; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:44: 		eg.id = id;
    const u32 Uh_5tlreg3110 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3110); //gcnl:Node.cpp:885

//! EggShell.ulam:45: 		if(!(slot == 0)){
    {

//! EggShell.ulam:45: 		if(!(slot == 0)){
      const u32 Uh_5tlreg3113 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3114 = _Int32ToInt32(Uh_5tlreg3113, 2, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3116 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3117 = _Unsigned32ToInt32(Uh_5tlreg3116, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3118 = _BinOpCompareEqEqInt32(Uh_5tlreg3117, Uh_5tlreg3114, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      const u32 Uh_5tlreg3119 = _LogicalBangBool32(Uh_5tlreg3118, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg3119, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:46: 			ew[slot] = eg;
          const T Uh_3tut3121 = Uv_2eg.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur3123(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3125 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3126(Uh_5tlreg3125); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval3128 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3123, Uh_5tlval3126); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval3128.WriteAtom(Uh_3tut3121); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

  } // Uf_9214createNeighbor



//! EggShell.ulam:49: 	Bool iHaveNeighbors(){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102128EggShell10<EC>::Uf_9214iHaveNeighbors(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:50: 		SiteNum neighborSite = cl.cellSlotNearMe(self, id, 1);
    UlamRef<EC> Uh_3tur3130(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut3132 = UlamRef<EC>(ur, 0u, 12u, &Ue_102128EggShell10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
    Ui_Ut_102961a<EC> Uh_5tuval3133(Uh_3tut3132); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3135 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval3136(Uh_5tlreg3135); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3137 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3138 = _Int32ToUnsigned32(Uh_5tlreg3137, 2, 2); //gcnl:NodeCast.cpp:723
    Ui_Ut_10121u<EC> Uh_5tlval3139(Uh_5tlreg3138); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3141 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9214cellSlotNearMe(uc, Uh_3tur3130, Uh_5tuval3133, Uh_5tlval3136, Uh_5tlval3139); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3142 = Uh_5tlval3141.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_9212neighborSite(Uh_5tlreg3142); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:51: 		Atom neighbor = ew[neighborSite];
    UlamRef<EC> Uh_3tur3144(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3146 = Uv_9212neighborSite.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3147(Uh_5tlreg3146); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3149 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3144, Uh_5tlval3147); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_8neighbor(Uh_5tuval3149.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:52: 		if(neighbor as EggShell){
    {

//! EggShell.ulam:52: 		if(neighbor as EggShell){
      const T Uh_3tut3151 = Uv_8neighbor.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3152 = Ue_102128EggShell10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut3151); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg3152, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:52: 		if(neighbor as EggShell){
          Ui_Ut_102961a<EC> & Uh_5tuval3153 = Uv_8neighbor; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102128EggShell10<EC> Uv_8neighbor(Uh_5tuval3153, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3153.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:53: 			if(neighbor.id == id){
          {

//! EggShell.ulam:53: 			if(neighbor.id == id){
            const u32 Uh_5tlreg3155 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg3158 = UlamRef<EC>(Uv_8neighbor, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3159 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3158, Uh_5tlreg3155, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3159, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:54: 				return true;
                const u32 Uh_5tlreg3160 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval3161(Uh_5tlreg3160); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval3161); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }
        }
      } // end if
    }

//! EggShell.ulam:57: 		return false;
    const u32 Uh_5tlreg3162 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval3163(Uh_5tlreg3162); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3163); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9214iHaveNeighbors



//! EggShell.ulam:59: 	Atom getNeighbor(){
  template<class EC>
  Ui_Ut_102961a<EC> Ue_102128EggShell10<EC>::Uf_9211getNeighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:60: 		SiteNum neighborSite = cl.cellSlotNearMe(self, id, 1);
    UlamRef<EC> Uh_3tur3165(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut3167 = UlamRef<EC>(ur, 0u, 12u, &Ue_102128EggShell10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
    Ui_Ut_102961a<EC> Uh_5tuval3168(Uh_3tut3167); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3170 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval3171(Uh_5tlreg3170); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3172 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3173 = _Int32ToUnsigned32(Uh_5tlreg3172, 2, 2); //gcnl:NodeCast.cpp:723
    Ui_Ut_10121u<EC> Uh_5tlval3174(Uh_5tlreg3173); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3176 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9214cellSlotNearMe(uc, Uh_3tur3165, Uh_5tuval3168, Uh_5tlval3171, Uh_5tlval3174); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3177 = Uh_5tlval3176.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_9212neighborSite(Uh_5tlreg3177); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:61: 		Atom neighbor = ew[neighborSite];
    UlamRef<EC> Uh_3tur3179(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3181 = Uv_9212neighborSite.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3182(Uh_5tlreg3181); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3184 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3179, Uh_5tlval3182); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_8neighbor(Uh_5tuval3184.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:62: 		if(neighbor as EggShell){
    {

//! EggShell.ulam:62: 		if(neighbor as EggShell){
      const T Uh_3tut3186 = Uv_8neighbor.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3187 = Ue_102128EggShell10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut3186); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg3187, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:62: 		if(neighbor as EggShell){
          Ui_Ut_102961a<EC> & Uh_5tuval3188 = Uv_8neighbor; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102128EggShell10<EC> Uv_8neighbor(Uh_5tuval3188, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3188.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:63: 			if(neighbor.id == id){
          {

//! EggShell.ulam:63: 			if(neighbor.id == id){
            const u32 Uh_5tlreg3190 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg3193 = UlamRef<EC>(Uv_8neighbor, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3194 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3193, Uh_5tlreg3190, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3194, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:64: 				return neighbor;
                const T Uh_3tut3196 = Uv_8neighbor.read(); //gcnl:Node.cpp:691
                Ui_Ut_102961a<EC> Uh_5tuval3197(Uh_3tut3196); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tuval3197); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }
        }
      } // end if
    }

//! EggShell.ulam:67: 		Empty e;			
    Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:68: 		return e;
    const T Uh_3tut3199 = Uv_1e.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval3200(Uh_3tut3199); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tuval3200); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211getNeighbor



//! EggShell.ulam:70: 	Void guessThatImAnEdge(){
  template<class EC>
  void Ue_102128EggShell10<EC>::Uf_9217guessThatImAnEdge(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:72: 		Atom neighbor = getNeighbor();
    const Ui_Ut_102961a<EC> Uh_5tuval3203 = THE_INSTANCE.Uf_9211getNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_8neighbor(Uh_5tuval3203.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:73: 		if(neighbor as EggShell){
    {

//! EggShell.ulam:73: 		if(neighbor as EggShell){
      const T Uh_3tut3205 = Uv_8neighbor.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3206 = Ue_102128EggShell10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut3205); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg3206, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:73: 		if(neighbor as EggShell){
          Ui_Ut_102961a<EC> & Uh_5tuval3207 = Uv_8neighbor; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102128EggShell10<EC> Uv_8neighbor(Uh_5tuval3207, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3207.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:74: 			if(neighbor.onCell){
          {

//! EggShell.ulam:74: 			if(neighbor.onCell){
            const u32 Uh_5tlreg3210 = UlamRef<EC>(Uv_8neighbor, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg3210, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:76: 				createNeighbor();
                THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_9217guessThatImAnEdge



//! EggShell.ulam:82: 	Void checkForShellComplete(){
  template<class EC>
  void Ue_102128EggShell10<EC>::Uf_9221checkForShellComplete(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:83: 		SiteNum neighborSite = 1; //testing
    const u32 Uh_5tlreg3213 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3214 = _Int32ToUnsigned32(Uh_5tlreg3213, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_9212neighborSite(Uh_5tlreg3214); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:85: 		if(!(neighborSite == 0)){
    {

//! EggShell.ulam:85: 		if(!(neighborSite == 0)){
      const u32 Uh_5tlreg3215 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3216 = _Int32ToInt32(Uh_5tlreg3215, 2, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3218 = Uv_9212neighborSite.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3219 = _Unsigned32ToInt32(Uh_5tlreg3218, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3220 = _BinOpCompareEqEqInt32(Uh_5tlreg3219, Uh_5tlreg3216, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      const u32 Uh_5tlreg3221 = _LogicalBangBool32(Uh_5tlreg3220, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg3221, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:86: 			Atom neighbor = ew[neighborSite];
          UlamRef<EC> Uh_3tur3223(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3225 = Uv_9212neighborSite.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval3226(Uh_5tlreg3225); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval3228 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3223, Uh_5tlval3226); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_8neighbor(Uh_5tuval3228.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:87: 			if(neighbor as EggShell){
          {

//! EggShell.ulam:87: 			if(neighbor as EggShell){
            const T Uh_3tut3230 = Uv_8neighbor.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3231 = Ue_102128EggShell10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut3230); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg3231, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:87: 			if(neighbor as EggShell){
                Ui_Ut_102961a<EC> & Uh_5tuval3232 = Uv_8neighbor; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102128EggShell10<EC> Uv_8neighbor(Uh_5tuval3232, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3232.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:88: 				if(neighbor.shellComplete){
                {

//! EggShell.ulam:88: 				if(neighbor.shellComplete){
                  const u32 Uh_5tlreg3235 = UlamRef<EC>(Uv_8neighbor, 11u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  if(_Bool32ToCbool(Uh_5tlreg3235, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! EggShell.ulam:89: 					if(onCell){
                      {

//! EggShell.ulam:89: 					if(onCell){
                        const u32 Uh_5tlreg3237 = UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                        if(_Bool32ToCbool(Uh_5tlreg3237, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! EggShell.ulam:90: 						hatch();
                            THE_INSTANCE.Uf_5hatch(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
                          }
                        } // end if
                        else
                        {
                          {

//! EggShell.ulam:92: 						shellComplete = true;
                            const u32 Uh_5tlreg3240 = 1u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 11u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3240); //gcnl:Node.cpp:885
                          }
                        } //end else
                      }
                    }
                  } // end if
                }
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_9221checkForShellComplete



//! EggShell.ulam:98: 	Void hatch(){
  template<class EC>
  void Ue_102128EggShell10<EC>::Uf_5hatch(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:99: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur3243(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval3245 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur3243); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval3245.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:100: 		ew[0] = a;
    const T Uh_3tut3247 = Uv_1a.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur3249(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3250 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3251 = _Int32ToUnsigned32(Uh_5tlreg3250, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval3252(Uh_5tlreg3251); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3254 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3249, Uh_5tlval3252); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval3254.WriteAtom(Uh_3tut3247); //write into atomof ref //gcnl:Node.cpp:980

  } // Uf_5hatch


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102128EggShell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_1010919SiteUtils10", "su", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_10109211ClusterByID10", "cl", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 3: { static UlamClassDataMemberInfo i("Ut_102101u", "id", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 4: { static UlamClassDataMemberInfo i("Ut_10111b", "onCell", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 5: { static UlamClassDataMemberInfo i("Ut_10111b", "shellComplete", 11u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102128EggShell10<EC>::GetDataMemberCount() const
  {
    return 6; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102128EggShell10<EC>::GetMangledClassName() const
  {
    return "Ue_102128EggShell10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102128EggShell10<EC>::GetClassLength( ) const
  {
    return 12; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102128EggShell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102128EggShell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102128EggShell10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102128EggShell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102128EggShell10<EC>::Uf_6behave10) &Ue_102128EggShell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Ue_102128EggShell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Ue_102128EggShell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102128EggShell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102128EggShell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2404
  } //isMethod

  template<class EC>
  const u32 Ue_102128EggShell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2442
  } //ReadTypeField

  template<class EC>
  void Ue_102128EggShell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2464
  } //WriteTypeField

} //MFM

