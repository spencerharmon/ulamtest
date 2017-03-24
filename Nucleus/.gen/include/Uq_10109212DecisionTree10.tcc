/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_102128EggShell10.h"
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
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Uq_10109212DecisionTree10<EC>::Uq_10109212DecisionTree10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109212DecisionTree10", 0))
  { }

  template<class EC>
  Uq_10109212DecisionTree10<EC>::~Uq_10109212DecisionTree10(){} //gcnl:NodeBlockClass.cpp:1784


//! DecisionTree.ulam:204: 	Atom findSeqno(Seqno seqno, ID id){
  template<class EC>
  Ui_Ut_102961a<EC> Uq_10109212DecisionTree10<EC>::Uf_919findSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5seqno, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! DecisionTree.ulam:205: 		Empty e;
    Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
    {

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
      const u32 Uh_5tlreg43883 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43884 = _Int32ToUnsigned32(Uh_5tlreg43883, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43884); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
      while(true)
      {
        const u32 Uh_5tlreg43885 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43887 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43888 = _Unsigned32ToInt32(Uh_5tlreg43887, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43889 = _BinOpCompareLessEqualInt32(Uh_5tlreg43888, Uh_5tlreg43885, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43889, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
        {

//! DecisionTree.ulam:208: 			Atom gene = ew[i];
          UlamRef<EC> Uh_3tur43891(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43893 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval43894(Uh_5tlreg43893); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval43896 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43891, Uh_5tlval43894); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval43896.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:209: 			if(gene as Gene){
          {

//! DecisionTree.ulam:209: 			if(gene as Gene){
            const T Uh_3tut43898 = Uv_4gene.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43899 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43898); //gcnl:NodeConditionalAs.cpp:444
            if(_Bool32ToCbool(Uh_5tlreg43899, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:209: 			if(gene as Gene){
                Ui_Ut_102961a<EC> & Uh_5tuval43900 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Ue_r102574Gene10<EC> Uv_4gene(Uh_5tuval43900, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43900.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:210: 				if(gene.id == id && gene.seqno == seqno){
                {

//! DecisionTree.ulam:210: 				if(gene.id == id && gene.seqno == seqno){
                  u32 Uh_5tlreg43901 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg43903 = Uv_2id.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg43906 = UlamRef<EC>(Uv_4gene, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg43907 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43906, Uh_5tlreg43903, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg43907, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43909 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43912 = UlamRef<EC>(Uv_4gene, 10u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43913 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43912, Uh_5tlreg43909, 6); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43901 = Uh_5tlreg43913; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43901, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:211: 					return gene;
                      const T Uh_3tut43915 = Uv_4gene.read(); //gcnl:Node.cpp:691
                      Ui_Ut_102961a<EC> Uh_5tuval43916(Uh_3tut43915); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tuval43916); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                }
              }
            } // end if
          }
        }

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
Ul_214endcontrolloop219:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DecisionTree.ulam:207: 		for(Seqno i = 0; i <=40; ++i){
        const u32 Uh_5tlreg43917 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43918 = _Int32ToUnsigned32(Uh_5tlreg43917, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43920 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43921 = _BinOpAddUnsigned32(Uh_5tlreg43920, Uh_5tlreg43918, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg43921); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DecisionTree.ulam:215: 		return e;		
    const T Uh_3tut43923 = Uv_1e.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval43924(Uh_3tut43923); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tuval43924); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919findSeqno



//! DecisionTree.ulam:322: 	StoredValue selfEvaluate(Seqno var, ID id, StoredValue comIn){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_9212selfEvaluate(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_3var, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10161u<EC>& Uv_5comIn) const
  {

//! DecisionTree.ulam:323: 		StoredValue val0;
    Ui_Ut_10161u<EC> Uv_4val0; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:324: 		StoredValue val1;
    Ui_Ut_10161u<EC> Uv_4val1; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:325: 		StoredValue value;
    Ui_Ut_10161u<EC> Uv_5value; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:326: 		Atom gene;
    Ui_Ut_102961a<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:327: 		Atom my = ew[0];
    UlamRef<EC> Uh_3tur43926(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43927 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43928 = _Int32ToUnsigned32(Uh_5tlreg43927, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval43929(Uh_5tlreg43928); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval43931 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43926, Uh_5tlval43929); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_2my(Uh_5tuval43931.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:328: 		if(my as Gene){
    {

//! DecisionTree.ulam:328: 		if(my as Gene){
      const T Uh_3tut43933 = Uv_2my.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43934 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43933); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43934, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:328: 		if(my as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval43935 = Uv_2my; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_2my(Uh_5tuval43935, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43935.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:329: 			if(my.tree0Type == 1 && my.eqTree0 == 0){
          {

//! DecisionTree.ulam:329: 			if(my.tree0Type == 1 && my.eqTree0 == 0){
            u32 Uh_5tlreg43936 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg43937 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43938 = _Int32ToInt32(Uh_5tlreg43937, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43941 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43942 = _Unsigned32ToInt32(Uh_5tlreg43941, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43943 = _BinOpCompareEqEqInt32(Uh_5tlreg43942, Uh_5tlreg43938, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43943, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg43944 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43945 = _Int32ToInt32(Uh_5tlreg43944, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43948 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43949 = _Unsigned32ToInt32(Uh_5tlreg43948, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43950 = _BinOpCompareEqEqInt32(Uh_5tlreg43949, Uh_5tlreg43945, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg43936 = Uh_5tlreg43950; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg43936, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:330: 				my.tree0Type = 0;
                const u32 Uh_5tlreg43951 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg43952 = _Int32ToUnsigned32(Uh_5tlreg43951, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43952); //gcnl:Node.cpp:885

//! DecisionTree.ulam:331: 				val0 = comIn;
                const u32 Uh_5tlreg43956 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                Uv_4val0.write(Uh_5tlreg43956); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:333: 			if(my.tree1Type == 1 && my.eqTree1 == 0){
          {

//! DecisionTree.ulam:333: 			if(my.tree1Type == 1 && my.eqTree1 == 0){
            u32 Uh_5tlreg43958 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg43959 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43960 = _Int32ToInt32(Uh_5tlreg43959, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43963 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43964 = _Unsigned32ToInt32(Uh_5tlreg43963, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43965 = _BinOpCompareEqEqInt32(Uh_5tlreg43964, Uh_5tlreg43960, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43965, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg43966 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43967 = _Int32ToInt32(Uh_5tlreg43966, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43970 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43971 = _Unsigned32ToInt32(Uh_5tlreg43970, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43972 = _BinOpCompareEqEqInt32(Uh_5tlreg43971, Uh_5tlreg43967, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg43958 = Uh_5tlreg43972; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg43958, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:334: 				my.tree0Type = 0;
                const u32 Uh_5tlreg43973 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg43974 = _Int32ToUnsigned32(Uh_5tlreg43973, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43974); //gcnl:Node.cpp:885

//! DecisionTree.ulam:335: 				val1 = comIn;
                const u32 Uh_5tlreg43978 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                Uv_4val1.write(Uh_5tlreg43978); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:338: 			if(my.tree0Type == 1){
          {

//! DecisionTree.ulam:338: 			if(my.tree0Type == 1){
            const u32 Uh_5tlreg43980 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43981 = _Int32ToInt32(Uh_5tlreg43980, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43984 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43985 = _Unsigned32ToInt32(Uh_5tlreg43984, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43986 = _BinOpCompareEqEqInt32(Uh_5tlreg43985, Uh_5tlreg43981, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43986, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:339: 				gene = findSeqno((Seqno)my.eqTree0, id);
                const u32 Uh_5tlreg43990 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval43991(Uh_5tlreg43990); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg43993 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval43994(Uh_5tlreg43993); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval43996 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval43991, Uh_5tlval43994); //gcnl:NodeFunctionCall.cpp:1006
                Uv_4gene.write(Uh_5tuval43996.read()); //gcnl:Node.cpp:885

//! DecisionTree.ulam:340: 				if(gene as Gene){
                {

//! DecisionTree.ulam:340: 				if(gene as Gene){
                  const T Uh_3tut43999 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg44000 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43999); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg44000, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:340: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval44001 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102574Gene10<EC> Uv_4gene(Uh_5tuval44001, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44001.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:341: 					val0 = gene.value;
                      const u32 Uh_5tlreg44004 = UlamRef<EC>(Uv_4gene, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      Uv_4val0.write(Uh_5tlreg44004); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:344: 			if(my.tree0Type == 0){
          {

//! DecisionTree.ulam:344: 			if(my.tree0Type == 0){
            const u32 Uh_5tlreg44006 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44007 = _Int32ToInt32(Uh_5tlreg44006, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44010 = UlamRef<EC>(Uv_2my, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44011 = _Unsigned32ToInt32(Uh_5tlreg44010, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44012 = _BinOpCompareEqEqInt32(Uh_5tlreg44011, Uh_5tlreg44007, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44012, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:345: 				val0 = my.eqTree0;
                const u32 Uh_5tlreg44015 = UlamRef<EC>(Uv_2my, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Uv_4val0.write(Uh_5tlreg44015); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:347: 			if(my.tree1Type == 1){
          {

//! DecisionTree.ulam:347: 			if(my.tree1Type == 1){
            const u32 Uh_5tlreg44017 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44018 = _Int32ToInt32(Uh_5tlreg44017, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44021 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44022 = _Unsigned32ToInt32(Uh_5tlreg44021, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44023 = _BinOpCompareEqEqInt32(Uh_5tlreg44022, Uh_5tlreg44018, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44023, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:348: 				gene = findSeqno((Seqno)my.eqTree1, id);
                const u32 Uh_5tlreg44027 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval44028(Uh_5tlreg44027); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44030 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval44031(Uh_5tlreg44030); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval44033 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval44028, Uh_5tlval44031); //gcnl:NodeFunctionCall.cpp:1006
                Uv_4gene.write(Uh_5tuval44033.read()); //gcnl:Node.cpp:885

//! DecisionTree.ulam:349: 				if(gene as Gene){
                {

//! DecisionTree.ulam:349: 				if(gene as Gene){
                  const T Uh_3tut44036 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg44037 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44036); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg44037, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:349: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval44038 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102574Gene10<EC> Uv_4gene(Uh_5tuval44038, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44038.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:350: 					val1 = gene.value;
                      const u32 Uh_5tlreg44041 = UlamRef<EC>(Uv_4gene, 35u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      Uv_4val1.write(Uh_5tlreg44041); //gcnl:Node.cpp:885
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:353: 			if(my.tree1Type == 0){
          {

//! DecisionTree.ulam:353: 			if(my.tree1Type == 0){
            const u32 Uh_5tlreg44043 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44044 = _Int32ToInt32(Uh_5tlreg44043, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44047 = UlamRef<EC>(Uv_2my, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44048 = _Unsigned32ToInt32(Uh_5tlreg44047, 2, 3); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44049 = _BinOpCompareEqEqInt32(Uh_5tlreg44048, Uh_5tlreg44044, 3); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44049, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:354: 				val1 = my.eqTree1;
                const u32 Uh_5tlreg44052 = UlamRef<EC>(Uv_2my, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                Uv_4val1.write(Uh_5tlreg44052); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:356: 			value = operate(val0, my.operator, val1);
          const u32 Uh_5tlreg44056 = Uv_4val0.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44057(Uh_5tlreg44056); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44060 = UlamRef<EC>(Uv_2my, 17u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10121u<EC> Uh_5tlval44061(Uh_5tlreg44060); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44063 = Uv_4val1.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44064(Uh_5tlreg44063); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval44066 = THE_INSTANCE.Uf_7operate(uc, ur, Uh_5tlval44057, Uh_5tlval44061, Uh_5tlval44064); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44067 = Uh_5tlval44066.read(); //gcnl:Node.cpp:1156
          Uv_5value.write(Uh_5tlreg44067); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:358: 		return value;
    const u32 Uh_5tlreg44070 = Uv_5value.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44071(Uh_5tlreg44070); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44071); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212selfEvaluate



//! DecisionTree.ulam:19: 	Unsigned(2) initGene(Seqno mySeqno, Seqno refSeqno, ID id, Unsigned(4) specialVars,Bool isVar){
  template<class EC>
  Ui_Ut_10121u<EC> Uq_10109212DecisionTree10<EC>::Uf_8initGene(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7mySeqno, Ui_Ut_10161u<EC>& Uv_8refSeqno, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10141u<EC>& Uv_9211specialVars, Ui_Ut_10111b<EC>& Uv_5isVar) const
  {

//! DecisionTree.ulam:25: 		Unsigned(2) numberOfGenesToAddToMyTree;
    Ui_Ut_10121u<EC> Uv_9226numberOfGenesToAddToMyTree; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:27: 		Gene gene;
    Ui_Ue_102574Gene10<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:29: 		gene.seqno = mySeqno;
    const u32 Uh_5tlreg44073 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44073); //gcnl:Node.cpp:885

//! DecisionTree.ulam:30: 		gene.id = id;
    const u32 Uh_5tlreg44077 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44077); //gcnl:Node.cpp:885

//! DecisionTree.ulam:33: 		gene.operator = (Unsigned(2)) r.create(3);
    UlamRef<EC> Uh_3tur44081(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44082 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44083 = _Int32ToInt32(Uh_5tlreg44082, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval44084(Uh_5tlreg44083); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval44086 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur44081, Uh_5tlval44084); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44087 = Uh_5tlval44086.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg44088 = _Unsigned32ToUnsigned32(Uh_5tlreg44087, 32, 2); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(42u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44088); //gcnl:Node.cpp:885

//! DecisionTree.ulam:49: 		Unsigned valTypSwitch0;
    Ui_Ut_102321u<EC> Uv_9213valTypSwitch0; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:50: 		Unsigned valTypSwitch1;
    Ui_Ut_102321u<EC> Uv_9213valTypSwitch1; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:52: 		valTypSwitch0 = r.create(100);
    UlamRef<EC> Uh_3tur44092(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44093 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44094 = _Int32ToInt32(Uh_5tlreg44093, 8, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval44095(Uh_5tlreg44094); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval44097 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur44092, Uh_5tlval44095); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44098 = Uh_5tlval44097.read(); //gcnl:Node.cpp:1156
    Uv_9213valTypSwitch0.write(Uh_5tlreg44098); //gcnl:Node.cpp:885

//! DecisionTree.ulam:53: 		valTypSwitch1 = r.create(100);
    UlamRef<EC> Uh_3tur44101(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44102 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44103 = _Int32ToInt32(Uh_5tlreg44102, 8, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval44104(Uh_5tlreg44103); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval44106 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur44101, Uh_5tlval44104); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44107 = Uh_5tlval44106.read(); //gcnl:Node.cpp:1156
    Uv_9213valTypSwitch1.write(Uh_5tlreg44107); //gcnl:Node.cpp:885

//! DecisionTree.ulam:56: 		if(valTypSwitch0 >= (Unsigned)0 && valTypSwitch0 < (Unsigned)30){
    {

//! DecisionTree.ulam:56: 		if(valTypSwitch0 >= (Unsigned)0 && valTypSwitch0 < (Unsigned)30){
      u32 Uh_5tlreg44109 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44110 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44111 = _Int32ToUnsigned32(Uh_5tlreg44110, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44113 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44114 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44113, Uh_5tlreg44111, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44114, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44115 = 30; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44116 = _Int32ToUnsigned32(Uh_5tlreg44115, 6, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44118 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44119 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44118, Uh_5tlreg44116, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44109 = Uh_5tlreg44119; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44109, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:58: 			gene.tree0Type = 0;
          const u32 Uh_5tlreg44120 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44121 = _Int32ToUnsigned32(Uh_5tlreg44120, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44121); //gcnl:Node.cpp:885

//! DecisionTree.ulam:59: 			gene.eqTree0 = (Unsigned(6)) r.create(63);
          UlamRef<EC> Uh_3tur44125(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44126 = 63; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44127 = _Int32ToInt32(Uh_5tlreg44126, 7, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval44128(Uh_5tlreg44127); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval44130 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur44125, Uh_5tlval44128); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44131 = Uh_5tlval44130.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg44132 = _Unsigned32ToUnsigned32(Uh_5tlreg44131, 32, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44132); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:62: 		if(valTypSwitch0 >= (Unsigned)30 && valTypSwitch0 < (Unsigned)40){
    {

//! DecisionTree.ulam:62: 		if(valTypSwitch0 >= (Unsigned)30 && valTypSwitch0 < (Unsigned)40){
      u32 Uh_5tlreg44135 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44136 = 30; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44137 = _Int32ToUnsigned32(Uh_5tlreg44136, 6, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44139 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44140 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44139, Uh_5tlreg44137, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44140, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44141 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44142 = _Int32ToUnsigned32(Uh_5tlreg44141, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44144 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44145 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44144, Uh_5tlreg44142, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44135 = Uh_5tlreg44145; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44135, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:64: 			gene.tree0Type = 0;
          const u32 Uh_5tlreg44146 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44147 = _Int32ToUnsigned32(Uh_5tlreg44146, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44147); //gcnl:Node.cpp:885

//! DecisionTree.ulam:65: 			gene.eqTree0 = (StoredValue) 0;
          const u32 Uh_5tlreg44150 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44151 = _Int32ToUnsigned32(Uh_5tlreg44150, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44151); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:68: 		if(valTypSwitch0 >= (Unsigned)40 && valTypSwitch0 < (Unsigned)50){
    {

//! DecisionTree.ulam:68: 		if(valTypSwitch0 >= (Unsigned)40 && valTypSwitch0 < (Unsigned)50){
      u32 Uh_5tlreg44154 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44155 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44156 = _Int32ToUnsigned32(Uh_5tlreg44155, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44158 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44159 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44158, Uh_5tlreg44156, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44159, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44160 = 50; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44161 = _Int32ToUnsigned32(Uh_5tlreg44160, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44163 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44164 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44163, Uh_5tlreg44161, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44154 = Uh_5tlreg44164; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44154, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:74: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg44165 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44166 = _Int32ToUnsigned32(Uh_5tlreg44165, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44166); //gcnl:Node.cpp:885

//! DecisionTree.ulam:78: 			gene.eqTree0 = (StoredValue)0;
          const u32 Uh_5tlreg44169 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44170 = _Int32ToUnsigned32(Uh_5tlreg44169, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44170); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:80: 		if(valTypSwitch0 >= (Unsigned)50 && valTypSwitch0 < (Unsigned)75){
    {

//! DecisionTree.ulam:80: 		if(valTypSwitch0 >= (Unsigned)50 && valTypSwitch0 < (Unsigned)75){
      u32 Uh_5tlreg44173 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44174 = 50; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44175 = _Int32ToUnsigned32(Uh_5tlreg44174, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44177 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44178 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44177, Uh_5tlreg44175, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44178, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44179 = 75; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44180 = _Int32ToUnsigned32(Uh_5tlreg44179, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44182 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44183 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44182, Uh_5tlreg44180, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44173 = Uh_5tlreg44183; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44173, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:82: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg44184 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44185 = _Int32ToUnsigned32(Uh_5tlreg44184, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44185); //gcnl:Node.cpp:885

//! DecisionTree.ulam:85: 			++numberOfGenesToAddToMyTree;
          const u32 Uh_5tlreg44188 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44189 = _Int32ToUnsigned32(Uh_5tlreg44188, 32, 2); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44191 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44192 = _BinOpAddUnsigned32(Uh_5tlreg44191, Uh_5tlreg44189, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9226numberOfGenesToAddToMyTree.write(Uh_5tlreg44192); //gcnl:Node.cpp:885

//! DecisionTree.ulam:87: 			if(isVar){
          {

//! DecisionTree.ulam:87: 			if(isVar){
            const u32 Uh_5tlreg44194 = Uv_5isVar.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg44194, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:88: 				gene.eqTree0 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree-1);
                const u32 Uh_5tlreg44195 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44196 = _Int32ToInt32(Uh_5tlreg44195, 2, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44198 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44199 = _Unsigned32ToUnsigned32(Uh_5tlreg44198, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44201 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44202 = _Unsigned32ToUnsigned32(Uh_5tlreg44201, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44203 = _BinOpAddUnsigned32(Uh_5tlreg44202, Uh_5tlreg44199, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg44204 = _Unsigned32ToInt32(Uh_5tlreg44203, 7, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44205 = _BinOpSubtractInt32(Uh_5tlreg44204, Uh_5tlreg44196, 9); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg44206 = _Int32ToUnsigned32(Uh_5tlreg44205, 9, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44206); //gcnl:Node.cpp:885
              }
            } // end if
            else
            {
              {

//! DecisionTree.ulam:91: 				gene.eqTree0 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree);
                const u32 Uh_5tlreg44210 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44211 = _Unsigned32ToUnsigned32(Uh_5tlreg44210, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44213 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44214 = _Unsigned32ToUnsigned32(Uh_5tlreg44213, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44215 = _BinOpAddUnsigned32(Uh_5tlreg44214, Uh_5tlreg44211, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg44216 = _Unsigned32ToUnsigned32(Uh_5tlreg44215, 7, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44216); //gcnl:Node.cpp:885
              }
            } //end else
          }
        }
      } // end if
    }

//! DecisionTree.ulam:94: 		if(valTypSwitch0 >= (Unsigned)75 && valTypSwitch0 < (Unsigned)100){
    {

//! DecisionTree.ulam:94: 		if(valTypSwitch0 >= (Unsigned)75 && valTypSwitch0 < (Unsigned)100){
      u32 Uh_5tlreg44219 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44220 = 75; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44221 = _Int32ToUnsigned32(Uh_5tlreg44220, 8, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44223 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44224 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44223, Uh_5tlreg44221, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44224, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44225 = 100; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44226 = _Int32ToUnsigned32(Uh_5tlreg44225, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44228 = Uv_9213valTypSwitch0.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44229 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44228, Uh_5tlreg44226, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44219 = Uh_5tlreg44229; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44219, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:96: 			gene.tree0Type = 1;
          const u32 Uh_5tlreg44230 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44231 = _Int32ToUnsigned32(Uh_5tlreg44230, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44231); //gcnl:Node.cpp:885

//! DecisionTree.ulam:100: 			gene.eqTree0 = (StoredValue)((StoredValue)r.create(specialVars)+(StoredValue)4);
          const u32 Uh_5tlreg44234 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44235 = _Int32ToUnsigned32(Uh_5tlreg44234, 4, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44236 = _Unsigned32ToUnsigned32(Uh_5tlreg44235, 6, 7); //gcnl:NodeCast.cpp:723
          UlamRef<EC> Uh_3tur44238(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44240 = Uv_9211specialVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44241 = _Unsigned32ToUnsigned32(Uh_5tlreg44240, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval44242(Uh_5tlreg44241); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval44244 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur44238, Uh_5tlval44242); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44245 = Uh_5tlval44244.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg44246 = _Unsigned32ToUnsigned32(Uh_5tlreg44245, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44247 = _Unsigned32ToUnsigned32(Uh_5tlreg44246, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44248 = _BinOpAddUnsigned32(Uh_5tlreg44247, Uh_5tlreg44236, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg44249 = _Unsigned32ToUnsigned32(Uh_5tlreg44248, 7, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44249); //gcnl:Node.cpp:885

//! DecisionTree.ulam:103: 			if(gene.eqTree0 == gene.seqno){
          {

//! DecisionTree.ulam:103: 			if(gene.eqTree0 == gene.seqno){
            const u32 Uh_5tlreg44254 = UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44257 = UlamRef<EC>(46u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44258 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44257, Uh_5tlreg44254, 6); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44258, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:104: 				gene.tree0Type = 0;
                const u32 Uh_5tlreg44259 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44260 = _Int32ToUnsigned32(Uh_5tlreg44259, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(44u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44260); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! DecisionTree.ulam:108: 		if(valTypSwitch1 >= (Unsigned)0 && valTypSwitch1 < (Unsigned)30){
    {

//! DecisionTree.ulam:108: 		if(valTypSwitch1 >= (Unsigned)0 && valTypSwitch1 < (Unsigned)30){
      u32 Uh_5tlreg44263 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44264 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44265 = _Int32ToUnsigned32(Uh_5tlreg44264, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44267 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44268 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44267, Uh_5tlreg44265, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44268, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44269 = 30; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44270 = _Int32ToUnsigned32(Uh_5tlreg44269, 6, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44272 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44273 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44272, Uh_5tlreg44270, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44263 = Uh_5tlreg44273; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44263, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:110: 			gene.tree1Type = 0;
          const u32 Uh_5tlreg44274 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44275 = _Int32ToUnsigned32(Uh_5tlreg44274, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44275); //gcnl:Node.cpp:885

//! DecisionTree.ulam:111: 			gene.eqTree1 = (Unsigned(6)) r.create(63);
          UlamRef<EC> Uh_3tur44279(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44280 = 63; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44281 = _Int32ToInt32(Uh_5tlreg44280, 7, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval44282(Uh_5tlreg44281); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval44284 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur44279, Uh_5tlval44282); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44285 = Uh_5tlval44284.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg44286 = _Unsigned32ToUnsigned32(Uh_5tlreg44285, 32, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44286); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:114: 		if(valTypSwitch1 >= (Unsigned)30 && valTypSwitch1 < (Unsigned)40){
    {

//! DecisionTree.ulam:114: 		if(valTypSwitch1 >= (Unsigned)30 && valTypSwitch1 < (Unsigned)40){
      u32 Uh_5tlreg44289 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44290 = 30; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44291 = _Int32ToUnsigned32(Uh_5tlreg44290, 6, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44293 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44294 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44293, Uh_5tlreg44291, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44294, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44295 = 40; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44296 = _Int32ToUnsigned32(Uh_5tlreg44295, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44298 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44299 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44298, Uh_5tlreg44296, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44289 = Uh_5tlreg44299; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44289, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:116: 			gene.tree1Type = 0;
          const u32 Uh_5tlreg44300 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44301 = _Int32ToUnsigned32(Uh_5tlreg44300, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44301); //gcnl:Node.cpp:885

//! DecisionTree.ulam:117: 			gene.eqTree1 = (StoredValue) 0;
          const u32 Uh_5tlreg44304 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44305 = _Int32ToUnsigned32(Uh_5tlreg44304, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44305); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:120: 		if(valTypSwitch1 >= (Unsigned)40 && valTypSwitch1 < (Unsigned)50){
    {

//! DecisionTree.ulam:120: 		if(valTypSwitch1 >= (Unsigned)40 && valTypSwitch1 < (Unsigned)50){
      u32 Uh_5tlreg44308 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44309 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44310 = _Int32ToUnsigned32(Uh_5tlreg44309, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44312 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44313 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44312, Uh_5tlreg44310, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44313, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44314 = 50; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44315 = _Int32ToUnsigned32(Uh_5tlreg44314, 7, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44317 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44318 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44317, Uh_5tlreg44315, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44308 = Uh_5tlreg44318; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44308, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:126: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg44319 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44320 = _Int32ToUnsigned32(Uh_5tlreg44319, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44320); //gcnl:Node.cpp:885

//! DecisionTree.ulam:130: 			gene.eqTree1 = (StoredValue)0;
          const u32 Uh_5tlreg44323 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44324 = _Int32ToUnsigned32(Uh_5tlreg44323, 2, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44324); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:132: 		if(valTypSwitch1 >= (Unsigned)50 && valTypSwitch1 < (Unsigned)75){
    {

//! DecisionTree.ulam:132: 		if(valTypSwitch1 >= (Unsigned)50 && valTypSwitch1 < (Unsigned)75){
      u32 Uh_5tlreg44327 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44328 = 50; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44329 = _Int32ToUnsigned32(Uh_5tlreg44328, 7, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44331 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44332 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44331, Uh_5tlreg44329, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44332, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44333 = 75; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44334 = _Int32ToUnsigned32(Uh_5tlreg44333, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44336 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44337 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44336, Uh_5tlreg44334, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44327 = Uh_5tlreg44337; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44327, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:134: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg44338 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44339 = _Int32ToUnsigned32(Uh_5tlreg44338, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44339); //gcnl:Node.cpp:885

//! DecisionTree.ulam:137: 			++numberOfGenesToAddToMyTree;
          const u32 Uh_5tlreg44342 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44343 = _Int32ToUnsigned32(Uh_5tlreg44342, 32, 2); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44345 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44346 = _BinOpAddUnsigned32(Uh_5tlreg44345, Uh_5tlreg44343, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9226numberOfGenesToAddToMyTree.write(Uh_5tlreg44346); //gcnl:Node.cpp:885

//! DecisionTree.ulam:139: 			if(isVar){
          {

//! DecisionTree.ulam:139: 			if(isVar){
            const u32 Uh_5tlreg44348 = Uv_5isVar.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg44348, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:140: 				gene.eqTree1 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree-1);
                const u32 Uh_5tlreg44349 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44350 = _Int32ToInt32(Uh_5tlreg44349, 2, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44352 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44353 = _Unsigned32ToUnsigned32(Uh_5tlreg44352, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44355 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44356 = _Unsigned32ToUnsigned32(Uh_5tlreg44355, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44357 = _BinOpAddUnsigned32(Uh_5tlreg44356, Uh_5tlreg44353, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg44358 = _Unsigned32ToInt32(Uh_5tlreg44357, 7, 9); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44359 = _BinOpSubtractInt32(Uh_5tlreg44358, Uh_5tlreg44350, 9); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg44360 = _Int32ToUnsigned32(Uh_5tlreg44359, 9, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44360); //gcnl:Node.cpp:885
              }
            } // end if
            else
            {
              {

//! DecisionTree.ulam:143: 				gene.eqTree1 = (StoredValue)(refSeqno+numberOfGenesToAddToMyTree);
                const u32 Uh_5tlreg44364 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44365 = _Unsigned32ToUnsigned32(Uh_5tlreg44364, 2, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44367 = Uv_8refSeqno.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44368 = _Unsigned32ToUnsigned32(Uh_5tlreg44367, 6, 7); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44369 = _BinOpAddUnsigned32(Uh_5tlreg44368, Uh_5tlreg44365, 7); //gcnl:NodeBinaryOp.cpp:719
                const u32 Uh_5tlreg44370 = _Unsigned32ToUnsigned32(Uh_5tlreg44369, 7, 6); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44370); //gcnl:Node.cpp:885
              }
            } //end else
          }
        }
      } // end if
    }

//! DecisionTree.ulam:146: 		if(valTypSwitch1 >= (Unsigned)75 && valTypSwitch1 < (Unsigned)100){
    {

//! DecisionTree.ulam:146: 		if(valTypSwitch1 >= (Unsigned)75 && valTypSwitch1 < (Unsigned)100){
      u32 Uh_5tlreg44373 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44374 = 75; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44375 = _Int32ToUnsigned32(Uh_5tlreg44374, 8, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44377 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44378 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg44377, Uh_5tlreg44375, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44378, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44379 = 100; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44380 = _Int32ToUnsigned32(Uh_5tlreg44379, 8, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44382 = Uv_9213valTypSwitch1.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44383 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg44382, Uh_5tlreg44380, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44373 = Uh_5tlreg44383; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44373, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:148: 			gene.tree1Type = 1;
          const u32 Uh_5tlreg44384 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44385 = _Int32ToUnsigned32(Uh_5tlreg44384, 2, 2); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44385); //gcnl:Node.cpp:885

//! DecisionTree.ulam:152: 			gene.eqTree1 = (StoredValue)((StoredValue)r.create(specialVars)+(StoredValue)4);
          const u32 Uh_5tlreg44388 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44389 = _Int32ToUnsigned32(Uh_5tlreg44388, 4, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44390 = _Unsigned32ToUnsigned32(Uh_5tlreg44389, 6, 7); //gcnl:NodeCast.cpp:723
          UlamRef<EC> Uh_3tur44392(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44394 = Uv_9211specialVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44395 = _Unsigned32ToUnsigned32(Uh_5tlreg44394, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval44396(Uh_5tlreg44395); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_102321u<EC> Uh_5tlval44398 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur44392, Uh_5tlval44396); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44399 = Uh_5tlval44398.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg44400 = _Unsigned32ToUnsigned32(Uh_5tlreg44399, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44401 = _Unsigned32ToUnsigned32(Uh_5tlreg44400, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44402 = _BinOpAddUnsigned32(Uh_5tlreg44401, Uh_5tlreg44390, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg44403 = _Unsigned32ToUnsigned32(Uh_5tlreg44402, 7, 6); //gcnl:NodeCast.cpp:723
          UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44403); //gcnl:Node.cpp:885

//! DecisionTree.ulam:155: 			if(gene.eqTree1 == gene.seqno){
          {

//! DecisionTree.ulam:155: 			if(gene.eqTree1 == gene.seqno){
            const u32 Uh_5tlreg44408 = UlamRef<EC>(35u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44411 = UlamRef<EC>(54u, 6u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44412 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44411, Uh_5tlreg44408, 6); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44412, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:156: 				gene.tree1Type = 0;
                const u32 Uh_5tlreg44413 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44414 = _Int32ToUnsigned32(Uh_5tlreg44413, 2, 2); //gcnl:NodeCast.cpp:723
                UlamRef<EC>(52u, 2u, Uv_4gene, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg44414); //gcnl:Node.cpp:885
              }
            } // end if
          }
        }
      } // end if
    }

//! DecisionTree.ulam:161: 		if(mySeqno <= (Seqno)40){
    {

//! DecisionTree.ulam:161: 		if(mySeqno <= (Seqno)40){
      const u32 Uh_5tlreg44417 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44418 = _Int32ToUnsigned32(Uh_5tlreg44417, 7, 6); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44420 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44421 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44420, Uh_5tlreg44418, 6); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44421, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:162: 			ew[mySeqno]=gene;
          const T Uh_3tut44423 = Uv_4gene.read(); //gcnl:Node.cpp:691
          UlamRef<EC> Uh_3tur44425(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44427 = Uv_7mySeqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44428(Uh_5tlreg44427); //func arg& //gcnl:Node.cpp:1128
          Ui_Ut_r102961a<EC> Uh_5tuval44430 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44425, Uh_5tlval44428); //gcnl:NodeFunctionCall.cpp:1006
          Uh_5tuval44430.WriteAtom(Uh_3tut44423); //write into atomof ref //gcnl:Node.cpp:980
        }
      } // end if
    }

//! DecisionTree.ulam:164: 		return numberOfGenesToAddToMyTree;
    const u32 Uh_5tlreg44432 = Uv_9226numberOfGenesToAddToMyTree.read(); //gcnl:Node.cpp:691
    Ui_Ut_10121u<EC> Uh_5tlval44433(Uh_5tlreg44432); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44433); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8initGene



//! DecisionTree.ulam:173: 	Void initVars(ID id){
  template<class EC>
  void Uq_10109212DecisionTree10<EC>::Uf_8initVars(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! DecisionTree.ulam:179: 		Seqno numVars = (Seqno)(r.create(3)+(Unsigned(32))3);
    const u32 Uh_5tlreg44434 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44435 = _Int32ToUnsigned32(Uh_5tlreg44434, 3, 32); //gcnl:NodeCast.cpp:723
    UlamRef<EC> Uh_3tur44437(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44438 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44439 = _Int32ToInt32(Uh_5tlreg44438, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval44440(Uh_5tlreg44439); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval44442 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_6create(uc, Uh_3tur44437, Uh_5tlval44440); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44443 = Uh_5tlval44442.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg44444 = _BinOpAddUnsigned32(Uh_5tlreg44443, Uh_5tlreg44435, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg44445 = _Unsigned32ToUnsigned32(Uh_5tlreg44444, 32, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_7numVars(Uh_5tlreg44445); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:180: 		Seqno seqno = (Seqno) (numVars+1);
    const u32 Uh_5tlreg44446 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44447 = _Int32ToInt32(Uh_5tlreg44446, 2, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg44449 = Uv_7numVars.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44450 = _Unsigned32ToInt32(Uh_5tlreg44449, 6, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg44451 = _BinOpAddInt32(Uh_5tlreg44450, Uh_5tlreg44447, 8); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg44452 = _Int32ToUnsigned32(Uh_5tlreg44451, 8, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg44452); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
    {

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
      const u32 Uh_5tlreg44453 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44454 = _Int32ToUnsigned32(Uh_5tlreg44453, 2, 6); //gcnl:NodeCast.cpp:723
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg44454); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
      while(true)
      {
        const u32 Uh_5tlreg44456 = Uv_7numVars.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44458 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44459 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44458, Uh_5tlreg44456, 6); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg44459, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
        {

//! DecisionTree.ulam:185: 			seqno = initTree(i,seqno,numVars,id);
          const u32 Uh_5tlreg44462 = Uv_1i.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44463(Uh_5tlreg44462); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44465 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44466(Uh_5tlreg44465); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44468 = Uv_7numVars.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44469(Uh_5tlreg44468); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44471 = Uv_2id.read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval44472(Uh_5tlreg44471); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval44474 = THE_INSTANCE.Uf_8initTree(uc, ur, Uh_5tlval44463, Uh_5tlval44466, Uh_5tlval44469, Uh_5tlval44472); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44475 = Uh_5tlval44474.read(); //gcnl:Node.cpp:1156
          Uv_5seqno.write(Uh_5tlreg44475); //gcnl:Node.cpp:885
        }

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
Ul_214endcontrolloop217:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DecisionTree.ulam:183: 		for(Seqno i = 1; i <= numVars; ++i){
        const u32 Uh_5tlreg44477 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44478 = _Int32ToUnsigned32(Uh_5tlreg44477, 32, 6); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44480 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44481 = _BinOpAddUnsigned32(Uh_5tlreg44480, Uh_5tlreg44478, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg44481); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_8initVars



//! DecisionTree.ulam:188: 	Seqno initTree(Seqno i,Seqno seqno,Seqno numVars,ID id){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_8initTree(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1i, Ui_Ut_10161u<EC>& Uv_5seqno, Ui_Ut_10161u<EC>& Uv_7numVars, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! DecisionTree.ulam:189: 		Seqno genesLeftToCreate;
    Ui_Ut_10161u<EC> Uv_9217genesLeftToCreate; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:195: 		genesLeftToCreate += initGene(i,seqno,id,(Unsigned(4))(numVars-3),true);
    const u32 Uh_5tlreg44484 = Uv_1i.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44485(Uh_5tlreg44484); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44487 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44488(Uh_5tlreg44487); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44490 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44491(Uh_5tlreg44490); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44492 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44493 = _Int32ToInt32(Uh_5tlreg44492, 3, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg44495 = Uv_7numVars.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44496 = _Unsigned32ToInt32(Uh_5tlreg44495, 6, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg44497 = _BinOpSubtractInt32(Uh_5tlreg44496, Uh_5tlreg44493, 8); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg44498 = _Int32ToUnsigned32(Uh_5tlreg44497, 8, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141u<EC> Uh_5tlval44499(Uh_5tlreg44498); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44500 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval44501(Uh_5tlreg44500); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10121u<EC> Uh_5tlval44503 = THE_INSTANCE.Uf_8initGene(uc, ur, Uh_5tlval44485, Uh_5tlval44488, Uh_5tlval44491, Uh_5tlval44499, Uh_5tlval44501); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44504 = Uh_5tlval44503.read(); //gcnl:Node.cpp:1156
    const u32 Uh_5tlreg44505 = _Unsigned32ToUnsigned32(Uh_5tlreg44504, 2, 6); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg44507 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg44508 = _BinOpAddUnsigned32(Uh_5tlreg44507, Uh_5tlreg44505, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
    Uv_9217genesLeftToCreate.write(Uh_5tlreg44508); //gcnl:Node.cpp:885

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
    {

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
      while(true)
      {
        const u32 Uh_5tlreg44509 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44510 = _Int32ToInt32(Uh_5tlreg44509, 2, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44512 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44513 = _Unsigned32ToInt32(Uh_5tlreg44512, 6, 7); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44514 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44513, Uh_5tlreg44510, 7); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg44514, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
        {

//! DecisionTree.ulam:198: 			genesLeftToCreate += initGene(seqno,seqno,id,(Unsigned(4))(numVars-3),false);
          const u32 Uh_5tlreg44517 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44518(Uh_5tlreg44517); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44520 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          Ui_Ut_10161u<EC> Uh_5tlval44521(Uh_5tlreg44520); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44523 = Uv_2id.read(); //gcnl:Node.cpp:691
          Ui_Ut_102101u<EC> Uh_5tlval44524(Uh_5tlreg44523); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44525 = 3; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44526 = _Int32ToInt32(Uh_5tlreg44525, 3, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44528 = Uv_7numVars.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44529 = _Unsigned32ToInt32(Uh_5tlreg44528, 6, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44530 = _BinOpSubtractInt32(Uh_5tlreg44529, Uh_5tlreg44526, 8); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg44531 = _Int32ToUnsigned32(Uh_5tlreg44530, 8, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141u<EC> Uh_5tlval44532(Uh_5tlreg44531); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44533 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval44534(Uh_5tlreg44533); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10121u<EC> Uh_5tlval44536 = THE_INSTANCE.Uf_8initGene(uc, ur, Uh_5tlval44518, Uh_5tlval44521, Uh_5tlval44524, Uh_5tlval44532, Uh_5tlval44534); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44537 = Uh_5tlval44536.read(); //gcnl:Node.cpp:1156
          const u32 Uh_5tlreg44538 = _Unsigned32ToUnsigned32(Uh_5tlreg44537, 2, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44540 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44541 = _BinOpAddUnsigned32(Uh_5tlreg44540, Uh_5tlreg44538, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9217genesLeftToCreate.write(Uh_5tlreg44541); //gcnl:Node.cpp:885

//! DecisionTree.ulam:199: 			--genesLeftToCreate;
          const u32 Uh_5tlreg44542 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44543 = _Int32ToUnsigned32(Uh_5tlreg44542, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44545 = Uv_9217genesLeftToCreate.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44546 = _BinOpSubtractUnsigned32(Uh_5tlreg44545, Uh_5tlreg44543, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_9217genesLeftToCreate.write(Uh_5tlreg44546); //gcnl:Node.cpp:885

//! DecisionTree.ulam:200: 			++seqno;
          const u32 Uh_5tlreg44547 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44548 = _Int32ToUnsigned32(Uh_5tlreg44547, 32, 6); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44550 = Uv_5seqno.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44551 = _BinOpAddUnsigned32(Uh_5tlreg44550, Uh_5tlreg44548, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
          Uv_5seqno.write(Uh_5tlreg44551); //gcnl:Node.cpp:885
        }

//! DecisionTree.ulam:197: 		while(genesLeftToCreate > 0){
Ul_214endcontrolloop218:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DecisionTree.ulam:202: 		return seqno;
    const u32 Uh_5tlreg44553 = Uv_5seqno.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44554(Uh_5tlreg44553); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44554); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8initTree



//! DecisionTree.ulam:217: 	StoredValue evaluate(Seqno var, ID id, StoredValue comIn){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_8evaluate(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_3var, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10161u<EC>& Uv_5comIn) const
  {

//! DecisionTree.ulam:218: 		Bool evaluated[40];
    Ui_Ut_240111b<EC> Uv_919evaluated; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:219: 		Bool checked[40];
    Ui_Ut_240111b<EC> Uv_7checked; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:221: 		StoredValue value[40];
    Ui_Ut_240161u<EC> Uv_5value; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:222: 		Seqno parent[40];
    Ui_Ut_240161u<EC> Uv_6parent; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:224: 		Unsigned(2) operator[40];
    Ui_Ut_240121u<EC> Uv_8operator; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:226: 		Bits(2) tree0Type[40];
    Ui_Ut_240121t<EC> Uv_919tree0Type; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:227: 		StoredValue eqTree0[40];
    Ui_Ut_240161u<EC> Uv_7eqTree0; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:229: 		Bits(2) tree1Type[40];
    Ui_Ut_240121t<EC> Uv_919tree1Type; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:230: 		StoredValue eqTree1[40];
    Ui_Ut_240161u<EC> Uv_7eqTree1; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:232: 		Bool keepRecursing = true;
    const u32 Uh_5tlreg44555 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_9213keepRecursing(Uh_5tlreg44555); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:233: 		Seqno seqno = var;
    const u32 Uh_5tlreg44557 = Uv_3var.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uv_5seqno(Uh_5tlreg44557); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:235: 		Unsigned(2) dejavu;
    Ui_Ut_10121u<EC> Uv_6dejavu; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:236: 		while(keepRecursing){
    {

//! DecisionTree.ulam:236: 		while(keepRecursing){
      while(true)
      {
        const u32 Uh_5tlreg44559 = Uv_9213keepRecursing.read(); //gcnl:Node.cpp:691

        if(!_Bool32ToCbool(Uh_5tlreg44559, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DecisionTree.ulam:236: 		while(keepRecursing){
        {

//! DecisionTree.ulam:237: 			if(evaluated[var]){
          {

//! DecisionTree.ulam:237: 			if(evaluated[var]){
            const u32 Uh_5tlreg44561 = Uv_3var.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44561 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref44563(Uv_919evaluated, Uh_5tlreg44561 * 1u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44564 = Uh_6tlref44563.read(); //gcnl:Node.cpp:691
            if(_Bool32ToCbool(Uh_5tlreg44564, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:238: 				return value[var];
                const u32 Uh_5tlreg44566 = Uv_3var.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44566 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref44568(Uv_5value, Uh_5tlreg44566 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg44569 = Uh_6tlref44568.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval44570(Uh_5tlreg44569); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44570); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }

//! DecisionTree.ulam:240: 			if(!evaluated[seqno] && !checked[seqno]){
          {

//! DecisionTree.ulam:240: 			if(!evaluated[seqno] && !checked[seqno]){
            u32 Uh_5tlreg44571 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44573 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44573 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10111b<EC> Uh_6tlref44575(Uv_919evaluated, Uh_5tlreg44573 * 1u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44576 = Uh_6tlref44575.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44577 = _LogicalBangBool32(Uh_5tlreg44576, 1); //gcnl:NodeUnaryOp.cpp:449
            if(_Bool32ToCbool(Uh_5tlreg44577, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44579 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg44579 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10111b<EC> Uh_6tlref44581(Uv_7checked, Uh_5tlreg44579 * 1u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg44582 = Uh_6tlref44581.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg44583 = _LogicalBangBool32(Uh_5tlreg44582, 1); //gcnl:NodeUnaryOp.cpp:449
              Uh_5tlreg44571 = Uh_5tlreg44583; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44571, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:244: 				Atom gene = findSeqno(seqno, id);
                const u32 Uh_5tlreg44586 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval44587(Uh_5tlreg44586); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44589 = Uv_2id.read(); //gcnl:Node.cpp:691
                Ui_Ut_102101u<EC> Uh_5tlval44590(Uh_5tlreg44589); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_102961a<EC> Uh_5tuval44592 = THE_INSTANCE.Uf_919findSeqno(uc, ur, Uh_5tlval44587, Uh_5tlval44590); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_4gene(Uh_5tuval44592.read()); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:249: 				++dejavu;
                const u32 Uh_5tlreg44593 = 1; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44594 = _Int32ToUnsigned32(Uh_5tlreg44593, 32, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44596 = Uv_6dejavu.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44597 = _BinOpAddUnsigned32(Uh_5tlreg44596, Uh_5tlreg44594, 2); //gcnl:NodeBinaryOpEqualArith.cpp:128
                Uv_6dejavu.write(Uh_5tlreg44597); //gcnl:Node.cpp:885

//! DecisionTree.ulam:250: 				if(dejavu > 1){
                {

//! DecisionTree.ulam:250: 				if(dejavu > 1){
                  const u32 Uh_5tlreg44598 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44599 = _Int32ToInt32(Uh_5tlreg44598, 2, 3); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg44601 = Uv_6dejavu.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg44602 = _Unsigned32ToInt32(Uh_5tlreg44601, 2, 3); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg44603 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44602, Uh_5tlreg44599, 3); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44603, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:251: 					return (StoredValue) 0;
                      const u32 Uh_5tlreg44604 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44605 = _Int32ToUnsigned32(Uh_5tlreg44604, 2, 6); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10161u<EC> Uh_5tlval44606(Uh_5tlreg44605); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval44606); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                }

//! DecisionTree.ulam:253: 				if(gene as Gene){
                {

//! DecisionTree.ulam:253: 				if(gene as Gene){
                  const T Uh_3tut44608 = Uv_4gene.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg44609 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut44608); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg44609, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:253: 				if(gene as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval44610 = Uv_4gene; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102574Gene10<EC> Uv_4gene(Uh_5tuval44610, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval44610.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DecisionTree.ulam:254: 					checked[seqno] = true;
                      const u32 Uh_5tlreg44611 = 1u; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44613 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44613 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10111b<EC> Uh_6tlref44615(Uv_7checked, Uh_5tlreg44613 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44615.write(Uh_5tlreg44611);

//! DecisionTree.ulam:256: 					operator[seqno] = gene.operator;
                      const u32 Uh_5tlreg44618 = UlamRef<EC>(Uv_4gene, 17u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44620 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44620 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121u<EC> Uh_6tlref44622(Uv_8operator, Uh_5tlreg44620 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44622.write(Uh_5tlreg44618);

//! DecisionTree.ulam:258: 					tree0Type[seqno] = gene.tree0Type;
                      const u32 Uh_5tlreg44625 = UlamRef<EC>(Uv_4gene, 19u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44626 = _Unsigned32ToBits32(Uh_5tlreg44625, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg44628 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44628 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref44630(Uv_919tree0Type, Uh_5tlreg44628 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44630.write(Uh_5tlreg44626);

//! DecisionTree.ulam:259: 					eqTree0[seqno] = gene.eqTree0;
                      const u32 Uh_5tlreg44633 = UlamRef<EC>(Uv_4gene, 21u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44635 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44635 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref44637(Uv_7eqTree0, Uh_5tlreg44635 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44637.write(Uh_5tlreg44633);

//! DecisionTree.ulam:261: 					tree1Type[seqno] = gene.tree1Type;
                      const u32 Uh_5tlreg44640 = UlamRef<EC>(Uv_4gene, 27u, 2u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44641 = _Unsigned32ToBits32(Uh_5tlreg44640, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg44643 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44643 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref44645(Uv_919tree1Type, Uh_5tlreg44643 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44645.write(Uh_5tlreg44641);

//! DecisionTree.ulam:262: 					eqTree1[seqno] = gene.eqTree1;
                      const u32 Uh_5tlreg44648 = UlamRef<EC>(Uv_4gene, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44650 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44650 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref44652(Uv_7eqTree1, Uh_5tlreg44650 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44652.write(Uh_5tlreg44648);
                    }
                  } // end if
                }
              }
            } // end if
          }

//! DecisionTree.ulam:268: 			if(tree0Type[seqno] == 1 && eqTree0[seqno] == 0){
          {

//! DecisionTree.ulam:268: 			if(tree0Type[seqno] == 1 && eqTree0[seqno] == 0){
            u32 Uh_5tlreg44653 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44654 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44655 = _Int32ToBits32(Uh_5tlreg44654, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44657 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44657 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref44659(Uv_919tree0Type, Uh_5tlreg44657 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44660 = Uh_6tlref44659.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44661 = _BinOpCompareEqEqBits32(Uh_5tlreg44660, Uh_5tlreg44655, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44661, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44662 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg44663 = _Int32ToInt32(Uh_5tlreg44662, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg44665 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg44665 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10161u<EC> Uh_6tlref44667(Uv_7eqTree0, Uh_5tlreg44665 * 6u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg44668 = Uh_6tlref44667.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg44669 = _Unsigned32ToInt32(Uh_5tlreg44668, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg44670 = _BinOpCompareEqEqInt32(Uh_5tlreg44669, Uh_5tlreg44663, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg44653 = Uh_5tlreg44670; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44653, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:269: 				tree0Type[seqno] = 0;
                const u32 Uh_5tlreg44671 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44672 = _Int32ToBits32(Uh_5tlreg44671, 2, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44674 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44674 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121t<EC> Uh_6tlref44676(Uv_919tree0Type, Uh_5tlreg44674 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref44676.write(Uh_5tlreg44672);

//! DecisionTree.ulam:270: 				eqTree0[seqno] = comIn;
                const u32 Uh_5tlreg44678 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44680 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44680 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref44682(Uv_7eqTree0, Uh_5tlreg44680 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref44682.write(Uh_5tlreg44678);
              }
            } // end if
          }

//! DecisionTree.ulam:272: 			if(tree1Type[seqno] == 1 && eqTree1[seqno] == 0){
          {

//! DecisionTree.ulam:272: 			if(tree1Type[seqno] == 1 && eqTree1[seqno] == 0){
            u32 Uh_5tlreg44683 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44684 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44685 = _Int32ToBits32(Uh_5tlreg44684, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44687 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44687 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref44689(Uv_919tree1Type, Uh_5tlreg44687 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44690 = Uh_6tlref44689.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44691 = _BinOpCompareEqEqBits32(Uh_5tlreg44690, Uh_5tlreg44685, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44691, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44692 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg44693 = _Int32ToInt32(Uh_5tlreg44692, 2, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg44695 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg44695 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10161u<EC> Uh_6tlref44697(Uv_7eqTree1, Uh_5tlreg44695 * 6u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg44698 = Uh_6tlref44697.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg44699 = _Unsigned32ToInt32(Uh_5tlreg44698, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg44700 = _BinOpCompareEqEqInt32(Uh_5tlreg44699, Uh_5tlreg44693, 7); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg44683 = Uh_5tlreg44700; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44683, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:273: 				tree0Type[seqno] = 0;
                const u32 Uh_5tlreg44701 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44702 = _Int32ToBits32(Uh_5tlreg44701, 2, 2); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg44704 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44704 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121t<EC> Uh_6tlref44706(Uv_919tree0Type, Uh_5tlreg44704 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref44706.write(Uh_5tlreg44702);

//! DecisionTree.ulam:274: 				eqTree0[seqno] = comIn;
                const u32 Uh_5tlreg44708 = Uv_5comIn.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg44710 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44710 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref44712(Uv_7eqTree0, Uh_5tlreg44710 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref44712.write(Uh_5tlreg44708);
              }
            } // end if
          }

//! DecisionTree.ulam:280: 			if(tree0Type[seqno] == 0 && tree1Type[seqno] == 0){
          {

//! DecisionTree.ulam:280: 			if(tree0Type[seqno] == 0 && tree1Type[seqno] == 0){
            u32 Uh_5tlreg44713 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44714 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44715 = _Int32ToBits32(Uh_5tlreg44714, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44717 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44717 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref44719(Uv_919tree0Type, Uh_5tlreg44717 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44720 = Uh_6tlref44719.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44721 = _BinOpCompareEqEqBits32(Uh_5tlreg44720, Uh_5tlreg44715, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44721, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44722 = 0; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg44723 = _Int32ToBits32(Uh_5tlreg44722, 2, 2); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg44725 = Uv_5seqno.read(); //gcnl:Node.cpp:691
              if(Uh_5tlreg44725 >= 40) //gcnl:NodeSquareBracket.cpp:794
                FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
              Ui_Ut_r10121t<EC> Uh_6tlref44727(Uv_919tree1Type, Uh_5tlreg44725 * 2u + 0u, uc); //gcnl:Node.cpp:1303
              const u32 Uh_5tlreg44728 = Uh_6tlref44727.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg44729 = _BinOpCompareEqEqBits32(Uh_5tlreg44728, Uh_5tlreg44723, 2); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg44713 = Uh_5tlreg44729; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44713, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:281: 				value[seqno] = operate(eqTree0[seqno], operator[seqno], eqTree1[seqno]);
                const u32 Uh_5tlreg44732 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44732 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref44734(Uv_7eqTree0, Uh_5tlreg44732 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg44735 = Uh_6tlref44734.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval44736(Uh_5tlreg44735); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44738 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44738 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10121u<EC> Uh_6tlref44740(Uv_8operator, Uh_5tlreg44738 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg44741 = Uh_6tlref44740.read(); //gcnl:Node.cpp:691
                Ui_Ut_10121u<EC> Uh_5tlval44742(Uh_5tlreg44741); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44744 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44744 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref44746(Uv_7eqTree1, Uh_5tlreg44744 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg44747 = Uh_6tlref44746.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval44748(Uh_5tlreg44747); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval44750 = THE_INSTANCE.Uf_7operate(uc, ur, Uh_5tlval44736, Uh_5tlval44742, Uh_5tlval44748); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg44751 = Uh_5tlval44750.read(); //gcnl:Node.cpp:1156
                const u32 Uh_5tlreg44753 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44753 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref44755(Uv_5value, Uh_5tlreg44753 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref44755.write(Uh_5tlreg44751);

//! DecisionTree.ulam:282: 				evaluated[seqno] = true;
                const u32 Uh_5tlreg44756 = 1u; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44758 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44758 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10111b<EC> Uh_6tlref44760(Uv_919evaluated, Uh_5tlreg44758 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref44760.write(Uh_5tlreg44756);

//! DecisionTree.ulam:283: 				keepRecursing = true;
                const u32 Uh_5tlreg44761 = 1u; //gcnl:NodeTerminal.cpp:721
                Uv_9213keepRecursing.write(Uh_5tlreg44761); //gcnl:Node.cpp:885

//! DecisionTree.ulam:284: 				seqno = parent[seqno];
                const u32 Uh_5tlreg44764 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44764 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref44766(Uv_6parent, Uh_5tlreg44764 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg44767 = Uh_6tlref44766.read(); //gcnl:Node.cpp:691
                Uv_5seqno.write(Uh_5tlreg44767); //gcnl:Node.cpp:885
              }
            } // end if
          }

//! DecisionTree.ulam:289: 			if(tree0Type[seqno] == 1){
          {

//! DecisionTree.ulam:289: 			if(tree0Type[seqno] == 1){
            const u32 Uh_5tlreg44769 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44770 = _Int32ToBits32(Uh_5tlreg44769, 2, 2); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg44772 = Uv_5seqno.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg44772 >= 40) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10121t<EC> Uh_6tlref44774(Uv_919tree0Type, Uh_5tlreg44772 * 2u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg44775 = Uh_6tlref44774.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg44776 = _BinOpCompareEqEqBits32(Uh_5tlreg44775, Uh_5tlreg44770, 2); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44776, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DecisionTree.ulam:290: 				Seqno childseqno = (Seqno)eqTree0[seqno];
                const u32 Uh_5tlreg44778 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg44778 >= 40) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10161u<EC> Uh_6tlref44780(Uv_7eqTree0, Uh_5tlreg44778 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                const u32 Uh_5tlreg44781 = Uh_6tlref44780.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uv_9210childseqno(Uh_5tlreg44781); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:291: 				if(!evaluated[childseqno]){
                {

//! DecisionTree.ulam:291: 				if(!evaluated[childseqno]){
                  const u32 Uh_5tlreg44783 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44783 >= 40) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10111b<EC> Uh_6tlref44785(Uv_919evaluated, Uh_5tlreg44783 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44786 = Uh_6tlref44785.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg44787 = _LogicalBangBool32(Uh_5tlreg44786, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg44787, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:292: 					parent[childseqno] = seqno;
                      const u32 Uh_5tlreg44789 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44791 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44791 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref44793(Uv_6parent, Uh_5tlreg44791 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44793.write(Uh_5tlreg44789);

//! DecisionTree.ulam:293: 					seqno = childseqno;
                      const u32 Uh_5tlreg44795 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      Uv_5seqno.write(Uh_5tlreg44795); //gcnl:Node.cpp:885

//! DecisionTree.ulam:294: 					keepRecursing = true;
                      const u32 Uh_5tlreg44797 = 1u; //gcnl:NodeTerminal.cpp:721
                      Uv_9213keepRecursing.write(Uh_5tlreg44797); //gcnl:Node.cpp:885
                    }
                  } // end if
                  else
                  {
                    {

//! DecisionTree.ulam:297: 					tree0Type[seqno] = 0;
                      const u32 Uh_5tlreg44799 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44800 = _Int32ToBits32(Uh_5tlreg44799, 2, 2); //gcnl:NodeCast.cpp:723
                      const u32 Uh_5tlreg44802 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44802 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10121t<EC> Uh_6tlref44804(Uv_919tree0Type, Uh_5tlreg44802 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44804.write(Uh_5tlreg44800);

//! DecisionTree.ulam:298: 					eqTree0[seqno] = value[childseqno];
                      const u32 Uh_5tlreg44806 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44806 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref44808(Uv_5value, Uh_5tlreg44806 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg44809 = Uh_6tlref44808.read(); //gcnl:Node.cpp:691
                      const u32 Uh_5tlreg44811 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44811 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref44813(Uv_7eqTree0, Uh_5tlreg44811 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      Uh_6tlref44813.write(Uh_5tlreg44809);

//! DecisionTree.ulam:299: 					keepRecursing = true;
                      const u32 Uh_5tlreg44814 = 1u; //gcnl:NodeTerminal.cpp:721
                      Uv_9213keepRecursing.write(Uh_5tlreg44814); //gcnl:Node.cpp:885
                    }
                  } //end else
                }
              }
            } // end if
            else
            {
              {

//! DecisionTree.ulam:303: 				if(tree1Type[seqno] == 1){
                {

//! DecisionTree.ulam:303: 				if(tree1Type[seqno] == 1){
                  const u32 Uh_5tlreg44816 = 1; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44817 = _Int32ToBits32(Uh_5tlreg44816, 2, 2); //gcnl:NodeCast.cpp:723
                  const u32 Uh_5tlreg44819 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                  if(Uh_5tlreg44819 >= 40) //gcnl:NodeSquareBracket.cpp:794
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                  Ui_Ut_r10121t<EC> Uh_6tlref44821(Uv_919tree1Type, Uh_5tlreg44819 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                  const u32 Uh_5tlreg44822 = Uh_6tlref44821.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg44823 = _BinOpCompareEqEqBits32(Uh_5tlreg44822, Uh_5tlreg44817, 2); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44823, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DecisionTree.ulam:304: 					Seqno childseqno = (Seqno)eqTree1[seqno];
                      const u32 Uh_5tlreg44825 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                      if(Uh_5tlreg44825 >= 40) //gcnl:NodeSquareBracket.cpp:794
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                      Ui_Ut_r10161u<EC> Uh_6tlref44827(Uv_7eqTree1, Uh_5tlreg44825 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                      const u32 Uh_5tlreg44828 = Uh_6tlref44827.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10161u<EC> Uv_9210childseqno(Uh_5tlreg44828); //gcnl:NodeVarDecl.cpp:1060

//! DecisionTree.ulam:305: 					if(!evaluated[childseqno]){
                      {

//! DecisionTree.ulam:305: 					if(!evaluated[childseqno]){
                        const u32 Uh_5tlreg44830 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                        if(Uh_5tlreg44830 >= 40) //gcnl:NodeSquareBracket.cpp:794
                          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                        Ui_Ut_r10111b<EC> Uh_6tlref44832(Uv_919evaluated, Uh_5tlreg44830 * 1u + 0u, uc); //gcnl:Node.cpp:1303
                        const u32 Uh_5tlreg44833 = Uh_6tlref44832.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg44834 = _LogicalBangBool32(Uh_5tlreg44833, 1); //gcnl:NodeUnaryOp.cpp:449
                        if(_Bool32ToCbool(Uh_5tlreg44834, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! DecisionTree.ulam:306: 						parent[childseqno] = seqno;
                            const u32 Uh_5tlreg44836 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            const u32 Uh_5tlreg44838 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg44838 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref44840(Uv_6parent, Uh_5tlreg44838 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref44840.write(Uh_5tlreg44836);

//! DecisionTree.ulam:307: 						seqno = childseqno;
                            const u32 Uh_5tlreg44842 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            Uv_5seqno.write(Uh_5tlreg44842); //gcnl:Node.cpp:885

//! DecisionTree.ulam:308: 						keepRecursing = true;
                            const u32 Uh_5tlreg44844 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_9213keepRecursing.write(Uh_5tlreg44844); //gcnl:Node.cpp:885
                          }
                        } // end if
                        else
                        {
                          {

//! DecisionTree.ulam:311: 						tree1Type[seqno] = 0;
                            const u32 Uh_5tlreg44846 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg44847 = _Int32ToBits32(Uh_5tlreg44846, 2, 2); //gcnl:NodeCast.cpp:723
                            const u32 Uh_5tlreg44849 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg44849 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10121t<EC> Uh_6tlref44851(Uv_919tree1Type, Uh_5tlreg44849 * 2u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref44851.write(Uh_5tlreg44847);

//! DecisionTree.ulam:312: 						eqTree1[seqno] = value[childseqno];
                            const u32 Uh_5tlreg44853 = Uv_9210childseqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg44853 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref44855(Uv_5value, Uh_5tlreg44853 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            const u32 Uh_5tlreg44856 = Uh_6tlref44855.read(); //gcnl:Node.cpp:691
                            const u32 Uh_5tlreg44858 = Uv_5seqno.read(); //gcnl:Node.cpp:691
                            if(Uh_5tlreg44858 >= 40) //gcnl:NodeSquareBracket.cpp:794
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                            Ui_Ut_r10161u<EC> Uh_6tlref44860(Uv_7eqTree1, Uh_5tlreg44858 * 6u + 0u, uc); //gcnl:Node.cpp:1303
                            Uh_6tlref44860.write(Uh_5tlreg44856);

//! DecisionTree.ulam:313: 						keepRecursing = true;
                            const u32 Uh_5tlreg44861 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_9213keepRecursing.write(Uh_5tlreg44861); //gcnl:Node.cpp:885
                          }
                        } //end else
                      }
                    }
                  } // end if
                }
              }
            } //end else
          }
        }

//! DecisionTree.ulam:236: 		while(keepRecursing){
Ul_214endcontrolloop220:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DecisionTree.ulam:320: 		return value[var];
    const u32 Uh_5tlreg44864 = Uv_3var.read(); //gcnl:Node.cpp:691
    if(Uh_5tlreg44864 >= 40) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10161u<EC> Uh_6tlref44866(Uv_5value, Uh_5tlreg44864 * 6u + 0u, uc); //gcnl:Node.cpp:1303
    const u32 Uh_5tlreg44867 = Uh_6tlref44866.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44868(Uh_5tlreg44867); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44868); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8evaluate



//! DecisionTree.ulam:360: 	StoredValue operate(StoredValue val1, Unsigned(2) operator, StoredValue val2){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109212DecisionTree10<EC>::Uf_7operate(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_4val1, Ui_Ut_10121u<EC>& Uv_8operator, Ui_Ut_10161u<EC>& Uv_4val2) const
  {

//! DecisionTree.ulam:361: 		StoredValue value;
    Ui_Ut_10161u<EC> Uv_5value; //gcnl:NodeVarDecl.cpp:1096

//! DecisionTree.ulam:362: 		if(operator == 0){
    {

//! DecisionTree.ulam:362: 		if(operator == 0){
      const u32 Uh_5tlreg44869 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44870 = _Int32ToInt32(Uh_5tlreg44869, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44872 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44873 = _Unsigned32ToInt32(Uh_5tlreg44872, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44874 = _BinOpCompareEqEqInt32(Uh_5tlreg44873, Uh_5tlreg44870, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44874, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:363: 			value = (StoredValue)(val1 + val2);
          const u32 Uh_5tlreg44876 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44877 = _Unsigned32ToUnsigned32(Uh_5tlreg44876, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44879 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44880 = _Unsigned32ToUnsigned32(Uh_5tlreg44879, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44881 = _BinOpAddUnsigned32(Uh_5tlreg44880, Uh_5tlreg44877, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg44882 = _Unsigned32ToUnsigned32(Uh_5tlreg44881, 7, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg44882); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:365: 		if(operator == 1){
    {

//! DecisionTree.ulam:365: 		if(operator == 1){
      const u32 Uh_5tlreg44884 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44885 = _Int32ToInt32(Uh_5tlreg44884, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44887 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44888 = _Unsigned32ToInt32(Uh_5tlreg44887, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44889 = _BinOpCompareEqEqInt32(Uh_5tlreg44888, Uh_5tlreg44885, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44889, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:366: 			value = (StoredValue)(val1 - val2);
          const u32 Uh_5tlreg44891 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44892 = _Unsigned32ToUnsigned32(Uh_5tlreg44891, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44894 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44895 = _Unsigned32ToUnsigned32(Uh_5tlreg44894, 6, 7); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44896 = _BinOpSubtractUnsigned32(Uh_5tlreg44895, Uh_5tlreg44892, 7); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg44897 = _Unsigned32ToUnsigned32(Uh_5tlreg44896, 7, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg44897); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:368: 		if(operator == 2){
    {

//! DecisionTree.ulam:368: 		if(operator == 2){
      const u32 Uh_5tlreg44899 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44901 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44902 = _Unsigned32ToInt32(Uh_5tlreg44901, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44903 = _BinOpCompareEqEqInt32(Uh_5tlreg44902, Uh_5tlreg44899, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44903, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:369: 			value = (StoredValue)(val1 * val2);
          const u32 Uh_5tlreg44905 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44906 = _Unsigned32ToUnsigned32(Uh_5tlreg44905, 6, 12); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44908 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44909 = _Unsigned32ToUnsigned32(Uh_5tlreg44908, 6, 12); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg44910 = _BinOpMultiplyUnsigned32(Uh_5tlreg44909, Uh_5tlreg44906, 12); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg44911 = _Unsigned32ToUnsigned32(Uh_5tlreg44910, 12, 6); //gcnl:NodeCast.cpp:723
          Uv_5value.write(Uh_5tlreg44911); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:371: 		if(operator == 3){
    {

//! DecisionTree.ulam:371: 		if(operator == 3){
      const u32 Uh_5tlreg44913 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44915 = Uv_8operator.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg44916 = _Unsigned32ToInt32(Uh_5tlreg44915, 2, 3); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg44917 = _BinOpCompareEqEqInt32(Uh_5tlreg44916, Uh_5tlreg44913, 3); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44917, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DecisionTree.ulam:372: 			value = (StoredValue)(val1 / val2);
          const u32 Uh_5tlreg44919 = Uv_4val2.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44921 = Uv_4val1.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg44922 = _BinOpDivideUnsigned32(Uh_5tlreg44921, Uh_5tlreg44919, 6); //gcnl:NodeBinaryOp.cpp:719
          Uv_5value.write(Uh_5tlreg44922); //gcnl:Node.cpp:885
        }
      } // end if
    }

//! DecisionTree.ulam:374: 		return value;
    const u32 Uh_5tlreg44925 = Uv_5value.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44926(Uh_5tlreg44925); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44926); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7operate


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109212DecisionTree10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10106Random10", "r", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109212DecisionTree10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109212DecisionTree10<EC>::GetMangledClassName() const
  {
    return "Uq_10109212DecisionTree10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109212DecisionTree10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109212DecisionTree10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10109212DecisionTree10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_10109212DecisionTree10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109212DecisionTree10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_10109212DecisionTree10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_10109212DecisionTree10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109212DecisionTree10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

