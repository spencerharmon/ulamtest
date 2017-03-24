/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_102128EggShell10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109211ClusterByID10.h"
#include "Uq_10104Cell10.h"
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
  Ue_102717Nucleus10<EC>::Ue_102717Nucleus10() : UlamElement<EC>(MFM_UUID_FOR("Ue102717Nucleus10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("N");  // figure this out later
    Element<EC>::SetName("Nucleus"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102717Nucleus10<EC>::~Ue_102717Nucleus10(){} //gcnl:NodeBlockClass.cpp:1743


//! Nucleus.ulam:166: 	Void behave(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Nucleus.ulam:172: 		++lifespan;
    const u32 Uh_5tlreg41446 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41447 = _Int32ToUnsigned32(Uh_5tlreg41446, 32, 10); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg41449 = UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg41450 = _BinOpAddUnsigned32(Uh_5tlreg41449, Uh_5tlreg41447, 10); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41450); //gcnl:Node.cpp:885

//! Nucleus.ulam:173: 		--refractoryPeriod;
    const u32 Uh_5tlreg41451 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41452 = _Int32ToUnsigned32(Uh_5tlreg41451, 32, 7); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg41454 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg41455 = _BinOpSubtractUnsigned32(Uh_5tlreg41454, Uh_5tlreg41452, 7); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41455); //gcnl:Node.cpp:885

//! Nucleus.ulam:176: 		if(refractoryPeriod < refractoryPeriod.maxof-20){
    {

//! Nucleus.ulam:176: 		if(refractoryPeriod < refractoryPeriod.maxof-20){
      const u32 Uh_5tlreg41456 = 107; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41458 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg41459 = _Unsigned32ToInt32(Uh_5tlreg41458, 7, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41460 = _BinOpCompareLessThanInt32(Uh_5tlreg41459, Uh_5tlreg41456, 9); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41460, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:177: 			reproducing = false;
          const u32 Uh_5tlreg41461 = 0u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41461); //gcnl:Node.cpp:885

//! Nucleus.ulam:178: 			childID = 0;
          const u32 Uh_5tlreg41463 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41464 = _Int32ToUnsigned32(Uh_5tlreg41463, 2, 10); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41464); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! Nucleus.ulam:180: 		if(!dieOfOldAge()){
    {

//! Nucleus.ulam:180: 		if(!dieOfOldAge()){
      const Ui_Ut_10111b<EC> Uh_5tlval41468 = THE_INSTANCE.Uf_9211dieOfOldAge(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg41469 = Uh_5tlval41468.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg41470 = _LogicalBangBool32(Uh_5tlreg41469, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg41470, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:181: 			cl.bringGenesCloser(id,self);
          UlamRef<EC> Uh_3tur41472(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41474 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval41475(Uh_5tlreg41474); //func arg& //gcnl:Node.cpp:1128
          const T Uh_3tut41477 = UlamRef<EC>(ur, 0u, 71u, &Ue_102717Nucleus10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
          Ui_Ut_102961a<EC> Uh_5tuval41478(Uh_3tut41477); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10111b<EC> Uh_5tlval41480 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9216bringGenesCloser(uc, Uh_3tur41472, Uh_5tlval41475, Uh_5tuval41478); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg41481 = Uh_5tlval41480.read(); //gcnl:Node.cpp:1156

//! Nucleus.ulam:182: 			dontStepOnEggs();
          THE_INSTANCE.Uf_9214dontStepOnEggs(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:186: 			Atom movement = dt.findSeqno((Seqno)1, id);
          UlamRef<EC> Uh_3tur41485(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41486 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41487 = _Int32ToUnsigned32(Uh_5tlreg41486, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41488(Uh_5tlreg41487); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41490 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval41491(Uh_5tlreg41490); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval41493 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur41485, Uh_5tlval41488, Uh_5tlval41491); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_8movement(Uh_5tuval41493.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:187: 			if(movement as Gene){
          {

//! Nucleus.ulam:187: 			if(movement as Gene){
            const T Uh_3tut41495 = Uv_8movement.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41496 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41495); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41496, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:187: 			if(movement as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41497 = Uv_8movement; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102574Gene10<EC> Uv_8movement(Uh_5tuval41497, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41497.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:188: 				if(r.oneIn((Unsigned)(movement.value + 1))){ //+1 because oneIn(0) causes failure.
                {

//! Nucleus.ulam:188: 				if(r.oneIn((Unsigned)(movement.value + 1))){ //+1 because oneIn(0) causes failure.
                  UlamRef<EC> Uh_3tur41499(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg41500 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg41501 = _Int32ToInt32(Uh_5tlreg41500, 2, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41504 = UlamRef<EC>(Uv_8movement, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41505 = _Unsigned32ToInt32(Uh_5tlreg41504, 6, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41506 = _BinOpAddInt32(Uh_5tlreg41505, Uh_5tlreg41501, 8); //gcnl:NodeBinaryOp.cpp:719
                  const u32 Uh_5tlreg41507 = _Int32ToUnsigned32(Uh_5tlreg41506, 8, 32); //gcnl:NodeCast.cpp:723
                  Ui_Ut_102321u<EC> Uh_5tlval41508(Uh_5tlreg41507); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval41510 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur41499, Uh_5tlval41508); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg41511 = Uh_5tlval41510.read(); //gcnl:Node.cpp:1156
                  if(_Bool32ToCbool(Uh_5tlreg41511, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:189: 					move = true;
                      const u32 Uh_5tlreg41512 = 1u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41512); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! Nucleus.ulam:192: 			Atom com = dt.findSeqno((Seqno)2, id);
          UlamRef<EC> Uh_3tur41515(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41516 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41517 = _Int32ToUnsigned32(Uh_5tlreg41516, 3, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41518(Uh_5tlreg41517); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41520 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval41521(Uh_5tlreg41520); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval41523 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur41515, Uh_5tlval41518, Uh_5tlval41521); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_3com(Uh_5tuval41523.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:193: 			if(com as Gene){
          {

//! Nucleus.ulam:193: 			if(com as Gene){
            const T Uh_3tut41525 = Uv_3com.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41526 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41525); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41526, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:193: 			if(com as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41527 = Uv_3com; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102574Gene10<EC> Uv_3com(Uh_5tuval41527, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41527.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:194: 				comOut = com.value;
                const u32 Uh_5tlreg41530 = UlamRef<EC>(Uv_3com, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 55u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41530); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! Nucleus.ulam:196: 			Atom reproduce = dt.findSeqno((Seqno)3, id);
          UlamRef<EC> Uh_3tur41533(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41534 = 3; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41535 = _Int32ToUnsigned32(Uh_5tlreg41534, 3, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41536(Uh_5tlreg41535); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41538 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval41539(Uh_5tlreg41538); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval41541 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur41533, Uh_5tlval41536, Uh_5tlval41539); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_919reproduce(Uh_5tuval41541.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:197: 			if(reproduce as Gene){
          {

//! Nucleus.ulam:197: 			if(reproduce as Gene){
            const T Uh_3tut41543 = Uv_919reproduce.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41544 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41543); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41544, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:197: 			if(reproduce as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41545 = Uv_919reproduce; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102574Gene10<EC> Uv_919reproduce(Uh_5tuval41545, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41545.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:198: 				if(!r.oneIn((Unsigned)(reproduce.value + 1))){
                {

//! Nucleus.ulam:198: 				if(!r.oneIn((Unsigned)(reproduce.value + 1))){
                  UlamRef<EC> Uh_3tur41547(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg41548 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg41549 = _Int32ToInt32(Uh_5tlreg41548, 2, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41552 = UlamRef<EC>(Uv_919reproduce, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41553 = _Unsigned32ToInt32(Uh_5tlreg41552, 6, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41554 = _BinOpAddInt32(Uh_5tlreg41553, Uh_5tlreg41549, 8); //gcnl:NodeBinaryOp.cpp:719
                  const u32 Uh_5tlreg41555 = _Int32ToUnsigned32(Uh_5tlreg41554, 8, 32); //gcnl:NodeCast.cpp:723
                  Ui_Ut_102321u<EC> Uh_5tlval41556(Uh_5tlreg41555); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval41558 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur41547, Uh_5tlval41556); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg41559 = Uh_5tlval41558.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg41560 = _LogicalBangBool32(Uh_5tlreg41559, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg41560, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:199: 					maybeReproduce();
                      THE_INSTANCE.Uf_9214maybeReproduce(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
                    }
                  } // end if
                }
              }
            } // end if
          }

//! Nucleus.ulam:202: 			whetherToMove();
          THE_INSTANCE.Uf_9213whetherToMove(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
        }
      } // end if
    }

  } // Uf_6behave



//! Nucleus.ulam:47: 	Bool dieOfOldAge(){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102717Nucleus10<EC>::Uf_9211dieOfOldAge(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:48: 		if(lifespan == lifespan.maxof){
    {

//! Nucleus.ulam:48: 		if(lifespan == lifespan.maxof){
      const u32 Uh_5tlreg41565 = 1023u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41567 = UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg41568 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41567, Uh_5tlreg41565, 10); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41568, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:49: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:50: 			ew[0] = e;
          const T Uh_3tut41570 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur41572(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41573 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41574 = _Int32ToUnsigned32(Uh_5tlreg41573, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41575(Uh_5tlreg41574); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41577 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41572, Uh_5tlval41575); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval41577.WriteAtom(Uh_3tut41570); //write into atomof ref //gcnl:Node.cpp:980

//! Nucleus.ulam:51: 			return true;
          const u32 Uh_5tlreg41578 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval41579(Uh_5tlreg41578); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval41579); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! Nucleus.ulam:54: 			return false;
          const u32 Uh_5tlreg41580 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval41581(Uh_5tlreg41580); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval41581); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9211dieOfOldAge



//! Nucleus.ulam:57: 	Bool notIncest(Atom mate){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102717Nucleus10<EC>::Uf_919notIncest(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4mate) const
  {

//! Nucleus.ulam:58: 		if(mate as Nucleus){
    {

//! Nucleus.ulam:58: 		if(mate as Nucleus){
      const T Uh_3tut41583 = Uv_4mate.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41584 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41583); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41584, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:58: 		if(mate as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval41585 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval41585, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41585.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:59: 			if(parent1id == mate.parent1id || 
          {

//! Nucleus.ulam:59: 			if(parent1id == mate.parent1id || 
            u32 Uh_5tlreg41586 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg41587 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg41588 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg41589 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg41590 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg41591 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg41592 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg41593 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg41596 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41598 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg41599 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41598, Uh_5tlreg41596, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(!_Bool32ToCbool(Uh_5tlreg41599, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg41602 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41604 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg41605 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41604, Uh_5tlreg41602, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41593 = Uh_5tlreg41605; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41593 = Uh_5tlreg41599; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg41593, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg41608 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41610 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg41611 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41610, Uh_5tlreg41608, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41592 = Uh_5tlreg41611; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41592 = Uh_5tlreg41593; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg41592, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg41614 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41616 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg41617 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41616, Uh_5tlreg41614, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41591 = Uh_5tlreg41617; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41591 = Uh_5tlreg41592; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg41591, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg41620 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41622 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg41623 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41622, Uh_5tlreg41620, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41590 = Uh_5tlreg41623; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41590 = Uh_5tlreg41591; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg41590, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg41626 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41628 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg41629 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41628, Uh_5tlreg41626, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41589 = Uh_5tlreg41629; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41589 = Uh_5tlreg41590; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg41589, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg41632 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41634 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg41635 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41634, Uh_5tlreg41632, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41588 = Uh_5tlreg41635; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41588 = Uh_5tlreg41589; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg41588, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg41638 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41640 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg41641 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41640, Uh_5tlreg41638, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41587 = Uh_5tlreg41641; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41587 = Uh_5tlreg41588; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg41587, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg41644 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41646 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg41647 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41646, Uh_5tlreg41644, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg41586 = Uh_5tlreg41647; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41586 = Uh_5tlreg41587; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg41586, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:68: 				return false;
                const u32 Uh_5tlreg41648 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval41649(Uh_5tlreg41648); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41649); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }
        }
      } // end if
      else
      {
        {

//! Nucleus.ulam:72: 			return true;
          const u32 Uh_5tlreg41650 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval41651(Uh_5tlreg41650); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval41651); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

//! Nucleus.ulam:75: 		return true;
    const u32 Uh_5tlreg41652 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval41653(Uh_5tlreg41652); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41653); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919notIncest



//! Nucleus.ulam:77: 	Void makeChildNucleus(Atom mate){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9216makeChildNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4mate) const
  {

//! Nucleus.ulam:78: 		childID = cell.genID();
    UlamRef<EC> Uh_3tur41655(ur, 0u, 0u, &Uq_10104Cell10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102101u<EC> Uh_5tlval41657 = Uq_10104Cell10<EC>::THE_INSTANCE.Uf_5genID(uc, Uh_3tur41655); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41658 = Uh_5tlval41657.read(); //gcnl:Node.cpp:1156
    UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41658); //gcnl:Node.cpp:885

//! Nucleus.ulam:79: 		Nucleus child;
    Ui_Ue_102717Nucleus10<EC> Uv_5child; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:80: 		child.parent1id = id;
    const u32 Uh_5tlreg41661 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(35u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41661); //gcnl:Node.cpp:885

//! Nucleus.ulam:81: 		child.id = childID;
    const u32 Uh_5tlreg41665 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41665); //gcnl:Node.cpp:885

//! Nucleus.ulam:83: 		if(mate as Nucleus){
    {

//! Nucleus.ulam:83: 		if(mate as Nucleus){
      const T Uh_3tut41669 = Uv_4mate.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41670 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41669); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41670, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:83: 		if(mate as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval41671 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval41671, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41671.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:84: 			mate.childID = childID;
          const u32 Uh_5tlreg41673 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          UlamRef<EC>(Uv_4mate, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41673); //gcnl:Node.cpp:885

//! Nucleus.ulam:85: 			mate.reproducing = true;
          const u32 Uh_5tlreg41676 = 1u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41676); //gcnl:Node.cpp:885

//! Nucleus.ulam:86: 			child.parent2id = mate.id;
          const u32 Uh_5tlreg41681 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          UlamRef<EC>(45u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41681); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! Nucleus.ulam:88: 		EggShell eg;
    Ui_Ue_102128EggShell10<EC> Uv_2eg; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:89: 		eg.id = childID;
    const u32 Uh_5tlreg41685 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41685); //gcnl:Node.cpp:885

//! Nucleus.ulam:90: 		SiteNum emptySlot = cl.emptySlotNearMe();
    UlamRef<EC> Uh_3tur41689(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10161u<EC> Uh_5tlval41691 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur41689); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41692 = Uh_5tlval41691.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_919emptySlot(Uh_5tlreg41692); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:92: 		if(emptySlot != 0){
    {

//! Nucleus.ulam:92: 		if(emptySlot != 0){
      const u32 Uh_5tlreg41693 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41694 = _Int32ToInt32(Uh_5tlreg41693, 2, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41696 = Uv_919emptySlot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41697 = _Unsigned32ToInt32(Uh_5tlreg41696, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41698 = _BinOpCompareNotEqInt32(Uh_5tlreg41697, Uh_5tlreg41694, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41698, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:93: 			ew[emptySlot] = eg;
          const T Uh_3tut41700 = Uv_2eg.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur41702(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41704 = Uv_919emptySlot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41705(Uh_5tlreg41704); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41707 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41702, Uh_5tlval41705); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval41707.WriteAtom(Uh_3tut41700); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! Nucleus.ulam:95: 		su.setBase(child);
    UlamRef<EC> Uh_3tur41709(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut41711 = Uv_5child.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41712(Uh_3tut41711); //func arg& //gcnl:Node.cpp:1128
    Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7setBase(uc, Uh_3tur41709, Uh_5tuval41712); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_9216makeChildNucleus



//! Nucleus.ulam:97: 	Void maybeReproduce(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9214maybeReproduce(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:98:                 SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:99:                 WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:101:                 ws.resetCategories();
    UlamRef<EC> Uh_3tur41715(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur41715); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:102:                 Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur41718(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval41720 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur41718); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41721 = Uh_5tlval41720.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg41721); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:103:                 Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:104:                 ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur41723(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut41725 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41726(Uh_3tut41725); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval41728 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur41723, Uh_5tuval41726); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41729 = Uh_5tlval41728.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg41729); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:106:                 sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur41731(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41733 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41734(Uh_5tlreg41733); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41736 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval41737(Uh_5tlreg41736); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur41731, Uh_5tlval41734, Uh_5tlval41737); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:107:                 sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur41740(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41742 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41743(Uh_5tlreg41742); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41745 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval41746(Uh_5tlreg41745); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur41740, Uh_5tlval41743, Uh_5tlval41746); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:108: 		sv.neighborCell(cNucleus);
    UlamRef<EC> Uh_3tur41749(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41751 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41752(Uh_5tlreg41751); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_9212neighborCell(uc, Uh_3tur41749, Uh_5tlval41752); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:110:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur41755(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval41756; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval41756); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41758(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41759(Uh_5tlval41758); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41755, Uh_6tlref41759); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:112:                 SiteNum slot = ws.getSiteNum(cNucleus);
    UlamRef<EC> Uh_3tur41762(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41764 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41765(Uh_5tlreg41764); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41767 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41762, Uh_5tlval41765); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41768 = Uh_5tlval41767.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg41768); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:113: 		if(slot <= 40){
    {

//! Nucleus.ulam:113: 		if(slot <= 40){
      const u32 Uh_5tlreg41769 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41771 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41772 = _Unsigned32ToInt32(Uh_5tlreg41771, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg41773 = _BinOpCompareLessEqualInt32(Uh_5tlreg41772, Uh_5tlreg41769, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41773, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:114: 	                Atom mate = ew[slot];
          UlamRef<EC> Uh_3tur41775(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41777 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41778(Uh_5tlreg41777); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval41780 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41775, Uh_5tlval41778); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4mate(Uh_5tuval41780.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:116: 			if(mate as Nucleus){
          {

//! Nucleus.ulam:116: 			if(mate as Nucleus){
            const T Uh_3tut41782 = Uv_4mate.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41783 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41782); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41783, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:116: 			if(mate as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval41784 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval41784, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41784.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:117: 				if(notIncest(mate)){
                {

//! Nucleus.ulam:117: 				if(notIncest(mate)){
                  const T Uh_3tut41787 = Uv_4mate.read(); //gcnl:Node.cpp:691
                  Ui_Ut_102961a<EC> Uh_5tuval41788(Uh_3tut41787); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval41790 = THE_INSTANCE.Uf_919notIncest(uc, ur, Uh_5tuval41788); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg41791 = Uh_5tlval41790.read(); //gcnl:Node.cpp:1156
                  if(_Bool32ToCbool(Uh_5tlreg41791, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:118: 					if(refractoryPeriod == 0){
                      {

//! Nucleus.ulam:118: 					if(refractoryPeriod == 0){
                        const u32 Uh_5tlreg41792 = 0; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg41793 = _Int32ToInt32(Uh_5tlreg41792, 2, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg41795 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                        const u32 Uh_5tlreg41796 = _Unsigned32ToInt32(Uh_5tlreg41795, 7, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg41797 = _BinOpCompareEqEqInt32(Uh_5tlreg41796, Uh_5tlreg41793, 8); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg41797, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Nucleus.ulam:119: 						if(!mate.reproducing){
                            {

//! Nucleus.ulam:119: 						if(!mate.reproducing){
                              const u32 Uh_5tlreg41800 = UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg41801 = _LogicalBangBool32(Uh_5tlreg41800, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg41801, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! Nucleus.ulam:120: 							makeChildNucleus(mate);
                                  const T Uh_3tut41804 = Uv_4mate.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102961a<EC> Uh_5tuval41805(Uh_3tut41804); //func arg& //gcnl:Node.cpp:1128
                                  THE_INSTANCE.Uf_9216makeChildNucleus(uc, ur, Uh_5tuval41805); //gcnl:NodeFunctionCall.cpp:1006
                                }
                              } // end if
                            }

//! Nucleus.ulam:122: 						refractoryPeriod = Unsigned(7).maxof;
                            const u32 Uh_5tlreg41807 = 127u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41807); //gcnl:Node.cpp:885

//! Nucleus.ulam:123: 						reproducing = true;
                            const u32 Uh_5tlreg41809 = 1u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41809); //gcnl:Node.cpp:885
                          }
                        } // end if
                      }
                    }
                  } // end if
                }

//! Nucleus.ulam:126: 				if(parent1id == 0 && parent2id == 0){
                {

//! Nucleus.ulam:126: 				if(parent1id == 0 && parent2id == 0){
                  u32 Uh_5tlreg41811 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg41812 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg41813 = _Int32ToInt32(Uh_5tlreg41812, 2, 11); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41815 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg41816 = _Unsigned32ToInt32(Uh_5tlreg41815, 10, 11); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg41817 = _BinOpCompareEqEqInt32(Uh_5tlreg41816, Uh_5tlreg41813, 11); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41817, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg41818 = 0; //gcnl:NodeTerminal.cpp:721
                    const u32 Uh_5tlreg41819 = _Int32ToInt32(Uh_5tlreg41818, 2, 11); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg41821 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg41822 = _Unsigned32ToInt32(Uh_5tlreg41821, 10, 11); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg41823 = _BinOpCompareEqEqInt32(Uh_5tlreg41822, Uh_5tlreg41819, 11); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg41811 = Uh_5tlreg41823; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg41811, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:127: 					if(refractoryPeriod == 0){
                      {

//! Nucleus.ulam:127: 					if(refractoryPeriod == 0){
                        const u32 Uh_5tlreg41824 = 0; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg41825 = _Int32ToInt32(Uh_5tlreg41824, 2, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg41827 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                        const u32 Uh_5tlreg41828 = _Unsigned32ToInt32(Uh_5tlreg41827, 7, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg41829 = _BinOpCompareEqEqInt32(Uh_5tlreg41828, Uh_5tlreg41825, 8); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg41829, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Nucleus.ulam:128: 						if(!mate.reproducing){
                            {

//! Nucleus.ulam:128: 						if(!mate.reproducing){
                              const u32 Uh_5tlreg41832 = UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg41833 = _LogicalBangBool32(Uh_5tlreg41832, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg41833, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! Nucleus.ulam:129: 							makeChildNucleus(mate);
                                  const T Uh_3tut41836 = Uv_4mate.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102961a<EC> Uh_5tuval41837(Uh_3tut41836); //func arg& //gcnl:Node.cpp:1128
                                  THE_INSTANCE.Uf_9216makeChildNucleus(uc, ur, Uh_5tuval41837); //gcnl:NodeFunctionCall.cpp:1006
                                }
                              } // end if
                            }

//! Nucleus.ulam:131: 						reproducing = true;
                            const u32 Uh_5tlreg41839 = 1u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41839); //gcnl:Node.cpp:885

//! Nucleus.ulam:132: 						refractoryPeriod = Unsigned(7).maxof;
                            const u32 Uh_5tlreg41841 = 127u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41841); //gcnl:Node.cpp:885
                          }
                        } // end if
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

  } // Uf_9214maybeReproduce



//! Nucleus.ulam:138: 	Void dontStepOnEggs(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9214dontStepOnEggs(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:139: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur41844(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval41846 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur41844); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval41846.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:140: 		if(a as Nucleus){
    {

//! Nucleus.ulam:140: 		if(a as Nucleus){
      const T Uh_3tut41848 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41849 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41848); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41849, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:140: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval41850 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval41850, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41850.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:141: 			if(a.id == childID){
          {

//! Nucleus.ulam:141: 			if(a.id == childID){
            const u32 Uh_5tlreg41852 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg41855 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41856 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41855, Uh_5tlreg41852, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41856, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:142: 				move = true;
                const u32 Uh_5tlreg41857 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41857); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! Nucleus.ulam:145: 		if(a as Gene){
    {

//! Nucleus.ulam:145: 		if(a as Gene){
      const T Uh_3tut41860 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41861 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41860); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41861, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:145: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval41862 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval41862, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41862.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:146: 			if(a.id == childID){
          {

//! Nucleus.ulam:146: 			if(a.id == childID){
            const u32 Uh_5tlreg41864 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg41867 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41868 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41867, Uh_5tlreg41864, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41868, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:147: 				move = true;
                const u32 Uh_5tlreg41869 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41869); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_9214dontStepOnEggs



//! Nucleus.ulam:151: 	Void whetherToMove(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9213whetherToMove(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:152: 		if(move = true){
    {

//! Nucleus.ulam:152: 		if(move = true){
      const u32 Uh_5tlreg41871 = 1u; //gcnl:NodeTerminal.cpp:721
      UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41871); //gcnl:Node.cpp:885
      if(_Bool32ToCbool(Uh_5tlreg41871, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:153: 			ew.swap(0,1);
          UlamRef<EC> Uh_3tur41874(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41875 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41876 = _Int32ToUnsigned32(Uh_5tlreg41875, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41877(Uh_5tlreg41876); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41878 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41879 = _Int32ToUnsigned32(Uh_5tlreg41878, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval41880(Uh_5tlreg41879); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10111b<EC> Uh_5tlval41882 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur41874, Uh_5tlval41877, Uh_5tlval41880); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg41883 = Uh_5tlval41882.read(); //gcnl:Node.cpp:1156
        }
      } // end if
    }

  } // Uf_9213whetherToMove



//! Nucleus.ulam:157: 	Bool geneCheck(){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102717Nucleus10<EC>::Uf_919geneCheck(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
    {

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
      const u32 Uh_5tlreg41884 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41885 = _Int32ToUnsigned32(Uh_5tlreg41884, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41885); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
      while(true)
      {
        const u32 Uh_5tlreg41886 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41888 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41889 = _Unsigned32ToInt32(Uh_5tlreg41888, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41890 = _BinOpCompareLessEqualInt32(Uh_5tlreg41889, Uh_5tlreg41886, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg41890, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
        {

//! Nucleus.ulam:159: 			Atom a = dt.findSeqno(i, id);
          UlamRef<EC> Uh_3tur41892(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41894 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval41895(Uh_5tlreg41894); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41897 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval41898(Uh_5tlreg41897); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval41900 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur41892, Uh_5tlval41895, Uh_5tlval41898); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval41900.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:160: 			if(a as Gene){
          {

//! Nucleus.ulam:160: 			if(a as Gene){
            const T Uh_3tut41902 = Uv_1a.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg41903 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41902); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg41903, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:160: 			if(a as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval41904 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval41904, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41904.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:161: 				return true;
                const u32 Uh_5tlreg41905 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval41906(Uh_5tlreg41905); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41906); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }
        }

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
Ul_214endcontrolloop210:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
        const u32 Uh_5tlreg41907 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg41908 = _Int32ToUnsigned32(Uh_5tlreg41907, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg41910 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg41911 = _BinOpAddUnsigned32(Uh_5tlreg41910, Uh_5tlreg41908, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg41911); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Nucleus.ulam:164: 		return false;
    const u32 Uh_5tlreg41912 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval41913(Uh_5tlreg41912); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41913); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919geneCheck


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102717Nucleus10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10106Random10", "r", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_10104Cell10", "cell", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 3: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 4: { static UlamClassDataMemberInfo i("Uq_1010919SiteUtils10", "su", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 5: { static UlamClassDataMemberInfo i("Uq_10109211ClusterByID10", "cl", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 6: { static UlamClassDataMemberInfo i("Uq_10109212DecisionTree10", "dt", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 7: { static UlamClassDataMemberInfo i("Ut_102101u", "id", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 8: { static UlamClassDataMemberInfo i("Ut_102101u", "parent1id", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 9: { static UlamClassDataMemberInfo i("Ut_102101u", "parent2id", 20u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 10: { static UlamClassDataMemberInfo i("Ut_10111b", "reproducing", 30u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 11: { static UlamClassDataMemberInfo i("Ut_10171u", "refractoryPeriod", 31u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 12: { static UlamClassDataMemberInfo i("Ut_102101u", "lifespan", 38u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 13: { static UlamClassDataMemberInfo i("Ut_10111b", "move", 48u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 14: { static UlamClassDataMemberInfo i("Ut_10161u", "comIn", 49u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 15: { static UlamClassDataMemberInfo i("Ut_10161u", "comOut", 55u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 16: { static UlamClassDataMemberInfo i("Ut_102101u", "childID", 61u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102717Nucleus10<EC>::GetDataMemberCount() const
  {
    return 17; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102717Nucleus10<EC>::GetMangledClassName() const
  {
    return "Ue_102717Nucleus10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102717Nucleus10<EC>::GetClassLength( ) const
  {
    return 71; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102717Nucleus10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102717Nucleus10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102717Nucleus10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102717Nucleus10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102717Nucleus10<EC>::Uf_6behave10) &Ue_102717Nucleus10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Ue_102717Nucleus10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Ue_102717Nucleus10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102717Nucleus10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102717Nucleus10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2404
  } //isMethod

  template<class EC>
  const u32 Ue_102717Nucleus10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2442
  } //ReadTypeField

  template<class EC>
  void Ue_102717Nucleus10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2464
  } //WriteTypeField

} //MFM

