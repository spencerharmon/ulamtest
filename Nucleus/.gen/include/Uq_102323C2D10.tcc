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
#include "Uq_10109210ColorUtils10.h"
#include "Ue_102717Nucleus10.h"
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
  Uq_102323C2D10<EC>::Uq_102323C2D10() : UlamQuark<EC>(MFM_UUID_FOR("Uq102323C2D10", 0))
  { }

  template<class EC>
  Uq_102323C2D10<EC>::~Uq_102323C2D10(){} //gcnl:NodeBlockClass.cpp:1784


//! C2Dincomplete.ulam:11:   Void init(Self c) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4init(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1c) const
  {

//! C2Dincomplete.ulam:12:     init(c.x, c.y);
    const u32 Uh_5tlreg42023 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    Ui_Ut_102161i<EC> Uh_5tlval42024(Uh_5tlreg42023); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42027 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    Ui_Ut_102161i<EC> Uh_5tlval42028(Uh_5tlreg42027); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4init(uc, ur, Uh_5tlval42024, Uh_5tlval42028); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4init



//! C2Dincomplete.ulam:15:   Void init(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4init(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:16:     x = ax;
    const u32 Uh_5tlreg42031 = Uv_2ax.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42031); //gcnl:Node.cpp:885

//! C2Dincomplete.ulam:17:     y = ay;
    const u32 Uh_5tlreg42034 = Uv_2ay.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42034); //gcnl:Node.cpp:885

  } // Uf_4init



//! C2Dincomplete.ulam:7:   Void init(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4init(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:8:     init((Coord) ax, (Coord) ay);
    const u32 Uh_5tlreg42038 = Uv_2ax.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42039 = _Int32ToInt32(Uh_5tlreg42038, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161i<EC> Uh_5tlval42040(Uh_5tlreg42039); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42042 = Uv_2ay.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42043 = _Int32ToInt32(Uh_5tlreg42042, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161i<EC> Uh_5tlval42044(Uh_5tlreg42043); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4init(uc, ur, Uh_5tlval42040, Uh_5tlval42044); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4init



//! C2Dincomplete.ulam:20:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:20:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg42047 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42048 = _Int32ToInt32(Uh_5tlreg42047, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42049(Uh_5tlreg42048); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42049); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2Dincomplete.ulam:21:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:21:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg42051 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42052 = _Int32ToInt32(Uh_5tlreg42051, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42053(Uh_5tlreg42052); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42053); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2Dincomplete.ulam:23:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2Dincomplete.ulam:23:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg42055 = Uv_2ax.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42056 = _Int32ToInt32(Uh_5tlreg42055, 32, 16); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42056); //gcnl:Node.cpp:885

  } // Uf_4setX



//! C2Dincomplete.ulam:24:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:24:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg42059 = Uv_2ay.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42060 = _Int32ToInt32(Uh_5tlreg42059, 32, 16); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42060); //gcnl:Node.cpp:885

  } // Uf_4setY



