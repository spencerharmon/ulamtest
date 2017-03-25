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
    const u32 Uh_5tlreg42838 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42839 = _Int32ToUnsigned32(Uh_5tlreg42838, 32, 10); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42841 = UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42842 = _BinOpAddUnsigned32(Uh_5tlreg42841, Uh_5tlreg42839, 10); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42842); //gcnl:Node.cpp:885

//! Nucleus.ulam:173: 		--refractoryPeriod;
    const u32 Uh_5tlreg42843 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42844 = _Int32ToUnsigned32(Uh_5tlreg42843, 32, 7); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42846 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42847 = _BinOpSubtractUnsigned32(Uh_5tlreg42846, Uh_5tlreg42844, 7); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42847); //gcnl:Node.cpp:885

//! Nucleus.ulam:175: 		if(refractoryPeriod < refractoryPeriod.maxof-20){
    {

//! Nucleus.ulam:175: 		if(refractoryPeriod < refractoryPeriod.maxof-20){
      const u32 Uh_5tlreg42848 = 107; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42850 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42851 = _Unsigned32ToInt32(Uh_5tlreg42850, 7, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42852 = _BinOpCompareLessThanInt32(Uh_5tlreg42851, Uh_5tlreg42848, 9); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42852, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:176: 			reproducing = false;
          const u32 Uh_5tlreg42853 = 0u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42853); //gcnl:Node.cpp:885

//! Nucleus.ulam:177: 			childID = 0;
          const u32 Uh_5tlreg42855 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42856 = _Int32ToUnsigned32(Uh_5tlreg42855, 2, 10); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42856); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! Nucleus.ulam:179: 		if(!dieOfOldAge()){
    {

//! Nucleus.ulam:179: 		if(!dieOfOldAge()){
      const Ui_Ut_10111b<EC> Uh_5tlval42860 = THE_INSTANCE.Uf_9211dieOfOldAge(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg42861 = Uh_5tlval42860.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg42862 = _LogicalBangBool32(Uh_5tlreg42861, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg42862, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:183: 			cl.bringGenesCloser(id,self);
          UlamRef<EC> Uh_3tur42864(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42866 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval42867(Uh_5tlreg42866); //func arg& //gcnl:Node.cpp:1128
          const T Uh_3tut42869 = UlamRef<EC>(ur, 0u, 71u, &Ue_102717Nucleus10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
          Ui_Ut_102961a<EC> Uh_5tuval42870(Uh_3tut42869); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10111b<EC> Uh_5tlval42872 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9216bringGenesCloser(uc, Uh_3tur42864, Uh_5tlval42867, Uh_5tuval42870); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg42873 = Uh_5tlval42872.read(); //gcnl:Node.cpp:1156

//! Nucleus.ulam:184: 			dontStepOnEggs();
          THE_INSTANCE.Uf_9214dontStepOnEggs(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:188: 			Atom movement = dt.findSeqno((Seqno)1, id);
          UlamRef<EC> Uh_3tur42877(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42878 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42879 = _Int32ToUnsigned32(Uh_5tlreg42878, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42880(Uh_5tlreg42879); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42882 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval42883(Uh_5tlreg42882); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval42885 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur42877, Uh_5tlval42880, Uh_5tlval42883); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_8movement(Uh_5tuval42885.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:189: 			if(movement as Gene){
          {

//! Nucleus.ulam:189: 			if(movement as Gene){
            const T Uh_3tut42887 = Uv_8movement.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42888 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42887); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42888, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:189: 			if(movement as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval42889 = Uv_8movement; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_8movement(Uh_5tuval42889, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42889.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:190: 				if(r.oneIn((Unsigned)(movement.value + 1))){ //+1 because oneIn(0) causes failure.
                {

//! Nucleus.ulam:190: 				if(r.oneIn((Unsigned)(movement.value + 1))){ //+1 because oneIn(0) causes failure.
                  UlamRef<EC> Uh_3tur42891(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg42892 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg42893 = _Int32ToInt32(Uh_5tlreg42892, 2, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg42896 = UlamRef<EC>(Uv_8movement, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg42897 = _Unsigned32ToInt32(Uh_5tlreg42896, 6, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg42898 = _BinOpAddInt32(Uh_5tlreg42897, Uh_5tlreg42893, 8); //gcnl:NodeBinaryOp.cpp:719
                  const u32 Uh_5tlreg42899 = _Int32ToUnsigned32(Uh_5tlreg42898, 8, 32); //gcnl:NodeCast.cpp:723
                  Ui_Ut_102321u<EC> Uh_5tlval42900(Uh_5tlreg42899); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval42902 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42891, Uh_5tlval42900); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg42903 = Uh_5tlval42902.read(); //gcnl:Node.cpp:1156
                  if(_Bool32ToCbool(Uh_5tlreg42903, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:191: 					move = true;
                      const u32 Uh_5tlreg42904 = 1u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42904); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! Nucleus.ulam:194: 			Atom com = dt.findSeqno((Seqno)2, id);
          UlamRef<EC> Uh_3tur42907(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42908 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42909 = _Int32ToUnsigned32(Uh_5tlreg42908, 3, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42910(Uh_5tlreg42909); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42912 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval42913(Uh_5tlreg42912); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval42915 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur42907, Uh_5tlval42910, Uh_5tlval42913); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_3com(Uh_5tuval42915.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:195: 			if(com as Gene){
          {

//! Nucleus.ulam:195: 			if(com as Gene){
            const T Uh_3tut42917 = Uv_3com.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42918 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42917); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42918, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:195: 			if(com as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval42919 = Uv_3com; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_3com(Uh_5tuval42919, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42919.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:196: 				comOut = com.value;
                const u32 Uh_5tlreg42922 = UlamRef<EC>(Uv_3com, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 55u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42922); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! Nucleus.ulam:198: 			Atom reproduce = dt.findSeqno((Seqno)3, id);
          UlamRef<EC> Uh_3tur42925(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42926 = 3; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42927 = _Int32ToUnsigned32(Uh_5tlreg42926, 3, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42928(Uh_5tlreg42927); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42930 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval42931(Uh_5tlreg42930); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval42933 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur42925, Uh_5tlval42928, Uh_5tlval42931); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_919reproduce(Uh_5tuval42933.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:199: 			if(reproduce as Gene){
          {

//! Nucleus.ulam:199: 			if(reproduce as Gene){
            const T Uh_3tut42935 = Uv_919reproduce.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42936 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42935); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42936, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:199: 			if(reproduce as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval42937 = Uv_919reproduce; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_919reproduce(Uh_5tuval42937, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42937.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:200: 				if(!r.oneIn((Unsigned)(reproduce.value + 1))){
                {

//! Nucleus.ulam:200: 				if(!r.oneIn((Unsigned)(reproduce.value + 1))){
                  UlamRef<EC> Uh_3tur42939(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg42940 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg42941 = _Int32ToInt32(Uh_5tlreg42940, 2, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg42944 = UlamRef<EC>(Uv_919reproduce, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg42945 = _Unsigned32ToInt32(Uh_5tlreg42944, 6, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg42946 = _BinOpAddInt32(Uh_5tlreg42945, Uh_5tlreg42941, 8); //gcnl:NodeBinaryOp.cpp:719
                  const u32 Uh_5tlreg42947 = _Int32ToUnsigned32(Uh_5tlreg42946, 8, 32); //gcnl:NodeCast.cpp:723
                  Ui_Ut_102321u<EC> Uh_5tlval42948(Uh_5tlreg42947); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval42950 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42939, Uh_5tlval42948); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg42951 = Uh_5tlval42950.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg42952 = _LogicalBangBool32(Uh_5tlreg42951, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg42952, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:201: 					maybeReproduce();
                      THE_INSTANCE.Uf_9214maybeReproduce(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
                    }
                  } // end if
                }
              }
            } // end if
          }

//! Nucleus.ulam:204: 			whetherToMove();
          THE_INSTANCE.Uf_9213whetherToMove(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
        }
      } // end if
    }

  } // Uf_6behave



//! Nucleus.ulam:46: 	Bool dieOfOldAge(){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102717Nucleus10<EC>::Uf_9211dieOfOldAge(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:47: 		if(lifespan == lifespan.maxof){
    {

//! Nucleus.ulam:47: 		if(lifespan == lifespan.maxof){
      const u32 Uh_5tlreg42957 = 1023u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42959 = UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42960 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42959, Uh_5tlreg42957, 10); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42960, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:48: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:49: 			ew[0] = e;
          const T Uh_3tut42962 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur42964(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42965 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42966 = _Int32ToUnsigned32(Uh_5tlreg42965, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42967(Uh_5tlreg42966); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval42969 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42964, Uh_5tlval42967); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval42969.WriteAtom(Uh_3tut42962); //write into atomof ref //gcnl:Node.cpp:980

//! Nucleus.ulam:50: 			return true;
          const u32 Uh_5tlreg42970 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42971(Uh_5tlreg42970); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42971); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! Nucleus.ulam:53: 			return false;
          const u32 Uh_5tlreg42972 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42973(Uh_5tlreg42972); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42973); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9211dieOfOldAge



//! Nucleus.ulam:56: 	Bool notIncest(Atom mate){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102717Nucleus10<EC>::Uf_919notIncest(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4mate) const
  {

//! Nucleus.ulam:57: 		if(mate as Nucleus){
    {

//! Nucleus.ulam:57: 		if(mate as Nucleus){
      const T Uh_3tut42975 = Uv_4mate.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42976 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42975); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg42976, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:57: 		if(mate as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval42977 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval42977, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42977.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:58: 			if(parent1id == mate.parent1id || 
          {

//! Nucleus.ulam:58: 			if(parent1id == mate.parent1id || 
            u32 Uh_5tlreg42978 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42979 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42980 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42981 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42982 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42983 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42984 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42985 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg42988 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42990 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg42991 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42990, Uh_5tlreg42988, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(!_Bool32ToCbool(Uh_5tlreg42991, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg42994 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg42996 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg42997 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42996, Uh_5tlreg42994, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42985 = Uh_5tlreg42997; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42985 = Uh_5tlreg42991; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42985, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43000 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43002 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43003 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43002, Uh_5tlreg43000, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42984 = Uh_5tlreg43003; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42984 = Uh_5tlreg42985; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42984, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43006 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43008 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43009 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43008, Uh_5tlreg43006, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42983 = Uh_5tlreg43009; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42983 = Uh_5tlreg42984; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42983, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43012 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43014 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43015 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43014, Uh_5tlreg43012, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42982 = Uh_5tlreg43015; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42982 = Uh_5tlreg42983; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42982, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43018 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43020 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43021 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43020, Uh_5tlreg43018, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42981 = Uh_5tlreg43021; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42981 = Uh_5tlreg42982; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42981, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43024 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43026 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43027 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43026, Uh_5tlreg43024, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42980 = Uh_5tlreg43027; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42980 = Uh_5tlreg42981; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42980, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43030 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43032 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43033 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43032, Uh_5tlreg43030, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42979 = Uh_5tlreg43033; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42979 = Uh_5tlreg42980; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42979, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43036 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43038 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43039 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43038, Uh_5tlreg43036, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42978 = Uh_5tlreg43039; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42978 = Uh_5tlreg42979; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42978, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:67: 				return false;
                const u32 Uh_5tlreg43040 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval43041(Uh_5tlreg43040); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval43041); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }
        }
      } // end if
      else
      {
        {

//! Nucleus.ulam:71: 			return true;
          const u32 Uh_5tlreg43042 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval43043(Uh_5tlreg43042); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43043); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

//! Nucleus.ulam:74: 		return true;
    const u32 Uh_5tlreg43044 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval43045(Uh_5tlreg43044); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43045); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919notIncest



//! Nucleus.ulam:76: 	Void makeChildNucleus(Atom mate){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9216makeChildNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4mate) const
  {

//! Nucleus.ulam:77: 		childID = cell.genID();
    UlamRef<EC> Uh_3tur43047(ur, 0u, 0u, &Uq_10104Cell10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102101u<EC> Uh_5tlval43049 = Uq_10104Cell10<EC>::THE_INSTANCE.Uf_5genID(uc, Uh_3tur43047); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43050 = Uh_5tlval43049.read(); //gcnl:Node.cpp:1156
    UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43050); //gcnl:Node.cpp:885

//! Nucleus.ulam:78: 		Nucleus child;
    Ui_Ue_102717Nucleus10<EC> Uv_5child; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:79: 		child.parent1id = id;
    const u32 Uh_5tlreg43053 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(35u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43053); //gcnl:Node.cpp:885

//! Nucleus.ulam:80: 		child.id = childID;
    const u32 Uh_5tlreg43057 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43057); //gcnl:Node.cpp:885

//! Nucleus.ulam:82: 		if(mate as Nucleus){
    {

//! Nucleus.ulam:82: 		if(mate as Nucleus){
      const T Uh_3tut43061 = Uv_4mate.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43062 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43061); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43062, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:82: 		if(mate as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval43063 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval43063, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43063.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:83: 			mate.childID = childID;
          const u32 Uh_5tlreg43065 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          UlamRef<EC>(Uv_4mate, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43065); //gcnl:Node.cpp:885

//! Nucleus.ulam:84: 			mate.reproducing = true;
          const u32 Uh_5tlreg43068 = 1u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43068); //gcnl:Node.cpp:885

//! Nucleus.ulam:85: 			child.parent2id = mate.id;
          const u32 Uh_5tlreg43073 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          UlamRef<EC>(45u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43073); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! Nucleus.ulam:87: 		EggShell eg;
    Ui_Ue_102158EggShell10<EC> Uv_2eg; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:88: 		eg.id = childID;
    const u32 Uh_5tlreg43077 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43077); //gcnl:Node.cpp:885

//! Nucleus.ulam:89: 		eg.first = true;
    const u32 Uh_5tlreg43080 = 1u; //gcnl:NodeTerminal.cpp:721
    UlamRef<EC>(39u, 1u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43080); //gcnl:Node.cpp:885

//! Nucleus.ulam:90: 		SiteNum emptySlot = cl.emptySlotNearMe();
    UlamRef<EC> Uh_3tur43084(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10161u<EC> Uh_5tlval43086 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur43084); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43087 = Uh_5tlval43086.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_919emptySlot(Uh_5tlreg43087); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:92: 		if(emptySlot != 0){
    {

//! Nucleus.ulam:92: 		if(emptySlot != 0){
      const u32 Uh_5tlreg43088 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43089 = _Int32ToInt32(Uh_5tlreg43088, 2, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43091 = Uv_919emptySlot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43092 = _Unsigned32ToInt32(Uh_5tlreg43091, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43093 = _BinOpCompareNotEqInt32(Uh_5tlreg43092, Uh_5tlreg43089, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43093, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:93: 			ew[emptySlot] = eg;
          const T Uh_3tut43095 = Uv_2eg.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur43097(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43099 = Uv_919emptySlot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43100(Uh_5tlreg43099); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval43102 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43097, Uh_5tlval43100); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval43102.WriteAtom(Uh_3tut43095); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! Nucleus.ulam:95: 		su.setBase(child);
    UlamRef<EC> Uh_3tur43104(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut43106 = Uv_5child.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval43107(Uh_3tut43106); //func arg& //gcnl:Node.cpp:1128
    Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7setBase(uc, Uh_3tur43104, Uh_5tuval43107); //gcnl:NodeFunctionCall.cpp:1006

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
    UlamRef<EC> Uh_3tur43110(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur43110); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:102:                 Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur43113(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval43115 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur43113); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43116 = Uh_5tlval43115.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg43116); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:103:                 Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:104:                 ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur43118(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut43120 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval43121(Uh_3tut43120); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval43123 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur43118, Uh_5tuval43121); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43124 = Uh_5tlval43123.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg43124); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:106:                 sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur43126(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43128 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43129(Uh_5tlreg43128); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43131 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval43132(Uh_5tlreg43131); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur43126, Uh_5tlval43129, Uh_5tlval43132); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:107:                 sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur43135(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43137 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43138(Uh_5tlreg43137); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43140 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval43141(Uh_5tlreg43140); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur43135, Uh_5tlval43138, Uh_5tlval43141); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:108: 		sv.neighborCell(cNucleus);
    UlamRef<EC> Uh_3tur43144(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43146 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43147(Uh_5tlreg43146); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_9212neighborCell(uc, Uh_3tur43144, Uh_5tlval43147); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:110:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur43150(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval43151; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval43151); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43153(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43154(Uh_5tlval43153); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43150, Uh_6tlref43154); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:112:                 SiteNum slot = ws.getSiteNum(cNucleus);
    UlamRef<EC> Uh_3tur43157(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43159 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43160(Uh_5tlreg43159); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43162 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43157, Uh_5tlval43160); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43163 = Uh_5tlval43162.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg43163); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:113: 		if(slot <= 40){
    {

//! Nucleus.ulam:113: 		if(slot <= 40){
      const u32 Uh_5tlreg43164 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43166 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43167 = _Unsigned32ToInt32(Uh_5tlreg43166, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43168 = _BinOpCompareLessEqualInt32(Uh_5tlreg43167, Uh_5tlreg43164, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43168, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:114: 	                Atom mate = ew[slot];
          UlamRef<EC> Uh_3tur43170(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43172 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43173(Uh_5tlreg43172); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval43175 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43170, Uh_5tlval43173); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4mate(Uh_5tuval43175.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:116: 			if(mate as Nucleus){
          {

//! Nucleus.ulam:116: 			if(mate as Nucleus){
            const T Uh_3tut43177 = Uv_4mate.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43178 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43177); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg43178, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:116: 			if(mate as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval43179 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval43179, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43179.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:117: 				if(notIncest(mate)){
                {

//! Nucleus.ulam:117: 				if(notIncest(mate)){
                  const T Uh_3tut43182 = Uv_4mate.read(); //gcnl:Node.cpp:691
                  Ui_Ut_102961a<EC> Uh_5tuval43183(Uh_3tut43182); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval43185 = THE_INSTANCE.Uf_919notIncest(uc, ur, Uh_5tuval43183); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg43186 = Uh_5tlval43185.read(); //gcnl:Node.cpp:1156
                  if(_Bool32ToCbool(Uh_5tlreg43186, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:118: 					if(refractoryPeriod == 0){
                      {

//! Nucleus.ulam:118: 					if(refractoryPeriod == 0){
                        const u32 Uh_5tlreg43187 = 0; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg43188 = _Int32ToInt32(Uh_5tlreg43187, 2, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg43190 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                        const u32 Uh_5tlreg43191 = _Unsigned32ToInt32(Uh_5tlreg43190, 7, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg43192 = _BinOpCompareEqEqInt32(Uh_5tlreg43191, Uh_5tlreg43188, 8); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43192, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Nucleus.ulam:119: 						if(!mate.reproducing){
                            {

//! Nucleus.ulam:119: 						if(!mate.reproducing){
                              const u32 Uh_5tlreg43195 = UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg43196 = _LogicalBangBool32(Uh_5tlreg43195, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg43196, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! Nucleus.ulam:120: 							makeChildNucleus(mate);
                                  const T Uh_3tut43199 = Uv_4mate.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102961a<EC> Uh_5tuval43200(Uh_3tut43199); //func arg& //gcnl:Node.cpp:1128
                                  THE_INSTANCE.Uf_9216makeChildNucleus(uc, ur, Uh_5tuval43200); //gcnl:NodeFunctionCall.cpp:1006
                                }
                              } // end if
                            }

//! Nucleus.ulam:122: 						refractoryPeriod = Unsigned(7).maxof;
                            const u32 Uh_5tlreg43202 = 127u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43202); //gcnl:Node.cpp:885

//! Nucleus.ulam:123: 						reproducing = true;
                            const u32 Uh_5tlreg43204 = 1u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43204); //gcnl:Node.cpp:885
                          }
                        } // end if
                      }
                    }
                  } // end if
                }

//! Nucleus.ulam:126: 				if(parent1id == 0 && parent2id == 0){
                {

//! Nucleus.ulam:126: 				if(parent1id == 0 && parent2id == 0){
                  u32 Uh_5tlreg43206 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg43207 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg43208 = _Int32ToInt32(Uh_5tlreg43207, 2, 11); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg43210 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg43211 = _Unsigned32ToInt32(Uh_5tlreg43210, 10, 11); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg43212 = _BinOpCompareEqEqInt32(Uh_5tlreg43211, Uh_5tlreg43208, 11); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg43212, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43213 = 0; //gcnl:NodeTerminal.cpp:721
                    const u32 Uh_5tlreg43214 = _Int32ToInt32(Uh_5tlreg43213, 2, 11); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg43216 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43217 = _Unsigned32ToInt32(Uh_5tlreg43216, 10, 11); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg43218 = _BinOpCompareEqEqInt32(Uh_5tlreg43217, Uh_5tlreg43214, 11); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43206 = Uh_5tlreg43218; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43206, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:127: 					if(refractoryPeriod == 0){
                      {

//! Nucleus.ulam:127: 					if(refractoryPeriod == 0){
                        const u32 Uh_5tlreg43219 = 0; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg43220 = _Int32ToInt32(Uh_5tlreg43219, 2, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg43222 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                        const u32 Uh_5tlreg43223 = _Unsigned32ToInt32(Uh_5tlreg43222, 7, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg43224 = _BinOpCompareEqEqInt32(Uh_5tlreg43223, Uh_5tlreg43220, 8); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43224, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Nucleus.ulam:128: 						if(!mate.reproducing){
                            {

//! Nucleus.ulam:128: 						if(!mate.reproducing){
                              const u32 Uh_5tlreg43227 = UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg43228 = _LogicalBangBool32(Uh_5tlreg43227, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg43228, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! Nucleus.ulam:129: 							makeChildNucleus(mate);
                                  const T Uh_3tut43231 = Uv_4mate.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102961a<EC> Uh_5tuval43232(Uh_3tut43231); //func arg& //gcnl:Node.cpp:1128
                                  THE_INSTANCE.Uf_9216makeChildNucleus(uc, ur, Uh_5tuval43232); //gcnl:NodeFunctionCall.cpp:1006
                                }
                              } // end if
                            }

//! Nucleus.ulam:131: 						reproducing = true;
                            const u32 Uh_5tlreg43234 = 1u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43234); //gcnl:Node.cpp:885

//! Nucleus.ulam:132: 						refractoryPeriod = Unsigned(7).maxof;
                            const u32 Uh_5tlreg43236 = 127u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43236); //gcnl:Node.cpp:885
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
    UlamRef<EC> Uh_3tur43239(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval43241 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur43239); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43241.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:140: 		if(a as Nucleus){
    {

//! Nucleus.ulam:140: 		if(a as Nucleus){
      const T Uh_3tut43243 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43244 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43243); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43244, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:140: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval43245 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval43245, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43245.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:141: 			if(a.id == childID){
          {

//! Nucleus.ulam:141: 			if(a.id == childID){
            const u32 Uh_5tlreg43247 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg43250 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43251 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43250, Uh_5tlreg43247, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43251, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:142: 				move = true;
                const u32 Uh_5tlreg43252 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43252); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! Nucleus.ulam:145: 		if(a as Gene){
    {

//! Nucleus.ulam:145: 		if(a as Gene){
      const T Uh_3tut43255 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43256 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43255); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43256, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:145: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval43257 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval43257, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43257.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:146: 			if(a.id == childID){
          {

//! Nucleus.ulam:146: 			if(a.id == childID){
            const u32 Uh_5tlreg43259 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg43262 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43263 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43262, Uh_5tlreg43259, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43263, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:147: 				move = true;
                const u32 Uh_5tlreg43264 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43264); //gcnl:Node.cpp:885
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
      const u32 Uh_5tlreg43266 = 1u; //gcnl:NodeTerminal.cpp:721
      UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43266); //gcnl:Node.cpp:885
      if(_Bool32ToCbool(Uh_5tlreg43266, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:153: 			ew.swap(0,1);
          UlamRef<EC> Uh_3tur43269(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43270 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43271 = _Int32ToUnsigned32(Uh_5tlreg43270, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval43272(Uh_5tlreg43271); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg43273 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43274 = _Int32ToUnsigned32(Uh_5tlreg43273, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval43275(Uh_5tlreg43274); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10111b<EC> Uh_5tlval43277 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43269, Uh_5tlval43272, Uh_5tlval43275); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg43278 = Uh_5tlval43277.read(); //gcnl:Node.cpp:1156
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
      const u32 Uh_5tlreg43279 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43280 = _Int32ToUnsigned32(Uh_5tlreg43279, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43280); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
      while(true)
      {
        const u32 Uh_5tlreg43281 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43283 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43284 = _Unsigned32ToInt32(Uh_5tlreg43283, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43285 = _BinOpCompareLessEqualInt32(Uh_5tlreg43284, Uh_5tlreg43281, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43285, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
        {

//! Nucleus.ulam:159: 			Atom a = dt.findSeqno(i, id);
          UlamRef<EC> Uh_3tur43287(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43289 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43290(Uh_5tlreg43289); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg43292 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval43293(Uh_5tlreg43292); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval43295 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur43287, Uh_5tlval43290, Uh_5tlval43293); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43295.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:160: 			if(a as Gene){
          {

//! Nucleus.ulam:160: 			if(a as Gene){
            const T Uh_3tut43297 = Uv_1a.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43298 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43297); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg43298, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:160: 			if(a as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval43299 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval43299, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43299.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:161: 				return true;
                const u32 Uh_5tlreg43300 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval43301(Uh_5tlreg43300); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval43301); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }
        }

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
Ul_214endcontrolloop210:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Nucleus.ulam:158: 		for(Seqno i = 1; i <= 40; ++i){
        const u32 Uh_5tlreg43302 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43303 = _Int32ToUnsigned32(Uh_5tlreg43302, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43305 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43306 = _BinOpAddUnsigned32(Uh_5tlreg43305, Uh_5tlreg43303, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg43306); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Nucleus.ulam:164: 		return false;
    const u32 Uh_5tlreg43307 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval43308(Uh_5tlreg43307); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43308); //gcnl:NodeReturnStatement.cpp:343

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

