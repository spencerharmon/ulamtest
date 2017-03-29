/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
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
#include "Ue_102188EggShell10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Ue_10106Primer10<EC>::Ue_10106Primer10() : UlamElement<EC>(MFM_UUID_FOR("Ue10106Primer10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("P");  // figure this out later
    Element<EC>::SetName("Primer"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10106Primer10<EC>::~Ue_10106Primer10(){} //gcnl:NodeBlockClass.cpp:1743


//! Primer.ulam:76: 	Void behave(){
  template<class EC>
  void Ue_10106Primer10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Primer.ulam:78: 		ID id = cell.genID();
    UlamRef<EC> Uh_3tur225(ur, 0u, 0u, &Uq_10104Cell10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102101u<EC> Uh_5tlval227 = Uq_10104Cell10<EC>::THE_INSTANCE.Uf_5genID(uc, Uh_3tur225); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg228 = Uh_5tlval227.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102101u<EC> Uv_2id(Uh_5tlreg228); //gcnl:NodeVarDecl.cpp:1060

//! Primer.ulam:79: 		dt.initVars(id);
    UlamRef<EC> Uh_3tur230(ur, 0u, 0u, &Uq_10109212DecisionTree10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg232 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval233(Uh_5tlreg232); //func arg& //gcnl:Node.cpp:1128
    Uq_10109212DecisionTree10<EC>::THE_INSTANCE.Uf_8initVars(uc, Uh_3tur230, Uh_5tlval233); //gcnl:NodeFunctionCall.cpp:1006

//! Primer.ulam:80: 		nucleus(id);
    const u32 Uh_5tlreg237 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval238(Uh_5tlreg237); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_7nucleus(uc, ur, Uh_5tlval238); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_6behave



//! Primer.ulam:21: 	Bool decide(){
  template<class EC>
  Ui_Ut_10111b<EC> Ue_10106Primer10<EC>::Uf_6decide(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Primer.ulam:22: 		Unsigned(1) odds;
    Ui_Ut_10111u<EC> Uv_4odds; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:24: 		if(r.oneIn(odds.maxof)){
    {

//! Primer.ulam:24: 		if(r.oneIn(odds.maxof)){
      UlamRef<EC> Uh_3tur241(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg242 = 1u; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg243 = _Unsigned32ToUnsigned32(Uh_5tlreg242, 1, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321u<EC> Uh_5tlval244(Uh_5tlreg243); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_10111b<EC> Uh_5tlval246 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur241, Uh_5tlval244); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg247 = Uh_5tlval246.read(); //gcnl:Node.cpp:1156
      if(_Bool32ToCbool(Uh_5tlreg247, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Primer.ulam:25: 			return true;
          const u32 Uh_5tlreg248 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval249(Uh_5tlreg248); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval249); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! Primer.ulam:28: 			return false;
          const u32 Uh_5tlreg250 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval251(Uh_5tlreg250); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval251); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_6decide



//! Primer.ulam:31: 	Void nucleus(ID id){
  template<class EC>
  void Ue_10106Primer10<EC>::Uf_7nucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! Primer.ulam:32: 		Atom nu = cell.makeNucleus(id,0,0);
    UlamRef<EC> Uh_3tur253(ur, 0u, 0u, &Uq_10104Cell10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg255 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval256(Uh_5tlreg255); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg257 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg258 = _Int32ToUnsigned32(Uh_5tlreg257, 2, 10); //gcnl:NodeCast.cpp:723
    Ui_Ut_102101u<EC> Uh_5tlval259(Uh_5tlreg258); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg260 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg261 = _Int32ToUnsigned32(Uh_5tlreg260, 2, 10); //gcnl:NodeCast.cpp:723
    Ui_Ut_102101u<EC> Uh_5tlval262(Uh_5tlreg261); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102961a<EC> Uh_5tuval264 = Uq_10104Cell10<EC>::THE_INSTANCE.Uf_9211makeNucleus(uc, Uh_3tur253, Uh_5tlval256, Uh_5tlval259, Uh_5tlval262); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Ut_102961a<EC> Uv_2nu(Uh_5tuval264.read()); //gcnl:NodeVarDecl.cpp:1060

//! Primer.ulam:33: 		ew[0] = nu;
    const T Uh_3tut266 = Uv_2nu.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur268(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg269 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg270 = _Int32ToUnsigned32(Uh_5tlreg269, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval271(Uh_5tlreg270); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval273 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur268, Uh_5tlval271); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval273.WriteAtom(Uh_3tut266); //write into atomof ref //gcnl:Node.cpp:980

  } // Uf_7nucleus



//! Primer.ulam:35: 	Void generate(){
  template<class EC>
  void Ue_10106Primer10<EC>::Uf_8generate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Primer.ulam:36: 		ID id;
    Ui_Ut_102101u<EC> Uv_2id; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:37: 		Gene gene1;
    Ui_Ue_102564Gene10<EC> Uv_5gene1; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:38: 		gene1.id = id;
    const u32 Uh_5tlreg275 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_5gene1, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg275); //gcnl:Node.cpp:885

//! Primer.ulam:39: 		gene1.seqno = 1;
    const u32 Uh_5tlreg278 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg279 = _Int32ToUnsigned32(Uh_5tlreg278, 2, 6); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(35u, 6u, Uv_5gene1, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg279); //gcnl:Node.cpp:885

//! Primer.ulam:40: 		ew[2] = gene1;
    const T Uh_3tut283 = Uv_5gene1.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur285(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg286 = 2; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg287 = _Int32ToUnsigned32(Uh_5tlreg286, 3, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval288(Uh_5tlreg287); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval290 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur285, Uh_5tlval288); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval290.WriteAtom(Uh_3tut283); //write into atomof ref //gcnl:Node.cpp:980

//! Primer.ulam:42: 		Gene gene2;
    Ui_Ue_102564Gene10<EC> Uv_5gene2; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:43: 		gene2.id = id;
    const u32 Uh_5tlreg292 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_5gene2, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg292); //gcnl:Node.cpp:885

//! Primer.ulam:44: 		gene2.seqno = 2;
    const u32 Uh_5tlreg295 = 2; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg296 = _Int32ToUnsigned32(Uh_5tlreg295, 3, 6); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(35u, 6u, Uv_5gene2, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg296); //gcnl:Node.cpp:885

//! Primer.ulam:45: 		ew[3] = gene2;
    const T Uh_3tut3100 = Uv_5gene2.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur3102(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3103 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3104 = _Int32ToUnsigned32(Uh_5tlreg3103, 3, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval3105(Uh_5tlreg3104); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3107 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3102, Uh_5tlval3105); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval3107.WriteAtom(Uh_3tut3100); //write into atomof ref //gcnl:Node.cpp:980

//! Primer.ulam:47: 		Gene gene3;
    Ui_Ue_102564Gene10<EC> Uv_5gene3; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:48: 		gene3.id = id;
    const u32 Uh_5tlreg3109 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_5gene3, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3109); //gcnl:Node.cpp:885

//! Primer.ulam:49: 		gene3.seqno = 3;
    const u32 Uh_5tlreg3112 = 3; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3113 = _Int32ToUnsigned32(Uh_5tlreg3112, 3, 6); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(35u, 6u, Uv_5gene3, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3113); //gcnl:Node.cpp:885

//! Primer.ulam:50: 		ew[4] = gene3;
    const T Uh_3tut3117 = Uv_5gene3.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur3119(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3120 = 4; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3121 = _Int32ToUnsigned32(Uh_5tlreg3120, 4, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval3122(Uh_5tlreg3121); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3124 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3119, Uh_5tlval3122); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval3124.WriteAtom(Uh_3tut3117); //write into atomof ref //gcnl:Node.cpp:980

//! Primer.ulam:52: 		Gene gene4;
    Ui_Ue_102564Gene10<EC> Uv_5gene4; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:53: 		gene4.id = id;
    const u32 Uh_5tlreg3126 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_5gene4, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3126); //gcnl:Node.cpp:885

//! Primer.ulam:54: 		gene4.seqno = 4;
    const u32 Uh_5tlreg3129 = 4; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3130 = _Int32ToUnsigned32(Uh_5tlreg3129, 4, 6); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(35u, 6u, Uv_5gene4, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3130); //gcnl:Node.cpp:885

//! Primer.ulam:55: 		ew[5] = gene4;
    const T Uh_3tut3134 = Uv_5gene4.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur3136(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3137 = 5; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3138 = _Int32ToUnsigned32(Uh_5tlreg3137, 4, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval3139(Uh_5tlreg3138); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3141 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3136, Uh_5tlval3139); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval3141.WriteAtom(Uh_3tut3134); //write into atomof ref //gcnl:Node.cpp:980

//! Primer.ulam:57: 		Gene gene5;
    Ui_Ue_102564Gene10<EC> Uv_5gene5; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:58: 		gene5.id = id;
    const u32 Uh_5tlreg3143 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_5gene5, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3143); //gcnl:Node.cpp:885

//! Primer.ulam:59: 		gene5.seqno = 5;
    const u32 Uh_5tlreg3146 = 5; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3147 = _Int32ToUnsigned32(Uh_5tlreg3146, 4, 6); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(35u, 6u, Uv_5gene5, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3147); //gcnl:Node.cpp:885

//! Primer.ulam:60: 		ew[6] = gene5;
    const T Uh_3tut3151 = Uv_5gene5.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur3153(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3154 = 6; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3155 = _Int32ToUnsigned32(Uh_5tlreg3154, 4, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval3156(Uh_5tlreg3155); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3158 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3153, Uh_5tlval3156); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval3158.WriteAtom(Uh_3tut3151); //write into atomof ref //gcnl:Node.cpp:980

//! Primer.ulam:62: 		Gene gene6;
    Ui_Ue_102564Gene10<EC> Uv_5gene6; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:63: 		gene6.id = id;
    const u32 Uh_5tlreg3160 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_5gene6, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3160); //gcnl:Node.cpp:885

//! Primer.ulam:64: 		gene6.seqno = 6;
    const u32 Uh_5tlreg3163 = 6; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3164 = _Int32ToUnsigned32(Uh_5tlreg3163, 4, 6); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(35u, 6u, Uv_5gene6, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3164); //gcnl:Node.cpp:885

//! Primer.ulam:65: 		ew[7] = gene6;
    const T Uh_3tut3168 = Uv_5gene6.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur3170(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3171 = 7; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3172 = _Int32ToUnsigned32(Uh_5tlreg3171, 4, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval3173(Uh_5tlreg3172); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3175 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3170, Uh_5tlval3173); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval3175.WriteAtom(Uh_3tut3168); //write into atomof ref //gcnl:Node.cpp:980

//! Primer.ulam:67: 		Gene gene7;
    Ui_Ue_102564Gene10<EC> Uv_5gene7; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:68: 		gene7.id = id;
    const u32 Uh_5tlreg3177 = Uv_2id.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(25u, 10u, Uv_5gene7, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3177); //gcnl:Node.cpp:885

//! Primer.ulam:69: 		gene7.seqno = 7;
    const u32 Uh_5tlreg3180 = 7; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3181 = _Int32ToUnsigned32(Uh_5tlreg3180, 4, 6); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(35u, 6u, Uv_5gene7, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3181); //gcnl:Node.cpp:885

//! Primer.ulam:70: 		ew[8] = gene7;
    const T Uh_3tut3185 = Uv_5gene7.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur3187(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3188 = 8; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3189 = _Int32ToUnsigned32(Uh_5tlreg3188, 5, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval3190(Uh_5tlreg3189); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3192 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3187, Uh_5tlval3190); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval3192.WriteAtom(Uh_3tut3185); //write into atomof ref //gcnl:Node.cpp:980

  } // Uf_8generate



//! Primer.ulam:72: 	Void killself(){
  template<class EC>
  void Ue_10106Primer10<EC>::Uf_8killself(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Primer.ulam:73: 		Empty e;
    Ui_Ue_10105Empty10<EC> Uv_1e; //gcnl:NodeVarDecl.cpp:1096

//! Primer.ulam:74: 		ew[0] = e;
    const T Uh_3tut3194 = Uv_1e.read(); //gcnl:Node.cpp:691
    UlamRef<EC> Uh_3tur3196(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3197 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3198 = _Int32ToUnsigned32(Uh_5tlreg3197, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval3199(Uh_5tlreg3198); //func arg& //gcnl:Node.cpp:1128
    Ui_Ut_r102961a<EC> Uh_5tuval3201 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3196, Uh_5tlval3199); //gcnl:NodeFunctionCall.cpp:1006
    Uh_5tuval3201.WriteAtom(Uh_3tut3194); //write into atomof ref //gcnl:Node.cpp:980

  } // Uf_8killself


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10106Primer10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10106Random10", "r", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_10104Cell10", "cell", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 3: { static UlamClassDataMemberInfo i("Uq_10109212DecisionTree10", "dt", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10106Primer10<EC>::GetDataMemberCount() const
  {
    return 4; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10106Primer10<EC>::GetMangledClassName() const
  {
    return "Ue_10106Primer10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10106Primer10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10106Primer10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10106Primer10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10106Primer10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10106Primer10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10106Primer10<EC>::Uf_6behave10) &Ue_10106Primer10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Ue_10106Primer10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Ue_10106Primer10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10106Primer10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10106Primer10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2404
  } //isMethod

  template<class EC>
  const u32 Ue_10106Primer10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2442
  } //ReadTypeField

  template<class EC>
  void Ue_10106Primer10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2464
  } //WriteTypeField

} //MFM

