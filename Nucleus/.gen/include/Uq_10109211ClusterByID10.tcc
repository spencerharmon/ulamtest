/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_102128EggShell10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Uq_10109211EventWindow10.h"
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
    UlamRef<EC> Uh_3tur3449(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur3449); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:153: 		Category cEmpty = ws.allocateCategory();
    UlamRef<EC> Uh_3tur3452(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval3454 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur3452); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3455 = Uh_5tlval3454.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_6cEmpty(Uh_5tlreg3455); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:155: 		ElementType tEmpty = au.getEmptyType();
    UlamRef<EC> Uh_3tur3457(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102161u<EC> Uh_5tlval3459 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getEmptyType(uc, Uh_3tur3457); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3460 = Uh_5tlval3459.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_6tEmpty(Uh_5tlreg3460); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:157: 		sv.setType(cEmpty,tEmpty);
    UlamRef<EC> Uh_3tur3462(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3464 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval3465(Uh_5tlreg3464); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3467 = Uv_6tEmpty.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval3468(Uh_5tlreg3467); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur3462, Uh_5tlval3465, Uh_5tlval3468); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:160: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur3471(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval3472; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval3472); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval3474(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref3475(Uh_5tlval3474); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg3476 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3477 = _Int32ToUnary32(Uh_5tlreg3476, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval3478(Uh_5tlreg3477); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3479 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3480 = _Int32ToUnary32(Uh_5tlreg3479, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval3481(Uh_5tlreg3480); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur3471, Uh_6tlref3475, Uh_5tlval3478, Uh_5tlval3481); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:161: 		if(ws.getHits(cEmpty)==(Unsigned)0){
    {

//! ClusterByID.ulam:161: 		if(ws.getHits(cEmpty)==(Unsigned)0){
      const u32 Uh_5tlreg3483 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3484 = _Int32ToUnsigned32(Uh_5tlreg3483, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur3486(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg3488 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval3489(Uh_5tlreg3488); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval3491 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3486, Uh_5tlval3489); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3492 = Uh_5tlval3491.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg3493 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3492, Uh_5tlreg3484, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3493, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:162: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur3495(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval3496; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval3496); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval3498(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref3499(Uh_5tlval3498); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg3500 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3501 = _Int32ToUnary32(Uh_5tlreg3500, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval3502(Uh_5tlreg3501); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg3503 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3504 = _Int32ToUnary32(Uh_5tlreg3503, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval3505(Uh_5tlreg3504); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur3495, Uh_6tlref3499, Uh_5tlval3502, Uh_5tlval3505); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:163: 			if(ws.getHits(cEmpty)==(Unsigned)0){
          {

//! ClusterByID.ulam:163: 			if(ws.getHits(cEmpty)==(Unsigned)0){
            const u32 Uh_5tlreg3507 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg3508 = _Int32ToUnsigned32(Uh_5tlreg3507, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur3510(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg3512 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval3513(Uh_5tlreg3512); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval3515 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3510, Uh_5tlval3513); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg3516 = Uh_5tlval3515.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg3517 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3516, Uh_5tlreg3508, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3517, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:164: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur3519(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval3520; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval3520); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval3522(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref3523(Uh_5tlval3522); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg3524 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3525 = _Int32ToUnary32(Uh_5tlreg3524, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval3526(Uh_5tlreg3525); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg3527 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3528 = _Int32ToUnary32(Uh_5tlreg3527, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval3529(Uh_5tlreg3528); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur3519, Uh_6tlref3523, Uh_5tlval3526, Uh_5tlval3529); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:165: 				if(ws.getHits(cEmpty)==(Unsigned)0){
                {

//! ClusterByID.ulam:165: 				if(ws.getHits(cEmpty)==(Unsigned)0){
                  const u32 Uh_5tlreg3531 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg3532 = _Int32ToUnsigned32(Uh_5tlreg3531, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur3534(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg3536 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval3537(Uh_5tlreg3536); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval3539 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3534, Uh_5tlval3537); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg3540 = Uh_5tlval3539.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg3541 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3540, Uh_5tlreg3532, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg3541, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:166: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur3543(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval3544; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval3544); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval3546(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref3547(Uh_5tlval3546); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg3548 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg3549 = _Int32ToUnary32(Uh_5tlreg3548, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval3550(Uh_5tlreg3549); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg3551 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg3552 = _Int32ToUnary32(Uh_5tlreg3551, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval3553(Uh_5tlreg3552); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur3543, Uh_6tlref3547, Uh_5tlval3550, Uh_5tlval3553); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:167: 					if(ws.getHits(cEmpty) <= (Unsigned)41){
                      {

//! ClusterByID.ulam:167: 					if(ws.getHits(cEmpty) <= (Unsigned)41){
                        const u32 Uh_5tlreg3555 = 41; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg3556 = _Int32ToUnsigned32(Uh_5tlreg3555, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur3558(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg3560 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval3561(Uh_5tlreg3560); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval3563 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3558, Uh_5tlval3561); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg3564 = Uh_5tlval3563.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg3565 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3564, Uh_5tlreg3556, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg3565, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:168: 						return ws.getSiteNum(cEmpty);
                            UlamRef<EC> Uh_3tur3567(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg3569 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval3570(Uh_5tlreg3569); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval3572 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur3567, Uh_5tlval3570); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg3573 = Uh_5tlval3572.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval3574(Uh_5tlreg3573); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval3574); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:171: 						return 0;
                            const u32 Uh_5tlreg3575 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg3576 = _Int32ToUnsigned32(Uh_5tlreg3575, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval3577(Uh_5tlreg3576); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval3577); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:174: 				return ws.getSiteNum(cEmpty);
                UlamRef<EC> Uh_3tur3579(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg3581 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval3582(Uh_5tlreg3581); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval3584 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur3579, Uh_5tlval3582); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg3585 = Uh_5tlval3584.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval3586(Uh_5tlreg3585); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval3586); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }

//! ClusterByID.ulam:176: 			return ws.getSiteNum(cEmpty);
          UlamRef<EC> Uh_3tur3588(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3590 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval3591(Uh_5tlreg3590); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval3593 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur3588, Uh_5tlval3591); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3594 = Uh_5tlval3593.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval3595(Uh_5tlreg3594); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval3595); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! ClusterByID.ulam:178: 		return ws.getSiteNum(cEmpty);
    UlamRef<EC> Uh_3tur3597(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3599 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval3600(Uh_5tlreg3599); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3602 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur3597, Uh_5tlval3600); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3603 = Uh_5tlval3602.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3604(Uh_5tlreg3603); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3604); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9215emptySlotNearMe



//! ClusterByID.ulam:98: 	SiteNum cellSlotNearMe(Atom atom, ID id, Unsigned(2) radius){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9214cellSlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4atom, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10121u<EC>& Uv_6radius) const
  {

//! ClusterByID.ulam:101: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:102: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:104: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur3606(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur3606); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:105: 		Category c = ws.allocateCategory();
    UlamRef<EC> Uh_3tur3609(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval3611 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur3609); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3612 = Uh_5tlval3611.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_1c(Uh_5tlreg3612); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:107: 		ElementType t = au.getValidType(atom);
    UlamRef<EC> Uh_3tur3614(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut3616 = Uv_4atom.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval3617(Uh_3tut3616); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval3619 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur3614, Uh_5tuval3617); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3620 = Uh_5tlval3619.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_1t(Uh_5tlreg3620); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:109: 		sv.setType(c,t);
    UlamRef<EC> Uh_3tur3622(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3624 = Uv_1c.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval3625(Uh_5tlreg3624); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3627 = Uv_1t.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval3628(Uh_5tlreg3627); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur3622, Uh_5tlval3625, Uh_5tlval3628); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:110: 		sv.setID(c,id);
    UlamRef<EC> Uh_3tur3631(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3633 = Uv_1c.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval3634(Uh_5tlreg3633); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3636 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval3637(Uh_5tlreg3636); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur3631, Uh_5tlval3634, Uh_5tlval3637); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:113: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur3640(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval3641; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval3641); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval3643(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref3644(Uh_5tlval3643); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg3645 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3646 = _Int32ToUnary32(Uh_5tlreg3645, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval3647(Uh_5tlreg3646); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3648 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3649 = _Int32ToUnary32(Uh_5tlreg3648, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval3650(Uh_5tlreg3649); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur3640, Uh_6tlref3644, Uh_5tlval3647, Uh_5tlval3650); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:114: 		if(ws.getHits(c)==(Unsigned)0 && radius > 1){
    {

//! ClusterByID.ulam:114: 		if(ws.getHits(c)==(Unsigned)0 && radius > 1){
      u32 Uh_5tlreg3652 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3653 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3654 = _Int32ToUnsigned32(Uh_5tlreg3653, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur3656(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg3658 = Uv_1c.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval3659(Uh_5tlreg3658); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval3661 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3656, Uh_5tlval3659); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3662 = Uh_5tlval3661.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg3663 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3662, Uh_5tlreg3654, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3663, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3664 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3665 = _Int32ToInt32(Uh_5tlreg3664, 2, 3); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3667 = Uv_6radius.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3668 = _Unsigned32ToInt32(Uh_5tlreg3667, 2, 3); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3669 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3668, Uh_5tlreg3665, 3); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg3652 = Uh_5tlreg3669; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3652, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:115: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur3671(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval3672; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval3672); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval3674(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref3675(Uh_5tlval3674); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg3676 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3677 = _Int32ToUnary32(Uh_5tlreg3676, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval3678(Uh_5tlreg3677); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg3679 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3680 = _Int32ToUnary32(Uh_5tlreg3679, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval3681(Uh_5tlreg3680); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur3671, Uh_6tlref3675, Uh_5tlval3678, Uh_5tlval3681); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:116: 			if(ws.getHits(c)==(Unsigned)0 && radius > 2){
          {

//! ClusterByID.ulam:116: 			if(ws.getHits(c)==(Unsigned)0 && radius > 2){
            u32 Uh_5tlreg3683 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg3684 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg3685 = _Int32ToUnsigned32(Uh_5tlreg3684, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur3687(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg3689 = Uv_1c.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval3690(Uh_5tlreg3689); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval3692 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3687, Uh_5tlval3690); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg3693 = Uh_5tlval3692.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg3694 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3693, Uh_5tlreg3685, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3694, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg3695 = 2; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg3697 = Uv_6radius.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg3698 = _Unsigned32ToInt32(Uh_5tlreg3697, 2, 3); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg3699 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3698, Uh_5tlreg3695, 3); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg3683 = Uh_5tlreg3699; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg3683, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:117: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur3701(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval3702; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval3702); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval3704(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref3705(Uh_5tlval3704); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg3706 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3707 = _Int32ToUnary32(Uh_5tlreg3706, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval3708(Uh_5tlreg3707); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg3709 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3710 = _Int32ToUnary32(Uh_5tlreg3709, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval3711(Uh_5tlreg3710); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur3701, Uh_6tlref3705, Uh_5tlval3708, Uh_5tlval3711); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:118: 				if(ws.getHits(c)==(Unsigned)0 && radius > 3){
                {

//! ClusterByID.ulam:118: 				if(ws.getHits(c)==(Unsigned)0 && radius > 3){
                  u32 Uh_5tlreg3713 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg3714 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg3715 = _Int32ToUnsigned32(Uh_5tlreg3714, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur3717(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg3719 = Uv_1c.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval3720(Uh_5tlreg3719); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval3722 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3717, Uh_5tlval3720); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg3723 = Uh_5tlval3722.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg3724 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3723, Uh_5tlreg3715, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg3724, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg3725 = 3; //gcnl:NodeTerminal.cpp:721
                    const u32 Uh_5tlreg3727 = Uv_6radius.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg3728 = _Unsigned32ToInt32(Uh_5tlreg3727, 2, 3); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg3729 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3728, Uh_5tlreg3725, 3); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg3713 = Uh_5tlreg3729; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg3713, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:119: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur3731(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval3732; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval3732); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval3734(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref3735(Uh_5tlval3734); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg3736 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg3737 = _Int32ToUnary32(Uh_5tlreg3736, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval3738(Uh_5tlreg3737); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg3739 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg3740 = _Int32ToUnary32(Uh_5tlreg3739, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval3741(Uh_5tlreg3740); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur3731, Uh_6tlref3735, Uh_5tlval3738, Uh_5tlval3741); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:120: 					if(ws.getHits(c) <= (Unsigned)41){
                      {

//! ClusterByID.ulam:120: 					if(ws.getHits(c) <= (Unsigned)41){
                        const u32 Uh_5tlreg3743 = 41; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg3744 = _Int32ToUnsigned32(Uh_5tlreg3743, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur3746(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg3748 = Uv_1c.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval3749(Uh_5tlreg3748); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval3751 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3746, Uh_5tlval3749); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg3752 = Uh_5tlval3751.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg3753 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3752, Uh_5tlreg3744, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg3753, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:121: 						return ws.getSiteNum(c);
                            UlamRef<EC> Uh_3tur3755(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg3757 = Uv_1c.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval3758(Uh_5tlreg3757); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval3760 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur3755, Uh_5tlval3758); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg3761 = Uh_5tlval3760.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval3762(Uh_5tlreg3761); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval3762); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:124: 						return 0;
                            const u32 Uh_5tlreg3763 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg3764 = _Int32ToUnsigned32(Uh_5tlreg3763, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval3765(Uh_5tlreg3764); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval3765); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:127: 				if(ws.getHits(c) <= (Unsigned)41){
                {

//! ClusterByID.ulam:127: 				if(ws.getHits(c) <= (Unsigned)41){
                  const u32 Uh_5tlreg3766 = 41; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg3767 = _Int32ToUnsigned32(Uh_5tlreg3766, 7, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur3769(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg3771 = Uv_1c.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval3772(Uh_5tlreg3771); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval3774 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3769, Uh_5tlval3772); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg3775 = Uh_5tlval3774.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg3776 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3775, Uh_5tlreg3767, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg3776, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:128: 					return ws.getSiteNum(c);
                      UlamRef<EC> Uh_3tur3778(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg3780 = Uv_1c.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10151u<EC> Uh_5tlval3781(Uh_5tlreg3780); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval3783 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur3778, Uh_5tlval3781); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg3784 = Uh_5tlval3783.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uh_5tlval3785(Uh_5tlreg3784); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval3785); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                  else
                  {
                    {

//! ClusterByID.ulam:131: 					return 0;
                      const u32 Uh_5tlreg3786 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg3787 = _Int32ToUnsigned32(Uh_5tlreg3786, 2, 6); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10161u<EC> Uh_5tlval3788(Uh_5tlreg3787); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval3788); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } //end else
                }
              }
            } // end if
          }

//! ClusterByID.ulam:134: 			if(ws.getHits(c) <= (Unsigned)41){
          {

//! ClusterByID.ulam:134: 			if(ws.getHits(c) <= (Unsigned)41){
            const u32 Uh_5tlreg3789 = 41; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg3790 = _Int32ToUnsigned32(Uh_5tlreg3789, 7, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur3792(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg3794 = Uv_1c.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval3795(Uh_5tlreg3794); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval3797 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3792, Uh_5tlval3795); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg3798 = Uh_5tlval3797.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg3799 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3798, Uh_5tlreg3790, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg3799, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:135: 				return ws.getSiteNum(c);
                UlamRef<EC> Uh_3tur3801(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg3803 = Uv_1c.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval3804(Uh_5tlreg3803); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval3806 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur3801, Uh_5tlval3804); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg3807 = Uh_5tlval3806.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval3808(Uh_5tlreg3807); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval3808); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! ClusterByID.ulam:138: 				return 0;
                const u32 Uh_5tlreg3809 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg3810 = _Int32ToUnsigned32(Uh_5tlreg3809, 2, 6); //gcnl:NodeCast.cpp:723
                Ui_Ut_10161u<EC> Uh_5tlval3811(Uh_5tlreg3810); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval3811); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
    }

//! ClusterByID.ulam:141: 		if(ws.getHits(c) <= (Unsigned)41){
    {

//! ClusterByID.ulam:141: 		if(ws.getHits(c) <= (Unsigned)41){
      const u32 Uh_5tlreg3812 = 41; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3813 = _Int32ToUnsigned32(Uh_5tlreg3812, 7, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur3815(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg3817 = Uv_1c.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval3818(Uh_5tlreg3817); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval3820 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur3815, Uh_5tlval3818); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg3821 = Uh_5tlval3820.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg3822 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3821, Uh_5tlreg3813, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg3822, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:142: 			return ws.getSiteNum(c);
          UlamRef<EC> Uh_3tur3824(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg3826 = Uv_1c.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval3827(Uh_5tlreg3826); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval3829 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur3824, Uh_5tlval3827); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg3830 = Uh_5tlval3829.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval3831(Uh_5tlreg3830); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval3831); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! ClusterByID.ulam:145: 			return 0;
          const u32 Uh_5tlreg3832 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg3833 = _Int32ToUnsigned32(Uh_5tlreg3832, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval3834(Uh_5tlreg3833); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval3834); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9214cellSlotNearMe



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
    const u32 Uh_5tlreg3835 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg3836 = _Int32ToUnsigned32(Uh_5tlreg3835, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_6target(Uh_5tlreg3836); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
    {

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
      const u32 Uh_5tlreg3837 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg3838 = _Int32ToInt32(Uh_5tlreg3837, 2, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3841 = UlamRef<EC>(0u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg3842 = _Int32ToInt32(Uh_5tlreg3841, 16, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg3843 = _BinOpSubtractInt32(Uh_5tlreg3842, Uh_5tlreg3838, 17); //gcnl:NodeBinaryOp.cpp:719
      const u32 Uh_5tlreg3844 = _Int32ToInt32(Uh_5tlreg3843, 17, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1x(Uh_5tlreg3844); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
      while(true)
      {
        const u32 Uh_5tlreg3845 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3846 = _Int32ToInt32(Uh_5tlreg3845, 2, 17); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3849 = UlamRef<EC>(0u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3850 = _Int32ToInt32(Uh_5tlreg3849, 16, 17); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3851 = _BinOpAddInt32(Uh_5tlreg3850, Uh_5tlreg3846, 17); //gcnl:NodeBinaryOp.cpp:719
        const u32 Uh_5tlreg3852 = _Int32ToInt32(Uh_5tlreg3851, 17, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg3854 = Uv_1x.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3855 = _BinOpCompareLessEqualInt32(Uh_5tlreg3854, Uh_5tlreg3852, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg3855, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
        {

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
          {

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
            const u32 Uh_5tlreg3856 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg3857 = _Int32ToInt32(Uh_5tlreg3856, 2, 17); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg3860 = UlamRef<EC>(16u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg3861 = _Int32ToInt32(Uh_5tlreg3860, 16, 17); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg3862 = _BinOpSubtractInt32(Uh_5tlreg3861, Uh_5tlreg3857, 17); //gcnl:NodeBinaryOp.cpp:719
            const u32 Uh_5tlreg3863 = _Int32ToInt32(Uh_5tlreg3862, 17, 32); //gcnl:NodeCast.cpp:723
            Ui_Ut_102321i<EC> Uv_1y(Uh_5tlreg3863); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
            while(true)
            {
              const u32 Uh_5tlreg3864 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg3865 = _Int32ToInt32(Uh_5tlreg3864, 2, 17); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg3868 = UlamRef<EC>(16u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg3869 = _Int32ToInt32(Uh_5tlreg3868, 16, 17); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg3870 = _BinOpAddInt32(Uh_5tlreg3869, Uh_5tlreg3865, 17); //gcnl:NodeBinaryOp.cpp:719
              const u32 Uh_5tlreg3871 = _Int32ToInt32(Uh_5tlreg3870, 17, 32); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg3873 = Uv_1y.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg3874 = _BinOpCompareLessEqualInt32(Uh_5tlreg3873, Uh_5tlreg3871, 32); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg3874, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
              {

//! ClusterByID.ulam:44: 				tprime = cd.make((Int(16)) x,(Int(16)) y);
                UlamRef<EC> Uh_3tur3876(0u, 32u, Uv_2cd, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg3878 = Uv_1x.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3879 = _Int32ToInt32(Uh_5tlreg3878, 32, 16); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3880 = _Int32ToInt32(Uh_5tlreg3879, 16, 32); //gcnl:NodeCast.cpp:723
                Ui_Ut_102321i<EC> Uh_5tlval3881(Uh_5tlreg3880); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg3883 = Uv_1y.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg3884 = _Int32ToInt32(Uh_5tlreg3883, 32, 16); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg3885 = _Int32ToInt32(Uh_5tlreg3884, 16, 32); //gcnl:NodeCast.cpp:723
                Ui_Ut_102321i<EC> Uh_5tlval3886(Uh_5tlreg3885); //func arg& //gcnl:Node.cpp:1128
                Ui_Uq_102323C2D10<EC> Uh_5tlval3888 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4make(uc, Uh_3tur3876, Uh_5tlval3881, Uh_5tlval3886); //gcnl:NodeFunctionCall.cpp:1006
                Uv_6tprime.write(Uh_5tlval3888.read()); //gcnl:Node.cpp:885

//! ClusterByID.ulam:45: 				if(!ob.isOOB(tprime)){
                {

//! ClusterByID.ulam:45: 				if(!ob.isOOB(tprime)){
                  UlamRef<EC> Uh_3tur3891(0u, 32u, Uv_2ob, &Un_102329211OutOfBounds10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg3893 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                  Ui_Uq_102323C2D10<EC> Uh_5tlval3894(Uh_5tlreg3893); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval3896 = Ui_Un_102329211OutOfBounds10<EC>::Us::THE_INSTANCE.Uf_5isOOB(uc, Uh_3tur3891, Uh_5tlval3894); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg3897 = Uh_5tlval3896.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg3898 = _LogicalBangBool32(Uh_5tlreg3897, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg3898, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:46: 					Atom a = ew[ew.getSiteNumberRaw(tprime)];
                      UlamRef<EC> Uh_3tur3900(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      UlamRef<EC> Uh_3tur3902(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg3904 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                      Ui_Uq_102323C2D10<EC> Uh_5tlval3905(Uh_5tlreg3904); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval3907 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, Uh_3tur3902, Uh_5tlval3905); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg3908 = Uh_5tlval3907.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uh_5tlval3909(Uh_5tlreg3908); //func arg& //gcnl:Node.cpp:1128
                      Ui_Ut_r102961a<EC> Uh_5tuval3911 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3900, Uh_5tlval3909); //gcnl:NodeFunctionCall.cpp:1006
                      Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval3911.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:47: 					if(cell.outOfTheCell(a,id)){
                      {

//! ClusterByID.ulam:47: 					if(cell.outOfTheCell(a,id)){
                        UlamRef<EC> Uh_3tur3913(ur, 0u, 0u, &Uq_10104Cell10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                        const T Uh_3tut3915 = Uv_1a.read(); //gcnl:Node.cpp:691
                        Ui_Ut_102961a<EC> Uh_5tuval3916(Uh_3tut3915); //func arg& //gcnl:Node.cpp:1128
                        const u32 Uh_5tlreg3918 = Uv_2id.read(); //gcnl:Node.cpp:691
                        Ui_Ut_102101u<EC> Uh_5tlval3919(Uh_5tlreg3918); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_10111b<EC> Uh_5tlval3921 = Uq_10104Cell10<EC>::THE_INSTANCE.Uf_9212outOfTheCell(uc, Uh_3tur3913, Uh_5tuval3916, Uh_5tlval3919); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg3922 = Uh_5tlval3921.read(); //gcnl:Node.cpp:1156
                        if(_Bool32ToCbool(Uh_5tlreg3922, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:48: 						target = ew.getSiteNumberRaw(tprime);
                            UlamRef<EC> Uh_3tur3924(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg3926 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3927(Uh_5tlreg3926); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval3929 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, Uh_3tur3924, Uh_5tlval3927); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg3930 = Uh_5tlval3929.read(); //gcnl:Node.cpp:1156
                            Uv_6target.write(Uh_5tlreg3930); //gcnl:Node.cpp:885

//! ClusterByID.ulam:49: 						return target;
                            const u32 Uh_5tlreg3933 = Uv_6target.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval3934(Uh_5tlreg3933); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval3934); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                      }
                    }
                  } // end if
                }
              }

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
Ul_214endcontrolloop17:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
              const u32 Uh_5tlreg3935 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg3937 = Uv_1y.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg3938 = _BinOpAddInt32(Uh_5tlreg3937, Uh_5tlreg3935, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1y.write(Uh_5tlreg3938); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
        const u32 Uh_5tlreg3939 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg3941 = Uv_1x.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg3942 = _BinOpAddInt32(Uh_5tlreg3941, Uh_5tlreg3939, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1x.write(Uh_5tlreg3942); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ClusterByID.ulam:55: 		return target;
    const u32 Uh_5tlreg3944 = Uv_6target.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3945(Uh_5tlreg3944); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3945); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9219findNonCellSlotNear



//! ClusterByID.ulam:30: 	SiteNum findNonCellSlotNear(SiteNum t,ID id){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9219findNonCellSlotNear(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1t, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:31: 		return findNonCellSlotNear(ew.getCoord(t),id);
    UlamRef<EC> Uh_3tur3948(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3950 = Uv_1t.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval3951(Uh_5tlreg3950); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval3953 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3948, Uh_5tlval3951); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval3954(Uh_5tlval3953); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3956 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval3957(Uh_5tlreg3956); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval3959 = THE_INSTANCE.Uf_9219findNonCellSlotNear(uc, ur, Uh_5tlval3954, Uh_5tlval3957); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3960 = Uh_5tlval3959.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval3961(Uh_5tlreg3960); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval3961); //gcnl:NodeReturnStatement.cpp:343

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
    UlamRef<EC> Uh_3tur3963(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur3963); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:69: 		Category cGene = ws.allocateCategory();
    UlamRef<EC> Uh_3tur3966(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval3968 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur3966); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3969 = Uh_5tlval3968.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_5cGene(Uh_5tlreg3969); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:71: 		ElementType tGene = au.getValidType(atom);
    UlamRef<EC> Uh_3tur3971(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut3973 = Uv_4atom.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval3974(Uh_3tut3973); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval3976 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur3971, Uh_5tuval3974); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg3977 = Uh_5tlval3976.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_5tGene(Uh_5tlreg3977); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:73: 		sv.setType(cGene,tGene);
    UlamRef<EC> Uh_3tur3979(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3981 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval3982(Uh_5tlreg3981); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3984 = Uv_5tGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval3985(Uh_5tlreg3984); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur3979, Uh_5tlval3982, Uh_5tlval3985); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:74: 		sv.setID(cGene,id);
    UlamRef<EC> Uh_3tur3988(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3990 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval3991(Uh_5tlreg3990); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg3993 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval3994(Uh_5tlreg3993); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur3988, Uh_5tlval3991, Uh_5tlval3994); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:75: 		sv.invert(cGene);
    UlamRef<EC> Uh_3tur3997(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg3999 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41000(Uh_5tlreg3999); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_6invert(uc, Uh_3tur3997, Uh_5tlval41000); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:78: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur41003(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval41004; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval41004); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41006(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41007(Uh_5tlval41006); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg41008 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41009 = _Int32ToUnary32(Uh_5tlreg41008, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval41010(Uh_5tlreg41009); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41011 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41012 = _Int32ToUnary32(Uh_5tlreg41011, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval41013(Uh_5tlreg41012); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41003, Uh_6tlref41007, Uh_5tlval41010, Uh_5tlval41013); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:79: 		if(ws.getHits(cGene)==(Unsigned)0){
    {

//! ClusterByID.ulam:79: 		if(ws.getHits(cGene)==(Unsigned)0){
      const u32 Uh_5tlreg41015 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41016 = _Int32ToUnsigned32(Uh_5tlreg41015, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur41018(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg41020 = Uv_5cGene.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval41021(Uh_5tlreg41020); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval41023 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur41018, Uh_5tlval41021); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg41024 = Uh_5tlval41023.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg41025 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41024, Uh_5tlreg41016, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41025, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:80: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur41027(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval41028; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval41028); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41030(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41031(Uh_5tlval41030); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg41032 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41033 = _Int32ToUnary32(Uh_5tlreg41032, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval41034(Uh_5tlreg41033); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg41035 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg41036 = _Int32ToUnary32(Uh_5tlreg41035, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval41037(Uh_5tlreg41036); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41027, Uh_6tlref41031, Uh_5tlval41034, Uh_5tlval41037); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:81: 			if(ws.getHits(cGene)==(Unsigned)0){
          {

//! ClusterByID.ulam:81: 			if(ws.getHits(cGene)==(Unsigned)0){
            const u32 Uh_5tlreg41039 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41040 = _Int32ToUnsigned32(Uh_5tlreg41039, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur41042(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg41044 = Uv_5cGene.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval41045(Uh_5tlreg41044); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval41047 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur41042, Uh_5tlval41045); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg41048 = Uh_5tlval41047.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg41049 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41048, Uh_5tlreg41040, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg41049, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:82: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur41051(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval41052; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval41052); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41054(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41055(Uh_5tlval41054); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg41056 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41057 = _Int32ToUnary32(Uh_5tlreg41056, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval41058(Uh_5tlreg41057); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg41059 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg41060 = _Int32ToUnary32(Uh_5tlreg41059, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval41061(Uh_5tlreg41060); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41051, Uh_6tlref41055, Uh_5tlval41058, Uh_5tlval41061); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:83: 				if(ws.getHits(cGene)==(Unsigned)0){
                {

//! ClusterByID.ulam:83: 				if(ws.getHits(cGene)==(Unsigned)0){
                  const u32 Uh_5tlreg41063 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg41064 = _Int32ToUnsigned32(Uh_5tlreg41063, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur41066(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg41068 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval41069(Uh_5tlreg41068); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval41071 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur41066, Uh_5tlval41069); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg41072 = Uh_5tlval41071.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg41073 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41072, Uh_5tlreg41064, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg41073, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:84: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur41075(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval41076; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval41076); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41078(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41079(Uh_5tlval41078); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg41080 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg41081 = _Int32ToUnary32(Uh_5tlreg41080, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval41082(Uh_5tlreg41081); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg41083 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg41084 = _Int32ToUnary32(Uh_5tlreg41083, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval41085(Uh_5tlreg41084); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41075, Uh_6tlref41079, Uh_5tlval41082, Uh_5tlval41085); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:85: 					if(ws.getHits(cGene) <= (Unsigned)41){
                      {

//! ClusterByID.ulam:85: 					if(ws.getHits(cGene) <= (Unsigned)41){
                        const u32 Uh_5tlreg41087 = 41; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg41088 = _Int32ToUnsigned32(Uh_5tlreg41087, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur41090(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg41092 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval41093(Uh_5tlreg41092); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval41095 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur41090, Uh_5tlval41093); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg41096 = Uh_5tlval41095.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg41097 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg41096, Uh_5tlreg41088, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg41097, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:86: 						return ws.getSiteNum(cGene);
                            UlamRef<EC> Uh_3tur41099(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg41101 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval41102(Uh_5tlreg41101); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval41104 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41099, Uh_5tlval41102); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg41105 = Uh_5tlval41104.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval41106(Uh_5tlreg41105); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval41106); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:89: 						return 0;
                            const u32 Uh_5tlreg41107 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg41108 = _Int32ToUnsigned32(Uh_5tlreg41107, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval41109(Uh_5tlreg41108); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval41109); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:92: 				return ws.getSiteNum(cGene);
                UlamRef<EC> Uh_3tur41111(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg41113 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval41114(Uh_5tlreg41113); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval41116 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41111, Uh_5tlval41114); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg41117 = Uh_5tlval41116.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval41118(Uh_5tlreg41117); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval41118); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
          }

//! ClusterByID.ulam:94: 			return ws.getSiteNum(cGene);
          UlamRef<EC> Uh_3tur41120(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg41122 = Uv_5cGene.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval41123(Uh_5tlreg41122); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval41125 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41120, Uh_5tlval41123); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg41126 = Uh_5tlval41125.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval41127(Uh_5tlreg41126); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval41127); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! ClusterByID.ulam:96: 		return ws.getSiteNum(cGene);
    UlamRef<EC> Uh_3tur41129(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41131 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41132(Uh_5tlreg41131); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41134 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur41129, Uh_5tlval41132); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41135 = Uh_5tlval41134.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval41136(Uh_5tlreg41135); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41136); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217nonCellSlotNearMe



//! ClusterByID.ulam:58: 	SiteNum nonCellSlotNearMe(ID id){		//this is for genes by default to support an older use of the function.
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9217nonCellSlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:59: 		Gene gene;				//should update all instances to specify both
    Ui_Ue_102574Gene10<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:60: 		SiteNum s = nonCellSlotNearMe(gene, id);
    const T Uh_3tut41139 = Uv_4gene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41140(Uh_3tut41139); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41142 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval41143(Uh_5tlreg41142); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval41145 = THE_INSTANCE.Uf_9217nonCellSlotNearMe(uc, ur, Uh_5tuval41140, Uh_5tlval41143); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41146 = Uh_5tlval41145.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg41146); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:61: 		return s;
    const u32 Uh_5tlreg41148 = Uv_1s.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval41149(Uh_5tlreg41148); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41149); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217nonCellSlotNearMe



//! ClusterByID.ulam:181: 	Bool bringGenesCloser(ID id, Atom me){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211ClusterByID10<EC>::Uf_9216bringGenesCloser(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_102961a<EC>& Uv_2me) const
  {

//! ClusterByID.ulam:182: 		Bool foundGene = false;
    const u32 Uh_5tlreg41150 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_919foundGene(Uh_5tlreg41150); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:183: 		if(me as Nucleus){
    {

//! ClusterByID.ulam:183: 		if(me as Nucleus){
      const T Uh_3tut41152 = Uv_2me.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41153 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41152); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41153, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:183: 		if(me as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval41154 = Uv_2me; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_2me(Uh_5tuval41154, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41154.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
          {

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
            const u32 Uh_5tlreg41155 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41156 = _Int32ToUnsigned32(Uh_5tlreg41155, 2, 6); //gcnl:NodeCast.cpp:723
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41156); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
            while(true)
            {
              const u32 Uh_5tlreg41157 = 40; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41159 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41160 = _Unsigned32ToInt32(Uh_5tlreg41159, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41161 = _BinOpCompareLessEqualInt32(Uh_5tlreg41160, Uh_5tlreg41157, 7); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg41161, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
              {

//! ClusterByID.ulam:185: 				Atom a = ew[i];
                UlamRef<EC> Uh_3tur41163(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg41165 = Uv_1i.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41166(Uh_5tlreg41165); //func arg& //gcnl:Node.cpp:1128
                Ui_Ut_r102961a<EC> Uh_5tuval41168 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41163, Uh_5tlval41166); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval41168.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:186: 				if(a as Gene){
                {

//! ClusterByID.ulam:186: 				if(a as Gene){
                  const T Uh_3tut41170 = Uv_1a.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41171 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41170); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg41171, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:186: 				if(a as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval41172 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval41172, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41172.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:187: 					if(a.id == id){
                      {

//! ClusterByID.ulam:187: 					if(a.id == id){
                        const u32 Uh_5tlreg41174 = Uv_2id.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg41177 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg41178 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41177, Uh_5tlreg41174, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg41178, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:188: 						SiteNum e = nonCellSlotNearMe(id);
                            const u32 Uh_5tlreg41181 = Uv_2id.read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uh_5tlval41182(Uh_5tlreg41181); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval41184 = THE_INSTANCE.Uf_9217nonCellSlotNearMe(uc, ur, Uh_5tlval41182); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg41185 = Uh_5tlval41184.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg41185); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:189: 						ew.swap(i,e);
                            UlamRef<EC> Uh_3tur41187(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg41189 = Uv_1i.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval41190(Uh_5tlreg41189); //func arg& //gcnl:Node.cpp:1128
                            const u32 Uh_5tlreg41192 = Uv_1e.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval41193(Uh_5tlreg41192); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10111b<EC> Uh_5tlval41195 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur41187, Uh_5tlval41190, Uh_5tlval41193); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg41196 = Uh_5tlval41195.read(); //gcnl:Node.cpp:1156
                          }
                        } // end if
                      }
                    }
                  } // end if
                }
              }

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
Ul_214endcontrolloop18:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:184: 			for(SiteNum i = 1; i <= 40;++i){
              const u32 Uh_5tlreg41197 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41198 = _Int32ToUnsigned32(Uh_5tlreg41197, 32, 6); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41200 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41201 = _BinOpAddUnsigned32(Uh_5tlreg41200, Uh_5tlreg41198, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1i.write(Uh_5tlreg41201); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

//! ClusterByID.ulam:194: 		if(me as Gene){
    {

//! ClusterByID.ulam:194: 		if(me as Gene){
      const T Uh_3tut41203 = Uv_2me.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg41204 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41203); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg41204, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:194: 		if(me as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval41205 = Uv_2me; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102574Gene10<EC> Uv_2me(Uh_5tuval41205, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41205.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:195: 			Bool canSeeNucleus = me.canSeeNucleus;
          const u32 Uh_5tlreg41208 = UlamRef<EC>(Uv_2me, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10111b<EC> Uv_9213canSeeNucleus(Uh_5tlreg41208); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
          {

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
            const u32 Uh_5tlreg41209 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg41210 = _Int32ToUnsigned32(Uh_5tlreg41209, 2, 6); //gcnl:NodeCast.cpp:723
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41210); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
            while(true)
            {
              const u32 Uh_5tlreg41211 = 40; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41213 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41214 = _Unsigned32ToInt32(Uh_5tlreg41213, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41215 = _BinOpCompareLessEqualInt32(Uh_5tlreg41214, Uh_5tlreg41211, 7); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg41215, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
              {

//! ClusterByID.ulam:197: 				Atom a = ew[i];
                UlamRef<EC> Uh_3tur41217(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg41219 = Uv_1i.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval41220(Uh_5tlreg41219); //func arg& //gcnl:Node.cpp:1128
                Ui_Ut_r102961a<EC> Uh_5tuval41222 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41217, Uh_5tlval41220); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval41222.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:198: 				if(a as Gene){
                {

//! ClusterByID.ulam:198: 				if(a as Gene){
                  const T Uh_3tut41224 = Uv_1a.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg41225 = Ue_102574Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut41224); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg41225, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:198: 				if(a as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval41226 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102574Gene10<EC> Uv_1a(Uh_5tuval41226, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval41226.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:199: 					if(a.id == id){
                      {

//! ClusterByID.ulam:199: 					if(a.id == id){
                        const u32 Uh_5tlreg41228 = Uv_2id.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg41231 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg41232 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41231, Uh_5tlreg41228, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg41232, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:200: 						foundGene = true;
                            const u32 Uh_5tlreg41233 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_919foundGene.write(Uh_5tlreg41233); //gcnl:Node.cpp:885

//! ClusterByID.ulam:201: 						if(canSeeNucleus && !a.canSeeNucleus){
                            {

//! ClusterByID.ulam:201: 						if(canSeeNucleus && !a.canSeeNucleus){
                              u32 Uh_5tlreg41235 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg41237 = Uv_9213canSeeNucleus.read(); //gcnl:Node.cpp:691
                              if(_Bool32ToCbool(Uh_5tlreg41237, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg41240 = UlamRef<EC>(Uv_1a, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                                const u32 Uh_5tlreg41241 = _LogicalBangBool32(Uh_5tlreg41240, 1); //gcnl:NodeUnaryOp.cpp:449
                                Uh_5tlreg41235 = Uh_5tlreg41241; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg41235, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! ClusterByID.ulam:203: 							SiteNum e = emptySlotNearMe();
                                  const Ui_Ut_10161u<EC> Uh_5tlval41244 = THE_INSTANCE.Uf_9215emptySlotNearMe(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg41245 = Uh_5tlval41244.read(); //gcnl:Node.cpp:1156
                                  Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg41245); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:204: 							ew.swap(i,e);
                                  UlamRef<EC> Uh_3tur41247(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                                  const u32 Uh_5tlreg41249 = Uv_1i.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval41250(Uh_5tlreg41249); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg41252 = Uv_1e.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval41253(Uh_5tlreg41252); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10111b<EC> Uh_5tlval41255 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur41247, Uh_5tlval41250, Uh_5tlval41253); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg41256 = Uh_5tlval41255.read(); //gcnl:Node.cpp:1156
                                }
                              } // end if
                            }

//! ClusterByID.ulam:206: 						if(!canSeeNucleus && a.canSeeNucleus){
                            {

//! ClusterByID.ulam:206: 						if(!canSeeNucleus && a.canSeeNucleus){
                              u32 Uh_5tlreg41257 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg41259 = Uv_9213canSeeNucleus.read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg41260 = _LogicalBangBool32(Uh_5tlreg41259, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg41260, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg41263 = UlamRef<EC>(Uv_1a, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                                Uh_5tlreg41257 = Uh_5tlreg41263; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg41257, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! ClusterByID.ulam:207: 							SiteNum e = findNonCellSlotNear(i,id);
                                  const u32 Uh_5tlreg41266 = Uv_1i.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval41267(Uh_5tlreg41266); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg41269 = Uv_2id.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102101u<EC> Uh_5tlval41270(Uh_5tlreg41269); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10161u<EC> Uh_5tlval41272 = THE_INSTANCE.Uf_9219findNonCellSlotNear(uc, ur, Uh_5tlval41267, Uh_5tlval41270); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg41273 = Uh_5tlval41272.read(); //gcnl:Node.cpp:1156
                                  Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg41273); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:208: 							ew.swap(0,e);
                                  UlamRef<EC> Uh_3tur41275(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                                  const u32 Uh_5tlreg41276 = 0; //gcnl:NodeTerminal.cpp:721
                                  const u32 Uh_5tlreg41277 = _Int32ToUnsigned32(Uh_5tlreg41276, 2, 6); //gcnl:NodeCast.cpp:723
                                  Ui_Ut_10161u<EC> Uh_5tlval41278(Uh_5tlreg41277); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg41280 = Uv_1e.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval41281(Uh_5tlreg41280); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10111b<EC> Uh_5tlval41283 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur41275, Uh_5tlval41278, Uh_5tlval41281); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg41284 = Uh_5tlval41283.read(); //gcnl:Node.cpp:1156
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
Ul_214endcontrolloop19:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:196: 			for(SiteNum i = 1; i <= 40;++i){
              const u32 Uh_5tlreg41285 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg41286 = _Int32ToUnsigned32(Uh_5tlreg41285, 32, 6); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg41288 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg41289 = _BinOpAddUnsigned32(Uh_5tlreg41288, Uh_5tlreg41286, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1i.write(Uh_5tlreg41289); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

//! ClusterByID.ulam:214: 		return foundGene;
    const u32 Uh_5tlreg41291 = Uv_919foundGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10111b<EC> Uh_5tlval41292(Uh_5tlreg41291); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval41292); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9216bringGenesCloser



//! ClusterByID.ulam:217: 	Bool geneCanSeeNucleus(ID id){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211ClusterByID10<EC>::Uf_9217geneCanSeeNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:218: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:219: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:221: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur41294(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur41294); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:222: 		Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur41297(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval41299 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur41297); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41300 = Uh_5tlval41299.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg41300); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:223: 		Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:224: 		ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur41302(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut41304 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval41305(Uh_3tut41304); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval41307 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur41302, Uh_5tuval41305); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41308 = Uh_5tlval41307.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg41308); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:226: 		sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur41310(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41312 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41313(Uh_5tlreg41312); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41315 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval41316(Uh_5tlreg41315); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur41310, Uh_5tlval41313, Uh_5tlval41316); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:227: 		sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur41319(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41321 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval41322(Uh_5tlreg41321); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41324 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval41325(Uh_5tlreg41324); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur41319, Uh_5tlval41322, Uh_5tlval41325); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:229: 		ws.scan(sv);
    UlamRef<EC> Uh_3tur41328(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval41329; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval41329); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval41331(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref41332(Uh_5tlval41331); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur41328, Uh_6tlref41332); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:231: 		if(ws.getHits(cNucleus)>(Unsigned)0){
    {

//! ClusterByID.ulam:231: 		if(ws.getHits(cNucleus)>(Unsigned)0){
      const u32 Uh_5tlreg41334 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg41335 = _Int32ToUnsigned32(Uh_5tlreg41334, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur41337(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg41339 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval41340(Uh_5tlreg41339); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval41342 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur41337, Uh_5tlval41340); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg41343 = Uh_5tlval41342.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg41344 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg41343, Uh_5tlreg41335, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg41344, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:232: 			return true;
          const u32 Uh_5tlreg41345 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval41346(Uh_5tlreg41345); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval41346); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! ClusterByID.ulam:235: 			return false;
          const u32 Uh_5tlreg41347 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval41348(Uh_5tlreg41347); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval41348); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9217geneCanSeeNucleus



//! ClusterByID.ulam:238: 	Void run(){
  template<class EC>
  void Uq_10109211ClusterByID10<EC>::Uf_3run(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! ClusterByID.ulam:239: 		ew.swap(0,40);
    UlamRef<EC> Uh_3tur41350(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg41351 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41352 = _Int32ToUnsigned32(Uh_5tlreg41351, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval41353(Uh_5tlreg41352); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg41354 = 40; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg41355 = _Int32ToUnsigned32(Uh_5tlreg41354, 7, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval41356(Uh_5tlreg41355); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval41358 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur41350, Uh_5tlval41353, Uh_5tlval41356); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg41359 = Uh_5tlval41358.read(); //gcnl:Node.cpp:1156

  } // Uf_3run


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

