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
#include "Ue_102188EggShell10.h"
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


//! ClusterByID.ulam:163: 	SiteNum emptySlotNearMe(){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9215emptySlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! ClusterByID.ulam:164: 		Unsigned radius = ew.getRadius();
    UlamRef<EC> Uh_3tur43571(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321u<EC> Uh_5tlval43573 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_919getRadius(uc, Uh_3tur43571); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43574 = Uh_5tlval43573.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uv_6radius(Uh_5tlreg43574); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:165: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:166: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:168: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur43576(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur43576); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:169: 		Category cEmpty = ws.allocateCategory();
    UlamRef<EC> Uh_3tur43579(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval43581 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur43579); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43582 = Uh_5tlval43581.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_6cEmpty(Uh_5tlreg43582); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:171: 		ElementType tEmpty = au.getEmptyType();
    UlamRef<EC> Uh_3tur43584(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102161u<EC> Uh_5tlval43586 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getEmptyType(uc, Uh_3tur43584); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43587 = Uh_5tlval43586.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_6tEmpty(Uh_5tlreg43587); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:173: 		sv.setType(cEmpty,tEmpty);
    UlamRef<EC> Uh_3tur43589(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg43591 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval43592(Uh_5tlreg43591); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43594 = Uv_6tEmpty.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval43595(Uh_5tlreg43594); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur43589, Uh_5tlval43592, Uh_5tlval43595); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:176: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur43598(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval43599; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval43599); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43601(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43602(Uh_5tlval43601); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg43603 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43604 = _Int32ToUnary32(Uh_5tlreg43603, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43605(Uh_5tlreg43604); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43606 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43607 = _Int32ToUnary32(Uh_5tlreg43606, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval43608(Uh_5tlreg43607); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43598, Uh_6tlref43602, Uh_5tlval43605, Uh_5tlval43608); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:177: 		if(ws.getHits(cEmpty)==(Unsigned)0 && radius > 1u){
    {

//! ClusterByID.ulam:177: 		if(ws.getHits(cEmpty)==(Unsigned)0 && radius > 1u){
      u32 Uh_5tlreg43610 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg43611 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43612 = _Int32ToUnsigned32(Uh_5tlreg43611, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur43614(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43616 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval43617(Uh_5tlreg43616); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval43619 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43614, Uh_5tlval43617); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43620 = Uh_5tlval43619.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg43621 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43620, Uh_5tlreg43612, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43621, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg43622 = 1u; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43623 = _Unsigned32ToUnsigned32(Uh_5tlreg43622, 1, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43625 = Uv_6radius.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43626 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg43625, Uh_5tlreg43623, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg43610 = Uh_5tlreg43626; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg43610, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:178: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur43628(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval43629; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval43629); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43631(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43632(Uh_5tlval43631); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg43633 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43634 = _Int32ToUnary32(Uh_5tlreg43633, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval43635(Uh_5tlreg43634); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg43636 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43637 = _Int32ToUnary32(Uh_5tlreg43636, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval43638(Uh_5tlreg43637); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43628, Uh_6tlref43632, Uh_5tlval43635, Uh_5tlval43638); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:179: 			if(ws.getHits(cEmpty)==(Unsigned)0 && radius > 2u){
          {

//! ClusterByID.ulam:179: 			if(ws.getHits(cEmpty)==(Unsigned)0 && radius > 2u){
            u32 Uh_5tlreg43640 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg43641 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43642 = _Int32ToUnsigned32(Uh_5tlreg43641, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur43644(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg43646 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval43647(Uh_5tlreg43646); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval43649 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43644, Uh_5tlval43647); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg43650 = Uh_5tlval43649.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg43651 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43650, Uh_5tlreg43642, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43651, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg43652 = 2u; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43653 = _Unsigned32ToUnsigned32(Uh_5tlreg43652, 2, 32); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43655 = Uv_6radius.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43656 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg43655, Uh_5tlreg43653, 32); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg43640 = Uh_5tlreg43656; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg43640, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:180: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur43658(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval43659; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval43659); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43661(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43662(Uh_5tlval43661); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg43663 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg43664 = _Int32ToUnary32(Uh_5tlreg43663, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval43665(Uh_5tlreg43664); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg43666 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg43667 = _Int32ToUnary32(Uh_5tlreg43666, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval43668(Uh_5tlreg43667); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43658, Uh_6tlref43662, Uh_5tlval43665, Uh_5tlval43668); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:181: 				if(ws.getHits(cEmpty)==(Unsigned)0 && radius > 3u){
                {

//! ClusterByID.ulam:181: 				if(ws.getHits(cEmpty)==(Unsigned)0 && radius > 3u){
                  u32 Uh_5tlreg43670 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg43671 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg43672 = _Int32ToUnsigned32(Uh_5tlreg43671, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur43674(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg43676 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval43677(Uh_5tlreg43676); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval43679 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43674, Uh_5tlval43677); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg43680 = Uh_5tlval43679.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg43681 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43680, Uh_5tlreg43672, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg43681, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg43682 = 3u; //gcnl:NodeTerminal.cpp:721
                    const u32 Uh_5tlreg43683 = _Unsigned32ToUnsigned32(Uh_5tlreg43682, 2, 32); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg43685 = Uv_6radius.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg43686 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg43685, Uh_5tlreg43683, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg43670 = Uh_5tlreg43686; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg43670, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:182: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur43688(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval43689; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval43689); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval43691(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref43692(Uh_5tlval43691); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg43693 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg43694 = _Int32ToUnary32(Uh_5tlreg43693, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval43695(Uh_5tlreg43694); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg43696 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg43697 = _Int32ToUnary32(Uh_5tlreg43696, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval43698(Uh_5tlreg43697); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur43688, Uh_6tlref43692, Uh_5tlval43695, Uh_5tlval43698); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:183: 					if(ws.getHits(cEmpty) <= (Unsigned)40){
                      {

//! ClusterByID.ulam:183: 					if(ws.getHits(cEmpty) <= (Unsigned)40){
                        const u32 Uh_5tlreg43700 = 40; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg43701 = _Int32ToUnsigned32(Uh_5tlreg43700, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur43703(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg43705 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval43706(Uh_5tlreg43705); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval43708 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43703, Uh_5tlval43706); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg43709 = Uh_5tlval43708.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg43710 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg43709, Uh_5tlreg43701, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43710, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:184: 						return ws.getSiteNum(cEmpty);
                            UlamRef<EC> Uh_3tur43712(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg43714 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval43715(Uh_5tlreg43714); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval43717 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43712, Uh_5tlval43715); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg43718 = Uh_5tlval43717.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval43719(Uh_5tlreg43718); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval43719); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:187: 						return 0;
                            const u32 Uh_5tlreg43720 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg43721 = _Int32ToUnsigned32(Uh_5tlreg43720, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval43722(Uh_5tlreg43721); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval43722); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:190: 				if(ws.getHits(cEmpty) <= (Unsigned)40){
                {

//! ClusterByID.ulam:190: 				if(ws.getHits(cEmpty) <= (Unsigned)40){
                  const u32 Uh_5tlreg43723 = 40; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg43724 = _Int32ToUnsigned32(Uh_5tlreg43723, 7, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur43726(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg43728 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval43729(Uh_5tlreg43728); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval43731 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43726, Uh_5tlval43729); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg43732 = Uh_5tlval43731.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg43733 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg43732, Uh_5tlreg43724, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg43733, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:191: 					return ws.getSiteNum(cEmpty);
                      UlamRef<EC> Uh_3tur43735(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg43737 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10151u<EC> Uh_5tlval43738(Uh_5tlreg43737); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval43740 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43735, Uh_5tlval43738); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg43741 = Uh_5tlval43740.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uh_5tlval43742(Uh_5tlreg43741); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval43742); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                  else
                  {
                    {

//! ClusterByID.ulam:194: 					return 0;
                      const u32 Uh_5tlreg43743 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg43744 = _Int32ToUnsigned32(Uh_5tlreg43743, 2, 6); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10161u<EC> Uh_5tlval43745(Uh_5tlreg43744); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval43745); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } //end else
                }
              }
            } // end if
          }

//! ClusterByID.ulam:197: 			if(ws.getHits(cEmpty) <= (Unsigned)40){
          {

//! ClusterByID.ulam:197: 			if(ws.getHits(cEmpty) <= (Unsigned)40){
            const u32 Uh_5tlreg43746 = 40; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43747 = _Int32ToUnsigned32(Uh_5tlreg43746, 7, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur43749(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg43751 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval43752(Uh_5tlreg43751); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval43754 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43749, Uh_5tlval43752); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg43755 = Uh_5tlval43754.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg43756 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg43755, Uh_5tlreg43747, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg43756, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:198: 				return ws.getSiteNum(cEmpty);
                UlamRef<EC> Uh_3tur43758(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43760 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval43761(Uh_5tlreg43760); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval43763 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43758, Uh_5tlval43761); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg43764 = Uh_5tlval43763.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval43765(Uh_5tlreg43764); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval43765); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! ClusterByID.ulam:201: 				return 0;
                const u32 Uh_5tlreg43766 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg43767 = _Int32ToUnsigned32(Uh_5tlreg43766, 2, 6); //gcnl:NodeCast.cpp:723
                Ui_Ut_10161u<EC> Uh_5tlval43768(Uh_5tlreg43767); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval43768); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
    }

//! ClusterByID.ulam:204: 		if(ws.getHits(cEmpty) <= (Unsigned)40){
    {

//! ClusterByID.ulam:204: 		if(ws.getHits(cEmpty) <= (Unsigned)40){
      const u32 Uh_5tlreg43769 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43770 = _Int32ToUnsigned32(Uh_5tlreg43769, 7, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur43772(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg43774 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval43775(Uh_5tlreg43774); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval43777 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur43772, Uh_5tlval43775); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg43778 = Uh_5tlval43777.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg43779 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg43778, Uh_5tlreg43770, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43779, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:205: 			return ws.getSiteNum(cEmpty);
          UlamRef<EC> Uh_3tur43781(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg43783 = Uv_6cEmpty.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval43784(Uh_5tlreg43783); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval43786 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur43781, Uh_5tlval43784); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg43787 = Uh_5tlval43786.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval43788(Uh_5tlreg43787); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43788); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! ClusterByID.ulam:207: 			return 0;
          const u32 Uh_5tlreg43789 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43790 = _Int32ToUnsigned32(Uh_5tlreg43789, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval43791(Uh_5tlreg43790); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43791); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9215emptySlotNearMe



//! ClusterByID.ulam:211: 	Bool bringGenesCloser(ID id, Atom me){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211ClusterByID10<EC>::Uf_9216bringGenesCloser(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_102961a<EC>& Uv_2me) const
  {

//! ClusterByID.ulam:212: 		Bool foundGene = false;
    const u32 Uh_5tlreg43792 = 0u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uv_919foundGene(Uh_5tlreg43792); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:213: 		if(me as Nucleus){
    {

//! ClusterByID.ulam:213: 		if(me as Nucleus){
      const T Uh_3tut43794 = Uv_2me.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43795 = Ue_102717Nucleus10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43794); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43795, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:213: 		if(me as Nucleus){
          Ui_Ut_102961a<EC> & Uh_5tuval43796 = Uv_2me; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102717Nucleus10<EC> Uv_2me(Uh_5tuval43796, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43796.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:214: 			for(SiteNum i = 1; i <= 40;++i){
          {

//! ClusterByID.ulam:214: 			for(SiteNum i = 1; i <= 40;++i){
            const u32 Uh_5tlreg43797 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43798 = _Int32ToUnsigned32(Uh_5tlreg43797, 2, 6); //gcnl:NodeCast.cpp:723
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43798); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:214: 			for(SiteNum i = 1; i <= 40;++i){
            while(true)
            {
              const u32 Uh_5tlreg43799 = 40; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43801 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43802 = _Unsigned32ToInt32(Uh_5tlreg43801, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43803 = _BinOpCompareLessEqualInt32(Uh_5tlreg43802, Uh_5tlreg43799, 7); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg43803, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:214: 			for(SiteNum i = 1; i <= 40;++i){
              {

//! ClusterByID.ulam:215: 				Atom a = ew[i];
                UlamRef<EC> Uh_3tur43805(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43807 = Uv_1i.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval43808(Uh_5tlreg43807); //func arg& //gcnl:Node.cpp:1128
                Ui_Ut_r102961a<EC> Uh_5tuval43810 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43805, Uh_5tlval43808); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43810.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:216: 				if(a as Gene){
                {

//! ClusterByID.ulam:216: 				if(a as Gene){
                  const T Uh_3tut43812 = Uv_1a.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg43813 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43812); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg43813, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:216: 				if(a as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval43814 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval43814, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43814.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:217: 					if(a.id == id){
                      {

//! ClusterByID.ulam:217: 					if(a.id == id){
                        const u32 Uh_5tlreg43816 = Uv_2id.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg43819 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg43820 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43819, Uh_5tlreg43816, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43820, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:218: 						SiteNum e = nonCellSlotNearMe(id);
                            const u32 Uh_5tlreg43823 = Uv_2id.read(); //gcnl:Node.cpp:691
                            Ui_Ut_102101u<EC> Uh_5tlval43824(Uh_5tlreg43823); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval43826 = THE_INSTANCE.Uf_9217nonCellSlotNearMe(uc, ur, Uh_5tlval43824); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg43827 = Uh_5tlval43826.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg43827); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:219: 						ew.swap(i,e);
                            UlamRef<EC> Uh_3tur43829(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg43831 = Uv_1i.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval43832(Uh_5tlreg43831); //func arg& //gcnl:Node.cpp:1128
                            const u32 Uh_5tlreg43834 = Uv_1e.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval43835(Uh_5tlreg43834); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10111b<EC> Uh_5tlval43837 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43829, Uh_5tlval43832, Uh_5tlval43835); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg43838 = Uh_5tlval43837.read(); //gcnl:Node.cpp:1156
                          }
                        } // end if
                      }
                    }
                  } // end if
                }
              }

//! ClusterByID.ulam:214: 			for(SiteNum i = 1; i <= 40;++i){
Ul_214endcontrolloop217:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:214: 			for(SiteNum i = 1; i <= 40;++i){
              const u32 Uh_5tlreg43839 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43840 = _Int32ToUnsigned32(Uh_5tlreg43839, 32, 6); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43842 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43843 = _BinOpAddUnsigned32(Uh_5tlreg43842, Uh_5tlreg43840, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1i.write(Uh_5tlreg43843); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

//! ClusterByID.ulam:224: 		if(me as Gene){
    {

//! ClusterByID.ulam:224: 		if(me as Gene){
      const T Uh_3tut43845 = Uv_2me.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43846 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43845); //gcnl:NodeConditionalAs.cpp:444
      if(_Bool32ToCbool(Uh_5tlreg43846, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:224: 		if(me as Gene){
          Ui_Ut_102961a<EC> & Uh_5tuval43847 = Uv_2me; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
          Ui_Ue_r102564Gene10<EC> Uv_2me(Uh_5tuval43847, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43847.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:225: 			Bool canSeeNucleus = me.canSeeNucleus;
          const u32 Uh_5tlreg43850 = UlamRef<EC>(Uv_2me, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
          Ui_Ut_10111b<EC> Uv_9213canSeeNucleus(Uh_5tlreg43850); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:226: 			for(SiteNum i = 1; i <= 40;++i){
          {

//! ClusterByID.ulam:226: 			for(SiteNum i = 1; i <= 40;++i){
            const u32 Uh_5tlreg43851 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43852 = _Int32ToUnsigned32(Uh_5tlreg43851, 2, 6); //gcnl:NodeCast.cpp:723
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43852); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:226: 			for(SiteNum i = 1; i <= 40;++i){
            while(true)
            {
              const u32 Uh_5tlreg43853 = 40; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43855 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43856 = _Unsigned32ToInt32(Uh_5tlreg43855, 6, 7); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43857 = _BinOpCompareLessEqualInt32(Uh_5tlreg43856, Uh_5tlreg43853, 7); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg43857, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:226: 			for(SiteNum i = 1; i <= 40;++i){
              {

//! ClusterByID.ulam:227: 				Atom a = ew[i];
                UlamRef<EC> Uh_3tur43859(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43861 = Uv_1i.read(); //gcnl:Node.cpp:691
                Ui_Ut_10161u<EC> Uh_5tlval43862(Uh_5tlreg43861); //func arg& //gcnl:Node.cpp:1128
                Ui_Ut_r102961a<EC> Uh_5tuval43864 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43859, Uh_5tlval43862); //gcnl:NodeFunctionCall.cpp:1006
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval43864.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:228: 				if(a as Gene){
                {

//! ClusterByID.ulam:228: 				if(a as Gene){
                  const T Uh_3tut43866 = Uv_1a.read(); //gcnl:Node.cpp:691
                  const u32 Uh_5tlreg43867 = Ue_102564Gene10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_3tut43866); //gcnl:NodeConditionalAs.cpp:444
                  if(_Bool32ToCbool(Uh_5tlreg43867, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:228: 				if(a as Gene){
                      Ui_Ut_102961a<EC> & Uh_5tuval43868 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Ue_r102564Gene10<EC> Uv_1a(Uh_5tuval43868, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval43868.GetType()), uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! ClusterByID.ulam:229: 					if(a.id == id){
                      {

//! ClusterByID.ulam:229: 					if(a.id == id){
                        const u32 Uh_5tlreg43870 = Uv_2id.read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg43873 = UlamRef<EC>(Uv_1a, 0u, 10u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                        const u32 Uh_5tlreg43874 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg43873, Uh_5tlreg43870, 10); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg43874, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:230: 						foundGene = true;
                            const u32 Uh_5tlreg43875 = 1u; //gcnl:NodeTerminal.cpp:721
                            Uv_919foundGene.write(Uh_5tlreg43875); //gcnl:Node.cpp:885

//! ClusterByID.ulam:231: 						if(canSeeNucleus && !a.canSeeNucleus){
                            {

//! ClusterByID.ulam:231: 						if(canSeeNucleus && !a.canSeeNucleus){
                              u32 Uh_5tlreg43877 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg43879 = Uv_9213canSeeNucleus.read(); //gcnl:Node.cpp:691
                              if(_Bool32ToCbool(Uh_5tlreg43879, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg43882 = UlamRef<EC>(Uv_1a, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                                const u32 Uh_5tlreg43883 = _LogicalBangBool32(Uh_5tlreg43882, 1); //gcnl:NodeUnaryOp.cpp:449
                                Uh_5tlreg43877 = Uh_5tlreg43883; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg43877, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! ClusterByID.ulam:233: 							SiteNum e = emptySlotNearMe();
                                  const Ui_Ut_10161u<EC> Uh_5tlval43886 = THE_INSTANCE.Uf_9215emptySlotNearMe(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg43887 = Uh_5tlval43886.read(); //gcnl:Node.cpp:1156
                                  Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg43887); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:234: 							ew.swap(i,e);
                                  UlamRef<EC> Uh_3tur43889(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                                  const u32 Uh_5tlreg43891 = Uv_1i.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval43892(Uh_5tlreg43891); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg43894 = Uv_1e.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval43895(Uh_5tlreg43894); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10111b<EC> Uh_5tlval43897 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43889, Uh_5tlval43892, Uh_5tlval43895); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg43898 = Uh_5tlval43897.read(); //gcnl:Node.cpp:1156
                                }
                              } // end if
                            }

//! ClusterByID.ulam:236: 						if(!canSeeNucleus && a.canSeeNucleus){
                            {

//! ClusterByID.ulam:236: 						if(!canSeeNucleus && a.canSeeNucleus){
                              u32 Uh_5tlreg43899 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg43901 = Uv_9213canSeeNucleus.read(); //gcnl:Node.cpp:691
                              const u32 Uh_5tlreg43902 = _LogicalBangBool32(Uh_5tlreg43901, 1); //gcnl:NodeUnaryOp.cpp:449
                              if(_Bool32ToCbool(Uh_5tlreg43902, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg43905 = UlamRef<EC>(Uv_1a, 16u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:691
                                Uh_5tlreg43899 = Uh_5tlreg43905; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg43899, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! ClusterByID.ulam:237: 							SiteNum e = findNonCellSlotNear(i,id);
                                  const u32 Uh_5tlreg43908 = Uv_1i.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval43909(Uh_5tlreg43908); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg43911 = Uv_2id.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_102101u<EC> Uh_5tlval43912(Uh_5tlreg43911); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10161u<EC> Uh_5tlval43914 = THE_INSTANCE.Uf_9219findNonCellSlotNear(uc, ur, Uh_5tlval43909, Uh_5tlval43912); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg43915 = Uh_5tlval43914.read(); //gcnl:Node.cpp:1156
                                  Ui_Ut_10161u<EC> Uv_1e(Uh_5tlreg43915); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:238: 							ew.swap(0,e);
                                  UlamRef<EC> Uh_3tur43917(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                                  const u32 Uh_5tlreg43918 = 0; //gcnl:NodeTerminal.cpp:721
                                  const u32 Uh_5tlreg43919 = _Int32ToUnsigned32(Uh_5tlreg43918, 2, 6); //gcnl:NodeCast.cpp:723
                                  Ui_Ut_10161u<EC> Uh_5tlval43920(Uh_5tlreg43919); //func arg& //gcnl:Node.cpp:1128
                                  const u32 Uh_5tlreg43922 = Uv_1e.read(); //gcnl:Node.cpp:691
                                  Ui_Ut_10161u<EC> Uh_5tlval43923(Uh_5tlreg43922); //func arg& //gcnl:Node.cpp:1128
                                  const Ui_Ut_10111b<EC> Uh_5tlval43925 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43917, Uh_5tlval43920, Uh_5tlval43923); //gcnl:NodeFunctionCall.cpp:1006
                                  const u32 Uh_5tlreg43926 = Uh_5tlval43925.read(); //gcnl:Node.cpp:1156
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

//! ClusterByID.ulam:226: 			for(SiteNum i = 1; i <= 40;++i){
Ul_214endcontrolloop218:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:226: 			for(SiteNum i = 1; i <= 40;++i){
              const u32 Uh_5tlreg43927 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43928 = _Int32ToUnsigned32(Uh_5tlreg43927, 32, 6); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43930 = Uv_1i.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43931 = _BinOpAddUnsigned32(Uh_5tlreg43930, Uh_5tlreg43928, 6); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1i.write(Uh_5tlreg43931); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

//! ClusterByID.ulam:244: 		return foundGene;
    const u32 Uh_5tlreg43933 = Uv_919foundGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10111b<EC> Uh_5tlval43934(Uh_5tlreg43933); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43934); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9216bringGenesCloser



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
    const u32 Uh_5tlreg43935 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43936 = _Int32ToUnsigned32(Uh_5tlreg43935, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uv_6target(Uh_5tlreg43936); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
    {

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
      const u32 Uh_5tlreg43937 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43938 = _Int32ToInt32(Uh_5tlreg43937, 2, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43941 = UlamRef<EC>(0u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43942 = _Int32ToInt32(Uh_5tlreg43941, 16, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43943 = _BinOpSubtractInt32(Uh_5tlreg43942, Uh_5tlreg43938, 17); //gcnl:NodeBinaryOp.cpp:719
      const u32 Uh_5tlreg43944 = _Int32ToInt32(Uh_5tlreg43943, 17, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1x(Uh_5tlreg43944); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
      while(true)
      {
        const u32 Uh_5tlreg43945 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg43946 = _Int32ToInt32(Uh_5tlreg43945, 2, 17); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43949 = UlamRef<EC>(0u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43950 = _Int32ToInt32(Uh_5tlreg43949, 16, 17); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43951 = _BinOpAddInt32(Uh_5tlreg43950, Uh_5tlreg43946, 17); //gcnl:NodeBinaryOp.cpp:719
        const u32 Uh_5tlreg43952 = _Int32ToInt32(Uh_5tlreg43951, 17, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg43954 = Uv_1x.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg43955 = _BinOpCompareLessEqualInt32(Uh_5tlreg43954, Uh_5tlreg43952, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg43955, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
        {

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
          {

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
            const u32 Uh_5tlreg43956 = 1; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg43957 = _Int32ToInt32(Uh_5tlreg43956, 2, 17); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43960 = UlamRef<EC>(16u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg43961 = _Int32ToInt32(Uh_5tlreg43960, 16, 17); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg43962 = _BinOpSubtractInt32(Uh_5tlreg43961, Uh_5tlreg43957, 17); //gcnl:NodeBinaryOp.cpp:719
            const u32 Uh_5tlreg43963 = _Int32ToInt32(Uh_5tlreg43962, 17, 32); //gcnl:NodeCast.cpp:723
            Ui_Ut_102321i<EC> Uv_1y(Uh_5tlreg43963); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
            while(true)
            {
              const u32 Uh_5tlreg43964 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg43965 = _Int32ToInt32(Uh_5tlreg43964, 2, 17); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43968 = UlamRef<EC>(16u, 16u, Uv_1t, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43969 = _Int32ToInt32(Uh_5tlreg43968, 16, 17); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43970 = _BinOpAddInt32(Uh_5tlreg43969, Uh_5tlreg43965, 17); //gcnl:NodeBinaryOp.cpp:719
              const u32 Uh_5tlreg43971 = _Int32ToInt32(Uh_5tlreg43970, 17, 32); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg43973 = Uv_1y.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg43974 = _BinOpCompareLessEqualInt32(Uh_5tlreg43973, Uh_5tlreg43971, 32); //gcnl:NodeBinaryOpCompare.cpp:313

              if(!_Bool32ToCbool(Uh_5tlreg43974, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
              {

//! ClusterByID.ulam:44: 				tprime = cd.make((Int(16)) x,(Int(16)) y);
                UlamRef<EC> Uh_3tur43976(0u, 32u, Uv_2cd, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg43978 = Uv_1x.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg43979 = _Int32ToInt32(Uh_5tlreg43978, 32, 16); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg43980 = _Int32ToInt32(Uh_5tlreg43979, 16, 32); //gcnl:NodeCast.cpp:723
                Ui_Ut_102321i<EC> Uh_5tlval43981(Uh_5tlreg43980); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg43983 = Uv_1y.read(); //gcnl:Node.cpp:691
                const u32 Uh_5tlreg43984 = _Int32ToInt32(Uh_5tlreg43983, 32, 16); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg43985 = _Int32ToInt32(Uh_5tlreg43984, 16, 32); //gcnl:NodeCast.cpp:723
                Ui_Ut_102321i<EC> Uh_5tlval43986(Uh_5tlreg43985); //func arg& //gcnl:Node.cpp:1128
                Ui_Uq_102323C2D10<EC> Uh_5tlval43988 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4make(uc, Uh_3tur43976, Uh_5tlval43981, Uh_5tlval43986); //gcnl:NodeFunctionCall.cpp:1006
                Uv_6tprime.write(Uh_5tlval43988.read()); //gcnl:Node.cpp:885

//! ClusterByID.ulam:45: 				if(!ob.isOOB(tprime)){
                {

//! ClusterByID.ulam:45: 				if(!ob.isOOB(tprime)){
                  UlamRef<EC> Uh_3tur43991(0u, 32u, Uv_2ob, &Un_102329211OutOfBounds10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg43993 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                  Ui_Uq_102323C2D10<EC> Uh_5tlval43994(Uh_5tlreg43993); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_10111b<EC> Uh_5tlval43996 = Ui_Un_102329211OutOfBounds10<EC>::Us::THE_INSTANCE.Uf_5isOOB(uc, Uh_3tur43991, Uh_5tlval43994); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg43997 = Uh_5tlval43996.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg43998 = _LogicalBangBool32(Uh_5tlreg43997, 1); //gcnl:NodeUnaryOp.cpp:449
                  if(_Bool32ToCbool(Uh_5tlreg43998, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:46: 					Atom a = ew[ew.getSiteNumberRaw(tprime)];
                      UlamRef<EC> Uh_3tur44000(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      UlamRef<EC> Uh_3tur44002(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44004 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                      Ui_Uq_102323C2D10<EC> Uh_5tlval44005(Uh_5tlreg44004); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44007 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, Uh_3tur44002, Uh_5tlval44005); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44008 = Uh_5tlval44007.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uh_5tlval44009(Uh_5tlreg44008); //func arg& //gcnl:Node.cpp:1128
                      Ui_Ut_r102961a<EC> Uh_5tuval44011 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur44000, Uh_5tlval44009); //gcnl:NodeFunctionCall.cpp:1006
                      Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval44011.read()); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:47: 					if(cell.outOfTheCell(a,id)){
                      {

//! ClusterByID.ulam:47: 					if(cell.outOfTheCell(a,id)){
                        UlamRef<EC> Uh_3tur44013(ur, 0u, 0u, &Uq_10104Cell10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                        const T Uh_3tut44015 = Uv_1a.read(); //gcnl:Node.cpp:691
                        Ui_Ut_102961a<EC> Uh_5tuval44016(Uh_3tut44015); //func arg& //gcnl:Node.cpp:1128
                        const u32 Uh_5tlreg44018 = Uv_2id.read(); //gcnl:Node.cpp:691
                        Ui_Ut_102101u<EC> Uh_5tlval44019(Uh_5tlreg44018); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_10111b<EC> Uh_5tlval44021 = Uq_10104Cell10<EC>::THE_INSTANCE.Uf_9212outOfTheCell(uc, Uh_3tur44013, Uh_5tuval44016, Uh_5tlval44019); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg44022 = Uh_5tlval44021.read(); //gcnl:Node.cpp:1156
                        if(_Bool32ToCbool(Uh_5tlreg44022, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:48: 						target = ew.getSiteNumberRaw(tprime);
                            UlamRef<EC> Uh_3tur44024(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg44026 = Uv_6tprime.read(); //gcnl:Node.cpp:691
                            Ui_Uq_102323C2D10<EC> Uh_5tlval44027(Uh_5tlreg44026); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval44029 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, Uh_3tur44024, Uh_5tlval44027); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg44030 = Uh_5tlval44029.read(); //gcnl:Node.cpp:1156
                            Uv_6target.write(Uh_5tlreg44030); //gcnl:Node.cpp:885

//! ClusterByID.ulam:49: 						return target;
                            const u32 Uh_5tlreg44033 = Uv_6target.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10161u<EC> Uh_5tlval44034(Uh_5tlreg44033); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44034); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                      }
                    }
                  } // end if
                }
              }

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
Ul_214endcontrolloop216:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:43: 			for(Int y = t.y-1; y <= t.y+1; ++y){
              const u32 Uh_5tlreg44035 = 1; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg44037 = Uv_1y.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg44038 = _BinOpAddInt32(Uh_5tlreg44037, Uh_5tlreg44035, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
              Uv_1y.write(Uh_5tlreg44038); //gcnl:Node.cpp:885
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
Ul_214endcontrolloop215:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ClusterByID.ulam:42: 		for(Int x = t.x-1; x <= t.x+1; ++x){
        const u32 Uh_5tlreg44039 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44041 = Uv_1x.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44042 = _BinOpAddInt32(Uh_5tlreg44041, Uh_5tlreg44039, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1x.write(Uh_5tlreg44042); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ClusterByID.ulam:55: 		return target;
    const u32 Uh_5tlreg44044 = Uv_6target.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44045(Uh_5tlreg44044); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44045); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9219findNonCellSlotNear



//! ClusterByID.ulam:30: 	SiteNum findNonCellSlotNear(SiteNum t,ID id){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9219findNonCellSlotNear(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1t, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:31: 		return findNonCellSlotNear(ew.getCoord(t),id);
    UlamRef<EC> Uh_3tur44048(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44050 = Uv_1t.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44051(Uh_5tlreg44050); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval44053 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur44048, Uh_5tlval44051); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval44054(Uh_5tlval44053); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44056 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44057(Uh_5tlreg44056); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval44059 = THE_INSTANCE.Uf_9219findNonCellSlotNear(uc, ur, Uh_5tlval44054, Uh_5tlval44057); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44060 = Uh_5tlval44059.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uh_5tlval44061(Uh_5tlreg44060); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44061); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9219findNonCellSlotNear



//! ClusterByID.ulam:64: 	SiteNum nonCellSlotNearMe(Atom atom, ID id, Unsigned(2) radius){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9217nonCellSlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4atom, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10121u<EC>& Uv_6radius) const
  {

//! ClusterByID.ulam:65: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:66: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:68: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur44063(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur44063); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:69: 		Category cGene = ws.allocateCategory();
    UlamRef<EC> Uh_3tur44066(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval44068 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur44066); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44069 = Uh_5tlval44068.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_5cGene(Uh_5tlreg44069); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:71: 		ElementType tGene = au.getValidType(atom);
    UlamRef<EC> Uh_3tur44071(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut44073 = Uv_4atom.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44074(Uh_3tut44073); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval44076 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur44071, Uh_5tuval44074); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44077 = Uh_5tlval44076.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_5tGene(Uh_5tlreg44077); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:73: 		sv.setType(cGene,tGene);
    UlamRef<EC> Uh_3tur44079(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44081 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44082(Uh_5tlreg44081); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44084 = Uv_5tGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval44085(Uh_5tlreg44084); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur44079, Uh_5tlval44082, Uh_5tlval44085); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:74: 		sv.setID(cGene,id);
    UlamRef<EC> Uh_3tur44088(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44090 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44091(Uh_5tlreg44090); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44093 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44094(Uh_5tlreg44093); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur44088, Uh_5tlval44091, Uh_5tlval44094); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:75: 		sv.invert(cGene);
    UlamRef<EC> Uh_3tur44097(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44099 = Uv_5cGene.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44100(Uh_5tlreg44099); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_6invert(uc, Uh_3tur44097, Uh_5tlval44100); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:78: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur44103(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval44104; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval44104); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44106(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44107(Uh_5tlval44106); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg44108 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44109 = _Int32ToUnary32(Uh_5tlreg44108, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval44110(Uh_5tlreg44109); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44111 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44112 = _Int32ToUnary32(Uh_5tlreg44111, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval44113(Uh_5tlreg44112); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44103, Uh_6tlref44107, Uh_5tlval44110, Uh_5tlval44113); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:79: 		if(ws.getHits(cGene)==(Unsigned)0 && radius > 1){
    {

//! ClusterByID.ulam:79: 		if(ws.getHits(cGene)==(Unsigned)0 && radius > 1){
      u32 Uh_5tlreg44115 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44116 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44117 = _Int32ToUnsigned32(Uh_5tlreg44116, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44119(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44121 = Uv_5cGene.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44122(Uh_5tlreg44121); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44124 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44119, Uh_5tlval44122); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44125 = Uh_5tlval44124.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44126 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44125, Uh_5tlreg44117, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44126, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44127 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44128 = _Int32ToInt32(Uh_5tlreg44127, 2, 3); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44130 = Uv_6radius.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44131 = _Unsigned32ToInt32(Uh_5tlreg44130, 2, 3); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44132 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44131, Uh_5tlreg44128, 3); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44115 = Uh_5tlreg44132; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44115, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:80: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur44134(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval44135; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval44135); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44137(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44138(Uh_5tlval44137); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg44139 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44140 = _Int32ToUnary32(Uh_5tlreg44139, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval44141(Uh_5tlreg44140); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44142 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44143 = _Int32ToUnary32(Uh_5tlreg44142, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval44144(Uh_5tlreg44143); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44134, Uh_6tlref44138, Uh_5tlval44141, Uh_5tlval44144); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:81: 			if(ws.getHits(cGene)==(Unsigned)0 && radius > 2){
          {

//! ClusterByID.ulam:81: 			if(ws.getHits(cGene)==(Unsigned)0 && radius > 2){
            u32 Uh_5tlreg44146 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44147 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44148 = _Int32ToUnsigned32(Uh_5tlreg44147, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur44150(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg44152 = Uv_5cGene.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval44153(Uh_5tlreg44152); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval44155 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44150, Uh_5tlval44153); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg44156 = Uh_5tlval44155.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg44157 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44156, Uh_5tlreg44148, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44157, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44158 = 2; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg44160 = Uv_6radius.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg44161 = _Unsigned32ToInt32(Uh_5tlreg44160, 2, 3); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg44162 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44161, Uh_5tlreg44158, 3); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg44146 = Uh_5tlreg44162; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44146, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:82: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur44164(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval44165; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval44165); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44167(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44168(Uh_5tlval44167); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg44169 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44170 = _Int32ToUnary32(Uh_5tlreg44169, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval44171(Uh_5tlreg44170); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44172 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44173 = _Int32ToUnary32(Uh_5tlreg44172, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval44174(Uh_5tlreg44173); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44164, Uh_6tlref44168, Uh_5tlval44171, Uh_5tlval44174); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:83: 				if(ws.getHits(cGene)==(Unsigned)0 && radius > 3){
                {

//! ClusterByID.ulam:83: 				if(ws.getHits(cGene)==(Unsigned)0 && radius > 3){
                  u32 Uh_5tlreg44176 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44177 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44178 = _Int32ToUnsigned32(Uh_5tlreg44177, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur44180(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg44182 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval44183(Uh_5tlreg44182); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval44185 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44180, Uh_5tlval44183); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg44186 = Uh_5tlval44185.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg44187 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44186, Uh_5tlreg44178, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44187, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44188 = 3; //gcnl:NodeTerminal.cpp:721
                    const u32 Uh_5tlreg44190 = Uv_6radius.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44191 = _Unsigned32ToInt32(Uh_5tlreg44190, 2, 3); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg44192 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44191, Uh_5tlreg44188, 3); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44176 = Uh_5tlreg44192; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44176, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:84: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur44194(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval44195; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval44195); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44197(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44198(Uh_5tlval44197); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg44199 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44200 = _Int32ToUnary32(Uh_5tlreg44199, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval44201(Uh_5tlreg44200); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44202 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44203 = _Int32ToUnary32(Uh_5tlreg44202, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval44204(Uh_5tlreg44203); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44194, Uh_6tlref44198, Uh_5tlval44201, Uh_5tlval44204); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:85: 					if(ws.getHits(cGene) <= (Unsigned)40){
                      {

//! ClusterByID.ulam:85: 					if(ws.getHits(cGene) <= (Unsigned)40){
                        const u32 Uh_5tlreg44206 = 40; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg44207 = _Int32ToUnsigned32(Uh_5tlreg44206, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur44209(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg44211 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval44212(Uh_5tlreg44211); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval44214 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44209, Uh_5tlval44212); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg44215 = Uh_5tlval44214.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg44216 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44215, Uh_5tlreg44207, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg44216, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:86: 						return ws.getSiteNum(cGene);
                            UlamRef<EC> Uh_3tur44218(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg44220 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval44221(Uh_5tlreg44220); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval44223 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44218, Uh_5tlval44221); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg44224 = Uh_5tlval44223.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval44225(Uh_5tlreg44224); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44225); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:89: 						return 0;
                            const u32 Uh_5tlreg44226 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg44227 = _Int32ToUnsigned32(Uh_5tlreg44226, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval44228(Uh_5tlreg44227); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44228); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:92: 				if(ws.getHits(cGene) <= (Unsigned)40){
                {

//! ClusterByID.ulam:92: 				if(ws.getHits(cGene) <= (Unsigned)40){
                  const u32 Uh_5tlreg44229 = 40; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44230 = _Int32ToUnsigned32(Uh_5tlreg44229, 7, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur44232(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg44234 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval44235(Uh_5tlreg44234); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval44237 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44232, Uh_5tlval44235); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg44238 = Uh_5tlval44237.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg44239 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44238, Uh_5tlreg44230, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44239, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:93: 					return ws.getSiteNum(cGene);
                      UlamRef<EC> Uh_3tur44241(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44243 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10151u<EC> Uh_5tlval44244(Uh_5tlreg44243); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44246 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44241, Uh_5tlval44244); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44247 = Uh_5tlval44246.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uh_5tlval44248(Uh_5tlreg44247); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval44248); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                  else
                  {
                    {

//! ClusterByID.ulam:96: 					return 0;
                      const u32 Uh_5tlreg44249 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44250 = _Int32ToUnsigned32(Uh_5tlreg44249, 2, 6); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10161u<EC> Uh_5tlval44251(Uh_5tlreg44250); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval44251); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } //end else
                }
              }
            } // end if
          }

//! ClusterByID.ulam:99: 			if(ws.getHits(cGene) <= (Unsigned)40){
          {

//! ClusterByID.ulam:99: 			if(ws.getHits(cGene) <= (Unsigned)40){
            const u32 Uh_5tlreg44252 = 40; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44253 = _Int32ToUnsigned32(Uh_5tlreg44252, 7, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur44255(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg44257 = Uv_5cGene.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval44258(Uh_5tlreg44257); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval44260 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44255, Uh_5tlval44258); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg44261 = Uh_5tlval44260.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg44262 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44261, Uh_5tlreg44253, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44262, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:100: 				return ws.getSiteNum(cGene);
                UlamRef<EC> Uh_3tur44264(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg44266 = Uv_5cGene.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval44267(Uh_5tlreg44266); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval44269 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44264, Uh_5tlval44267); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg44270 = Uh_5tlval44269.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval44271(Uh_5tlreg44270); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44271); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! ClusterByID.ulam:103: 				return 0;
                const u32 Uh_5tlreg44272 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44273 = _Int32ToUnsigned32(Uh_5tlreg44272, 2, 6); //gcnl:NodeCast.cpp:723
                Ui_Ut_10161u<EC> Uh_5tlval44274(Uh_5tlreg44273); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44274); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
    }

//! ClusterByID.ulam:106: 		if(ws.getHits(cGene) <= (Unsigned)40){
    {

//! ClusterByID.ulam:106: 		if(ws.getHits(cGene) <= (Unsigned)40){
      const u32 Uh_5tlreg44275 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44276 = _Int32ToUnsigned32(Uh_5tlreg44275, 7, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44278(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44280 = Uv_5cGene.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44281(Uh_5tlreg44280); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44283 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44278, Uh_5tlval44281); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44284 = Uh_5tlval44283.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44285 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44284, Uh_5tlreg44276, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44285, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:107: 			return ws.getSiteNum(cGene);
          UlamRef<EC> Uh_3tur44287(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44289 = Uv_5cGene.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval44290(Uh_5tlreg44289); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval44292 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44287, Uh_5tlval44290); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44293 = Uh_5tlval44292.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval44294(Uh_5tlreg44293); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44294); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! ClusterByID.ulam:110: 			return 0;
          const u32 Uh_5tlreg44295 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44296 = _Int32ToUnsigned32(Uh_5tlreg44295, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval44297(Uh_5tlreg44296); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44297); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9217nonCellSlotNearMe



//! ClusterByID.ulam:58: 	SiteNum nonCellSlotNearMe(ID id){		//this is for genes by default to support an older use of the function.
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9217nonCellSlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:59: 		Gene gene;				//should update all instances to specify both
    Ui_Ue_102564Gene10<EC> Uv_4gene; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:60: 		SiteNum s = nonCellSlotNearMe(gene, id, (Unsigned(2))4);
    const T Uh_3tut44300 = Uv_4gene.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44301(Uh_3tut44300); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44303 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44304(Uh_5tlreg44303); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44305 = 4; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44306 = _Int32ToUnsigned32(Uh_5tlreg44305, 4, 2); //gcnl:NodeCast.cpp:723
    Ui_Ut_10121u<EC> Uh_5tlval44307(Uh_5tlreg44306); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10161u<EC> Uh_5tlval44309 = THE_INSTANCE.Uf_9217nonCellSlotNearMe(uc, ur, Uh_5tuval44301, Uh_5tlval44304, Uh_5tlval44307); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44310 = Uh_5tlval44309.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg44310); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:61: 		return s;
    const u32 Uh_5tlreg44312 = Uv_1s.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval44313(Uh_5tlreg44312); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval44313); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217nonCellSlotNearMe



//! ClusterByID.ulam:113: 	SiteNum cellSlotNearMe(Atom atom, ID id, Unsigned(2) radius){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211ClusterByID10<EC>::Uf_9214cellSlotNearMe(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4atom, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10121u<EC>& Uv_6radius) const
  {

//! ClusterByID.ulam:116: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:117: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:119: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur44315(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur44315); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:120: 		Category c = ws.allocateCategory();
    UlamRef<EC> Uh_3tur44318(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval44320 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur44318); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44321 = Uh_5tlval44320.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_1c(Uh_5tlreg44321); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:122: 		ElementType t = au.getValidType(atom);
    UlamRef<EC> Uh_3tur44323(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut44325 = Uv_4atom.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44326(Uh_3tut44325); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval44328 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur44323, Uh_5tuval44326); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44329 = Uh_5tlval44328.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_1t(Uh_5tlreg44329); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:124: 		sv.setType(c,t);
    UlamRef<EC> Uh_3tur44331(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44333 = Uv_1c.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44334(Uh_5tlreg44333); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44336 = Uv_1t.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval44337(Uh_5tlreg44336); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur44331, Uh_5tlval44334, Uh_5tlval44337); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:125: 		sv.setID(c,id);
    UlamRef<EC> Uh_3tur44340(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44342 = Uv_1c.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44343(Uh_5tlreg44342); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44345 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44346(Uh_5tlreg44345); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur44340, Uh_5tlval44343, Uh_5tlval44346); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:128: 		ws.scan(sv,1,1);
    UlamRef<EC> Uh_3tur44349(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval44350; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval44350); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44352(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44353(Uh_5tlval44352); //gcnl:Node.cpp:1518
    const u32 Uh_5tlreg44354 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44355 = _Int32ToUnary32(Uh_5tlreg44354, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval44356(Uh_5tlreg44355); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44357 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44358 = _Int32ToUnary32(Uh_5tlreg44357, 2, 4); //gcnl:NodeCast.cpp:723
    Ui_Ut_10141y<EC> Uh_5tlval44359(Uh_5tlreg44358); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44349, Uh_6tlref44353, Uh_5tlval44356, Uh_5tlval44359); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:129: 		if(ws.getHits(c)==(Unsigned)0 && radius > 1){
    {

//! ClusterByID.ulam:129: 		if(ws.getHits(c)==(Unsigned)0 && radius > 1){
      u32 Uh_5tlreg44361 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg44362 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44363 = _Int32ToUnsigned32(Uh_5tlreg44362, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44365(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44367 = Uv_1c.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44368(Uh_5tlreg44367); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44370 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44365, Uh_5tlval44368); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44371 = Uh_5tlval44370.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44372 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44371, Uh_5tlreg44363, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44372, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg44373 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg44374 = _Int32ToInt32(Uh_5tlreg44373, 2, 3); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44376 = Uv_6radius.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg44377 = _Unsigned32ToInt32(Uh_5tlreg44376, 2, 3); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg44378 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44377, Uh_5tlreg44374, 3); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg44361 = Uh_5tlreg44378; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg44361, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:130: 			ws.scan(sv,2,2);
          UlamRef<EC> Uh_3tur44380(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          BitVector<1120> Uh_5tuval44381; //gcnl:Node.cpp:760
          Uv_2sv.ReadBV(0u, Uh_5tuval44381); //gcnl:Node.cpp:777
          if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44383(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
          Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44384(Uh_5tlval44383); //gcnl:Node.cpp:1518
          const u32 Uh_5tlreg44385 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44386 = _Int32ToUnary32(Uh_5tlreg44385, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval44387(Uh_5tlreg44386); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg44388 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44389 = _Int32ToUnary32(Uh_5tlreg44388, 3, 4); //gcnl:NodeCast.cpp:723
          Ui_Ut_10141y<EC> Uh_5tlval44390(Uh_5tlreg44389); //func arg& //gcnl:Node.cpp:1128
          Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44380, Uh_6tlref44384, Uh_5tlval44387, Uh_5tlval44390); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:131: 			if(ws.getHits(c)==(Unsigned)0 && radius > 2){
          {

//! ClusterByID.ulam:131: 			if(ws.getHits(c)==(Unsigned)0 && radius > 2){
            u32 Uh_5tlreg44392 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg44393 = 0; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44394 = _Int32ToUnsigned32(Uh_5tlreg44393, 2, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur44396(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg44398 = Uv_1c.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval44399(Uh_5tlreg44398); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval44401 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44396, Uh_5tlval44399); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg44402 = Uh_5tlval44401.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg44403 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44402, Uh_5tlreg44394, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44403, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg44404 = 2; //gcnl:NodeTerminal.cpp:721
              const u32 Uh_5tlreg44406 = Uv_6radius.read(); //gcnl:Node.cpp:691
              const u32 Uh_5tlreg44407 = _Unsigned32ToInt32(Uh_5tlreg44406, 2, 3); //gcnl:NodeCast.cpp:723
              const u32 Uh_5tlreg44408 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44407, Uh_5tlreg44404, 3); //gcnl:NodeBinaryOpCompare.cpp:313
              Uh_5tlreg44392 = Uh_5tlreg44408; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg44392, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:132: 				ws.scan(sv,3,3);
                UlamRef<EC> Uh_3tur44410(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                BitVector<1120> Uh_5tuval44411; //gcnl:Node.cpp:760
                Uv_2sv.ReadBV(0u, Uh_5tuval44411); //gcnl:Node.cpp:777
                if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44413(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44414(Uh_5tlval44413); //gcnl:Node.cpp:1518
                const u32 Uh_5tlreg44415 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44416 = _Int32ToUnary32(Uh_5tlreg44415, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval44417(Uh_5tlreg44416); //func arg& //gcnl:Node.cpp:1128
                const u32 Uh_5tlreg44418 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44419 = _Int32ToUnary32(Uh_5tlreg44418, 3, 4); //gcnl:NodeCast.cpp:723
                Ui_Ut_10141y<EC> Uh_5tlval44420(Uh_5tlreg44419); //func arg& //gcnl:Node.cpp:1128
                Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44410, Uh_6tlref44414, Uh_5tlval44417, Uh_5tlval44420); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:133: 				if(ws.getHits(c)==(Unsigned)0 && radius > 3){
                {

//! ClusterByID.ulam:133: 				if(ws.getHits(c)==(Unsigned)0 && radius > 3){
                  u32 Uh_5tlreg44422 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg44423 = 0; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44424 = _Int32ToUnsigned32(Uh_5tlreg44423, 2, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur44426(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg44428 = Uv_1c.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval44429(Uh_5tlreg44428); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval44431 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44426, Uh_5tlval44429); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg44432 = Uh_5tlval44431.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg44433 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg44432, Uh_5tlreg44424, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44433, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg44434 = 3; //gcnl:NodeTerminal.cpp:721
                    const u32 Uh_5tlreg44436 = Uv_6radius.read(); //gcnl:Node.cpp:691
                    const u32 Uh_5tlreg44437 = _Unsigned32ToInt32(Uh_5tlreg44436, 2, 3); //gcnl:NodeCast.cpp:723
                    const u32 Uh_5tlreg44438 = _BinOpCompareGreaterThanInt32(Uh_5tlreg44437, Uh_5tlreg44434, 3); //gcnl:NodeBinaryOpCompare.cpp:313
                    Uh_5tlreg44422 = Uh_5tlreg44438; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg44422, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:134: 					ws.scan(sv,4,4);
                      UlamRef<EC> Uh_3tur44440(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      BitVector<1120> Uh_5tuval44441; //gcnl:Node.cpp:760
                      Uv_2sv.ReadBV(0u, Uh_5tuval44441); //gcnl:Node.cpp:777
                      if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44443(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
                      Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44444(Uh_5tlval44443); //gcnl:Node.cpp:1518
                      const u32 Uh_5tlreg44445 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44446 = _Int32ToUnary32(Uh_5tlreg44445, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval44447(Uh_5tlreg44446); //func arg& //gcnl:Node.cpp:1128
                      const u32 Uh_5tlreg44448 = 4; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44449 = _Int32ToUnary32(Uh_5tlreg44448, 4, 4); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10141y<EC> Uh_5tlval44450(Uh_5tlreg44449); //func arg& //gcnl:Node.cpp:1128
                      Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44440, Uh_6tlref44444, Uh_5tlval44447, Uh_5tlval44450); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:135: 					if(ws.getHits(c) <= (Unsigned)40){
                      {

//! ClusterByID.ulam:135: 					if(ws.getHits(c) <= (Unsigned)40){
                        const u32 Uh_5tlreg44452 = 40; //gcnl:NodeTerminal.cpp:721
                        const u32 Uh_5tlreg44453 = _Int32ToUnsigned32(Uh_5tlreg44452, 7, 32); //gcnl:NodeCast.cpp:723
                        UlamRef<EC> Uh_3tur44455(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                        const u32 Uh_5tlreg44457 = Uv_1c.read(); //gcnl:Node.cpp:691
                        Ui_Ut_10151u<EC> Uh_5tlval44458(Uh_5tlreg44457); //func arg& //gcnl:Node.cpp:1128
                        const Ui_Ut_102321u<EC> Uh_5tlval44460 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44455, Uh_5tlval44458); //gcnl:NodeFunctionCall.cpp:1006
                        const u32 Uh_5tlreg44461 = Uh_5tlval44460.read(); //gcnl:Node.cpp:1156
                        const u32 Uh_5tlreg44462 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44461, Uh_5tlreg44453, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                        if(_Bool32ToCbool(Uh_5tlreg44462, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! ClusterByID.ulam:136: 						return ws.getSiteNum(c);
                            UlamRef<EC> Uh_3tur44464(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                            const u32 Uh_5tlreg44466 = Uv_1c.read(); //gcnl:Node.cpp:691
                            Ui_Ut_10151u<EC> Uh_5tlval44467(Uh_5tlreg44466); //func arg& //gcnl:Node.cpp:1128
                            const Ui_Ut_10161u<EC> Uh_5tlval44469 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44464, Uh_5tlval44467); //gcnl:NodeFunctionCall.cpp:1006
                            const u32 Uh_5tlreg44470 = Uh_5tlval44469.read(); //gcnl:Node.cpp:1156
                            Ui_Ut_10161u<EC> Uh_5tlval44471(Uh_5tlreg44470); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44471); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } // end if
                        else
                        {
                          {

//! ClusterByID.ulam:139: 						return 0;
                            const u32 Uh_5tlreg44472 = 0; //gcnl:NodeTerminal.cpp:721
                            const u32 Uh_5tlreg44473 = _Int32ToUnsigned32(Uh_5tlreg44472, 2, 6); //gcnl:NodeCast.cpp:723
                            Ui_Ut_10161u<EC> Uh_5tlval44474(Uh_5tlreg44473); //func arg& //gcnl:Node.cpp:1128
                            return (Uh_5tlval44474); //gcnl:NodeReturnStatement.cpp:343
                          }
                        } //end else
                      }
                    }
                  } // end if
                }

//! ClusterByID.ulam:142: 				if(ws.getHits(c) <= (Unsigned)40){
                {

//! ClusterByID.ulam:142: 				if(ws.getHits(c) <= (Unsigned)40){
                  const u32 Uh_5tlreg44475 = 40; //gcnl:NodeTerminal.cpp:721
                  const u32 Uh_5tlreg44476 = _Int32ToUnsigned32(Uh_5tlreg44475, 7, 32); //gcnl:NodeCast.cpp:723
                  UlamRef<EC> Uh_3tur44478(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                  const u32 Uh_5tlreg44480 = Uv_1c.read(); //gcnl:Node.cpp:691
                  Ui_Ut_10151u<EC> Uh_5tlval44481(Uh_5tlreg44480); //func arg& //gcnl:Node.cpp:1128
                  const Ui_Ut_102321u<EC> Uh_5tlval44483 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44478, Uh_5tlval44481); //gcnl:NodeFunctionCall.cpp:1006
                  const u32 Uh_5tlreg44484 = Uh_5tlval44483.read(); //gcnl:Node.cpp:1156
                  const u32 Uh_5tlreg44485 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44484, Uh_5tlreg44476, 32); //gcnl:NodeBinaryOpCompare.cpp:313
                  if(_Bool32ToCbool(Uh_5tlreg44485, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! ClusterByID.ulam:143: 					return ws.getSiteNum(c);
                      UlamRef<EC> Uh_3tur44487(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                      const u32 Uh_5tlreg44489 = Uv_1c.read(); //gcnl:Node.cpp:691
                      Ui_Ut_10151u<EC> Uh_5tlval44490(Uh_5tlreg44489); //func arg& //gcnl:Node.cpp:1128
                      const Ui_Ut_10161u<EC> Uh_5tlval44492 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44487, Uh_5tlval44490); //gcnl:NodeFunctionCall.cpp:1006
                      const u32 Uh_5tlreg44493 = Uh_5tlval44492.read(); //gcnl:Node.cpp:1156
                      Ui_Ut_10161u<EC> Uh_5tlval44494(Uh_5tlreg44493); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval44494); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } // end if
                  else
                  {
                    {

//! ClusterByID.ulam:146: 					return 0;
                      const u32 Uh_5tlreg44495 = 0; //gcnl:NodeTerminal.cpp:721
                      const u32 Uh_5tlreg44496 = _Int32ToUnsigned32(Uh_5tlreg44495, 2, 6); //gcnl:NodeCast.cpp:723
                      Ui_Ut_10161u<EC> Uh_5tlval44497(Uh_5tlreg44496); //func arg& //gcnl:Node.cpp:1128
                      return (Uh_5tlval44497); //gcnl:NodeReturnStatement.cpp:343
                    }
                  } //end else
                }
              }
            } // end if
          }

//! ClusterByID.ulam:149: 			if(ws.getHits(c) <= (Unsigned)40){
          {

//! ClusterByID.ulam:149: 			if(ws.getHits(c) <= (Unsigned)40){
            const u32 Uh_5tlreg44498 = 40; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg44499 = _Int32ToUnsigned32(Uh_5tlreg44498, 7, 32); //gcnl:NodeCast.cpp:723
            UlamRef<EC> Uh_3tur44501(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
            const u32 Uh_5tlreg44503 = Uv_1c.read(); //gcnl:Node.cpp:691
            Ui_Ut_10151u<EC> Uh_5tlval44504(Uh_5tlreg44503); //func arg& //gcnl:Node.cpp:1128
            const Ui_Ut_102321u<EC> Uh_5tlval44506 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44501, Uh_5tlval44504); //gcnl:NodeFunctionCall.cpp:1006
            const u32 Uh_5tlreg44507 = Uh_5tlval44506.read(); //gcnl:Node.cpp:1156
            const u32 Uh_5tlreg44508 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44507, Uh_5tlreg44499, 32); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg44508, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! ClusterByID.ulam:150: 				return ws.getSiteNum(c);
                UlamRef<EC> Uh_3tur44510(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
                const u32 Uh_5tlreg44512 = Uv_1c.read(); //gcnl:Node.cpp:691
                Ui_Ut_10151u<EC> Uh_5tlval44513(Uh_5tlreg44512); //func arg& //gcnl:Node.cpp:1128
                const Ui_Ut_10161u<EC> Uh_5tlval44515 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44510, Uh_5tlval44513); //gcnl:NodeFunctionCall.cpp:1006
                const u32 Uh_5tlreg44516 = Uh_5tlval44515.read(); //gcnl:Node.cpp:1156
                Ui_Ut_10161u<EC> Uh_5tlval44517(Uh_5tlreg44516); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44517); //gcnl:NodeReturnStatement.cpp:343
              }
            } // end if
            else
            {
              {

//! ClusterByID.ulam:153: 				return 0;
                const u32 Uh_5tlreg44518 = 0; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg44519 = _Int32ToUnsigned32(Uh_5tlreg44518, 2, 6); //gcnl:NodeCast.cpp:723
                Ui_Ut_10161u<EC> Uh_5tlval44520(Uh_5tlreg44519); //func arg& //gcnl:Node.cpp:1128
                return (Uh_5tlval44520); //gcnl:NodeReturnStatement.cpp:343
              }
            } //end else
          }
        }
      } // end if
    }

//! ClusterByID.ulam:156: 		if(ws.getHits(c) <= (Unsigned)40){
    {

//! ClusterByID.ulam:156: 		if(ws.getHits(c) <= (Unsigned)40){
      const u32 Uh_5tlreg44521 = 40; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44522 = _Int32ToUnsigned32(Uh_5tlreg44521, 7, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44524(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44526 = Uv_1c.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44527(Uh_5tlreg44526); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44529 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44524, Uh_5tlval44527); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44530 = Uh_5tlval44529.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44531 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg44530, Uh_5tlreg44522, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44531, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:157: 			return ws.getSiteNum(c);
          UlamRef<EC> Uh_3tur44533(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
          const u32 Uh_5tlreg44535 = Uv_1c.read(); //gcnl:Node.cpp:691
          Ui_Ut_10151u<EC> Uh_5tlval44536(Uh_5tlreg44535); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_10161u<EC> Uh_5tlval44538 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9210getSiteNum(uc, Uh_3tur44533, Uh_5tlval44536); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg44539 = Uh_5tlval44538.read(); //gcnl:Node.cpp:1156
          Ui_Ut_10161u<EC> Uh_5tlval44540(Uh_5tlreg44539); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44540); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! ClusterByID.ulam:160: 			return 0;
          const u32 Uh_5tlreg44541 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg44542 = _Int32ToUnsigned32(Uh_5tlreg44541, 2, 6); //gcnl:NodeCast.cpp:723
          Ui_Ut_10161u<EC> Uh_5tlval44543(Uh_5tlreg44542); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44543); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9214cellSlotNearMe



//! ClusterByID.ulam:247: 	Bool geneCanSeeNucleus(ID id){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211ClusterByID10<EC>::Uf_9217geneCanSeeNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id) const
  {

//! ClusterByID.ulam:248: 		SiteVisitorByID sv;
    Ui_Un_10411209215SiteVisitorByID10<EC> Uv_2sv; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:249: 		WindowScanner ws;
    Ui_Un_10412489213WindowScanner10<EC> Uv_2ws; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:251: 		ws.resetCategories();
    UlamRef<EC> Uh_3tur44545(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9215resetCategories(uc, Uh_3tur44545); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:252: 		Category cNucleus = ws.allocateCategory();
    UlamRef<EC> Uh_3tur44548(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_10151u<EC> Uh_5tlval44550 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_9216allocateCategory(uc, Uh_3tur44548); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44551 = Uh_5tlval44550.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10151u<EC> Uv_8cNucleus(Uh_5tlreg44551); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:253: 		Nucleus aNucleus;
    Ui_Ue_102717Nucleus10<EC> Uv_8aNucleus; //gcnl:NodeVarDecl.cpp:1096

//! ClusterByID.ulam:254: 		ElementType tNucleus = au.getValidType(aNucleus);
    UlamRef<EC> Uh_3tur44553(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const T Uh_3tut44555 = Uv_8aNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102961a<EC> Uh_5tuval44556(Uh_3tut44555); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102161u<EC> Uh_5tlval44558 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_9212getValidType(uc, Uh_3tur44553, Uh_5tuval44556); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44559 = Uh_5tlval44558.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102161u<EC> Uv_8tNucleus(Uh_5tlreg44559); //gcnl:NodeVarDecl.cpp:1060

//! ClusterByID.ulam:256: 		sv.setType(cNucleus,tNucleus);
    UlamRef<EC> Uh_3tur44561(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44563 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44564(Uh_5tlreg44563); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44566 = Uv_8tNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_102161u<EC> Uh_5tlval44567(Uh_5tlreg44566); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_7setType(uc, Uh_3tur44561, Uh_5tlval44564, Uh_5tlval44567); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:257: 		sv.setID(cNucleus,id);
    UlamRef<EC> Uh_3tur44570(0u, 1120u, Uv_2sv, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44572 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
    Ui_Ut_10151u<EC> Uh_5tlval44573(Uh_5tlreg44572); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44575 = Uv_2id.read(); //gcnl:Node.cpp:691
    Ui_Ut_102101u<EC> Uh_5tlval44576(Uh_5tlreg44575); //func arg& //gcnl:Node.cpp:1128
    Ui_Un_10411209215SiteVisitorByID10<EC>::Us::THE_INSTANCE.Uf_5setID(uc, Uh_3tur44570, Uh_5tlval44573, Uh_5tlval44576); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:259: 		ws.scan(sv);
    UlamRef<EC> Uh_3tur44579(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    BitVector<1120> Uh_5tuval44580; //gcnl:Node.cpp:760
    Uv_2sv.ReadBV(0u, Uh_5tuval44580); //gcnl:Node.cpp:777
    if(! Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109211SiteVisitor10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1156
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_5tlval44582(Uv_2sv, 0u, &Un_10411209215SiteVisitorByID10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1235
    Ui_Uq_r10109211SiteVisitor10<EC> Uh_6tlref44583(Uh_5tlval44582); //gcnl:Node.cpp:1518
    Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_4scan(uc, Uh_3tur44579, Uh_6tlref44583); //gcnl:NodeFunctionCall.cpp:1006

//! ClusterByID.ulam:261: 		if(ws.getHits(cNucleus)>(Unsigned)0){
    {

//! ClusterByID.ulam:261: 		if(ws.getHits(cNucleus)>(Unsigned)0){
      const u32 Uh_5tlreg44585 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg44586 = _Int32ToUnsigned32(Uh_5tlreg44585, 2, 32); //gcnl:NodeCast.cpp:723
      UlamRef<EC> Uh_3tur44588(0u, 1248u, Uv_2ws, &Un_10412489213WindowScanner10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
      const u32 Uh_5tlreg44590 = Uv_8cNucleus.read(); //gcnl:Node.cpp:691
      Ui_Ut_10151u<EC> Uh_5tlval44591(Uh_5tlreg44590); //func arg& //gcnl:Node.cpp:1128
      const Ui_Ut_102321u<EC> Uh_5tlval44593 = Ui_Un_10412489213WindowScanner10<EC>::Us::THE_INSTANCE.Uf_7getHits(uc, Uh_3tur44588, Uh_5tlval44591); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg44594 = Uh_5tlval44593.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg44595 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg44594, Uh_5tlreg44586, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg44595, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! ClusterByID.ulam:262: 			return true;
          const u32 Uh_5tlreg44596 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval44597(Uh_5tlreg44596); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44597); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {
        {

//! ClusterByID.ulam:265: 			return false;
          const u32 Uh_5tlreg44598 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval44599(Uh_5tlreg44598); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval44599); //gcnl:NodeReturnStatement.cpp:343
        }
      } //end else
    }

  } // Uf_9217geneCanSeeNucleus



//! ClusterByID.ulam:268: 	Void run(){
  template<class EC>
  void Uq_10109211ClusterByID10<EC>::Uf_3run(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! ClusterByID.ulam:269: 		ew.swap(0,40);
    UlamRef<EC> Uh_3tur44601(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg44602 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44603 = _Int32ToUnsigned32(Uh_5tlreg44602, 2, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval44604(Uh_5tlreg44603); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg44605 = 40; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg44606 = _Int32ToUnsigned32(Uh_5tlreg44605, 7, 6); //gcnl:NodeCast.cpp:723
    Ui_Ut_10161u<EC> Uh_5tlval44607(Uh_5tlreg44606); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval44609 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur44601, Uh_5tlval44604, Uh_5tlval44607); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg44610 = Uh_5tlval44609.read(); //gcnl:Node.cpp:1156

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

