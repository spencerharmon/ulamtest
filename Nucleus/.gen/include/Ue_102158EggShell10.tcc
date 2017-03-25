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
  Ue_102158EggShell10<EC>::Ue_102158EggShell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102158EggShell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("E");  // figure this out later
    Element<EC>::SetName("EggShell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102158EggShell10<EC>::~Ue_102158EggShell10(){} //gcnl:NodeBlockClass.cpp:1743


//! EggShell.ulam:75: 	Void behave(){
  template<class EC>
  void Ue_102158EggShell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! EggShell.ulam:76: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur44759(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval44761 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur44759); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44761.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:77: 		Bool onN = onNucleus(a);
    const T Uh_3tut44764 = Uv_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44765(Uh_3tut44764); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval44767 = THE_INSTANCE.Uf_919onNucleus(uc, ur, Uh_5tuval44765); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44768 = Uh_5tlval44767.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uv_3onN(Uh_5tlreg44768); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:78: 		Bool onG = onGene(a);
    const T Uh_3tut44771 = Uv_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44772(Uh_3tut44771); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval44774 = THE_INSTANCE.Uf_6onGene(uc, ur, Uh_5tuval44772); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44775 = Uh_5tlval44774.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uv_3onG(Uh_5tlreg44775); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:79: 		if(onN){
    {

//! EggShell.ulam:79: 		if(onN){
      const u32 Uh_5tlreg44777 = Uv_3onN.read(); //gcnl:Node.cpp:691
      if(_Bool32ToCbool(Uh_5tlreg44777, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:80: 			onCell = true;
          const u32 Uh_5tlreg44778 = 1u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg44778); //gcnl:Node.cpp:885

//! EggShell.ulam:81: 			createNeighbor();
          THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:82: 			hatch();
          THE_INSTANCE.Uf_5hatch(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
        }
      } // end if
    }

//! EggShell.ulam:84: 		if(onG){
    {

//! EggShell.ulam:84: 		if(onG){
      const u32 Uh_5tlreg44785 = Uv_3onG.read(); //gcnl:Node.cpp:691
      if(_Bool32ToCbool(Uh_5tlreg44785, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:85: 			onCell = true;
          const u32 Uh_5tlreg44786 = 1u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg44786); //gcnl:Node.cpp:885

//! EggShell.ulam:86: 			createNeighbor();
          THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:87: 			hatch();
          THE_INSTANCE.Uf_5hatch(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
        }
      } // end if
    }

//! EggShell.ulam:89: 		clusterEgg();
    THE_INSTANCE.Uf_9210clusterEgg(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:90: 		if(!onN && !onG){
    {

//! EggShell.ulam:90: 		if(!onN && !onG){
      u32 Uh_5tlreg44794 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44796 = Uv_3onN.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44797 = _LogicalBangBool32(Uh_5tlreg44796, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg44797, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44799 = Uv_3onG.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44800 = _LogicalBangBool32(Uh_5tlreg44799, 1); //gcnl:NodeUnaryOp.cpp:449
        Uh_5tlreg44794 = Uh_5tlreg44800; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44794, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:91: 			onCell = false;
          const u32 Uh_5tlreg44801 = 0u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg44801); //gcnl:Node.cpp:885

//! EggShell.ulam:92: 			if(first){
          {

//! EggShell.ulam:92: 			if(first){
            const u32 Uh_5tlreg44804 = UlamRef<EC>(ur, 14u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            if(_Bool32ToCbool(Uh_5tlreg44804, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:93: 				ew.swap(0,1);
                UlamRef<EC> Uh_3tur44806(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg44807 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44808 = _Int32ToUnsigned32(Uh_5tlreg44807, 2, 6); //gcnl:NodeCast.cpp:723
                Ui_Ut_10161u<EC> Uh_5tlval44809(Uh_5tlreg44808); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44810 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44811 = _Int32ToUnsigned32(Uh_5tlreg44810, 2, 6); //gcnl:NodeCast.cpp:723
                Ui_Ut_10161u<EC> Uh_5tlval44812(Uh_5tlreg44811); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10111b<EC> Uh_5tlval44814 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur44806, Uh_5tlval44809, Uh_5tlval44812); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg44815 = Uh_5tlval44814.read(); //gcnl:Node.cpp:1156
              }
            } // end if
          }

//! EggShell.ulam:95: 			++lost;
          const u32 Uh_5tlreg44816 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44817 = _Int32ToUnsigned32(Uh_5tlreg44816, 32, 3); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44819 = UlamRef<EC>(ur, 11u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          const u32 Uh_5tlreg44820 = _BinOpAddUnsigned32(Uh_5tlreg44819, Uh_5tlreg44817, 3); //gcnl:NodeBinaryOpEqualArith.cpp:128
          UlamRef<EC>(ur, 11u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg44820); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! EggShell.ulam:97: 		if(lost == lost.maxof){
    {

//! EggShell.ulam:97: 		if(lost == lost.maxof){
      const u32 Uh_5tlreg44821 = 7u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44823 = UlamRef<EC>(ur, 11u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg44824 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44823, Uh_5tlreg44821, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44824, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:98: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:99: 			ew[0] = e;
          const T Uh_3tut44826 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur44828(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44829 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44830 = _Int32ToUnsigned32(Uh_5tlreg44829, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval44831(Uh_5tlreg44830); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval44833 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44828, Uh_5tlval44831); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval44833.WriteAtom(Uh_3tut44826); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

  } // Uf_6behave



//! EggShell.ulam:24: 	Void createNeighbor(){
  template<class EC>
  void Ue_102158EggShell10<EC>::Uf_9214createNeighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:25: 		SiteNum slot = cl.emptySlotNearMe();
    UlamRef<EC> Uh_3tur44835(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10161u<EC> Uh_5tlval44837 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur44835); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44838 = Uh_5tlval44837.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg44838); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:26: 		EggShell eg;
    Ui_Ue_102158EggShell10<EC> Uv_2eg; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:27: 		eg.id = id;
    const u32 Uh_5tlreg44840 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44840); //gcnl:Node.cpp:885

//! EggShell.ulam:28: 		if(slot != 0){
    {

//! EggShell.ulam:28: 		if(slot != 0){
      const u32 Uh_5tlreg44843 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44844 = _Int32ToInt32(Uh_5tlreg44843, 2, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44846 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44847 = _Unsigned32ToInt32(Uh_5tlreg44846, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44848 = _BinOpCompareNotEqInt32(Uh_5tlreg44847, Uh_5tlreg44844, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44848, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:29: 			ew[slot] = eg;
          const T Uh_3tut44850 = Uv_2eg.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur44852(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44854 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44855(Uh_5tlreg44854); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval44857 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44852, Uh_5tlval44855); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval44857.WriteAtom(Uh_3tut44850); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

  } // Uf_9214createNeighbor



//! EggShell.ulam:32: 	Void hatch(){
  template<class EC>
  void Ue_102158EggShell10<EC>::Uf_5hatch(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:33: 		createNeighbor();
    THE_INSTANCE.Uf_9214createNeighbor(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:34: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur44861(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval44863 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur44861); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44863.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:35: 		Empty e;
    Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! EggShell.ulam:36: 		su.setBase(e);
    UlamRef<EC> Uh_3tur44865(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut44867 = Uv_1e.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44868(Uh_3tut44867); //func arg& //gcnl:Node.cpp:1128
    Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7setBase(uc, Uh_3tur44865, Uh_5tuval44868); //gcnl:NodeFunctionCall.cpp:1006

//! EggShell.ulam:39: 			ew[0] = a;
    const T Uh_3tut44871 = Uv_1a.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur44873(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44874 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44875 = _Int32ToUnsigned32(Uh_5tlreg44874, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval44876(Uh_5tlreg44875); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval44878 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44873, Uh_5tlval44876); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval44878.WriteAtom(Uh_3tut44871); //write into atomof ref //gcnl:Node.cpp:980

  } // Uf_5hatch



//! EggShell.ulam:42: 	Bool onNucleus(Atom a){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102158EggShell10<EC>::Uf_919onNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const
  {

//! EggShell.ulam:43: 		if(a as Nucleus){
    {

//! EggShell.ulam:43: 		if(a as Nucleus){
      const T Uh_3tut44880 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44881 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44880); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg44881, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:43: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval44882 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval44882, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44882.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:44: 			if(a.id == id){
          {

//! EggShell.ulam:44: 			if(a.id == id){
            const u32 Uh_5tlreg44884 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44887 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44888 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44887, Uh_5tlreg44884, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44888, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:45: 				return true;
                const u32 Uh_5tlreg44889 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval44890(Uh_5tlreg44889); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44890); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! EggShell.ulam:47: 				return false;
                const u32 Uh_5tlreg44891 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval44892(Uh_5tlreg44891); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44892); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
      else
      {
        {

//! EggShell.ulam:50: 			return false;
          const u32 Uh_5tlreg44893 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval44894(Uh_5tlreg44893); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44894); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_919onNucleus



//! EggShell.ulam:53: 	Bool onGene(Atom a){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102158EggShell10<EC>::Uf_6onGene(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const
  {

//! EggShell.ulam:54: 		if(a as Gene){
    {

//! EggShell.ulam:54: 		if(a as Gene){
      const T Uh_3tut44896 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44897 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44896); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg44897, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! EggShell.ulam:54: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval44898 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval44898, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44898.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:55: 			if(a.id == id){
          {

//! EggShell.ulam:55: 			if(a.id == id){
            const u32 Uh_5tlreg44900 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg44903 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44904 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44903, Uh_5tlreg44900, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44904, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:56: 				return true;
                const u32 Uh_5tlreg44905 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval44906(Uh_5tlreg44905); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44906); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! EggShell.ulam:58: 				return false;
                const u32 Uh_5tlreg44907 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval44908(Uh_5tlreg44907); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44908); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
      else
      {
        {

//! EggShell.ulam:61: 			return false;
          const u32 Uh_5tlreg44909 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval44910(Uh_5tlreg44909); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44910); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_6onGene



//! EggShell.ulam:64:         Void clusterEgg(){
  template<class EC>
  void Ue_102158EggShell10<EC>::Uf_9210clusterEgg(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EggShell.ulam:65:                 for(SiteNum i = 1; i <= 40;++i){
    {

//! EggShell.ulam:65:                 for(SiteNum i = 1; i <= 40;++i){
      const u32 Uh_5tlreg44911 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44912 = _Int32ToUnsigned32(Uh_5tlreg44911, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg44912); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:65:                 for(SiteNum i = 1; i <= 40;++i){
      while(true)
      {
        const u32 Uh_5tlreg44913 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44915 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44916 = _Unsigned32ToInt32(Uh_5tlreg44915, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44917 = _BinOpCompareLessEqualInt32(Uh_5tlreg44916, Uh_5tlreg44913, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg44917, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! EggShell.ulam:65:                 for(SiteNum i = 1; i <= 40;++i){
        {

//! EggShell.ulam:66:                         Atom a = ew[i];
          UlamRef<EC> Uh_3tur44919(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44921 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44922(Uh_5tlreg44921); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval44924 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44919, Uh_5tlval44922); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44924.read()); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:67:                         if(a as EggShell){
          {

//! EggShell.ulam:67:                         if(a as EggShell){
            const T Uh_3tut44926 = Uv_1a.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44927 = Ue_102158EggShell10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44926); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg44927, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! EggShell.ulam:67:                         if(a as EggShell){
                Ui_Ut_102961a<EC> & Uh_5tuval44928 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102158EggShell10<EC> Uv_1a(Uh_5tuval44928, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44928.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! EggShell.ulam:68:                                 if(a.id == id && onCell && !a.onCell){
                {

//! EggShell.ulam:68:                                 if(a.id == id && onCell && !a.onCell){
                  u32 Uh_5tlreg44929 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg44930 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44932 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg44935 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg44936 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44935, Uh_5tlreg44932, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44936, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44938 = UlamRef<EC>(ur, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                    Uh_5tlreg44930 = Uh_5tlreg44938; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44930, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44941 = UlamRef<EC>(Uv_1a, 10u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44942 = _LogicalBangBool32(Uh_5tlreg44941, 1); //gcnl:NodeUnaryOp.cpp:449
                    Uh_5tlreg44929 = Uh_5tlreg44942; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44929, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! EggShell.ulam:69:                                         SiteNum e = cl.nonCellSlotNearMe(self,id);
                      UlamRef<EC> Uh_3tur44944(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const T Uh_3tut44946 = UlamRef<EC>(ur, 0u, 15u, &Ue_102158EggShell10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
                      Ui_Ut_102961a<EC> Uh_5tuval44947(Uh_3tut44946); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44949 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                      Ui_Ut_102101u<EC> Uh_5tlval44950(Uh_5tlreg44949); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44952 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9217nonCellSlotNearMe(uc, Uh_3tur44944, Uh_5tuval44947, Uh_5tlval44950); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44953 = Uh_5tlval44952.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg44953); //gcnl:NodeVarDecl.cpp:1060

//! EggShell.ulam:70:                                         ew.swap(i,e);
                      UlamRef<EC> Uh_3tur44955(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44957 = Uv_1i.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44958(Uh_5tlreg44957); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44960 = Uv_1e.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uh_5tlval44961(Uh_5tlreg44960); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10111b<EC> Uh_5tlval44963 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur44955, Uh_5tlval44958, Uh_5tlval44961); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44964 = Uh_5tlval44963.read(); //gcnl:Node.cpp:1156
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! EggShell.ulam:65:                 for(SiteNum i = 1; i <= 40;++i){
Ul_214endcontrolloop219:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! EggShell.ulam:65:                 for(SiteNum i = 1; i <= 40;++i){
        const u32 Uh_5tlreg44965 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44966 = _Int32ToUnsigned32(Uh_5tlreg44965, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44968 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44969 = _BinOpAddUnsigned32(Uh_5tlreg44968, Uh_5tlreg44966, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg44969); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210clusterEgg


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102158EggShell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
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
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102158EggShell10<EC>::GetDataMemberCount() const
  {
    return 7; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102158EggShell10<EC>::GetMangledClassName() const
  {
    return "Ue_102158EggShell10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102158EggShell10<EC>::GetClassLength( ) const
  {
    return 15; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102158EggShell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102158EggShell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102158EggShell10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102158EggShell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102158EggShell10<EC>::Uf_6behave10) &Ue_102158EggShell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Ue_102158EggShell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Ue_102158EggShell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102158EggShell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102158EggShell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2404
  } //isMethod

  template<class EC>
  const u32 Ue_102158EggShell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2442
  } //ReadTypeField

  template<class EC>
  void Ue_102158EggShell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2464
  } //WriteTypeField

} //MFM

