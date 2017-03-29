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
#include "Ue_102188EggShell10.h"
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


//! Nucleus.ulam:179: 	Void behave(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Nucleus.ulam:181: 		if(!geneCheck()){
    {

//! Nucleus.ulam:181: 		if(!geneCheck()){
      const Ui_Ut_10111b<EC> Uh_5tlval42836 = THE_INSTANCE.Uf_919geneCheck(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg42837 = Uh_5tlval42836.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg42838 = _LogicalBangBool32(Uh_5tlreg42837, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg42838, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:182: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:183: 			ew[0] = e;
          const T Uh_3tut42840 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur42842(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42843 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42844 = _Int32ToUnsigned32(Uh_5tlreg42843, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42845(Uh_5tlreg42844); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval42847 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42842, Uh_5tlval42845); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval42847.WriteAtom(Uh_3tut42840); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! Nucleus.ulam:185: 		++lifespan;
    const u32 Uh_5tlreg42848 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42849 = _Int32ToUnsigned32(Uh_5tlreg42848, 32, 10); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42851 = UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42852 = _BinOpAddUnsigned32(Uh_5tlreg42851, Uh_5tlreg42849, 10); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42852); //gcnl:Node.cpp:885

//! Nucleus.ulam:186: 		--refractoryPeriod;
    const u32 Uh_5tlreg42853 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42854 = _Int32ToUnsigned32(Uh_5tlreg42853, 32, 7); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42856 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42857 = _BinOpSubtractUnsigned32(Uh_5tlreg42856, Uh_5tlreg42854, 7); //gcnl:NodeBinaryOpEqualArith.cpp:128
    UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42857); //gcnl:Node.cpp:885

//! Nucleus.ulam:188: 		if(refractoryPeriod < refractoryPeriod.maxof-20){
    {

//! Nucleus.ulam:188: 		if(refractoryPeriod < refractoryPeriod.maxof-20){
      const u32 Uh_5tlreg42858 = 107; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42860 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42861 = _Unsigned32ToInt32(Uh_5tlreg42860, 7, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42862 = _BinOpCompareLessThanInt32(Uh_5tlreg42861, Uh_5tlreg42858, 9); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42862, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:189: 			reproducing = false;
          const u32 Uh_5tlreg42863 = 0u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42863); //gcnl:Node.cpp:885

//! Nucleus.ulam:190: 			childID = 0;
          const u32 Uh_5tlreg42865 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42866 = _Int32ToUnsigned32(Uh_5tlreg42865, 2, 10); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42866); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! Nucleus.ulam:192: 		if(!dieOfOldAge()){
    {

//! Nucleus.ulam:192: 		if(!dieOfOldAge()){
      const Ui_Ut_10111b<EC> Uh_5tlval42870 = THE_INSTANCE.Uf_9211dieOfOldAge(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg42871 = Uh_5tlval42870.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg42872 = _LogicalBangBool32(Uh_5tlreg42871, 1); //gcnl:NodeUnaryOp.cpp:449
      if(_Bool32ToCbool(Uh_5tlreg42872, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:196: 			if(reproducing){
          {

//! Nucleus.ulam:196: 			if(reproducing){
            const u32 Uh_5tlreg42874 = UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            if(_Bool32ToCbool(Uh_5tlreg42874, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:197: 				layEgg();
                THE_INSTANCE.Uf_6layEgg(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
              }
            } // end if
          }

//! Nucleus.ulam:199: 			cl.bringGenesCloser(id,self);
          UlamRef<EC> Uh_3tur42878(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42880 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval42881(Uh_5tlreg42880); //func arg& //gcnl:Node.cpp:1128
          const T Uh_3tut42883 = UlamRef<EC>(ur, 0u, 71u, &Ue_102717Nucleus10<EC>::THE_INSTANCE, UlamRef<EC>::ELEMENTAL).ReadAtom(); //gcnl:Node.cpp:714
          Ui_Ut_102961a<EC> Uh_5tuval42884(Uh_3tut42883); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10111b<EC> Uh_5tlval42886 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9216bringGenesCloser(uc, Uh_3tur42878, Uh_5tlval42881, Uh_5tuval42884); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg42887 = Uh_5tlval42886.read(); //gcnl:Node.cpp:1156

//! Nucleus.ulam:200: 			dontStepOnEggs();
          THE_INSTANCE.Uf_9214dontStepOnEggs(uc, ur); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:204: 			Atom movement = dt.findSeqno((Seqno)1, id);
          UlamRef<EC> Uh_3tur42891(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42892 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42893 = _Int32ToUnsigned32(Uh_5tlreg42892, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42894(Uh_5tlreg42893); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42896 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval42897(Uh_5tlreg42896); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval42899 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur42891, Uh_5tlval42894, Uh_5tlval42897); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_8movement(Uh_5tuval42899.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:205: 			if(movement as Gene){
          {

//! Nucleus.ulam:205: 			if(movement as Gene){
            const T Uh_3tut42901 = Uv_8movement.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42902 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42901); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42902, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:205: 			if(movement as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval42903 = Uv_8movement; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_8movement(Uh_5tuval42903, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42903.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:206: 				if(r.oneIn((Unsigned)(movement.value + 1))){ //+1 because oneIn(0) causes failure.
                {

//! Nucleus.ulam:206: 				if(r.oneIn((Unsigned)(movement.value + 1))){ //+1 because oneIn(0) causes failure.
                  UlamRef<EC> Uh_3tur42905(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg42906 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg42907 = _Int32ToInt32(Uh_5tlreg42906, 2, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg42910 = UlamRef<EC>(Uv_8movement, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg42911 = _Unsigned32ToInt32(Uh_5tlreg42910, 6, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg42912 = _BinOpAddInt32(Uh_5tlreg42911, Uh_5tlreg42907, 8); //gcnl:NodeBinaryOp.cpp:719
                  const u32 Uh_5tlreg42913 = _Int32ToUnsigned32(Uh_5tlreg42912, 8, 32); //gcnl:NodeCast.cpp:723
                  Ui_Ut_102321u<EC> Uh_5tlval42914(Uh_5tlreg42913); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval42916 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42905, Uh_5tlval42914); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg42917 = Uh_5tlval42916.read(); //gcnl:Node.cpp:1156
                  if(_Bool32ToCbool(Uh_5tlreg42917, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:207: 					move = true;
                      const u32 Uh_5tlreg42918 = 1u; //gcnl:NodeTerminal.cpp:721
                      UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42918); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! Nucleus.ulam:210: 			Atom com = dt.findSeqno((Seqno)2, id);
          UlamRef<EC> Uh_3tur42921(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42922 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42923 = _Int32ToUnsigned32(Uh_5tlreg42922, 3, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42924(Uh_5tlreg42923); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42926 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval42927(Uh_5tlreg42926); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval42929 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur42921, Uh_5tlval42924, Uh_5tlval42927); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_3com(Uh_5tuval42929.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:211: 			if(com as Gene){
          {

//! Nucleus.ulam:211: 			if(com as Gene){
            const T Uh_3tut42931 = Uv_3com.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42932 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42931); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42932, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:211: 			if(com as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval42933 = Uv_3com; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_3com(Uh_5tuval42933, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42933.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:212: 				comOut = com.value;
                const u32 Uh_5tlreg42936 = UlamRef<EC>(Uv_3com, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                UlamRef<EC>(ur, 55u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42936); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! Nucleus.ulam:214: 			Atom reproduce = dt.findSeqno((Seqno)3, id);
          UlamRef<EC> Uh_3tur42939(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42940 = 3; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42941 = _Int32ToUnsigned32(Uh_5tlreg42940, 3, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42942(Uh_5tlreg42941); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42944 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval42945(Uh_5tlreg42944); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval42947 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur42939, Uh_5tlval42942, Uh_5tlval42945); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_919reproduce(Uh_5tuval42947.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:215: 			if(reproduce as Gene){
          {

//! Nucleus.ulam:215: 			if(reproduce as Gene){
            const T Uh_3tut42949 = Uv_919reproduce.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42950 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42949); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg42950, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:215: 			if(reproduce as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval42951 = Uv_919reproduce; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_919reproduce(Uh_5tuval42951, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42951.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:216: 				if(!r.oneIn((Unsigned)(reproduce.value + 1))){
                {

//! Nucleus.ulam:216: 				if(!r.oneIn((Unsigned)(reproduce.value + 1))){
                  UlamRef<EC> Uh_3tur42953(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg42954 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg42955 = _Int32ToInt32(Uh_5tlreg42954, 2, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg42958 = UlamRef<EC>(Uv_919reproduce, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg42959 = _Unsigned32ToInt32(Uh_5tlreg42958, 6, 8); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg42960 = _BinOpAddInt32(Uh_5tlreg42959, Uh_5tlreg42955, 8); //gcnl:NodeBinaryOp.cpp:719
                  const u32 Uh_5tlreg42961 = _Int32ToUnsigned32(Uh_5tlreg42960, 8, 32); //gcnl:NodeCast.cpp:723
                  Ui_Ut_102321u<EC> Uh_5tlval42962(Uh_5tlreg42961); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval42964 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42953, Uh_5tlval42962); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg42965 = Uh_5tlval42964.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg42966 = _LogicalBangBool32(Uh_5tlreg42965, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg42966, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:217: 					maybeReproduce();
                      THE_INSTANCE.Uf_9214maybeReproduce(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
                    }
                  } // end if
                }
              }
            } // end if
          }

//! Nucleus.ulam:220: 			whetherToMove();
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
      const u32 Uh_5tlreg42971 = 1023u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42973 = UlamRef<EC>(ur, 38u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42974 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42973, Uh_5tlreg42971, 10); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42974, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:48: 			Empty e;
          Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:49: 			ew[0] = e;
          const T Uh_3tut42976 = Uv_1e.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur42978(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg42979 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42980 = _Int32ToUnsigned32(Uh_5tlreg42979, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval42981(Uh_5tlreg42980); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval42983 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42978, Uh_5tlval42981); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval42983.WriteAtom(Uh_3tut42976); //write into atomof ref //gcnl:Node.cpp:980

//! Nucleus.ulam:50: 			return true;
          const u32 Uh_5tlreg42984 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42985(Uh_5tlreg42984); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42985); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! Nucleus.ulam:53: 			return false;
          const u32 Uh_5tlreg42986 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42987(Uh_5tlreg42986); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42987); //gcnl:NodeReturnStatement.cpp:343
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
      const T Uh_3tut42989 = Uv_4mate.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42990 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut42989); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg42990, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:57: 		if(mate as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval42991 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval42991, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval42991.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:58: 			if(parent1id == mate.parent1id || 
          {

//! Nucleus.ulam:58: 			if(parent1id == mate.parent1id || 
            u32 Uh_5tlreg42992 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42993 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42994 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42995 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42996 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42997 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42998 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            u32 Uh_5tlreg42999 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg43002 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43004 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg43005 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43004, Uh_5tlreg43002, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(!_Bool32ToCbool(Uh_5tlreg43005, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43008 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43010 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43011 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43010, Uh_5tlreg43008, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42999 = Uh_5tlreg43011; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42999 = Uh_5tlreg43005; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42999, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43014 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43016 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43017 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43016, Uh_5tlreg43014, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42998 = Uh_5tlreg43017; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42998 = Uh_5tlreg42999; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42998, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43020 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43022 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43023 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43022, Uh_5tlreg43020, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42997 = Uh_5tlreg43023; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42997 = Uh_5tlreg42998; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42997, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43026 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43028 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43029 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43028, Uh_5tlreg43026, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42996 = Uh_5tlreg43029; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42996 = Uh_5tlreg42997; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42996, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43032 = UlamRef<EC>(Uv_4mate, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43034 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43035 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43034, Uh_5tlreg43032, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42995 = Uh_5tlreg43035; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42995 = Uh_5tlreg42996; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42995, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43038 = UlamRef<EC>(Uv_4mate, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43040 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43041 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43040, Uh_5tlreg43038, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42994 = Uh_5tlreg43041; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42994 = Uh_5tlreg42995; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42994, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43044 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43046 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43047 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43046, Uh_5tlreg43044, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42993 = Uh_5tlreg43047; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42993 = Uh_5tlreg42994; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(!_Bool32ToCbool(Uh_5tlreg42993, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              const u32 Uh_5tlreg43050 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43052 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
              const u32 Uh_5tlreg43053 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43052, Uh_5tlreg43050, 10); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg42992 = Uh_5tlreg43053; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42992 = Uh_5tlreg42993; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42992, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:67: 				return false;
                const u32 Uh_5tlreg43054 = 0u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval43055(Uh_5tlreg43054); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval43055); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }
        }
      } // end if
      else
      {
        {

//! Nucleus.ulam:71: 			return true;
          const u32 Uh_5tlreg43056 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval43057(Uh_5tlreg43056); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43057); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

//! Nucleus.ulam:74: 		return true;
    const u32 Uh_5tlreg43058 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval43059(Uh_5tlreg43058); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43059); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919notIncest



//! Nucleus.ulam:76: 	Void makeChildNucleus(Atom mate){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9216makeChildNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4mate) const
  {

//! Nucleus.ulam:77: 		childID = cell.genID();
    UlamRef<EC> Uh_3tur43061(ur, 0u, 0u, &Uq_10104Cell10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102101u<EC> Uh_5tlval43063 = Uq_10104Cell10<EC>::THE_INSTANCE.Uf_5genID(uc, Uh_3tur43061); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43064 = Uh_5tlval43063.read(); //gcnl:Node.cpp:1156
    UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43064); //gcnl:Node.cpp:885

//! Nucleus.ulam:78: 		Nucleus child;
    Ui_Ue_102717Nucleus10<EC> Uv_5child; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:79: 		child.parent1id = id;
    const u32 Uh_5tlreg43067 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(35u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43067); //gcnl:Node.cpp:885

//! Nucleus.ulam:80: 		child.id = childID;
    const u32 Uh_5tlreg43071 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43071); //gcnl:Node.cpp:885

//! Nucleus.ulam:82: 		if(mate as Nucleus){
    {

//! Nucleus.ulam:82: 		if(mate as Nucleus){
      const T Uh_3tut43075 = Uv_4mate.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43076 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43075); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43076, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:82: 		if(mate as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval43077 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval43077, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43077.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:83: 			mate.childID = childID;
          const u32 Uh_5tlreg43079 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          UlamRef<EC>(Uv_4mate, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43079); //gcnl:Node.cpp:885

//! Nucleus.ulam:84: 			mate.reproducing = true;
          const u32 Uh_5tlreg43082 = 1u; //gcnl:NodeTerminal.cpp:721
          UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43082); //gcnl:Node.cpp:885

//! Nucleus.ulam:85: 			child.parent2id = mate.id;
          const u32 Uh_5tlreg43087 = UlamRef<EC>(Uv_4mate, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          UlamRef<EC>(45u, 10u, Uv_5child, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43087); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! Nucleus.ulam:87: 		EggShell eg;
    Ui_Ue_102188EggShell10<EC> Uv_2eg; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:88: 		eg.id = childID;
    const u32 Uh_5tlreg43091 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43091); //gcnl:Node.cpp:885

//! Nucleus.ulam:89: 		eg.first = true;
    const u32 Uh_5tlreg43094 = 1u; //gcnl:NodeTerminal.cpp:721
    UlamRef<EC>(39u, 1u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43094); //gcnl:Node.cpp:885

//! Nucleus.ulam:90: 		for(Unsigned i; i < 2u; ++i){
    {

//! Nucleus.ulam:90: 		for(Unsigned i; i < 2u; ++i){
      Ui_Ut_102321u<EC> Uv_1i; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:90: 		for(Unsigned i; i < 2u; ++i){
      while(true)
      {
        const u32 Uh_5tlreg43097 = 2u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43098 = _Unsigned32ToUnsigned32(Uh_5tlreg43097, 2, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43100 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43101 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43100, Uh_5tlreg43098, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43101, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Nucleus.ulam:90: 		for(Unsigned i; i < 2u; ++i){
        {

//! Nucleus.ulam:91: 			SiteNum emptySlot = cl.emptySlotNearMe();
          UlamRef<EC> Uh_3tur43103(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const Ui_Ut_10161u<EC> Uh_5tlval43105 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur43103); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg43106 = Uh_5tlval43105.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uv_919emptySlot(Uh_5tlreg43106); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:92: 			if(emptySlot != 0){
          {

//! Nucleus.ulam:92: 			if(emptySlot != 0){
            const u32 Uh_5tlreg43107 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43108 = _Int32ToInt32(Uh_5tlreg43107, 2, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43110 = Uv_919emptySlot.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43111 = _Unsigned32ToInt32(Uh_5tlreg43110, 6, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43112 = _BinOpCompareNotEqInt32(Uh_5tlreg43111, Uh_5tlreg43108, 7); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43112, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:93: 				ew[emptySlot] = eg;
                const T Uh_3tut43114 = Uv_2eg.read(); //gcnl:Node.cpp:691
                UlamRef<EC> Uh_3tur43116(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43118 = Uv_919emptySlot.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval43119(Uh_5tlreg43118); //func arg& //gcnl:Node.cpp:1128
                Ui_Ut_r102961a<EC> Uh_5tuval43121 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43116, Uh_5tlval43119); //gcnl:NodeFunctionCall.cpp:1006
                Uh_5tuval43121.WriteAtom(Uh_3tut43114); //write into atomof ref //gcnl:Node.cpp:980
              }
            } // end if
          }
        }

//! Nucleus.ulam:90: 		for(Unsigned i; i < 2u; ++i){
Ul_214endcontrolloop210:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Nucleus.ulam:90: 		for(Unsigned i; i < 2u; ++i){
        const u32 Uh_5tlreg43122 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43123 = _Int32ToUnsigned32(Uh_5tlreg43122, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43125 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43126 = _BinOpAddUnsigned32(Uh_5tlreg43125, Uh_5tlreg43123, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg43126); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Nucleus.ulam:96: 		su.setBase(child);
    UlamRef<EC> Uh_3tur43128(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut43130 = Uv_5child.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval43131(Uh_3tut43130); //func arg& //gcnl:Node.cpp:1128
    Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7setBase(uc, Uh_3tur43128, Uh_5tuval43131); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_9216makeChildNucleus



//! Nucleus.ulam:98: 	Void maybeReproduce(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9214maybeReproduce(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:100:                 SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:101:                 WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:103:                 ws.resetCategories();
    UlamRef<EC> Uh_3tur43134(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur43134); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:104:                 Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur43137(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval43139 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur43137); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43140 = Uh_5tlval43139.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg43140); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:105:                 Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:106:                 ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur43142(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut43144 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval43145(Uh_3tut43144); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval43147 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur43142, Uh_5tuval43145); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43148 = Uh_5tlval43147.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg43148); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:108:                 sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur43150(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43152 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43153(Uh_5tlreg43152); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43155 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval43156(Uh_5tlreg43155); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur43150, Uh_5tlval43153, Uh_5tlval43156); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:109:                 sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur43159(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43161 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43162(Uh_5tlreg43161); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43164 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    Ui_Ut_102101u<EC> Uh_5tlval43165(Uh_5tlreg43164); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur43159, Uh_5tlval43162, Uh_5tlval43165); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:110: 		sv.neighborCell(cNucleus);
    UlamRef<EC> Uh_3tur43168(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43170 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43171(Uh_5tlreg43170); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_9212neighborCell(uc, Uh_3tur43168, Uh_5tlval43171); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:112:                 ws.scan(sv);
    UlamRef<EC> Uh_3tur43174(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval43175; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval43175); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43177(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43178(Uh_5tlval43177); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43174, Uh_6tlref43178); //gcnl:NodeFunctionCall.cpp:1006

//! Nucleus.ulam:114:                 SiteNum slot = ws.getSiteNum(cNucleus);
    UlamRef<EC> Uh_3tur43181(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43183 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43184(Uh_5tlreg43183); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43186 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43181, Uh_5tlval43184); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43187 = Uh_5tlval43186.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_4slot(Uh_5tlreg43187); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:115: 		if(slot <= 40){
    {

//! Nucleus.ulam:115: 		if(slot <= 40){
      const u32 Uh_5tlreg43188 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43190 = Uv_4slot.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43191 = _Unsigned32ToInt32(Uh_5tlreg43190, 6, 7); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43192 = _BinOpCompareLessEqualInt32(Uh_5tlreg43191, Uh_5tlreg43188, 7); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43192, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:116: 	                Atom mate = ew[slot];
          UlamRef<EC> Uh_3tur43194(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43196 = Uv_4slot.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43197(Uh_5tlreg43196); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval43199 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43194, Uh_5tlval43197); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4mate(Uh_5tuval43199.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:118: 			if(mate as Nucleus){
          {

//! Nucleus.ulam:118: 			if(mate as Nucleus){
            const T Uh_3tut43201 = Uv_4mate.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43202 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43201); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg43202, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:118: 			if(mate as Nucleus){
                Ui_Ut_102961a<EC> & Uh_5tuval43203 = Uv_4mate; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102717Nucleus10<EC> Uv_4mate(Uh_5tuval43203, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43203.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:119: 				if(notIncest(mate)){
                {

//! Nucleus.ulam:119: 				if(notIncest(mate)){
                  const T Uh_3tut43206 = Uv_4mate.read(); //gcnl:Node.cpp:691
                  Ui_Ut_102961a<EC> Uh_5tuval43207(Uh_3tut43206); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval43209 = THE_INSTANCE.Uf_919notIncest(uc, ur, Uh_5tuval43207); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg43210 = Uh_5tlval43209.read(); //gcnl:Node.cpp:1156
                  if(_Bool32ToCbool(Uh_5tlreg43210, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:120: 					if(refractoryPeriod == 0){
                      {

//! Nucleus.ulam:120: 					if(refractoryPeriod == 0){
                        const u32 Uh_5tlreg43211 = 0; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg43212 = _Int32ToInt32(Uh_5tlreg43211, 2, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg43214 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                        const u32 Uh_5tlreg43215 = _Unsigned32ToInt32(Uh_5tlreg43214, 7, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg43216 = _BinOpCompareEqEqInt32(Uh_5tlreg43215, Uh_5tlreg43212, 8); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43216, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Nucleus.ulam:121: 						if(!mate.reproducing){
                            {

//! Nucleus.ulam:121: 						if(!mate.reproducing){
                              const u32 Uh_5tlreg43219 = UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg43220 = _LogicalBangBool32(Uh_5tlreg43219, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg43220, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! Nucleus.ulam:122: 							makeChildNucleus(mate);
                                  const T Uh_3tut43223 = Uv_4mate.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102961a<EC> Uh_5tuval43224(Uh_3tut43223); //func arg& //gcnl:Node.cpp:1128
                                  THE_INSTANCE.Uf_9216makeChildNucleus(uc, ur, Uh_5tuval43224); //gcnl:NodeFunctionCall.cpp:1006
                                }
                              } // end if
                            }

//! Nucleus.ulam:124: 						refractoryPeriod = Unsigned(7).maxof;
                            const u32 Uh_5tlreg43226 = 127u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43226); //gcnl:Node.cpp:885

//! Nucleus.ulam:125: 						reproducing = true;
                            const u32 Uh_5tlreg43228 = 1u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43228); //gcnl:Node.cpp:885
                          }
                        } // end if
                      }
                    }
                  } // end if
                }

//! Nucleus.ulam:128: 				if(parent1id == 0 && parent2id == 0){
                {

//! Nucleus.ulam:128: 				if(parent1id == 0 && parent2id == 0){
                  u32 Uh_5tlreg43230 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg43231 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg43232 = _Int32ToInt32(Uh_5tlreg43231, 2, 11); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg43234 = UlamRef<EC>(ur, 10u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                  const u32 Uh_5tlreg43235 = _Unsigned32ToInt32(Uh_5tlreg43234, 10, 11); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg43236 = _BinOpCompareEqEqInt32(Uh_5tlreg43235, Uh_5tlreg43232, 11); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg43236, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43237 = 0; //gcnl:NodeTerminal.cpp:721
                    const u32 Uh_5tlreg43238 = _Int32ToInt32(Uh_5tlreg43237, 2, 11); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg43240 = UlamRef<EC>(ur, 20u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                    const u32 Uh_5tlreg43241 = _Unsigned32ToInt32(Uh_5tlreg43240, 10, 11); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg43242 = _BinOpCompareEqEqInt32(Uh_5tlreg43241, Uh_5tlreg43238, 11); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43230 = Uh_5tlreg43242; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43230, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Nucleus.ulam:129: 					if(refractoryPeriod == 0){
                      {

//! Nucleus.ulam:129: 					if(refractoryPeriod == 0){
                        const u32 Uh_5tlreg43243 = 0; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg43244 = _Int32ToInt32(Uh_5tlreg43243, 2, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg43246 = UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
                        const u32 Uh_5tlreg43247 = _Unsigned32ToInt32(Uh_5tlreg43246, 7, 8); //gcnl:NodeCast.cpp:723
                        const u32 Uh_5tlreg43248 = _BinOpCompareEqEqInt32(Uh_5tlreg43247, Uh_5tlreg43244, 8); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43248, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Nucleus.ulam:130: 						if(!mate.reproducing){
                            {

//! Nucleus.ulam:130: 						if(!mate.reproducing){
                              const u32 Uh_5tlreg43251 = UlamRef<EC>(Uv_4mate, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg43252 = _LogicalBangBool32(Uh_5tlreg43251, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg43252, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! Nucleus.ulam:131: 							makeChildNucleus(mate);
                                  const T Uh_3tut43255 = Uv_4mate.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102961a<EC> Uh_5tuval43256(Uh_3tut43255); //func arg& //gcnl:Node.cpp:1128
                                  THE_INSTANCE.Uf_9216makeChildNucleus(uc, ur, Uh_5tuval43256); //gcnl:NodeFunctionCall.cpp:1006
                                }
                              } // end if
                            }

//! Nucleus.ulam:133: 						reproducing = true;
                            const u32 Uh_5tlreg43258 = 1u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43258); //gcnl:Node.cpp:885

//! Nucleus.ulam:134: 						refractoryPeriod = Unsigned(7).maxof;
                            const u32 Uh_5tlreg43260 = 127u; //gcnl:NodeTerminal.cpp:721
                            UlamRef<EC>(ur, 31u, 7u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43260); //gcnl:Node.cpp:885
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



//! Nucleus.ulam:140: 	Void dontStepOnEggs(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9214dontStepOnEggs(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:141: 		Atom a = su.getBase();
    UlamRef<EC> Uh_3tur43263(ur, 0u, 0u, &Uq_1010919SiteUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102961a<EC> Uh_5tuval43265 = Uq_1010919SiteUtils10<EC>::THE_INSTANCE.Uf_7getBase(uc, Uh_3tur43263); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43265.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:142: 		if(a as Nucleus){
    {

//! Nucleus.ulam:142: 		if(a as Nucleus){
      const T Uh_3tut43267 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43268 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43267); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43268, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:142: 		if(a as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval43269 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_1a(Uh_5tuval43269, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43269.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:143: 			if(a.id == childID){
          {

//! Nucleus.ulam:143: 			if(a.id == childID){
            const u32 Uh_5tlreg43271 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg43274 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43275 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43274, Uh_5tlreg43271, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43275, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:144: 				move = true;
                const u32 Uh_5tlreg43276 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43276); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! Nucleus.ulam:147: 		if(a as Gene){
    {

//! Nucleus.ulam:147: 		if(a as Gene){
      const T Uh_3tut43279 = Uv_1a.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43280 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43279); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43280, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:147: 		if(a as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval43281 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval43281, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43281.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:148: 			if(a.id == childID){
          {

//! Nucleus.ulam:148: 			if(a.id == childID){
            const u32 Uh_5tlreg43283 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
            const u32 Uh_5tlreg43286 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43287 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43286, Uh_5tlreg43283, 10); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43287, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:149: 				move = true;
                const u32 Uh_5tlreg43288 = 1u; //gcnl:NodeTerminal.cpp:721
                UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43288); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

  } // Uf_9214dontStepOnEggs



//! Nucleus.ulam:153: 	Void whetherToMove(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_9213whetherToMove(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:154: 		if(move = true){
    {

//! Nucleus.ulam:154: 		if(move = true){
      const u32 Uh_5tlreg43290 = 1u; //gcnl:NodeTerminal.cpp:721
      UlamRef<EC>(ur, 48u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43290); //gcnl:Node.cpp:885
      if(_Bool32ToCbool(Uh_5tlreg43290, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Nucleus.ulam:155: 			ew.swap(0,1);
          UlamRef<EC> Uh_3tur43293(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43294 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43295 = _Int32ToUnsigned32(Uh_5tlreg43294, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval43296(Uh_5tlreg43295); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg43297 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43298 = _Int32ToUnsigned32(Uh_5tlreg43297, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval43299(Uh_5tlreg43298); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10111b<EC> Uh_5tlval43301 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43293, Uh_5tlval43296, Uh_5tlval43299); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg43302 = Uh_5tlval43301.read(); //gcnl:Node.cpp:1156
        }
      } // end if
    }

  } // Uf_9213whetherToMove



//! Nucleus.ulam:159: 	Bool geneCheck(){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_102717Nucleus10<EC>::Uf_919geneCheck(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:160: 		for(Seqno i = 1; i <= 40; ++i){
    {

//! Nucleus.ulam:160: 		for(Seqno i = 1; i <= 40; ++i){
      const u32 Uh_5tlreg43303 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43304 = _Int32ToUnsigned32(Uh_5tlreg43303, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43304); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:160: 		for(Seqno i = 1; i <= 40; ++i){
      while(true)
      {
        const u32 Uh_5tlreg43305 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43307 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43308 = _Unsigned32ToInt32(Uh_5tlreg43307, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43309 = _BinOpCompareLessEqualInt32(Uh_5tlreg43308, Uh_5tlreg43305, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43309, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Nucleus.ulam:160: 		for(Seqno i = 1; i <= 40; ++i){
        {

//! Nucleus.ulam:161: 			Atom a = dt.findSeqno(i, id);
          UlamRef<EC> Uh_3tur43311(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43313 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43314(Uh_5tlreg43313); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg43316 = UlamRef<EC>(ur, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
          Ui_Ut_102101u<EC> Uh_5tlval43317(Uh_5tlreg43316); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102961a<EC> Uh_5tuval43319 = Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_919findSeqno(uc, Uh_3tur43311, Uh_5tlval43314, Uh_5tlval43317); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43319.read()); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:162: 			if(a as Gene){
          {

//! Nucleus.ulam:162: 			if(a as Gene){
            const T Uh_3tut43321 = Uv_1a.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43322 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43321); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg43322, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:162: 			if(a as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval43323 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval43323, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43323.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Nucleus.ulam:163: 				return true;
                const u32 Uh_5tlreg43324 = 1u; //gcnl:NodeTerminal.cpp:721
                Ui_Ut_10111b<EC> Uh_5tlval43325(Uh_5tlreg43324); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval43325); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }
        }

//! Nucleus.ulam:160: 		for(Seqno i = 1; i <= 40; ++i){
Ul_214endcontrolloop211:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Nucleus.ulam:160: 		for(Seqno i = 1; i <= 40; ++i){
        const u32 Uh_5tlreg43326 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43327 = _Int32ToUnsigned32(Uh_5tlreg43326, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43329 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43330 = _BinOpAddUnsigned32(Uh_5tlreg43329, Uh_5tlreg43327, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg43330); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Nucleus.ulam:166: 		return false;
    const u32 Uh_5tlreg43331 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval43332(Uh_5tlreg43331); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43332); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919geneCheck



//! Nucleus.ulam:168: 	Void layEgg(){
  template<class EC>
  void Ue_102717Nucleus10<EC>::Uf_6layEgg(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Nucleus.ulam:169: 		EggShell eg;
    Ui_Ue_102188EggShell10<EC> Uv_2eg; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:170: 		eg.id = childID;
    const u32 Uh_5tlreg43334 = UlamRef<EC>(ur, 61u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    UlamRef<EC>(25u, 10u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43334); //gcnl:Node.cpp:885

//! Nucleus.ulam:171: 		eg.first = true;
    const u32 Uh_5tlreg43337 = 1u; //gcnl:NodeTerminal.cpp:721
    UlamRef<EC>(39u, 1u, Uv_2eg, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg43337); //gcnl:Node.cpp:885

//! Nucleus.ulam:172: 		for(Unsigned i; i < 2u; ++i){
    {

//! Nucleus.ulam:172: 		for(Unsigned i; i < 2u; ++i){
      Ui_Ut_102321u<EC> Uv_1i; //gcnl:NodeVarDecl.cpp:1096

//! Nucleus.ulam:172: 		for(Unsigned i; i < 2u; ++i){
      while(true)
      {
        const u32 Uh_5tlreg43340 = 2u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43341 = _Unsigned32ToUnsigned32(Uh_5tlreg43340, 2, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43343 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43344 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43343, Uh_5tlreg43341, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43344, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Nucleus.ulam:172: 		for(Unsigned i; i < 2u; ++i){
        {

//! Nucleus.ulam:173: 			SiteNum emptySlot = cl.emptySlotNearMe();
          UlamRef<EC> Uh_3tur43346(ur, 0u, 0u, &Uq_10109211ClusterByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const Ui_Ut_10161u<EC> Uh_5tlval43348 = Uq_10109211ClusterByID10<EC>::THE_INSTANCE.Uf_9215emptySlotNearMe(uc, Uh_3tur43346); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg43349 = Uh_5tlval43348.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uv_919emptySlot(Uh_5tlreg43349); //gcnl:NodeVarDecl.cpp:1060

//! Nucleus.ulam:174: 			if(emptySlot != 0){
          {

//! Nucleus.ulam:174: 			if(emptySlot != 0){
            const u32 Uh_5tlreg43350 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43351 = _Int32ToInt32(Uh_5tlreg43350, 2, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43353 = Uv_919emptySlot.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43354 = _Unsigned32ToInt32(Uh_5tlreg43353, 6, 7); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43355 = _BinOpCompareNotEqInt32(Uh_5tlreg43354, Uh_5tlreg43351, 7); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43355, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Nucleus.ulam:175: 				ew[emptySlot] = eg;
                const T Uh_3tut43357 = Uv_2eg.read(); //gcnl:Node.cpp:691
                UlamRef<EC> Uh_3tur43359(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43361 = Uv_919emptySlot.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval43362(Uh_5tlreg43361); //func arg& //gcnl:Node.cpp:1128
                Ui_Ut_r102961a<EC> Uh_5tuval43364 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43359, Uh_5tlval43362); //gcnl:NodeFunctionCall.cpp:1006
                Uh_5tuval43364.WriteAtom(Uh_3tut43357); //write into atomof ref //gcnl:Node.cpp:980
              }
            } // end if
          }
        }

//! Nucleus.ulam:172: 		for(Unsigned i; i < 2u; ++i){
Ul_214endcontrolloop212:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Nucleus.ulam:172: 		for(Unsigned i; i < 2u; ++i){
        const u32 Uh_5tlreg43365 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43366 = _Int32ToUnsigned32(Uh_5tlreg43365, 32, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43368 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43369 = _BinOpAddUnsigned32(Uh_5tlreg43368, Uh_5tlreg43366, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg43369); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_6layEgg


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