//! C2Dincomplete.ulam:26:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2Dincomplete.ulam:28:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:29:     ret.init(x,y);
    UlamRef<EC> Uh_3tur42063(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42065 = Uv_1x.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321i<EC> Uh_5tlval42066(Uh_5tlreg42065); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42068 = Uv_1y.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321i<EC> Uh_5tlval42069(Uh_5tlreg42068); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4init(uc, Uh_3tur42063, Uh_5tlval42066, Uh_5tlval42069); //gcnl:NodeFunctionCall.cpp:1006

//! C2Dincomplete.ulam:30:     return ret;
    const u32 Uh_5tlreg42072 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval42073(Uh_5tlreg42072); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42073); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2Dincomplete.ulam:33:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:34:     return x == other.x && y == other.y;
    u32 Uh_5tlreg42074 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg42077 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42079 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42080 = _BinOpCompareEqEqInt32(Uh_5tlreg42079, Uh_5tlreg42077, 16); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg42080, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg42083 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42085 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42086 = _BinOpCompareEqEqInt32(Uh_5tlreg42085, Uh_5tlreg42083, 16); //gcnl:NodeBinaryOpCompare.cpp:313
      Uh_5tlreg42074 = Uh_5tlreg42086; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval42087(Uh_5tlreg42074); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42087); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2Dincomplete.ulam:43:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:44:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval42091 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42092 = Uh_5tlval42091.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg42092); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:45:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval42096 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42097 = Uh_5tlval42096.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg42097); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:46:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur42099(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321i<EC> Uh_5tlval42101 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4getX(uc, Uh_3tur42099); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42102 = Uh_5tlval42101.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg42102); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:47:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur42104(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321i<EC> Uh_5tlval42106 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4getY(uc, Uh_3tur42104); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42107 = Uh_5tlval42106.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg42107); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
    {

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg42108 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42109 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42110 = _Int32ToInt32(Uh_5tlreg42109, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42112 = Uv_2ox.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42113 = _BinOpCompareLessThanInt32(Uh_5tlreg42112, Uh_5tlreg42110, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(!_Bool32ToCbool(Uh_5tlreg42113, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42115 = Uv_2sx.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42117 = Uv_2ox.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42118 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg42117, Uh_5tlreg42115, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42108 = Uh_5tlreg42118; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42108 = Uh_5tlreg42113; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42108, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg42119 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42120(Uh_5tlreg42119); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42120); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
    {

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg42121 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42122 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42123 = _Int32ToInt32(Uh_5tlreg42122, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42125 = Uv_2oy.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42126 = _BinOpCompareLessThanInt32(Uh_5tlreg42125, Uh_5tlreg42123, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(!_Bool32ToCbool(Uh_5tlreg42126, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42128 = Uv_2sy.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42130 = Uv_2oy.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42131 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg42130, Uh_5tlreg42128, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42121 = Uh_5tlreg42131; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42121 = Uh_5tlreg42126; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42121, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg42132 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42133(Uh_5tlreg42132); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42133); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:50:     return true;
    const u32 Uh_5tlreg42134 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval42135(Uh_5tlreg42134); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42135); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2Dincomplete.ulam:53:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:54:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg42138 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42139 = _Int32ToInt32(Uh_5tlreg42138, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42141 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42142 = _Int32ToInt32(Uh_5tlreg42141, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42143 = _BinOpMultiplyInt32(Uh_5tlreg42142, Uh_5tlreg42139, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42146 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42147 = _Int32ToInt32(Uh_5tlreg42146, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42149 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42150 = _Int32ToInt32(Uh_5tlreg42149, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42151 = _BinOpMultiplyInt32(Uh_5tlreg42150, Uh_5tlreg42147, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42152 = _BinOpAddInt32(Uh_5tlreg42151, Uh_5tlreg42143, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321i<EC> Uh_5tlval42153(Uh_5tlreg42152); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42153); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2Dincomplete.ulam:57:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:58:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg42157 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42158 = _Int32ToInt32(Uh_5tlreg42157, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42160 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42161 = _Int32ToInt32(Uh_5tlreg42160, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42162 = _BinOpAddInt32(Uh_5tlreg42161, Uh_5tlreg42158, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42163 = _Int32ToInt32(Uh_5tlreg42162, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42164 = _Int32ToInt32(Uh_5tlreg42163, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42165(Uh_5tlreg42164); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42168 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42169 = _Int32ToInt32(Uh_5tlreg42168, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42171 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42172 = _Int32ToInt32(Uh_5tlreg42171, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42173 = _BinOpAddInt32(Uh_5tlreg42172, Uh_5tlreg42169, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42174 = _Int32ToInt32(Uh_5tlreg42173, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42175 = _Int32ToInt32(Uh_5tlreg42174, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42176(Uh_5tlreg42175); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42178 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42165, Uh_5tlval42176); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42179(Uh_5tlval42178); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42179); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2Dincomplete.ulam:61:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:62:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg42183 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42184 = _Int32ToInt32(Uh_5tlreg42183, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42186 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42187 = _Int32ToInt32(Uh_5tlreg42186, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42188 = _BinOpSubtractInt32(Uh_5tlreg42187, Uh_5tlreg42184, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42189 = _Int32ToInt32(Uh_5tlreg42188, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42190 = _Int32ToInt32(Uh_5tlreg42189, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42191(Uh_5tlreg42190); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42194 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42195 = _Int32ToInt32(Uh_5tlreg42194, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42197 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42198 = _Int32ToInt32(Uh_5tlreg42197, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42199 = _BinOpSubtractInt32(Uh_5tlreg42198, Uh_5tlreg42195, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42200 = _Int32ToInt32(Uh_5tlreg42199, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42201 = _Int32ToInt32(Uh_5tlreg42200, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42202(Uh_5tlreg42201); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42204 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42191, Uh_5tlval42202); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42205(Uh_5tlval42204); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42205); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2Dincomplete.ulam:65:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:66:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg42208 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42209 = _Int32ToInt32(Uh_5tlreg42208, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42210 = _UnaryMinusInt32(Uh_5tlreg42209, 32); //gcnl:NodeUnaryOp.cpp:449
    const u32 Uh_5tlreg42211 = _Int32ToInt32(Uh_5tlreg42210, 32, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42212 = _Int32ToInt32(Uh_5tlreg42211, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42213(Uh_5tlreg42212); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42215 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42216 = _Int32ToInt32(Uh_5tlreg42215, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42217 = _UnaryMinusInt32(Uh_5tlreg42216, 32); //gcnl:NodeUnaryOp.cpp:449
    const u32 Uh_5tlreg42218 = _Int32ToInt32(Uh_5tlreg42217, 32, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42219 = _Int32ToInt32(Uh_5tlreg42218, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42220(Uh_5tlreg42219); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42222 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42213, Uh_5tlval42220); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42223(Uh_5tlval42222); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42223); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2Dincomplete.ulam:72:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
    {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg42224 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42225 = _Int32ToInt32(Uh_5tlreg42224, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42227 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42228 = _Unsigned32ToInt32(Uh_5tlreg42227, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42229 = _BinOpCompareEqEqInt32(Uh_5tlreg42228, Uh_5tlreg42225, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42229, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg42231 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42232 = _Int32ToInt32(Uh_5tlreg42231, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42233(Uh_5tlreg42232); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42234 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42235 = _Int32ToInt32(Uh_5tlreg42234, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42236(Uh_5tlreg42235); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42238 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42233, Uh_5tlval42236); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42239(Uh_5tlval42238); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42239); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
    {

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg42240 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42241 = _Int32ToInt32(Uh_5tlreg42240, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42243 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42244 = _Unsigned32ToInt32(Uh_5tlreg42243, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42245 = _BinOpCompareEqEqInt32(Uh_5tlreg42244, Uh_5tlreg42241, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42245, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg42247 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42248 = _Int32ToInt32(Uh_5tlreg42247, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42249(Uh_5tlreg42248); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42250 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42251 = _Int32ToInt32(Uh_5tlreg42250, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42252(Uh_5tlreg42251); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42254 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42249, Uh_5tlval42252); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42255(Uh_5tlval42254); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42255); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
    {

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg42256 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42257 = _Int32ToInt32(Uh_5tlreg42256, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42259 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42260 = _Unsigned32ToInt32(Uh_5tlreg42259, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42261 = _BinOpCompareEqEqInt32(Uh_5tlreg42260, Uh_5tlreg42257, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42261, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg42263 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42264 = _Int32ToInt32(Uh_5tlreg42263, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42265(Uh_5tlreg42264); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42266 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42267 = _Int32ToInt32(Uh_5tlreg42266, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42268(Uh_5tlreg42267); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42270 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42265, Uh_5tlval42268); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42271(Uh_5tlval42270); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42271); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
    {

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg42272 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42273 = _Int32ToInt32(Uh_5tlreg42272, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42275 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42276 = _Unsigned32ToInt32(Uh_5tlreg42275, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42277 = _BinOpCompareEqEqInt32(Uh_5tlreg42276, Uh_5tlreg42273, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42277, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg42279 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42280 = _Int32ToInt32(Uh_5tlreg42279, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42281(Uh_5tlreg42280); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42282 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42283 = _Int32ToInt32(Uh_5tlreg42282, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42284(Uh_5tlreg42283); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42286 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42281, Uh_5tlval42284); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42287(Uh_5tlval42286); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42287); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
    {

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg42288 = 4; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42290 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42291 = _Unsigned32ToInt32(Uh_5tlreg42290, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42292 = _BinOpCompareEqEqInt32(Uh_5tlreg42291, Uh_5tlreg42288, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42292, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg42294 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42295 = _Int32ToInt32(Uh_5tlreg42294, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42296(Uh_5tlreg42295); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42297 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42298 = _Int32ToInt32(Uh_5tlreg42297, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42299(Uh_5tlreg42298); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42301 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42296, Uh_5tlval42299); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42302(Uh_5tlval42301); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42302); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
    {

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg42303 = 5; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42305 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42306 = _Unsigned32ToInt32(Uh_5tlreg42305, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42307 = _BinOpCompareEqEqInt32(Uh_5tlreg42306, Uh_5tlreg42303, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42307, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg42309 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42310 = _Int32ToInt32(Uh_5tlreg42309, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42311(Uh_5tlreg42310); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42312 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42313 = _Int32ToInt32(Uh_5tlreg42312, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42314(Uh_5tlreg42313); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42316 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42311, Uh_5tlval42314); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42317(Uh_5tlval42316); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42317); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
    {

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg42318 = 6; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42320 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42321 = _Unsigned32ToInt32(Uh_5tlreg42320, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42322 = _BinOpCompareEqEqInt32(Uh_5tlreg42321, Uh_5tlreg42318, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42322, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg42324 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42325 = _Int32ToInt32(Uh_5tlreg42324, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42326(Uh_5tlreg42325); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42327 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42328 = _Int32ToInt32(Uh_5tlreg42327, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42329(Uh_5tlreg42328); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42331 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42326, Uh_5tlval42329); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42332(Uh_5tlval42331); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42332); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:80:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg42334 = (u32) -1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42335 = _Int32ToInt32(Uh_5tlreg42334, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42336(Uh_5tlreg42335); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42337 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42338 = _Int32ToInt32(Uh_5tlreg42337, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42339(Uh_5tlreg42338); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42341 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42336, Uh_5tlval42339); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42342(Uh_5tlval42341); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42342); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2Dincomplete.ulam:86:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
    {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg42343 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42344 = _Int32ToInt32(Uh_5tlreg42343, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42346 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42347 = _Unsigned32ToInt32(Uh_5tlreg42346, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42348 = _BinOpCompareEqEqInt32(Uh_5tlreg42347, Uh_5tlreg42344, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42348, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg42350 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42351 = _Int32ToInt32(Uh_5tlreg42350, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42352(Uh_5tlreg42351); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42353 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42354 = _Int32ToInt32(Uh_5tlreg42353, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42355(Uh_5tlreg42354); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42357 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42352, Uh_5tlval42355); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42358(Uh_5tlval42357); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42358); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
    {

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg42359 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42360 = _Int32ToInt32(Uh_5tlreg42359, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42362 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42363 = _Unsigned32ToInt32(Uh_5tlreg42362, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42364 = _BinOpCompareEqEqInt32(Uh_5tlreg42363, Uh_5tlreg42360, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42364, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg42366 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42367 = _Int32ToInt32(Uh_5tlreg42366, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42368(Uh_5tlreg42367); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42369 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42370 = _Int32ToInt32(Uh_5tlreg42369, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42371(Uh_5tlreg42370); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42373 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42368, Uh_5tlval42371); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42374(Uh_5tlval42373); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42374); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
    {

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg42375 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42376 = _Int32ToInt32(Uh_5tlreg42375, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42378 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42379 = _Unsigned32ToInt32(Uh_5tlreg42378, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42380 = _BinOpCompareEqEqInt32(Uh_5tlreg42379, Uh_5tlreg42376, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42380, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg42382 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42383 = _Int32ToInt32(Uh_5tlreg42382, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42384(Uh_5tlreg42383); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42385 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42386 = _Int32ToInt32(Uh_5tlreg42385, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42387(Uh_5tlreg42386); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42389 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42384, Uh_5tlval42387); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42390(Uh_5tlval42389); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42390); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
    {

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg42391 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42392 = _Int32ToInt32(Uh_5tlreg42391, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42394 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42395 = _Unsigned32ToInt32(Uh_5tlreg42394, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42396 = _BinOpCompareEqEqInt32(Uh_5tlreg42395, Uh_5tlreg42392, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42396, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg42398 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42399 = _Int32ToInt32(Uh_5tlreg42398, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42400(Uh_5tlreg42399); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42401 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42402 = _Int32ToInt32(Uh_5tlreg42401, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42403(Uh_5tlreg42402); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42405 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42400, Uh_5tlval42403); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42406(Uh_5tlval42405); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42406); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
    {

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg42407 = 4; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42409 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42410 = _Unsigned32ToInt32(Uh_5tlreg42409, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42411 = _BinOpCompareEqEqInt32(Uh_5tlreg42410, Uh_5tlreg42407, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42411, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg42413 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42414 = _Int32ToInt32(Uh_5tlreg42413, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42415(Uh_5tlreg42414); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42416 = (u32) -4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42417 = _Int32ToInt32(Uh_5tlreg42416, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42418(Uh_5tlreg42417); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42420 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42415, Uh_5tlval42418); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42421(Uh_5tlval42420); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42421); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
    {

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg42422 = 5; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42424 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42425 = _Unsigned32ToInt32(Uh_5tlreg42424, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42426 = _BinOpCompareEqEqInt32(Uh_5tlreg42425, Uh_5tlreg42422, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42426, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg42428 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42429 = _Int32ToInt32(Uh_5tlreg42428, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42430(Uh_5tlreg42429); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42431 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42432 = _Int32ToInt32(Uh_5tlreg42431, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42433(Uh_5tlreg42432); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42435 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42430, Uh_5tlval42433); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42436(Uh_5tlval42435); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42436); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
    {

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg42437 = 6; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42439 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42440 = _Unsigned32ToInt32(Uh_5tlreg42439, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42441 = _BinOpCompareEqEqInt32(Uh_5tlreg42440, Uh_5tlreg42437, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42441, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg42443 = (u32) -4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42444 = _Int32ToInt32(Uh_5tlreg42443, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42445(Uh_5tlreg42444); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42446 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42447 = _Int32ToInt32(Uh_5tlreg42446, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42448(Uh_5tlreg42447); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42450 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42445, Uh_5tlval42448); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42451(Uh_5tlval42450); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42451); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:94:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg42453 = (u32) -2; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42454 = _Int32ToInt32(Uh_5tlreg42453, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42455(Uh_5tlreg42454); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42456 = 2; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42457 = _Int32ToInt32(Uh_5tlreg42456, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42458(Uh_5tlreg42457); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42460 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42455, Uh_5tlval42458); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42461(Uh_5tlval42460); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42461); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2Dincomplete.ulam:97:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:98:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:99:     return manhattanDistance(origin);
    const u32 Uh_5tlreg42464 = Uv_6origin.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval42465(Uh_5tlreg42464); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval42467 = THE_INSTANCE.Uf_9217manhattanDistance(uc, ur, Uh_5tlval42465); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42468 = Uh_5tlval42467.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval42469(Uh_5tlreg42468); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42469); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2Dincomplete.ulam:106:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:107:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg42472 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42473 = _Int32ToInt32(Uh_5tlreg42472, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42475 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42476 = _Int32ToInt32(Uh_5tlreg42475, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42477 = _BinOpSubtractInt32(Uh_5tlreg42476, Uh_5tlreg42473, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42478 = _Int32ToInt32(Uh_5tlreg42477, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dx(Uh_5tlreg42478); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:107:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg42481 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42482 = _Int32ToInt32(Uh_5tlreg42481, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42484 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42485 = _Int32ToInt32(Uh_5tlreg42484, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42486 = _BinOpSubtractInt32(Uh_5tlreg42485, Uh_5tlreg42482, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42487 = _Int32ToInt32(Uh_5tlreg42486, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dy(Uh_5tlreg42487); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
    {

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
      const u32 Uh_5tlreg42488 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42489 = _Int32ToInt32(Uh_5tlreg42488, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42491 = Uv_2dx.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42492 = _BinOpCompareLessThanInt32(Uh_5tlreg42491, Uh_5tlreg42489, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42492, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
          const u32 Uh_5tlreg42494 = Uv_2dx.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42495 = _UnaryMinusInt32(Uh_5tlreg42494, 32); //gcnl:NodeUnaryOp.cpp:449
          Uv_2dx.write(Uh_5tlreg42495); //gcnl:Node.cpp:885
      } // end if
    }

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
    {

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
      const u32 Uh_5tlreg42497 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42498 = _Int32ToInt32(Uh_5tlreg42497, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42500 = Uv_2dy.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42501 = _BinOpCompareLessThanInt32(Uh_5tlreg42500, Uh_5tlreg42498, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42501, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
          const u32 Uh_5tlreg42503 = Uv_2dy.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42504 = _UnaryMinusInt32(Uh_5tlreg42503, 32); //gcnl:NodeUnaryOp.cpp:449
          Uv_2dy.write(Uh_5tlreg42504); //gcnl:Node.cpp:885
      } // end if
    }

//! C2Dincomplete.ulam:110:     return (Unsigned) (dx + dy);
    const u32 Uh_5tlreg42507 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42509 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42510 = _BinOpAddInt32(Uh_5tlreg42509, Uh_5tlreg42507, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42511 = _Int32ToUnsigned32(Uh_5tlreg42510, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval42512(Uh_5tlreg42511); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42512); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2Dincomplete.ulam:102:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:103:     return x == 0 && y == 0;
    u32 Uh_5tlreg42513 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg42514 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42515 = _Int32ToInt32(Uh_5tlreg42514, 2, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42517 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42518 = _BinOpCompareEqEqInt32(Uh_5tlreg42517, Uh_5tlreg42515, 16); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg42518, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg42519 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42520 = _Int32ToInt32(Uh_5tlreg42519, 2, 16); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42522 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42523 = _BinOpCompareEqEqInt32(Uh_5tlreg42522, Uh_5tlreg42520, 16); //gcnl:NodeBinaryOpCompare.cpp:313
      Uh_5tlreg42513 = Uh_5tlreg42523; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval42524(Uh_5tlreg42513); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42524); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2Dincomplete.ulam:116:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:117:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg42527 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42528 = _Int32ToInt32(Uh_5tlreg42527, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42530 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42531 = _Int32ToInt32(Uh_5tlreg42530, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42532 = _BinOpSubtractInt32(Uh_5tlreg42531, Uh_5tlreg42528, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42533 = _Int32ToInt32(Uh_5tlreg42532, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dx(Uh_5tlreg42533); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:117:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg42536 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42537 = _Int32ToInt32(Uh_5tlreg42536, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42539 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42540 = _Int32ToInt32(Uh_5tlreg42539, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42541 = _BinOpSubtractInt32(Uh_5tlreg42540, Uh_5tlreg42537, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42542 = _Int32ToInt32(Uh_5tlreg42541, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dy(Uh_5tlreg42542); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:118:     return (Unsigned) (dx*dx + dy*dy);
    const u32 Uh_5tlreg42544 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42546 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42547 = _BinOpMultiplyInt32(Uh_5tlreg42546, Uh_5tlreg42544, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42549 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42551 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42552 = _BinOpMultiplyInt32(Uh_5tlreg42551, Uh_5tlreg42549, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42553 = _BinOpAddInt32(Uh_5tlreg42552, Uh_5tlreg42547, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42554 = _Int32ToUnsigned32(Uh_5tlreg42553, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval42555(Uh_5tlreg42554); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42555); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2Dincomplete.ulam:124:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:125:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:126:     return euclideanSquaredDistance(origin);
    const u32 Uh_5tlreg42558 = Uv_6origin.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval42559(Uh_5tlreg42558); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval42561 = THE_INSTANCE.Uf_9224euclideanSquaredDistance(uc, ur, Uh_5tlval42559); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42562 = Uh_5tlval42561.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval42563(Uh_5tlreg42562); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42563); //gcnl:NodeReturnStatement.cpp:343

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

