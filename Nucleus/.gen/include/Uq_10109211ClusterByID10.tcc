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
#include "Uq_1010919SiteUtils10.h"
#include "Un_10411209215SiteVisitorByID10.h"
#include "Ue_102158EggShell10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Uq_10109211ClusterByID10<EC>::Uq_10109211ClusterByID10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109211ClusterByID10", 0))
  { }

  template<class EC>
  Uq_10109211ClusterByID10<EC>::~Uq_10109211ClusterByID10(){} //gcnl:NodeBlockClass.cpp:1784


//! ClusterByID.ulam:148: 	SiteNum emptySlotNearMe(){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9215emptySlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! ClusterByID.ulam:149: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:150: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:152: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur43510(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur43510); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:153: 		Category cEmpty = ws.allocateCategory();
    UlamRef<EC> Uh_3tur43513(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval43515 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur43513); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43516 = Uh_5tlval43515.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_6cEmpty(Uh_5tlreg43516); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:155: 		ElementType tEmpty = au.getEmptyType();
    UlamRef<EC> Uh_3tur43518(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102161u<EC> Uh_5tlval43520 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getEmptyType(uc, Uh_3tur43518); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43521 = Uh_5tlval43520.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_6tEmpty(Uh_5tlreg43521); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:157: 		sv.setType(cEmpty,tEmpty);
    UlamRef<EC> Uh_3tur43523(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43525 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43526(Uh_5tlreg43525); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43528 = Uv_6tEmpty.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval43529(Uh_5tlreg43528); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur43523, Uh_5tlval43526, Uh_5tlval43529); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:160: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur43532(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval43533; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval43533); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43535(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43536(Uh_5tlval43535); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg43537 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43538 = _Int32ToUnary32(Uh_5tlreg43537, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43539(Uh_5tlreg43538); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43540 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43541 = _Int32ToUnary32(Uh_5tlreg43540, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43542(Uh_5tlreg43541); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43532, Uh_6tlref43536, Uh_5tlval43539, Uh_5tlval43542); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:161: 		if(ws.getHits(cEmpty)==(Unsigned)0){
    {

//! ClusterByID.ulam:161: 		if(ws.getHits(cEmpty)==(Unsigned)0){
      const u32 Uh_5tlreg43544 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43545 = _Int32ToUnsigned32(Uh_5tlreg43544, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur43547(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43549 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval43550(Uh_5tlreg43549); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval43552 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43547, Uh_5tlval43550); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43553 = Uh_5tlval43552.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg43554 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43553, Uh_5tlreg43545, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43554, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:162: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur43556(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval43557; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval43557); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43559(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43560(Uh_5tlval43559); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg43561 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43562 = _Int32ToUnary32(Uh_5tlreg43561, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval43563(Uh_5tlreg43562); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg43564 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43565 = _Int32ToUnary32(Uh_5tlreg43564, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval43566(Uh_5tlreg43565); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43556, Uh_6tlref43560, Uh_5tlval43563, Uh_5tlval43566); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:163: 			if(ws.getHits(cEmpty)==(Unsigned)0){
          {

//! ClusterByID.ulam:163: 			if(ws.getHits(cEmpty)==(Unsigned)0){
            const u32 Uh_5tlreg43568 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43569 = _Int32ToUnsigned32(Uh_5tlreg43568, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur43571(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg43573 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval43574(Uh_5tlreg43573); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval43576 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43571, Uh_5tlval43574); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg43577 = Uh_5tlval43576.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg43578 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43577, Uh_5tlreg43569, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43578, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:164: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur43580(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval43581; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval43581); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43583(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43584(Uh_5tlval43583); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg43585 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg43586 = _Int32ToUnary32(Uh_5tlreg43585, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval43587(Uh_5tlreg43586); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg43588 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg43589 = _Int32ToUnary32(Uh_5tlreg43588, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval43590(Uh_5tlreg43589); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43580, Uh_6tlref43584, Uh_5tlval43587, Uh_5tlval43590); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:165: 				if(ws.getHits(cEmpty)==(Unsigned)0){
                {

//! ClusterByID.ulam:165: 				if(ws.getHits(cEmpty)==(Unsigned)0){
                  const u32 Uh_5tlreg43592 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg43593 = _Int32ToUnsigned32(Uh_5tlreg43592, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur43595(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg43597 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval43598(Uh_5tlreg43597); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval43600 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43595, Uh_5tlval43598); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg43601 = Uh_5tlval43600.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg43602 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43601, Uh_5tlreg43593, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg43602, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:166: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur43604(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval43605; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval43605); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43607(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43608(Uh_5tlval43607); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg43609 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg43610 = _Int32ToUnary32(Uh_5tlreg43609, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval43611(Uh_5tlreg43610); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg43612 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg43613 = _Int32ToUnary32(Uh_5tlreg43612, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval43614(Uh_5tlreg43613); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43604, Uh_6tlref43608, Uh_5tlval43611, Uh_5tlval43614); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:167: 					if(ws.getHits(cEmpty) <= (Unsigned)41){
                      {

//! ClusterByID.ulam:167: 					if(ws.getHits(cEmpty) <= (Unsigned)41){
                        const u32 Uh_5tlreg43616 = 41; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg43617 = _Int32ToUnsigned32(Uh_5tlreg43616, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur43619(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg43621 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval43622(Uh_5tlreg43621); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval43624 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43619, Uh_5tlval43622); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg43625 = Uh_5tlval43624.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg43626 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg43625, Uh_5tlreg43617, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43626, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:168: 						return ws.getSiteNum(cEmpty);
                            UlamRef<EC> Uh_3tur43628(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg43630 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval43631(Uh_5tlreg43630); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval43633 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43628, Uh_5tlval43631); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg43634 = Uh_5tlval43633.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval43635(Uh_5tlreg43634); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval43635); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:171: 						return 0;
                            const u32 Uh_5tlreg43636 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg43637 = _Int32ToUnsigned32(Uh_5tlreg43636, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval43638(Uh_5tlreg43637); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval43638); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:174: 				return ws.getSiteNum(cEmpty);
                UlamRef<EC> Uh_3tur43640(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43642 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval43643(Uh_5tlreg43642); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval43645 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43640, Uh_5tlval43643); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg43646 = Uh_5tlval43645.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval43647(Uh_5tlreg43646); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval43647); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }

//! ClusterByID.ulam:176: 			return ws.getSiteNum(cEmpty);
          UlamRef<EC> Uh_3tur43649(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43651 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval43652(Uh_5tlreg43651); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval43654 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43649, Uh_5tlval43652); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg43655 = Uh_5tlval43654.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval43656(Uh_5tlreg43655); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43656); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! ClusterByID.ulam:178: 		return ws.getSiteNum(cEmpty);
    UlamRef<EC> Uh_3tur43658(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43660 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43661(Uh_5tlreg43660); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43663 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43658, Uh_5tlval43661); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43664 = Uh_5tlval43663.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval43665(Uh_5tlreg43664); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43665); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9215emptySlotNearMe



//! ClusterByID.ulam:181: 	Bool bringGenesCloser(ID id, Atom me){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211ClusterByID10<EC>::Uf_9216bringGenesCloser(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_102961a<EC>& Uv_2me) const
  {

//! ClusterByID.ulam:182: 		Bool foundGene = false;
    const u32 Uh_5tlreg43666 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_919foundGene(Uh_5tlreg43666); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:183: 		if(me as Nucleus){
    {

//! ClusterByID.ulam:183: 		if(me as Nucleus){
      const T Uh_3tut43668 = Uv_2me.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43669 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43668); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43669, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:183: 		if(me as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval43670 = Uv_2me; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_2me(Uh_5tuval43670, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43670.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
          {

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
            const u32 Uh_5tlreg43671 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43672 = _Int32ToUnsigned32(Uh_5tlreg43671, 2, 6); //gcnl:NodeCast.cpp:723
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43672); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
            while(true)
            {
              const u32 Uh_5tlreg43673 = 40; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43675 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43676 = _Unsigned32ToInt32(Uh_5tlreg43675, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43677 = _BinOpCompareLessEqualInt32(Uh_5tlreg43676, Uh_5tlreg43673, 7); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg43677, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
              {

//! ClusterByID.ulam:185: 				Atom a = ew[i];
                UlamRef<EC> Uh_3tur43679(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43681 = Uv_1i.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval43682(Uh_5tlreg43681); //func arg& //gcnl:Node.cpp:1128
                Ui_Ut_r102961a<EC> Uh_5tuval43684 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43679, Uh_5tlval43682); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43684.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:186: 				if(a as Gene){
                {

//! ClusterByID.ulam:186: 				if(a as Gene){
                  const T Uh_3tut43686 = Uv_1a.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg43687 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43686); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg43687, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:186: 				if(a as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval43688 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval43688, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43688.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:187: 					if(a.id == id){
                      {

//! ClusterByID.ulam:187: 					if(a.id == id){
                        const u32 Uh_5tlreg43690 = Uv_2id.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg43693 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg43694 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43693, Uh_5tlreg43690, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43694, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:188: 						SiteNum e = nonCellSlotNearMe(id);
                            const u32 Uh_5tlreg43697 = Uv_2id.read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uh_5tlval43698(Uh_5tlreg43697); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval43700 = THE_INSTANCE.Uf_9217nonCellSlotNearMe(uc, ur, Uh_5tlval43698); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg43701 = Uh_5tlval43700.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg43701); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:189: 						ew.swap(i,e);
                            UlamRef<EC> Uh_3tur43703(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg43705 = Uv_1i.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval43706(Uh_5tlreg43705); //func arg& //gcnl:Node.cpp:1128
                            const u32 Uh_5tlreg43708 = Uv_1e.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval43709(Uh_5tlreg43708); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10111b<EC> Uh_5tlval43711 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43703, Uh_5tlval43706, Uh_5tlval43709); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg43712 = Uh_5tlval43711.read(); //gcnl:Node.cpp:1156
                          }
                        } // end if
                      }
                    }
                  } // end if
                }
              }

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
Ul_214endcontrolloop215:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
              const u32 Uh_5tlreg43713 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43714 = _Int32ToUnsigned32(Uh_5tlreg43713, 32, 6); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43716 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43717 = _BinOpAddUnsigned32(Uh_5tlreg43716, Uh_5tlreg43714, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1i.write(Uh_5tlreg43717); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

//! ClusterByID.ulam:194: 		if(me as Gene){
    {

//! ClusterByID.ulam:194: 		if(me as Gene){
      const T Uh_3tut43719 = Uv_2me.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43720 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43719); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43720, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:194: 		if(me as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval43721 = Uv_2me; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_2me(Uh_5tuval43721, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43721.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:195: 			Bool canSeeNucleus = me.canSeeNucleus;
          const u32 Uh_5tlreg43724 = UlamRef<EC>(Uv_2me, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10111b<EC> Uv_9213canSeeNucleus(Uh_5tlreg43724); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
          {

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
            const u32 Uh_5tlreg43725 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43726 = _Int32ToUnsigned32(Uh_5tlreg43725, 2, 6); //gcnl:NodeCast.cpp:723
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43726); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
            while(true)
            {
              const u32 Uh_5tlreg43727 = 40; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43729 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43730 = _Unsigned32ToInt32(Uh_5tlreg43729, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43731 = _BinOpCompareLessEqualInt32(Uh_5tlreg43730, Uh_5tlreg43727, 7); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg43731, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
              {

//! ClusterByID.ulam:197: 				Atom a = ew[i];
                UlamRef<EC> Uh_3tur43733(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43735 = Uv_1i.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval43736(Uh_5tlreg43735); //func arg& //gcnl:Node.cpp:1128
                Ui_Ut_r102961a<EC> Uh_5tuval43738 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43733, Uh_5tlval43736); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43738.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:198: 				if(a as Gene){
                {

//! ClusterByID.ulam:198: 				if(a as Gene){
                  const T Uh_3tut43740 = Uv_1a.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg43741 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43740); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg43741, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:198: 				if(a as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval43742 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval43742, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43742.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:199: 					if(a.id == id){
                      {

//! ClusterByID.ulam:199: 					if(a.id == id){
                        const u32 Uh_5tlreg43744 = Uv_2id.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg43747 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg43748 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43747, Uh_5tlreg43744, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43748, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:200: 						foundGene = true;
                            const u32 Uh_5tlreg43749 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_919foundGene.write(Uh_5tlreg43749); //gcnl:Node.cpp:885

//! ClusterByID.ulam:201: 						if(canSeeNucleus && !a.canSeeNucleus){
                            {

//! ClusterByID.ulam:201: 						if(canSeeNucleus && !a.canSeeNucleus){
                              u32 Uh_5tlreg43751 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg43753 = Uv_9213canSeeNucleus.read(); //gcnl:Node.cpp:691
                              if(_Bool32ToCbool(Uh_5tlreg43753, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg43756 = UlamRef<EC>(Uv_1a, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                                const u32 Uh_5tlreg43757 = _LogicalBangBool32(Uh_5tlreg43756, 1); //gcnl:NodeUnaryOp.cpp:449
                                Uh_5tlreg43751 = Uh_5tlreg43757; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg43751, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! ClusterByID.ulam:203: 							SiteNum e = emptySlotNearMe();
                                  const Ui_Ut_10161u<EC> Uh_5tlval43760 = THE_INSTANCE.Uf_9215emptySlotNearMe(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg43761 = Uh_5tlval43760.read(); //gcnl:Node.cpp:1156
                                  Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg43761); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:204: 							ew.swap(i,e);
                                  UlamRef<EC> Uh_3tur43763(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                                  const u32 Uh_5tlreg43765 = Uv_1i.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval43766(Uh_5tlreg43765); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg43768 = Uv_1e.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval43769(Uh_5tlreg43768); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10111b<EC> Uh_5tlval43771 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43763, Uh_5tlval43766, Uh_5tlval43769); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg43772 = Uh_5tlval43771.read(); //gcnl:Node.cpp:1156
                                }
                              } // end if
                            }

//! ClusterByID.ulam:206: 						if(!canSeeNucleus && a.canSeeNucleus){
                            {

//! ClusterByID.ulam:206: 						if(!canSeeNucleus && a.canSeeNucleus){
                              u32 Uh_5tlreg43773 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg43775 = Uv_9213canSeeNucleus.read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg43776 = _LogicalBangBool32(Uh_5tlreg43775, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg43776, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg43779 = UlamRef<EC>(Uv_1a, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                                Uh_5tlreg43773 = Uh_5tlreg43779; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg43773, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! ClusterByID.ulam:207: 							SiteNum e = findNonCellSlotNear(i,id);
                                  const u32 Uh_5tlreg43782 = Uv_1i.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval43783(Uh_5tlreg43782); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg43785 = Uv_2id.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102101u<EC> Uh_5tlval43786(Uh_5tlreg43785); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10161u<EC> Uh_5tlval43788 = THE_INSTANCE.Uf_9219findNonCellSlotNear(uc, ur, Uh_5tlval43783, Uh_5tlval43786); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg43789 = Uh_5tlval43788.read(); //gcnl:Node.cpp:1156
                                  Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg43789); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:208: 							ew.swap(0,e);
                                  UlamRef<EC> Uh_3tur43791(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                                  const u32 Uh_5tlreg43792 = 0; //gcnl:NodeTerminal.cpp:721
                                  const u32 Uh_5tlreg43793 = _Int32ToUnsigned32(Uh_5tlreg43792, 2, 6); //gcnl:NodeCast.cpp:723
                                  Ui_Ut_10161u<EC> Uh_5tlval43794(Uh_5tlreg43793); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg43796 = Uv_1e.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval43797(Uh_5tlreg43796); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10111b<EC> Uh_5tlval43799 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43791, Uh_5tlval43794, Uh_5tlval43797); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg43800 = Uh_5tlval43799.read(); //gcnl:Node.cpp:1156
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

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
Ul_214endcontrolloop216:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
              const u32 Uh_5tlreg43801 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43802 = _Int32ToUnsigned32(Uh_5tlreg43801, 32, 6); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43804 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43805 = _BinOpAddUnsigned32(Uh_5tlreg43804, Uh_5tlreg43802, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1i.write(Uh_5tlreg43805); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

//! ClusterByID.ulam:214: 		return foundGene;
    const u32 Uh_5tlreg43807 = Uv_919foundGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10111b<EC> Uh_5tlval43808(Uh_5tlreg43807); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43808); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9216bringGenesCloser



//! ClusterByID.ulam:238: 	Void run(){
  template<class EC>
  void Uq_10109211ClusterByID10<EC>::Uf_3run(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! ClusterByID.ulam:239: 		ew.swap(0,40);
    UlamRef<EC> Uh_3tur43810(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43811 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43812 = _Int32ToUnsigned32(Uh_5tlreg43811, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval43813(Uh_5tlreg43812); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43814 = 40; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43815 = _Int32ToUnsigned32(Uh_5tlreg43814, 7, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval43816(Uh_5tlreg43815); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval43818 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43810, Uh_5tlval43813, Uh_5tlval43816); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43819 = Uh_5tlval43818.read(); //gcnl:Node.cpp:1156

  } // Uf_3run



//! ClusterByID.ulam:34: 	SiteNum findNonCellSlotNear(C2D t,ID id){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9219findNonCellSlotNear(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1t, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:35: 		OutOfBounds ob;
    Ui_Un_102329211OutOfBounds10<EC> Uv_2ob; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:36: 		C2D cd;
    Ui_Uq_102323C2D10<EC> Uv_2cd; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:37: 		C2D tprime;
    Ui_Uq_102323C2D10<EC> Uv_6tprime; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:39: 		SiteNum target = 0;
    const u32 Uh_5tlreg43820 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43821 = _Int32ToUnsigned32(Uh_5tlreg43820, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_6target(Uh_5tlreg43821); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
    {

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
      const u32 Uh_5tlreg43822 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43823 = _Int32ToInt32(Uh_5tlreg43822, 2, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43826 = UlamRef<EC>(0u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43827 = _Int32ToInt32(Uh_5tlreg43826, 16, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43828 = _BinOpSubtractInt32(Uh_5tlreg43827, Uh_5tlreg43823, 17); //gcnl:NodeBinaryOp.cpp:719
      const u32 Uh_5tlreg43829 = _Int32ToInt32(Uh_5tlreg43828, 17, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1x(Uh_5tlreg43829); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
      while(true)
      {
        const u32 Uh_5tlreg43830 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43831 = _Int32ToInt32(Uh_5tlreg43830, 2, 17); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43834 = UlamRef<EC>(0u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43835 = _Int32ToInt32(Uh_5tlreg43834, 16, 17); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43836 = _BinOpAddInt32(Uh_5tlreg43835, Uh_5tlreg43831, 17); //gcnl:NodeBinaryOp.cpp:719
        const u32 Uh_5tlreg43837 = _Int32ToInt32(Uh_5tlreg43836, 17, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43839 = Uv_1x.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43840 = _BinOpCompareLessEqualInt32(Uh_5tlreg43839, Uh_5tlreg43837, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43840, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
        {

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
          {

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
            const u32 Uh_5tlreg43841 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43842 = _Int32ToInt32(Uh_5tlreg43841, 2, 17); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43845 = UlamRef<EC>(16u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43846 = _Int32ToInt32(Uh_5tlreg43845, 16, 17); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43847 = _BinOpSubtractInt32(Uh_5tlreg43846, Uh_5tlreg43842, 17); //gcnl:NodeBinaryOp.cpp:719
            const u32 Uh_5tlreg43848 = _Int32ToInt32(Uh_5tlreg43847, 17, 32); //gcnl:NodeCast.cpp:723
            Ui_Ut_102321i<EC> Uv_1y(Uh_5tlreg43848); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
            while(true)
            {
              const u32 Uh_5tlreg43849 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43850 = _Int32ToInt32(Uh_5tlreg43849, 2, 17); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43853 = UlamRef<EC>(16u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43854 = _Int32ToInt32(Uh_5tlreg43853, 16, 17); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43855 = _BinOpAddInt32(Uh_5tlreg43854, Uh_5tlreg43850, 17); //gcnl:NodeBinaryOp.cpp:719
              const u32 Uh_5tlreg43856 = _Int32ToInt32(Uh_5tlreg43855, 17, 32); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43858 = Uv_1y.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43859 = _BinOpCompareLessEqualInt32(Uh_5tlreg43858, Uh_5tlreg43856, 32); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg43859, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
              {

//! ClusterByID.ulam:44: 				tprime = cd.make((Int(16)) x,(Int(16)) y);
                UlamRef<EC> Uh_3tur43861(0u, 32u, Uv_2cd, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43863 = Uv_1x.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg43864 = _Int32ToInt32(Uh_5tlreg43863, 32, 16); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg43865 = _Int32ToInt32(Uh_5tlreg43864, 16, 32); //gcnl:NodeCast.cpp:723
                Ui_Ut_102321i<EC> Uh_5tlval43866(Uh_5tlreg43865); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg43868 = Uv_1y.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg43869 = _Int32ToInt32(Uh_5tlreg43868, 32, 16); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg43870 = _Int32ToInt32(Uh_5tlreg43869, 16, 32); //gcnl:NodeCast.cpp:723
                Ui_Ut_102321i<EC> Uh_5tlval43871(Uh_5tlreg43870); //func arg& //gcnl:Node.cpp:1128
                Ui_Uq_102323C2D10<EC> Uh_5tlval43873 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4make(uc, Uh_3tur43861, Uh_5tlval43866, Uh_5tlval43871); //gcnl:NodeFunctionCall.cpp:1006
                Uv_6tprime.write(Uh_5tlval43873.read()); //gcnl:Node.cpp:885

//! ClusterByID.ulam:45: 				if(!ob.isOOB(tprime)){
                {

//! ClusterByID.ulam:45: 				if(!ob.isOOB(tprime)){
                  UlamRef<EC> Uh_3tur43876(0u, 32u, Uv_2ob, &Un_102329211OutOfBounds10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg43878 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                  Ui_Uq_102323C2D10<EC> Uh_5tlval43879(Uh_5tlreg43878); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval43881 = Ui_Un_102329211OutOfBounds10<EC>::Us::THE_INSTANCE.Uf_5isOOB(uc, Uh_3tur43876, Uh_5tlval43879); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg43882 = Uh_5tlval43881.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg43883 = _LogicalBangBool32(Uh_5tlreg43882, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg43883, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:46: 					Atom a = ew[ew.getSiteNumberRaw(tprime)];
                      UlamRef<EC> Uh_3tur43885(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      UlamRef<EC> Uh_3tur43887(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg43889 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                      Ui_Uq_102323C2D10<EC> Uh_5tlval43890(Uh_5tlreg43889); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval43892 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, Uh_3tur43887, Uh_5tlval43890); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg43893 = Uh_5tlval43892.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uh_5tlval43894(Uh_5tlreg43893); //func arg& //gcnl:Node.cpp:1128
                      Ui_Ut_r102961a<EC> Uh_5tuval43896 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43885, Uh_5tlval43894); //gcnl:NodeFunctionCall.cpp:1006
                      Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43896.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:47: 					if(cell.outOfTheCell(a,id)){
                      {

//! ClusterByID.ulam:47: 					if(cell.outOfTheCell(a,id)){
                        UlamRef<EC> Uh_3tur43898(ur, 0u, 0u, &Uq_10104Cell10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                        const T Uh_3tut43900 = Uv_1a.read(); //gcnl:Node.cpp:691
                        Ui_Ut_102961a<EC> Uh_5tuval43901(Uh_3tut43900); //func arg& //gcnl:Node.cpp:1128
                        const u32 Uh_5tlreg43903 = Uv_2id.read(); //gcnl:Node.cpp:691
                        Ui_Ut_102101u<EC> Uh_5tlval43904(Uh_5tlreg43903); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_10111b<EC> Uh_5tlval43906 = Uq_10104Cell10<EC>::THE_INSTANCE.Uf_9212outOfTheCell(uc, Uh_3tur43898, Uh_5tuval43901, Uh_5tlval43904); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg43907 = Uh_5tlval43906.read(); //gcnl:Node.cpp:1156
                        if(_Bool32ToCbool(Uh_5tlreg43907, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:48: 						target = ew.getSiteNumberRaw(tprime);
                            UlamRef<EC> Uh_3tur43909(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg43911 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                            Ui_Uq_102323C2D10<EC> Uh_5tlval43912(Uh_5tlreg43911); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval43914 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, Uh_3tur43909, Uh_5tlval43912); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg43915 = Uh_5tlval43914.read(); //gcnl:Node.cpp:1156
                            Uv_6target.write(Uh_5tlreg43915); //gcnl:Node.cpp:885

//! ClusterByID.ulam:49: 						return target;
                            const u32 Uh_5tlreg43918 = Uv_6target.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval43919(Uh_5tlreg43918); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval43919); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                      }
                    }
                  } // end if
                }
              }

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
Ul_214endcontrolloop214:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
              const u32 Uh_5tlreg43920 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43922 = Uv_1y.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43923 = _BinOpAddInt32(Uh_5tlreg43922, Uh_5tlreg43920, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1y.write(Uh_5tlreg43923); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
Ul_214endcontrolloop213:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
        const u32 Uh_5tlreg43924 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43926 = Uv_1x.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43927 = _BinOpAddInt32(Uh_5tlreg43926, Uh_5tlreg43924, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1x.write(Uh_5tlreg43927); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ClusterByID.ulam:55: 		return target;
    const u32 Uh_5tlreg43929 = Uv_6target.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43930(Uh_5tlreg43929); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43930); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9219findNonCellSlotNear



//! ClusterByID.ulam:30: 	SiteNum findNonCellSlotNear(SiteNum t,ID id){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9219findNonCellSlotNear(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1t, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:31: 		return findNonCellSlotNear(ew.getCoord(t),id);
    UlamRef<EC> Uh_3tur43933(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43935 = Uv_1t.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval43936(Uh_5tlreg43935); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval43938 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur43933, Uh_5tlval43936); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval43939(Uh_5tlval43938); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43941 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval43942(Uh_5tlreg43941); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval43944 = THE_INSTANCE.Uf_9219findNonCellSlotNear(uc, ur, Uh_5tlval43939, Uh_5tlval43942); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43945 = Uh_5tlval43944.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval43946(Uh_5tlreg43945); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43946); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9219findNonCellSlotNear



//! ClusterByID.ulam:64: 	SiteNum nonCellSlotNearMe(Atom atom, ID id){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9217nonCellSlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4atom, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:65: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:66: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:68: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur43948(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur43948); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:69: 		Category cGene = ws.allocateCategory();
    UlamRef<EC> Uh_3tur43951(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval43953 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur43951); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43954 = Uh_5tlval43953.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_5cGene(Uh_5tlreg43954); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:71: 		ElementType tGene = au.getValidType(atom);
    UlamRef<EC> Uh_3tur43956(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut43958 = Uv_4atom.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval43959(Uh_3tut43958); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval43961 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur43956, Uh_5tuval43959); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43962 = Uh_5tlval43961.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_5tGene(Uh_5tlreg43962); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:73: 		sv.setType(cGene,tGene);
    UlamRef<EC> Uh_3tur43964(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43966 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43967(Uh_5tlreg43966); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43969 = Uv_5tGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval43970(Uh_5tlreg43969); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur43964, Uh_5tlval43967, Uh_5tlval43970); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:74: 		sv.setID(cGene,id);
    UlamRef<EC> Uh_3tur43973(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43975 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43976(Uh_5tlreg43975); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43978 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval43979(Uh_5tlreg43978); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur43973, Uh_5tlval43976, Uh_5tlval43979); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:75: 		sv.invert(cGene);
    UlamRef<EC> Uh_3tur43982(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43984 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43985(Uh_5tlreg43984); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_6invert(uc, Uh_3tur43982, Uh_5tlval43985); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:78: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur43988(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval43989; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval43989); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43991(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43992(Uh_5tlval43991); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg43993 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43994 = _Int32ToUnary32(Uh_5tlreg43993, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43995(Uh_5tlreg43994); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43996 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43997 = _Int32ToUnary32(Uh_5tlreg43996, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43998(Uh_5tlreg43997); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43988, Uh_6tlref43992, Uh_5tlval43995, Uh_5tlval43998); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:79: 		if(ws.getHits(cGene)==(Unsigned)0){
    {

//! ClusterByID.ulam:79: 		if(ws.getHits(cGene)==(Unsigned)0){
      const u32 Uh_5tlreg44000 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44001 = _Int32ToUnsigned32(Uh_5tlreg44000, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44003(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44005 = Uv_5cGene.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44006(Uh_5tlreg44005); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44008 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44003, Uh_5tlval44006); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44009 = Uh_5tlval44008.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44010 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44009, Uh_5tlreg44001, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44010, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:80: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur44012(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval44013; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval44013); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44015(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44016(Uh_5tlval44015); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg44017 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44018 = _Int32ToUnary32(Uh_5tlreg44017, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval44019(Uh_5tlreg44018); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44020 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44021 = _Int32ToUnary32(Uh_5tlreg44020, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval44022(Uh_5tlreg44021); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44012, Uh_6tlref44016, Uh_5tlval44019, Uh_5tlval44022); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:81: 			if(ws.getHits(cGene)==(Unsigned)0){
          {

//! ClusterByID.ulam:81: 			if(ws.getHits(cGene)==(Unsigned)0){
            const u32 Uh_5tlreg44024 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44025 = _Int32ToUnsigned32(Uh_5tlreg44024, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur44027(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg44029 = Uv_5cGene.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval44030(Uh_5tlreg44029); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval44032 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44027, Uh_5tlval44030); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg44033 = Uh_5tlval44032.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg44034 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44033, Uh_5tlreg44025, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44034, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:82: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur44036(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval44037; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval44037); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44039(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44040(Uh_5tlval44039); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg44041 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44042 = _Int32ToUnary32(Uh_5tlreg44041, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval44043(Uh_5tlreg44042); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44044 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44045 = _Int32ToUnary32(Uh_5tlreg44044, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval44046(Uh_5tlreg44045); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44036, Uh_6tlref44040, Uh_5tlval44043, Uh_5tlval44046); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:83: 				if(ws.getHits(cGene)==(Unsigned)0){
                {

//! ClusterByID.ulam:83: 				if(ws.getHits(cGene)==(Unsigned)0){
                  const u32 Uh_5tlreg44048 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44049 = _Int32ToUnsigned32(Uh_5tlreg44048, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur44051(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg44053 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval44054(Uh_5tlreg44053); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval44056 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44051, Uh_5tlval44054); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg44057 = Uh_5tlval44056.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg44058 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44057, Uh_5tlreg44049, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44058, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:84: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur44060(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval44061; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval44061); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44063(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44064(Uh_5tlval44063); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg44065 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44066 = _Int32ToUnary32(Uh_5tlreg44065, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval44067(Uh_5tlreg44066); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44068 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44069 = _Int32ToUnary32(Uh_5tlreg44068, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval44070(Uh_5tlreg44069); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44060, Uh_6tlref44064, Uh_5tlval44067, Uh_5tlval44070); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:85: 					if(ws.getHits(cGene) <= (Unsigned)41){
                      {

//! ClusterByID.ulam:85: 					if(ws.getHits(cGene) <= (Unsigned)41){
                        const u32 Uh_5tlreg44072 = 41; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg44073 = _Int32ToUnsigned32(Uh_5tlreg44072, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur44075(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg44077 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval44078(Uh_5tlreg44077); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval44080 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44075, Uh_5tlval44078); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg44081 = Uh_5tlval44080.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg44082 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44081, Uh_5tlreg44073, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg44082, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:86: 						return ws.getSiteNum(cGene);
                            UlamRef<EC> Uh_3tur44084(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg44086 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval44087(Uh_5tlreg44086); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval44089 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44084, Uh_5tlval44087); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg44090 = Uh_5tlval44089.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval44091(Uh_5tlreg44090); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44091); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:89: 						return 0;
                            const u32 Uh_5tlreg44092 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg44093 = _Int32ToUnsigned32(Uh_5tlreg44092, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval44094(Uh_5tlreg44093); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44094); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:92: 				return ws.getSiteNum(cGene);
                UlamRef<EC> Uh_3tur44096(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg44098 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval44099(Uh_5tlreg44098); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval44101 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44096, Uh_5tlval44099); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg44102 = Uh_5tlval44101.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval44103(Uh_5tlreg44102); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44103); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }

//! ClusterByID.ulam:94: 			return ws.getSiteNum(cGene);
          UlamRef<EC> Uh_3tur44105(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44107 = Uv_5cGene.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval44108(Uh_5tlreg44107); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval44110 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44105, Uh_5tlval44108); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44111 = Uh_5tlval44110.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval44112(Uh_5tlreg44111); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44112); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! ClusterByID.ulam:96: 		return ws.getSiteNum(cGene);
    UlamRef<EC> Uh_3tur44114(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44116 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44117(Uh_5tlreg44116); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval44119 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44114, Uh_5tlval44117); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44120 = Uh_5tlval44119.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval44121(Uh_5tlreg44120); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44121); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217nonCellSlotNearMe



//! ClusterByID.ulam:58: 	SiteNum nonCellSlotNearMe(ID id){		//this is for genes by default to support an older use of the function.
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9217nonCellSlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:59: 		Gene gene;				//should update all instances to specify both
    Ui_Ue_102564Gene10<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:60: 		SiteNum s = nonCellSlotNearMe(gene, id);
    const T Uh_3tut44124 = Uv_4gene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44125(Uh_3tut44124); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44127 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44128(Uh_5tlreg44127); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval44130 = THE_INSTANCE.Uf_9217nonCellSlotNearMe(uc, ur, Uh_5tuval44125, Uh_5tlval44128); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44131 = Uh_5tlval44130.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg44131); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:61: 		return s;
    const u32 Uh_5tlreg44133 = Uv_1s.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44134(Uh_5tlreg44133); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44134); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217nonCellSlotNearMe



//! ClusterByID.ulam:98: 	SiteNum cellSlotNearMe(Atom atom, ID id, Unsigned(2) radius){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9214cellSlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4atom, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10121u<EC>& Uv_6radius) const
  {

//! ClusterByID.ulam:101: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:102: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:104: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur44136(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur44136); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:105: 		Category c = ws.allocateCategory();
    UlamRef<EC> Uh_3tur44139(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval44141 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur44139); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44142 = Uh_5tlval44141.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_1c(Uh_5tlreg44142); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:107: 		ElementType t = au.getValidType(atom);
    UlamRef<EC> Uh_3tur44144(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut44146 = Uv_4atom.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44147(Uh_3tut44146); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval44149 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur44144, Uh_5tuval44147); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44150 = Uh_5tlval44149.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_1t(Uh_5tlreg44150); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:109: 		sv.setType(c,t);
    UlamRef<EC> Uh_3tur44152(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44154 = Uv_1c.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44155(Uh_5tlreg44154); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44157 = Uv_1t.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval44158(Uh_5tlreg44157); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur44152, Uh_5tlval44155, Uh_5tlval44158); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:110: 		sv.setID(c,id);
    UlamRef<EC> Uh_3tur44161(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44163 = Uv_1c.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44164(Uh_5tlreg44163); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44166 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44167(Uh_5tlreg44166); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur44161, Uh_5tlval44164, Uh_5tlval44167); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:113: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur44170(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval44171; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval44171); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44173(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44174(Uh_5tlval44173); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg44175 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44176 = _Int32ToUnary32(Uh_5tlreg44175, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval44177(Uh_5tlreg44176); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44178 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44179 = _Int32ToUnary32(Uh_5tlreg44178, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval44180(Uh_5tlreg44179); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44170, Uh_6tlref44174, Uh_5tlval44177, Uh_5tlval44180); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:114: 		if(ws.getHits(c)==(Unsigned)0 && radius > 1){
    {

//! ClusterByID.ulam:114: 		if(ws.getHits(c)==(Unsigned)0 && radius > 1){
      u32 Uh_5tlreg44182 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44183 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44184 = _Int32ToUnsigned32(Uh_5tlreg44183, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44186(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44188 = Uv_1c.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44189(Uh_5tlreg44188); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44191 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44186, Uh_5tlval44189); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44192 = Uh_5tlval44191.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44193 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44192, Uh_5tlreg44184, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44193, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44194 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44195 = _Int32ToInt32(Uh_5tlreg44194, 2, 3); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44197 = Uv_6radius.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44198 = _Unsigned32ToInt32(Uh_5tlreg44197, 2, 3); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44199 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44198, Uh_5tlreg44195, 3); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44182 = Uh_5tlreg44199; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44182, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:115: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur44201(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval44202; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval44202); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44204(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44205(Uh_5tlval44204); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg44206 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44207 = _Int32ToUnary32(Uh_5tlreg44206, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval44208(Uh_5tlreg44207); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44209 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44210 = _Int32ToUnary32(Uh_5tlreg44209, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval44211(Uh_5tlreg44210); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44201, Uh_6tlref44205, Uh_5tlval44208, Uh_5tlval44211); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:116: 			if(ws.getHits(c)==(Unsigned)0 && radius > 2){
          {

//! ClusterByID.ulam:116: 			if(ws.getHits(c)==(Unsigned)0 && radius > 2){
            u32 Uh_5tlreg44213 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44214 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44215 = _Int32ToUnsigned32(Uh_5tlreg44214, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur44217(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg44219 = Uv_1c.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval44220(Uh_5tlreg44219); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval44222 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44217, Uh_5tlval44220); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg44223 = Uh_5tlval44222.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg44224 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44223, Uh_5tlreg44215, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44224, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44225 = 2; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg44227 = Uv_6radius.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg44228 = _Unsigned32ToInt32(Uh_5tlreg44227, 2, 3); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg44229 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44228, Uh_5tlreg44225, 3); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg44213 = Uh_5tlreg44229; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44213, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:117: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur44231(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval44232; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval44232); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44234(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44235(Uh_5tlval44234); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg44236 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44237 = _Int32ToUnary32(Uh_5tlreg44236, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval44238(Uh_5tlreg44237); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44239 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44240 = _Int32ToUnary32(Uh_5tlreg44239, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval44241(Uh_5tlreg44240); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44231, Uh_6tlref44235, Uh_5tlval44238, Uh_5tlval44241); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:118: 				if(ws.getHits(c)==(Unsigned)0 && radius > 3){
                {

//! ClusterByID.ulam:118: 				if(ws.getHits(c)==(Unsigned)0 && radius > 3){
                  u32 Uh_5tlreg44243 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44244 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44245 = _Int32ToUnsigned32(Uh_5tlreg44244, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur44247(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg44249 = Uv_1c.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval44250(Uh_5tlreg44249); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval44252 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44247, Uh_5tlval44250); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg44253 = Uh_5tlval44252.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg44254 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44253, Uh_5tlreg44245, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44254, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44255 = 3; //gcnl:NodeTerminal.cpp:721
                    const u32 Uh_5tlreg44257 = Uv_6radius.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44258 = _Unsigned32ToInt32(Uh_5tlreg44257, 2, 3); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg44259 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44258, Uh_5tlreg44255, 3); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44243 = Uh_5tlreg44259; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44243, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:119: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur44261(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval44262; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval44262); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44264(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44265(Uh_5tlval44264); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg44266 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44267 = _Int32ToUnary32(Uh_5tlreg44266, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval44268(Uh_5tlreg44267); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44269 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44270 = _Int32ToUnary32(Uh_5tlreg44269, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval44271(Uh_5tlreg44270); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44261, Uh_6tlref44265, Uh_5tlval44268, Uh_5tlval44271); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:120: 					if(ws.getHits(c) <= (Unsigned)41){
                      {

//! ClusterByID.ulam:120: 					if(ws.getHits(c) <= (Unsigned)41){
                        const u32 Uh_5tlreg44273 = 41; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg44274 = _Int32ToUnsigned32(Uh_5tlreg44273, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur44276(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg44278 = Uv_1c.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval44279(Uh_5tlreg44278); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval44281 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44276, Uh_5tlval44279); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg44282 = Uh_5tlval44281.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg44283 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44282, Uh_5tlreg44274, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg44283, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:121: 						return ws.getSiteNum(c);
                            UlamRef<EC> Uh_3tur44285(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg44287 = Uv_1c.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval44288(Uh_5tlreg44287); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval44290 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44285, Uh_5tlval44288); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg44291 = Uh_5tlval44290.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval44292(Uh_5tlreg44291); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44292); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:124: 						return 0;
                            const u32 Uh_5tlreg44293 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg44294 = _Int32ToUnsigned32(Uh_5tlreg44293, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval44295(Uh_5tlreg44294); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44295); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:127: 				if(ws.getHits(c) <= (Unsigned)41){
                {

//! ClusterByID.ulam:127: 				if(ws.getHits(c) <= (Unsigned)41){
                  const u32 Uh_5tlreg44296 = 41; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44297 = _Int32ToUnsigned32(Uh_5tlreg44296, 7, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur44299(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg44301 = Uv_1c.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval44302(Uh_5tlreg44301); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval44304 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44299, Uh_5tlval44302); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg44305 = Uh_5tlval44304.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg44306 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44305, Uh_5tlreg44297, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44306, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:128: 					return ws.getSiteNum(c);
                      UlamRef<EC> Uh_3tur44308(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44310 = Uv_1c.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10151u<EC> Uh_5tlval44311(Uh_5tlreg44310); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44313 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44308, Uh_5tlval44311); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44314 = Uh_5tlval44313.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uh_5tlval44315(Uh_5tlreg44314); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval44315); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                  else
                  {
                    {

//! ClusterByID.ulam:131: 					return 0;
                      const u32 Uh_5tlreg44316 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44317 = _Int32ToUnsigned32(Uh_5tlreg44316, 2, 6); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10161u<EC> Uh_5tlval44318(Uh_5tlreg44317); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval44318); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } //end else
                }
              }
            } // end if
          }

//! ClusterByID.ulam:134: 			if(ws.getHits(c) <= (Unsigned)41){
          {

//! ClusterByID.ulam:134: 			if(ws.getHits(c) <= (Unsigned)41){
            const u32 Uh_5tlreg44319 = 41; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44320 = _Int32ToUnsigned32(Uh_5tlreg44319, 7, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur44322(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg44324 = Uv_1c.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval44325(Uh_5tlreg44324); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval44327 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44322, Uh_5tlval44325); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg44328 = Uh_5tlval44327.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg44329 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44328, Uh_5tlreg44320, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44329, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:135: 				return ws.getSiteNum(c);
                UlamRef<EC> Uh_3tur44331(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg44333 = Uv_1c.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval44334(Uh_5tlreg44333); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval44336 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44331, Uh_5tlval44334); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg44337 = Uh_5tlval44336.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval44338(Uh_5tlreg44337); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44338); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! ClusterByID.ulam:138: 				return 0;
                const u32 Uh_5tlreg44339 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44340 = _Int32ToUnsigned32(Uh_5tlreg44339, 2, 6); //gcnl:NodeCast.cpp:723
                Ui_Ut_10161u<EC> Uh_5tlval44341(Uh_5tlreg44340); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44341); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
    }

//! ClusterByID.ulam:141: 		if(ws.getHits(c) <= (Unsigned)41){
    {

//! ClusterByID.ulam:141: 		if(ws.getHits(c) <= (Unsigned)41){
      const u32 Uh_5tlreg44342 = 41; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44343 = _Int32ToUnsigned32(Uh_5tlreg44342, 7, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44345(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44347 = Uv_1c.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44348(Uh_5tlreg44347); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44350 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44345, Uh_5tlval44348); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44351 = Uh_5tlval44350.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44352 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44351, Uh_5tlreg44343, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44352, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:142: 			return ws.getSiteNum(c);
          UlamRef<EC> Uh_3tur44354(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44356 = Uv_1c.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval44357(Uh_5tlreg44356); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval44359 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44354, Uh_5tlval44357); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44360 = Uh_5tlval44359.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval44361(Uh_5tlreg44360); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44361); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! ClusterByID.ulam:145: 			return 0;
          const u32 Uh_5tlreg44362 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44363 = _Int32ToUnsigned32(Uh_5tlreg44362, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval44364(Uh_5tlreg44363); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44364); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9214cellSlotNearMe



//! ClusterByID.ulam:217: 	Bool geneCanSeeNucleus(ID id){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211ClusterByID10<EC>::Uf_9217geneCanSeeNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:218: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:219: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:221: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur44366(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur44366); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:222: 		Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur44369(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval44371 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur44369); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44372 = Uh_5tlval44371.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg44372); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:223: 		Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:224: 		ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur44374(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut44376 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44377(Uh_3tut44376); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval44379 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur44374, Uh_5tuval44377); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44380 = Uh_5tlval44379.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg44380); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:226: 		sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur44382(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44384 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44385(Uh_5tlreg44384); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44387 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval44388(Uh_5tlreg44387); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur44382, Uh_5tlval44385, Uh_5tlval44388); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:227: 		sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur44391(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44393 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44394(Uh_5tlreg44393); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44396 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44397(Uh_5tlreg44396); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur44391, Uh_5tlval44394, Uh_5tlval44397); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:229: 		ws.scan(sv);
    UlamRef<EC> Uh_3tur44400(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval44401; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval44401); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44403(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44404(Uh_5tlval44403); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44400, Uh_6tlref44404); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:231: 		if(ws.getHits(cNucleus)>(Unsigned)0){
    {

//! ClusterByID.ulam:231: 		if(ws.getHits(cNucleus)>(Unsigned)0){
      const u32 Uh_5tlreg44406 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44407 = _Int32ToUnsigned32(Uh_5tlreg44406, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44409(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44411 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44412(Uh_5tlreg44411); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44414 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44409, Uh_5tlval44412); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44415 = Uh_5tlval44414.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44416 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg44415, Uh_5tlreg44407, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44416, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:232: 			return true;
          const u32 Uh_5tlreg44417 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval44418(Uh_5tlreg44417); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44418); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! ClusterByID.ulam:235: 			return false;
          const u32 Uh_5tlreg44419 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval44420(Uh_5tlreg44419); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44420); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9217geneCanSeeNucleus


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109211ClusterByID10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 2: { static UlamClassDataMemberInfo i("Uq_10104Cell10", "cell", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109211ClusterByID10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109211ClusterByID10<EC>::GetMangledClassName() const
  {
    return "Uq_10109211ClusterByID10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109211ClusterByID10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109211ClusterByID10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10109211ClusterByID10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_10109211ClusterByID10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109211ClusterByID10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_10109211ClusterByID10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_10109211ClusterByID10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109211ClusterByID10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

