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
  Uq_102323C2D10<EC>::Uq_102323C2D10() : UlamQuark<EC>(MFM_UUID_FOR("Uq102323C2D10", 0))
  { }

  template<class EC>
  Uq_102323C2D10<EC>::~Uq_102323C2D10(){} //gcnl:NodeBlockClass.cpp:1784


//! C2Dincomplete.ulam:72:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
    {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg42588 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42589 = _Int32ToInt32(Uh_5tlreg42588, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42591 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42592 = _Unsigned32ToInt32(Uh_5tlreg42591, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42593 = _BinOpCompareEqEqInt32(Uh_5tlreg42592, Uh_5tlreg42589, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42593, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg42595 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42596 = _Int32ToInt32(Uh_5tlreg42595, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42597(Uh_5tlreg42596); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42598 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42599 = _Int32ToInt32(Uh_5tlreg42598, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42600(Uh_5tlreg42599); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42602 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42597, Uh_5tlval42600); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42603(Uh_5tlval42602); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42603); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
    {

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg42604 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42605 = _Int32ToInt32(Uh_5tlreg42604, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42607 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42608 = _Unsigned32ToInt32(Uh_5tlreg42607, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42609 = _BinOpCompareEqEqInt32(Uh_5tlreg42608, Uh_5tlreg42605, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42609, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg42611 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42612 = _Int32ToInt32(Uh_5tlreg42611, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42613(Uh_5tlreg42612); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42614 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42615 = _Int32ToInt32(Uh_5tlreg42614, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42616(Uh_5tlreg42615); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42618 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42613, Uh_5tlval42616); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42619(Uh_5tlval42618); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42619); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
    {

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg42620 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42621 = _Int32ToInt32(Uh_5tlreg42620, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42623 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42624 = _Unsigned32ToInt32(Uh_5tlreg42623, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42625 = _BinOpCompareEqEqInt32(Uh_5tlreg42624, Uh_5tlreg42621, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42625, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg42627 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42628 = _Int32ToInt32(Uh_5tlreg42627, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42629(Uh_5tlreg42628); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42630 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42631 = _Int32ToInt32(Uh_5tlreg42630, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42632(Uh_5tlreg42631); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42634 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42629, Uh_5tlval42632); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42635(Uh_5tlval42634); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42635); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
    {

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg42636 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42637 = _Int32ToInt32(Uh_5tlreg42636, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42639 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42640 = _Unsigned32ToInt32(Uh_5tlreg42639, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42641 = _BinOpCompareEqEqInt32(Uh_5tlreg42640, Uh_5tlreg42637, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42641, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg42643 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42644 = _Int32ToInt32(Uh_5tlreg42643, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42645(Uh_5tlreg42644); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42646 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42647 = _Int32ToInt32(Uh_5tlreg42646, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42648(Uh_5tlreg42647); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42650 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42645, Uh_5tlval42648); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42651(Uh_5tlval42650); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42651); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
    {

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg42652 = 4; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42654 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42655 = _Unsigned32ToInt32(Uh_5tlreg42654, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42656 = _BinOpCompareEqEqInt32(Uh_5tlreg42655, Uh_5tlreg42652, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42656, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg42658 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42659 = _Int32ToInt32(Uh_5tlreg42658, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42660(Uh_5tlreg42659); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42661 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42662 = _Int32ToInt32(Uh_5tlreg42661, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42663(Uh_5tlreg42662); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42665 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42660, Uh_5tlval42663); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42666(Uh_5tlval42665); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42666); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
    {

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg42667 = 5; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42669 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42670 = _Unsigned32ToInt32(Uh_5tlreg42669, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42671 = _BinOpCompareEqEqInt32(Uh_5tlreg42670, Uh_5tlreg42667, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42671, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg42673 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42674 = _Int32ToInt32(Uh_5tlreg42673, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42675(Uh_5tlreg42674); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42676 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42677 = _Int32ToInt32(Uh_5tlreg42676, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42678(Uh_5tlreg42677); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42680 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42675, Uh_5tlval42678); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42681(Uh_5tlval42680); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42681); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
    {

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg42682 = 6; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42684 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42685 = _Unsigned32ToInt32(Uh_5tlreg42684, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42686 = _BinOpCompareEqEqInt32(Uh_5tlreg42685, Uh_5tlreg42682, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42686, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg42688 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42689 = _Int32ToInt32(Uh_5tlreg42688, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42690(Uh_5tlreg42689); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42691 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42692 = _Int32ToInt32(Uh_5tlreg42691, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42693(Uh_5tlreg42692); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42695 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42690, Uh_5tlval42693); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42696(Uh_5tlval42695); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42696); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:80:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg42698 = (u32) -1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42699 = _Int32ToInt32(Uh_5tlreg42698, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42700(Uh_5tlreg42699); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42701 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42702 = _Int32ToInt32(Uh_5tlreg42701, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42703(Uh_5tlreg42702); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42705 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42700, Uh_5tlval42703); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42706(Uh_5tlval42705); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42706); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2Dincomplete.ulam:11:   Void init(Self c) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4init(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1c) const
  {

//! C2Dincomplete.ulam:12:     init(c.x, c.y);
    const u32 Uh_5tlreg42710 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    Ui_Ut_102161i<EC> Uh_5tlval42711(Uh_5tlreg42710); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42714 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    Ui_Ut_102161i<EC> Uh_5tlval42715(Uh_5tlreg42714); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4init(uc, ur, Uh_5tlval42711, Uh_5tlval42715); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4init



//! C2Dincomplete.ulam:15:   Void init(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4init(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:16:     x = ax;
    const u32 Uh_5tlreg42718 = Uv_2ax.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42718); //gcnl:Node.cpp:885

//! C2Dincomplete.ulam:17:     y = ay;
    const u32 Uh_5tlreg42721 = Uv_2ay.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42721); //gcnl:Node.cpp:885

  } // Uf_4init



//! C2Dincomplete.ulam:7:   Void init(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4init(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:8:     init((Coord) ax, (Coord) ay);
    const u32 Uh_5tlreg42725 = Uv_2ax.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42726 = _Int32ToInt32(Uh_5tlreg42725, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161i<EC> Uh_5tlval42727(Uh_5tlreg42726); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42729 = Uv_2ay.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42730 = _Int32ToInt32(Uh_5tlreg42729, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161i<EC> Uh_5tlval42731(Uh_5tlreg42730); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4init(uc, ur, Uh_5tlval42727, Uh_5tlval42731); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4init



//! C2Dincomplete.ulam:20:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:20:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg42734 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42735 = _Int32ToInt32(Uh_5tlreg42734, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42736(Uh_5tlreg42735); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42736); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2Dincomplete.ulam:21:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:21:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg42738 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42739 = _Int32ToInt32(Uh_5tlreg42738, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42740(Uh_5tlreg42739); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42740); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2Dincomplete.ulam:23:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2Dincomplete.ulam:23:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg42742 = Uv_2ax.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42743 = _Int32ToInt32(Uh_5tlreg42742, 32, 16); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42743); //gcnl:Node.cpp:885

  } // Uf_4setX



//! C2Dincomplete.ulam:24:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:24:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg42746 = Uv_2ay.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42747 = _Int32ToInt32(Uh_5tlreg42746, 32, 16); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42747); //gcnl:Node.cpp:885

  } // Uf_4setY



//! C2Dincomplete.ulam:26:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2Dincomplete.ulam:28:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:29:     ret.init(x,y);
    UlamRef<EC> Uh_3tur42750(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42752 = Uv_1x.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321i<EC> Uh_5tlval42753(Uh_5tlreg42752); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42755 = Uv_1y.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321i<EC> Uh_5tlval42756(Uh_5tlreg42755); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4init(uc, Uh_3tur42750, Uh_5tlval42753, Uh_5tlval42756); //gcnl:NodeFunctionCall.cpp:1006

//! C2Dincomplete.ulam:30:     return ret;
    const u32 Uh_5tlreg42759 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval42760(Uh_5tlreg42759); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42760); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2Dincomplete.ulam:33:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:34:     return x == other.x && y == other.y;
    u32 Uh_5tlreg42761 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg42764 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42766 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42767 = _BinOpCompareEqEqInt32(Uh_5tlreg42766, Uh_5tlreg42764, 16); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg42767, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg42770 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42772 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42773 = _BinOpCompareEqEqInt32(Uh_5tlreg42772, Uh_5tlreg42770, 16); //gcnl:NodeBinaryOpCompare.cpp:313
      Uh_5tlreg42761 = Uh_5tlreg42773; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval42774(Uh_5tlreg42761); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42774); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2Dincomplete.ulam:43:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:44:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval42778 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42779 = Uh_5tlval42778.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg42779); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:45:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval42783 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42784 = Uh_5tlval42783.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg42784); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:46:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur42786(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321i<EC> Uh_5tlval42788 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4getX(uc, Uh_3tur42786); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42789 = Uh_5tlval42788.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg42789); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:47:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur42791(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321i<EC> Uh_5tlval42793 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4getY(uc, Uh_3tur42791); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42794 = Uh_5tlval42793.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg42794); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
    {

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg42795 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42796 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42797 = _Int32ToInt32(Uh_5tlreg42796, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42799 = Uv_2ox.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42800 = _BinOpCompareLessThanInt32(Uh_5tlreg42799, Uh_5tlreg42797, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(!_Bool32ToCbool(Uh_5tlreg42800, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42802 = Uv_2sx.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42804 = Uv_2ox.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42805 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg42804, Uh_5tlreg42802, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42795 = Uh_5tlreg42805; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42795 = Uh_5tlreg42800; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42795, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg42806 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42807(Uh_5tlreg42806); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42807); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
    {

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg42808 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42809 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42810 = _Int32ToInt32(Uh_5tlreg42809, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42812 = Uv_2oy.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42813 = _BinOpCompareLessThanInt32(Uh_5tlreg42812, Uh_5tlreg42810, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(!_Bool32ToCbool(Uh_5tlreg42813, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42815 = Uv_2sy.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42817 = Uv_2oy.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42818 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg42817, Uh_5tlreg42815, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42808 = Uh_5tlreg42818; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42808 = Uh_5tlreg42813; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42808, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg42819 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42820(Uh_5tlreg42819); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42820); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:50:     return true;
    const u32 Uh_5tlreg42821 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval42822(Uh_5tlreg42821); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42822); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2Dincomplete.ulam:53:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:54:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg42825 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42826 = _Int32ToInt32(Uh_5tlreg42825, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42828 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42829 = _Int32ToInt32(Uh_5tlreg42828, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42830 = _BinOpMultiplyInt32(Uh_5tlreg42829, Uh_5tlreg42826, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42833 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42834 = _Int32ToInt32(Uh_5tlreg42833, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42836 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42837 = _Int32ToInt32(Uh_5tlreg42836, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42838 = _BinOpMultiplyInt32(Uh_5tlreg42837, Uh_5tlreg42834, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42839 = _BinOpAddInt32(Uh_5tlreg42838, Uh_5tlreg42830, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321i<EC> Uh_5tlval42840(Uh_5tlreg42839); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42840); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2Dincomplete.ulam:57:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:58:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg42844 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42845 = _Int32ToInt32(Uh_5tlreg42844, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42847 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42848 = _Int32ToInt32(Uh_5tlreg42847, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42849 = _BinOpAddInt32(Uh_5tlreg42848, Uh_5tlreg42845, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42850 = _Int32ToInt32(Uh_5tlreg42849, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42851 = _Int32ToInt32(Uh_5tlreg42850, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42852(Uh_5tlreg42851); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42855 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42856 = _Int32ToInt32(Uh_5tlreg42855, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42858 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42859 = _Int32ToInt32(Uh_5tlreg42858, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42860 = _BinOpAddInt32(Uh_5tlreg42859, Uh_5tlreg42856, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42861 = _Int32ToInt32(Uh_5tlreg42860, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42862 = _Int32ToInt32(Uh_5tlreg42861, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42863(Uh_5tlreg42862); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42865 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42852, Uh_5tlval42863); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42866(Uh_5tlval42865); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42866); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2Dincomplete.ulam:61:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:62:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg42870 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42871 = _Int32ToInt32(Uh_5tlreg42870, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42873 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42874 = _Int32ToInt32(Uh_5tlreg42873, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42875 = _BinOpSubtractInt32(Uh_5tlreg42874, Uh_5tlreg42871, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42876 = _Int32ToInt32(Uh_5tlreg42875, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42877 = _Int32ToInt32(Uh_5tlreg42876, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42878(Uh_5tlreg42877); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42881 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42882 = _Int32ToInt32(Uh_5tlreg42881, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42884 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42885 = _Int32ToInt32(Uh_5tlreg42884, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42886 = _BinOpSubtractInt32(Uh_5tlreg42885, Uh_5tlreg42882, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42887 = _Int32ToInt32(Uh_5tlreg42886, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42888 = _Int32ToInt32(Uh_5tlreg42887, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42889(Uh_5tlreg42888); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42891 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42878, Uh_5tlval42889); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42892(Uh_5tlval42891); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42892); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2Dincomplete.ulam:65:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:66:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg42895 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42896 = _Int32ToInt32(Uh_5tlreg42895, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42897 = _UnaryMinusInt32(Uh_5tlreg42896, 32); //gcnl:NodeUnaryOp.cpp:449
    const u32 Uh_5tlreg42898 = _Int32ToInt32(Uh_5tlreg42897, 32, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42899 = _Int32ToInt32(Uh_5tlreg42898, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42900(Uh_5tlreg42899); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42902 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42903 = _Int32ToInt32(Uh_5tlreg42902, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42904 = _UnaryMinusInt32(Uh_5tlreg42903, 32); //gcnl:NodeUnaryOp.cpp:449
    const u32 Uh_5tlreg42905 = _Int32ToInt32(Uh_5tlreg42904, 32, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42906 = _Int32ToInt32(Uh_5tlreg42905, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42907(Uh_5tlreg42906); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42909 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42900, Uh_5tlval42907); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42910(Uh_5tlval42909); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42910); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2Dincomplete.ulam:86:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
    {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg42911 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42912 = _Int32ToInt32(Uh_5tlreg42911, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42914 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42915 = _Unsigned32ToInt32(Uh_5tlreg42914, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42916 = _BinOpCompareEqEqInt32(Uh_5tlreg42915, Uh_5tlreg42912, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42916, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg42918 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42919 = _Int32ToInt32(Uh_5tlreg42918, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42920(Uh_5tlreg42919); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42921 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42922 = _Int32ToInt32(Uh_5tlreg42921, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42923(Uh_5tlreg42922); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42925 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42920, Uh_5tlval42923); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42926(Uh_5tlval42925); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42926); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
    {

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg42927 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42928 = _Int32ToInt32(Uh_5tlreg42927, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42930 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42931 = _Unsigned32ToInt32(Uh_5tlreg42930, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42932 = _BinOpCompareEqEqInt32(Uh_5tlreg42931, Uh_5tlreg42928, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42932, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg42934 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42935 = _Int32ToInt32(Uh_5tlreg42934, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42936(Uh_5tlreg42935); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42937 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42938 = _Int32ToInt32(Uh_5tlreg42937, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42939(Uh_5tlreg42938); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42941 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42936, Uh_5tlval42939); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42942(Uh_5tlval42941); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42942); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
    {

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg42943 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42944 = _Int32ToInt32(Uh_5tlreg42943, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42946 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42947 = _Unsigned32ToInt32(Uh_5tlreg42946, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42948 = _BinOpCompareEqEqInt32(Uh_5tlreg42947, Uh_5tlreg42944, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42948, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg42950 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42951 = _Int32ToInt32(Uh_5tlreg42950, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42952(Uh_5tlreg42951); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42953 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42954 = _Int32ToInt32(Uh_5tlreg42953, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42955(Uh_5tlreg42954); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42957 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42952, Uh_5tlval42955); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42958(Uh_5tlval42957); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42958); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
    {

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg42959 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42960 = _Int32ToInt32(Uh_5tlreg42959, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42962 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42963 = _Unsigned32ToInt32(Uh_5tlreg42962, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42964 = _BinOpCompareEqEqInt32(Uh_5tlreg42963, Uh_5tlreg42960, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42964, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg42966 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42967 = _Int32ToInt32(Uh_5tlreg42966, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42968(Uh_5tlreg42967); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42969 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42970 = _Int32ToInt32(Uh_5tlreg42969, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42971(Uh_5tlreg42970); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42973 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42968, Uh_5tlval42971); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42974(Uh_5tlval42973); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42974); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
    {

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg42975 = 4; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42977 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42978 = _Unsigned32ToInt32(Uh_5tlreg42977, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42979 = _BinOpCompareEqEqInt32(Uh_5tlreg42978, Uh_5tlreg42975, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42979, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg42981 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42982 = _Int32ToInt32(Uh_5tlreg42981, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42983(Uh_5tlreg42982); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42984 = (u32) -4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42985 = _Int32ToInt32(Uh_5tlreg42984, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42986(Uh_5tlreg42985); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42988 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42983, Uh_5tlval42986); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42989(Uh_5tlval42988); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42989); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
    {

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg42990 = 5; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42992 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42993 = _Unsigned32ToInt32(Uh_5tlreg42992, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42994 = _BinOpCompareEqEqInt32(Uh_5tlreg42993, Uh_5tlreg42990, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42994, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg42996 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42997 = _Int32ToInt32(Uh_5tlreg42996, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42998(Uh_5tlreg42997); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42999 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43000 = _Int32ToInt32(Uh_5tlreg42999, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval43001(Uh_5tlreg43000); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval43003 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42998, Uh_5tlval43001); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval43004(Uh_5tlval43003); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43004); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
    {

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg43005 = 6; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43007 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43008 = _Unsigned32ToInt32(Uh_5tlreg43007, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43009 = _BinOpCompareEqEqInt32(Uh_5tlreg43008, Uh_5tlreg43005, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43009, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg43011 = (u32) -4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43012 = _Int32ToInt32(Uh_5tlreg43011, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval43013(Uh_5tlreg43012); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg43014 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg43015 = _Int32ToInt32(Uh_5tlreg43014, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval43016(Uh_5tlreg43015); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval43018 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval43013, Uh_5tlval43016); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval43019(Uh_5tlval43018); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval43019); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:94:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg43021 = (u32) -2; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43022 = _Int32ToInt32(Uh_5tlreg43021, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval43023(Uh_5tlreg43022); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg43024 = 2; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43025 = _Int32ToInt32(Uh_5tlreg43024, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval43026(Uh_5tlreg43025); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval43028 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval43023, Uh_5tlval43026); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval43029(Uh_5tlval43028); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43029); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2Dincomplete.ulam:97:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:98:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:99:     return manhattanDistance(origin);
    const u32 Uh_5tlreg43032 = Uv_6origin.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval43033(Uh_5tlreg43032); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval43035 = THE_INSTANCE.Uf_9217manhattanDistance(uc, ur, Uh_5tlval43033); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43036 = Uh_5tlval43035.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval43037(Uh_5tlreg43036); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43037); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2Dincomplete.ulam:106:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:107:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg43040 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43041 = _Int32ToInt32(Uh_5tlreg43040, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43043 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43044 = _Int32ToInt32(Uh_5tlreg43043, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43045 = _BinOpSubtractInt32(Uh_5tlreg43044, Uh_5tlreg43041, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43046 = _Int32ToInt32(Uh_5tlreg43045, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dx(Uh_5tlreg43046); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:107:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg43049 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43050 = _Int32ToInt32(Uh_5tlreg43049, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43052 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43053 = _Int32ToInt32(Uh_5tlreg43052, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43054 = _BinOpSubtractInt32(Uh_5tlreg43053, Uh_5tlreg43050, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43055 = _Int32ToInt32(Uh_5tlreg43054, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dy(Uh_5tlreg43055); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
    {

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
      const u32 Uh_5tlreg43056 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43057 = _Int32ToInt32(Uh_5tlreg43056, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43059 = Uv_2dx.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43060 = _BinOpCompareLessThanInt32(Uh_5tlreg43059, Uh_5tlreg43057, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43060, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
          const u32 Uh_5tlreg43062 = Uv_2dx.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg43063 = _UnaryMinusInt32(Uh_5tlreg43062, 32); //gcnl:NodeUnaryOp.cpp:449
          Uv_2dx.write(Uh_5tlreg43063); //gcnl:Node.cpp:885
      } // end if
    }

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
    {

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
      const u32 Uh_5tlreg43065 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43066 = _Int32ToInt32(Uh_5tlreg43065, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43068 = Uv_2dy.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg43069 = _BinOpCompareLessThanInt32(Uh_5tlreg43068, Uh_5tlreg43066, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg43069, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
          const u32 Uh_5tlreg43071 = Uv_2dy.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg43072 = _UnaryMinusInt32(Uh_5tlreg43071, 32); //gcnl:NodeUnaryOp.cpp:449
          Uv_2dy.write(Uh_5tlreg43072); //gcnl:Node.cpp:885
      } // end if
    }

//! C2Dincomplete.ulam:110:     return (Unsigned) (dx + dy);
    const u32 Uh_5tlreg43075 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43077 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43078 = _BinOpAddInt32(Uh_5tlreg43077, Uh_5tlreg43075, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43079 = _Int32ToUnsigned32(Uh_5tlreg43078, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval43080(Uh_5tlreg43079); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43080); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2Dincomplete.ulam:102:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:103:     return x == 0 && y == 0;
    u32 Uh_5tlreg43081 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg43082 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg43083 = _Int32ToInt32(Uh_5tlreg43082, 2, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43085 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43086 = _BinOpCompareEqEqInt32(Uh_5tlreg43085, Uh_5tlreg43083, 16); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg43086, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg43087 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg43088 = _Int32ToInt32(Uh_5tlreg43087, 2, 16); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg43090 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg43091 = _BinOpCompareEqEqInt32(Uh_5tlreg43090, Uh_5tlreg43088, 16); //gcnl:NodeBinaryOpCompare.cpp:313
      Uh_5tlreg43081 = Uh_5tlreg43091; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval43092(Uh_5tlreg43081); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43092); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2Dincomplete.ulam:116:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:117:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg43095 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43096 = _Int32ToInt32(Uh_5tlreg43095, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43098 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43099 = _Int32ToInt32(Uh_5tlreg43098, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43100 = _BinOpSubtractInt32(Uh_5tlreg43099, Uh_5tlreg43096, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43101 = _Int32ToInt32(Uh_5tlreg43100, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dx(Uh_5tlreg43101); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:117:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg43104 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43105 = _Int32ToInt32(Uh_5tlreg43104, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43107 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg43108 = _Int32ToInt32(Uh_5tlreg43107, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg43109 = _BinOpSubtractInt32(Uh_5tlreg43108, Uh_5tlreg43105, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43110 = _Int32ToInt32(Uh_5tlreg43109, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dy(Uh_5tlreg43110); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:118:     return (Unsigned) (dx*dx + dy*dy);
    const u32 Uh_5tlreg43112 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43114 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43115 = _BinOpMultiplyInt32(Uh_5tlreg43114, Uh_5tlreg43112, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43117 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43119 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg43120 = _BinOpMultiplyInt32(Uh_5tlreg43119, Uh_5tlreg43117, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43121 = _BinOpAddInt32(Uh_5tlreg43120, Uh_5tlreg43115, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg43122 = _Int32ToUnsigned32(Uh_5tlreg43121, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval43123(Uh_5tlreg43122); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43123); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2Dincomplete.ulam:124:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:125:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:126:     return euclideanSquaredDistance(origin);
    const u32 Uh_5tlreg43126 = Uv_6origin.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval43127(Uh_5tlreg43126); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval43129 = THE_INSTANCE.Uf_9224euclideanSquaredDistance(uc, ur, Uh_5tlval43127); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg43130 = Uh_5tlval43129.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval43131(Uh_5tlreg43130); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval43131); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9222euclideanSquaredLength


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_102323C2D10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Ut_102161i", "x", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Ut_102161i", "y", 16u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_102323C2D10<EC>::GetDataMemberCount() const
  {
    return 2; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_102323C2D10<EC>::GetMangledClassName() const
  {
    return "Uq_102323C2D10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_102323C2D10<EC>::GetClassLength( ) const
  {
    return 32; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_102323C2D10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_102323C2D10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_102323C2D10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_102323C2D10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_102323C2D10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_102323C2D10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102323C2D10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

