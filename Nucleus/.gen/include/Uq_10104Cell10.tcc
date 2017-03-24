/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_102128EggShell10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109211ClusterByID10.h"
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
  Uq_10104Cell10<EC>::Uq_10104Cell10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10104Cell10", 0))
  { }

  template<class EC>
  Uq_10104Cell10<EC>::~Uq_10104Cell10(){} //gcnl:NodeBlockClass.cpp:1784


//! Cell.ulam:65: 	Bool outOfTheCell(Atom a,ID id){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10104Cell10<EC>::Uf_9212outOfTheCell(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! Cell.ulam:66: 		return !inTheCell(a,id);
    const T Uh_3tut41362 = Uv_1a.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41363(Uh_3tut41362); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41365 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval41366(Uh_5tlreg41365); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval41368 = THE_INSTANCE.Uf_919inTheCell(uc, ur, Uh_5tuval41363, Uh_5tlval41366); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41369 = Uh_5tlval41368.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg41370 = _LogicalBangBool32(Uh_5tlreg41369, 1); //gcnl:NodeUnaryOp.cpp:449
    Ui_Ut_10111b<EC> Uh_5tlval41371(Uh_5tlreg41370); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41371); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212outOfTheCell



//! Cell.ulam:19: 	ID genID(){
  template<class EC>
  Ui_Ut_102101u<EC> Uq_10104Cell10<EC>::Uf_5genID(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Cell.ulam:20: 		ID id = (ID) r.create(1023);
    UlamRef<EC> Uh_3tur41373(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41374 = 1023; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41375 = _Int32ToInt32(Uh_5tlreg41374, 11, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval41376(Uh_5tlreg41375); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval41378 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur41373, Uh_5tlval41376); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41379 = Uh_5tlval41378.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg41380 = _Unsigned32ToUnsigned32(Uh_5tlreg41379, 32, 10); //gcnl:NodeCast.cpp:723
    Ui_Ut_102101u<EC> Uv_2id(Uh_5tlreg41380); //gcnl:NodeVarDecl.cpp:1060

//! Cell.ulam:21: 		return id;
    const u32 Uh_5tlreg41382 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval41383(Uh_5tlreg41382); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41383); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5genID



//! Cell.ulam:23: 	Atom copyGene(Atom gene){
  template<class EC>
  Ui_Ut_102961a<EC> Uq_10104Cell10<EC>::Uf_8copyGene(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4gene) const
  {

//! Cell.ulam:24: 		return gene;
    const T Uh_3tut41385 = Uv_4gene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41386(Uh_3tut41385); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tuval41386); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8copyGene



//! Cell.ulam:26: 	Atom getGeneSeqno(Seqno seqno){
  template<class EC>
  Ui_Ut_102961a<EC> Uq_10104Cell10<EC>::Uf_9212getGeneSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5seqno) const
  {

//! Cell.ulam:27: 		Gene gene;
    Ui_Ue_102574Gene10<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! Cell.ulam:28: 		return gene;
    const T Uh_3tut41388 = Uv_4gene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41389(Uh_3tut41388); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tuval41389); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212getGeneSeqno



//! Cell.ulam:30: 	Atom makeGene(ID id, Seqno seqno){
  template<class EC>
  Ui_Ut_102961a<EC> Uq_10104Cell10<EC>::Uf_8makeGene(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10161u<EC>& Uv_5seqno) const
  {

//! Cell.ulam:31: 		Gene gene;
    Ui_Ue_102574Gene10<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! Cell.ulam:32: 		gene.id = id;
    const u32 Uh_5tlreg41391 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41391); //gcnl:Node.cpp:885

//! Cell.ulam:33: 		gene.seqno = seqno;
    const u32 Uh_5tlreg41395 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41395); //gcnl:Node.cpp:885

//! Cell.ulam:35: 		return gene;
    const T Uh_3tut41399 = Uv_4gene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41400(Uh_3tut41399); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tuval41400); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8makeGene



//! Cell.ulam:37: 	Atom makeNucleus(ID child, ID parent1, ID parent2){
  template<class EC>
  Ui_Ut_102961a<EC> Uq_10104Cell10<EC>::Uf_9211makeNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_5child, Ui_Ut_102101u<EC>& Uv_7parent1, Ui_Ut_102101u<EC>& Uv_7parent2) const
  {

//! Cell.ulam:38: 		Nucleus nu;
    Ui_Ue_102717Nucleus10<EC> Uv_2nu; //gcnl:NodeVarDecl.cpp:1096

//! Cell.ulam:39: 		nu.id = child;
    const u32 Uh_5tlreg41402 = Uv_5child.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_2nu, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41402); //gcnl:Node.cpp:885

//! Cell.ulam:40: 		nu.parent1id = parent1;
    const u32 Uh_5tlreg41406 = Uv_7parent1.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(35u, 10u, Uv_2nu, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41406); //gcnl:Node.cpp:885

//! Cell.ulam:41: 		nu.parent2id = parent2;
    const u32 Uh_5tlreg41410 = Uv_7parent2.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(45u, 10u, Uv_2nu, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41410); //gcnl:Node.cpp:885

//! Cell.ulam:42: 		return nu;
    const T Uh_3tut41414 = Uv_2nu.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41415(Uh_3tut41414); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tuval41415); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211makeNucleus



//! Cell.ulam:44: 	Bool inTheCell(Atom a,ID id){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10104Cell10<EC>::Uf_919inTheCell(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! Cell.ulam:45: 		if(a as Gene){
    {

//! Cell.ulam:45: 		if(a as Gene){
      const T Uh_3tut41417 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41418 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41417); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41418, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Cell.ulam:45: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval41419 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval41419, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41419.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Cell.ulam:46: 			if(a.id == id){
          {

//! Cell.ulam:46: 			if(a.id == id){
            const u32 Uh_5tlreg41421 = Uv_2id.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41424 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41425 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41424, Uh_5tlreg41421, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41425, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Cell.ulam:47: 				return true;
                const u32 Uh_5tlreg41426 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval41427(Uh_5tlreg41426); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41427); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! Cell.ulam:50: 				return false;
                const u32 Uh_5tlreg41428 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval41429(Uh_5tlreg41428); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41429); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
    }

//! Cell.ulam:53: 		if(a as Nucleus){
    {

//! Cell.ulam:53: 		if(a as Nucleus){
      const T Uh_3tut41431 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41432 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41431); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41432, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Cell.ulam:53: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval41433 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval41433, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41433.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Cell.ulam:54: 			if(a.id == id){
          {

//! Cell.ulam:54: 			if(a.id == id){
            const u32 Uh_5tlreg41435 = Uv_2id.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41438 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41439 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41438, Uh_5tlreg41435, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41439, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Cell.ulam:55: 				return true;
                const u32 Uh_5tlreg41440 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval41441(Uh_5tlreg41440); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41441); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! Cell.ulam:58: 				return false;
                const u32 Uh_5tlreg41442 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval41443(Uh_5tlreg41442); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41443); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
      else
      {
        {

//! Cell.ulam:62: 			return false;
          const u32 Uh_5tlreg41444 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval41445(Uh_5tlreg41444); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval41445); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_919inTheCell


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10104Cell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10106Random10", "r", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10104Cell10<EC>::GetDataMemberCount() const
  {
    return 2; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10104Cell10<EC>::GetMangledClassName() const
  {
    return "Uq_10104Cell10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10104Cell10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10104Cell10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10104Cell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_10104Cell10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10104Cell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_10104Cell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_10104Cell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10104Cell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

