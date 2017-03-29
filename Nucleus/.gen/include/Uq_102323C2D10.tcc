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
#include "Ue_102188EggShell10.h"
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
    const u32 Uh_5tlreg42019 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    Ui_Ut_102161i<EC> Uh_5tlval42020(Uh_5tlreg42019); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42023 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    Ui_Ut_102161i<EC> Uh_5tlval42024(Uh_5tlreg42023); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4init(uc, ur, Uh_5tlval42020, Uh_5tlval42024); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4init



//! C2Dincomplete.ulam:15:   Void init(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4init(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:16:     x = ax;
    const u32 Uh_5tlreg42027 = Uv_2ax.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42027); //gcnl:Node.cpp:885

//! C2Dincomplete.ulam:17:     y = ay;
    const u32 Uh_5tlreg42030 = Uv_2ay.read(); //gcnl:Node.cpp:691
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42030); //gcnl:Node.cpp:885

  } // Uf_4init



//! C2Dincomplete.ulam:7:   Void init(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4init(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:8:     init((Coord) ax, (Coord) ay);
    const u32 Uh_5tlreg42034 = Uv_2ax.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42035 = _Int32ToInt32(Uh_5tlreg42034, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161i<EC> Uh_5tlval42036(Uh_5tlreg42035); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42038 = Uv_2ay.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42039 = _Int32ToInt32(Uh_5tlreg42038, 32, 16); //gcnl:NodeCast.cpp:723
    Ui_Ut_102161i<EC> Uh_5tlval42040(Uh_5tlreg42039); //func arg& //gcnl:Node.cpp:1128
    THE_INSTANCE.Uf_4init(uc, ur, Uh_5tlval42036, Uh_5tlval42040); //gcnl:NodeFunctionCall.cpp:1006

  } // Uf_4init



//! C2Dincomplete.ulam:20:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:20:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg42043 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42044 = _Int32ToInt32(Uh_5tlreg42043, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42045(Uh_5tlreg42044); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42045); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2Dincomplete.ulam:21:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:21:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg42047 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42048 = _Int32ToInt32(Uh_5tlreg42047, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42049(Uh_5tlreg42048); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42049); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2Dincomplete.ulam:23:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2Dincomplete.ulam:23:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg42051 = Uv_2ax.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42052 = _Int32ToInt32(Uh_5tlreg42051, 32, 16); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42052); //gcnl:Node.cpp:885

  } // Uf_4setX



//! C2Dincomplete.ulam:24:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2Dincomplete.ulam:24:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg42055 = Uv_2ay.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42056 = _Int32ToInt32(Uh_5tlreg42055, 32, 16); //gcnl:NodeCast.cpp:723
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42056); //gcnl:Node.cpp:885

  } // Uf_4setY



//! C2Dincomplete.ulam:26:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2Dincomplete.ulam:28:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:29:     ret.init(x,y);
    UlamRef<EC> Uh_3tur42059(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg42061 = Uv_1x.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321i<EC> Uh_5tlval42062(Uh_5tlreg42061); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42064 = Uv_1y.read(); //gcnl:Node.cpp:691
    Ui_Ut_102321i<EC> Uh_5tlval42065(Uh_5tlreg42064); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4init(uc, Uh_3tur42059, Uh_5tlval42062, Uh_5tlval42065); //gcnl:NodeFunctionCall.cpp:1006

//! C2Dincomplete.ulam:30:     return ret;
    const u32 Uh_5tlreg42068 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval42069(Uh_5tlreg42068); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42069); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2Dincomplete.ulam:33:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:34:     return x == other.x && y == other.y;
    u32 Uh_5tlreg42070 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg42073 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42075 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42076 = _BinOpCompareEqEqInt32(Uh_5tlreg42075, Uh_5tlreg42073, 16); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg42076, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg42079 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42081 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42082 = _BinOpCompareEqEqInt32(Uh_5tlreg42081, Uh_5tlreg42079, 16); //gcnl:NodeBinaryOpCompare.cpp:313
      Uh_5tlreg42070 = Uh_5tlreg42082; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval42083(Uh_5tlreg42070); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42083); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2Dincomplete.ulam:43:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:44:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval42087 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42088 = Uh_5tlval42087.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg42088); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:45:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval42092 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42093 = Uh_5tlval42092.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg42093); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:46:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur42095(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321i<EC> Uh_5tlval42097 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4getX(uc, Uh_3tur42095); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42098 = Uh_5tlval42097.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg42098); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:47:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur42100(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:923
    const Ui_Ut_102321i<EC> Uh_5tlval42102 = Ui_Uq_102323C2D10<EC>::Us::THE_INSTANCE.Uf_4getY(uc, Uh_3tur42100); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42103 = Uh_5tlval42102.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg42103); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
    {

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg42104 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42105 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42106 = _Int32ToInt32(Uh_5tlreg42105, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42108 = Uv_2ox.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42109 = _BinOpCompareLessThanInt32(Uh_5tlreg42108, Uh_5tlreg42106, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(!_Bool32ToCbool(Uh_5tlreg42109, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42111 = Uv_2sx.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42113 = Uv_2ox.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42114 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg42113, Uh_5tlreg42111, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42104 = Uh_5tlreg42114; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42104 = Uh_5tlreg42109; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42104, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:48:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg42115 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42116(Uh_5tlreg42115); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42116); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
    {

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg42117 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42118 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42119 = _Int32ToInt32(Uh_5tlreg42118, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42121 = Uv_2oy.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42122 = _BinOpCompareLessThanInt32(Uh_5tlreg42121, Uh_5tlreg42119, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(!_Bool32ToCbool(Uh_5tlreg42122, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42124 = Uv_2sy.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42126 = Uv_2oy.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42127 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg42126, Uh_5tlreg42124, 32); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42117 = Uh_5tlreg42127; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42117 = Uh_5tlreg42122; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42117, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:49:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg42128 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval42129(Uh_5tlreg42128); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42129); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:50:     return true;
    const u32 Uh_5tlreg42130 = 1u; //gcnl:NodeTerminal.cpp:721
    Ui_Ut_10111b<EC> Uh_5tlval42131(Uh_5tlreg42130); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42131); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2Dincomplete.ulam:53:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:54:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg42134 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42135 = _Int32ToInt32(Uh_5tlreg42134, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42137 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42138 = _Int32ToInt32(Uh_5tlreg42137, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42139 = _BinOpMultiplyInt32(Uh_5tlreg42138, Uh_5tlreg42135, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42142 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42143 = _Int32ToInt32(Uh_5tlreg42142, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42145 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42146 = _Int32ToInt32(Uh_5tlreg42145, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42147 = _BinOpMultiplyInt32(Uh_5tlreg42146, Uh_5tlreg42143, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42148 = _BinOpAddInt32(Uh_5tlreg42147, Uh_5tlreg42139, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321i<EC> Uh_5tlval42149(Uh_5tlreg42148); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42149); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2Dincomplete.ulam:57:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:58:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg42153 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42154 = _Int32ToInt32(Uh_5tlreg42153, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42156 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42157 = _Int32ToInt32(Uh_5tlreg42156, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42158 = _BinOpAddInt32(Uh_5tlreg42157, Uh_5tlreg42154, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42159 = _Int32ToInt32(Uh_5tlreg42158, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42160 = _Int32ToInt32(Uh_5tlreg42159, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42161(Uh_5tlreg42160); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42164 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42165 = _Int32ToInt32(Uh_5tlreg42164, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42167 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42168 = _Int32ToInt32(Uh_5tlreg42167, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42169 = _BinOpAddInt32(Uh_5tlreg42168, Uh_5tlreg42165, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42170 = _Int32ToInt32(Uh_5tlreg42169, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42171 = _Int32ToInt32(Uh_5tlreg42170, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42172(Uh_5tlreg42171); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42174 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42161, Uh_5tlval42172); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42175(Uh_5tlval42174); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42175); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2Dincomplete.ulam:61:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:62:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg42179 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42180 = _Int32ToInt32(Uh_5tlreg42179, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42182 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42183 = _Int32ToInt32(Uh_5tlreg42182, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42184 = _BinOpSubtractInt32(Uh_5tlreg42183, Uh_5tlreg42180, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42185 = _Int32ToInt32(Uh_5tlreg42184, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42186 = _Int32ToInt32(Uh_5tlreg42185, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42187(Uh_5tlreg42186); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42190 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42191 = _Int32ToInt32(Uh_5tlreg42190, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42193 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42194 = _Int32ToInt32(Uh_5tlreg42193, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42195 = _BinOpSubtractInt32(Uh_5tlreg42194, Uh_5tlreg42191, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42196 = _Int32ToInt32(Uh_5tlreg42195, 17, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42197 = _Int32ToInt32(Uh_5tlreg42196, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42198(Uh_5tlreg42197); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42200 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42187, Uh_5tlval42198); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42201(Uh_5tlval42200); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42201); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2Dincomplete.ulam:65:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:66:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg42204 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42205 = _Int32ToInt32(Uh_5tlreg42204, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42206 = _UnaryMinusInt32(Uh_5tlreg42205, 32); //gcnl:NodeUnaryOp.cpp:449
    const u32 Uh_5tlreg42207 = _Int32ToInt32(Uh_5tlreg42206, 32, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42208 = _Int32ToInt32(Uh_5tlreg42207, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42209(Uh_5tlreg42208); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42211 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42212 = _Int32ToInt32(Uh_5tlreg42211, 16, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42213 = _UnaryMinusInt32(Uh_5tlreg42212, 32); //gcnl:NodeUnaryOp.cpp:449
    const u32 Uh_5tlreg42214 = _Int32ToInt32(Uh_5tlreg42213, 32, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42215 = _Int32ToInt32(Uh_5tlreg42214, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42216(Uh_5tlreg42215); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42218 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42209, Uh_5tlval42216); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42219(Uh_5tlval42218); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42219); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2Dincomplete.ulam:72:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
    {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg42220 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42221 = _Int32ToInt32(Uh_5tlreg42220, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42223 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42224 = _Unsigned32ToInt32(Uh_5tlreg42223, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42225 = _BinOpCompareEqEqInt32(Uh_5tlreg42224, Uh_5tlreg42221, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42225, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:73:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg42227 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42228 = _Int32ToInt32(Uh_5tlreg42227, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42229(Uh_5tlreg42228); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42230 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42231 = _Int32ToInt32(Uh_5tlreg42230, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42232(Uh_5tlreg42231); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42234 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42229, Uh_5tlval42232); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42235(Uh_5tlval42234); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42235); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
    {

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg42236 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42237 = _Int32ToInt32(Uh_5tlreg42236, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42239 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42240 = _Unsigned32ToInt32(Uh_5tlreg42239, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42241 = _BinOpCompareEqEqInt32(Uh_5tlreg42240, Uh_5tlreg42237, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42241, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:74:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg42243 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42244 = _Int32ToInt32(Uh_5tlreg42243, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42245(Uh_5tlreg42244); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42246 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42247 = _Int32ToInt32(Uh_5tlreg42246, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42248(Uh_5tlreg42247); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42250 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42245, Uh_5tlval42248); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42251(Uh_5tlval42250); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42251); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
    {

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg42252 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42253 = _Int32ToInt32(Uh_5tlreg42252, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42255 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42256 = _Unsigned32ToInt32(Uh_5tlreg42255, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42257 = _BinOpCompareEqEqInt32(Uh_5tlreg42256, Uh_5tlreg42253, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42257, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:75:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg42259 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42260 = _Int32ToInt32(Uh_5tlreg42259, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42261(Uh_5tlreg42260); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42262 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42263 = _Int32ToInt32(Uh_5tlreg42262, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42264(Uh_5tlreg42263); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42266 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42261, Uh_5tlval42264); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42267(Uh_5tlval42266); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42267); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
    {

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg42268 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42269 = _Int32ToInt32(Uh_5tlreg42268, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42271 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42272 = _Unsigned32ToInt32(Uh_5tlreg42271, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42273 = _BinOpCompareEqEqInt32(Uh_5tlreg42272, Uh_5tlreg42269, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42273, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:76:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg42275 = 1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42276 = _Int32ToInt32(Uh_5tlreg42275, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42277(Uh_5tlreg42276); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42278 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42279 = _Int32ToInt32(Uh_5tlreg42278, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42280(Uh_5tlreg42279); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42282 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42277, Uh_5tlval42280); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42283(Uh_5tlval42282); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42283); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
    {

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg42284 = 4; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42286 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42287 = _Unsigned32ToInt32(Uh_5tlreg42286, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42288 = _BinOpCompareEqEqInt32(Uh_5tlreg42287, Uh_5tlreg42284, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42288, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:77:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg42290 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42291 = _Int32ToInt32(Uh_5tlreg42290, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42292(Uh_5tlreg42291); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42293 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42294 = _Int32ToInt32(Uh_5tlreg42293, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42295(Uh_5tlreg42294); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42297 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42292, Uh_5tlval42295); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42298(Uh_5tlval42297); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42298); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
    {

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg42299 = 5; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42301 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42302 = _Unsigned32ToInt32(Uh_5tlreg42301, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42303 = _BinOpCompareEqEqInt32(Uh_5tlreg42302, Uh_5tlreg42299, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42303, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:78:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg42305 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42306 = _Int32ToInt32(Uh_5tlreg42305, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42307(Uh_5tlreg42306); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42308 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42309 = _Int32ToInt32(Uh_5tlreg42308, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42310(Uh_5tlreg42309); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42312 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42307, Uh_5tlval42310); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42313(Uh_5tlval42312); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42313); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
    {

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg42314 = 6; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42316 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42317 = _Unsigned32ToInt32(Uh_5tlreg42316, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42318 = _BinOpCompareEqEqInt32(Uh_5tlreg42317, Uh_5tlreg42314, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42318, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:79:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg42320 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42321 = _Int32ToInt32(Uh_5tlreg42320, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42322(Uh_5tlreg42321); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42323 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42324 = _Int32ToInt32(Uh_5tlreg42323, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42325(Uh_5tlreg42324); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42327 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42322, Uh_5tlval42325); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42328(Uh_5tlval42327); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42328); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:80:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg42330 = (u32) -1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42331 = _Int32ToInt32(Uh_5tlreg42330, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42332(Uh_5tlreg42331); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42333 = 1; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42334 = _Int32ToInt32(Uh_5tlreg42333, 2, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42335(Uh_5tlreg42334); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42337 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42332, Uh_5tlval42335); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42338(Uh_5tlval42337); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42338); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2Dincomplete.ulam:86:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
    {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg42339 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42340 = _Int32ToInt32(Uh_5tlreg42339, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42342 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42343 = _Unsigned32ToInt32(Uh_5tlreg42342, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42344 = _BinOpCompareEqEqInt32(Uh_5tlreg42343, Uh_5tlreg42340, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42344, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:87:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg42346 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42347 = _Int32ToInt32(Uh_5tlreg42346, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42348(Uh_5tlreg42347); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42349 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42350 = _Int32ToInt32(Uh_5tlreg42349, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42351(Uh_5tlreg42350); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42353 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42348, Uh_5tlval42351); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42354(Uh_5tlval42353); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42354); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
    {

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg42355 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42356 = _Int32ToInt32(Uh_5tlreg42355, 2, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42358 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42359 = _Unsigned32ToInt32(Uh_5tlreg42358, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42360 = _BinOpCompareEqEqInt32(Uh_5tlreg42359, Uh_5tlreg42356, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42360, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:88:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg42362 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42363 = _Int32ToInt32(Uh_5tlreg42362, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42364(Uh_5tlreg42363); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42365 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42366 = _Int32ToInt32(Uh_5tlreg42365, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42367(Uh_5tlreg42366); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42369 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42364, Uh_5tlval42367); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42370(Uh_5tlval42369); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42370); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
    {

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg42371 = 2; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42372 = _Int32ToInt32(Uh_5tlreg42371, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42374 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42375 = _Unsigned32ToInt32(Uh_5tlreg42374, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42376 = _BinOpCompareEqEqInt32(Uh_5tlreg42375, Uh_5tlreg42372, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42376, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:89:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg42378 = 4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42379 = _Int32ToInt32(Uh_5tlreg42378, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42380(Uh_5tlreg42379); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42381 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42382 = _Int32ToInt32(Uh_5tlreg42381, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42383(Uh_5tlreg42382); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42385 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42380, Uh_5tlval42383); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42386(Uh_5tlval42385); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42386); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
    {

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg42387 = 3; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42388 = _Int32ToInt32(Uh_5tlreg42387, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42390 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42391 = _Unsigned32ToInt32(Uh_5tlreg42390, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42392 = _BinOpCompareEqEqInt32(Uh_5tlreg42391, Uh_5tlreg42388, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42392, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:90:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg42394 = 2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42395 = _Int32ToInt32(Uh_5tlreg42394, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42396(Uh_5tlreg42395); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42397 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42398 = _Int32ToInt32(Uh_5tlreg42397, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42399(Uh_5tlreg42398); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42401 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42396, Uh_5tlval42399); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42402(Uh_5tlval42401); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42402); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
    {

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg42403 = 4; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42405 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42406 = _Unsigned32ToInt32(Uh_5tlreg42405, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42407 = _BinOpCompareEqEqInt32(Uh_5tlreg42406, Uh_5tlreg42403, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42407, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:91:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg42409 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42410 = _Int32ToInt32(Uh_5tlreg42409, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42411(Uh_5tlreg42410); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42412 = (u32) -4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42413 = _Int32ToInt32(Uh_5tlreg42412, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42414(Uh_5tlreg42413); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42416 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42411, Uh_5tlval42414); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42417(Uh_5tlval42416); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42417); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
    {

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg42418 = 5; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42420 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42421 = _Unsigned32ToInt32(Uh_5tlreg42420, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42422 = _BinOpCompareEqEqInt32(Uh_5tlreg42421, Uh_5tlreg42418, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42422, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:92:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg42424 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42425 = _Int32ToInt32(Uh_5tlreg42424, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42426(Uh_5tlreg42425); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42427 = (u32) -2; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42428 = _Int32ToInt32(Uh_5tlreg42427, 3, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42429(Uh_5tlreg42428); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42431 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42426, Uh_5tlval42429); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42432(Uh_5tlval42431); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42432); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
    {

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg42433 = 6; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42435 = Uv_1d.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42436 = _Unsigned32ToInt32(Uh_5tlreg42435, 3, 4); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42437 = _BinOpCompareEqEqInt32(Uh_5tlreg42436, Uh_5tlreg42433, 4); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42437, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:93:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg42439 = (u32) -4; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42440 = _Int32ToInt32(Uh_5tlreg42439, 4, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42441(Uh_5tlreg42440); //func arg& //gcnl:Node.cpp:1128
          const u32 Uh_5tlreg42442 = 0; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42443 = _Int32ToInt32(Uh_5tlreg42442, 2, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321i<EC> Uh_5tlval42444(Uh_5tlreg42443); //func arg& //gcnl:Node.cpp:1128
          Ui_Uq_102323C2D10<EC> Uh_5tlval42446 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42441, Uh_5tlval42444); //gcnl:NodeFunctionCall.cpp:1006
          Ui_Uq_102323C2D10<EC> Uh_5tlval42447(Uh_5tlval42446); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42447); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2Dincomplete.ulam:94:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg42449 = (u32) -2; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42450 = _Int32ToInt32(Uh_5tlreg42449, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42451(Uh_5tlreg42450); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg42452 = 2; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42453 = _Int32ToInt32(Uh_5tlreg42452, 3, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval42454(Uh_5tlreg42453); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval42456 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval42451, Uh_5tlval42454); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval42457(Uh_5tlval42456); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42457); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2Dincomplete.ulam:97:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:98:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:99:     return manhattanDistance(origin);
    const u32 Uh_5tlreg42460 = Uv_6origin.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval42461(Uh_5tlreg42460); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval42463 = THE_INSTANCE.Uf_9217manhattanDistance(uc, ur, Uh_5tlval42461); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42464 = Uh_5tlval42463.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval42465(Uh_5tlreg42464); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42465); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2Dincomplete.ulam:106:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:107:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg42468 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42469 = _Int32ToInt32(Uh_5tlreg42468, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42471 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42472 = _Int32ToInt32(Uh_5tlreg42471, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42473 = _BinOpSubtractInt32(Uh_5tlreg42472, Uh_5tlreg42469, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42474 = _Int32ToInt32(Uh_5tlreg42473, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dx(Uh_5tlreg42474); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:107:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg42477 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42478 = _Int32ToInt32(Uh_5tlreg42477, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42480 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42481 = _Int32ToInt32(Uh_5tlreg42480, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42482 = _BinOpSubtractInt32(Uh_5tlreg42481, Uh_5tlreg42478, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42483 = _Int32ToInt32(Uh_5tlreg42482, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dy(Uh_5tlreg42483); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
    {

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
      const u32 Uh_5tlreg42484 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42485 = _Int32ToInt32(Uh_5tlreg42484, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42487 = Uv_2dx.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42488 = _BinOpCompareLessThanInt32(Uh_5tlreg42487, Uh_5tlreg42485, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42488, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:108:     if (dx < 0) dx = -dx;
          const u32 Uh_5tlreg42490 = Uv_2dx.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42491 = _UnaryMinusInt32(Uh_5tlreg42490, 32); //gcnl:NodeUnaryOp.cpp:449
          Uv_2dx.write(Uh_5tlreg42491); //gcnl:Node.cpp:885
      } // end if
    }

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
    {

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
      const u32 Uh_5tlreg42493 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42494 = _Int32ToInt32(Uh_5tlreg42493, 2, 32); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42496 = Uv_2dy.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42497 = _BinOpCompareLessThanInt32(Uh_5tlreg42496, Uh_5tlreg42494, 32); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42497, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2Dincomplete.ulam:109:     if (dy < 0) dy = -dy;
          const u32 Uh_5tlreg42499 = Uv_2dy.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42500 = _UnaryMinusInt32(Uh_5tlreg42499, 32); //gcnl:NodeUnaryOp.cpp:449
          Uv_2dy.write(Uh_5tlreg42500); //gcnl:Node.cpp:885
      } // end if
    }

//! C2Dincomplete.ulam:110:     return (Unsigned) (dx + dy);
    const u32 Uh_5tlreg42503 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42505 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42506 = _BinOpAddInt32(Uh_5tlreg42505, Uh_5tlreg42503, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42507 = _Int32ToUnsigned32(Uh_5tlreg42506, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval42508(Uh_5tlreg42507); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42508); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2Dincomplete.ulam:102:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:103:     return x == 0 && y == 0;
    u32 Uh_5tlreg42509 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg42510 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42511 = _Int32ToInt32(Uh_5tlreg42510, 2, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42513 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42514 = _BinOpCompareEqEqInt32(Uh_5tlreg42513, Uh_5tlreg42511, 16); //gcnl:NodeBinaryOpCompare.cpp:313
    if(_Bool32ToCbool(Uh_5tlreg42514, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg42515 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42516 = _Int32ToInt32(Uh_5tlreg42515, 2, 16); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42518 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
      const u32 Uh_5tlreg42519 = _BinOpCompareEqEqInt32(Uh_5tlreg42518, Uh_5tlreg42516, 16); //gcnl:NodeBinaryOpCompare.cpp:313
      Uh_5tlreg42509 = Uh_5tlreg42519; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval42520(Uh_5tlreg42509); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42520); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2Dincomplete.ulam:116:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2Dincomplete.ulam:117:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg42523 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42524 = _Int32ToInt32(Uh_5tlreg42523, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42526 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42527 = _Int32ToInt32(Uh_5tlreg42526, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42528 = _BinOpSubtractInt32(Uh_5tlreg42527, Uh_5tlreg42524, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42529 = _Int32ToInt32(Uh_5tlreg42528, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dx(Uh_5tlreg42529); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:117:     Int dx = x - other.x, dy = y - other.y;
    const u32 Uh_5tlreg42532 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42533 = _Int32ToInt32(Uh_5tlreg42532, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42535 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:657
    const u32 Uh_5tlreg42536 = _Int32ToInt32(Uh_5tlreg42535, 16, 17); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42537 = _BinOpSubtractInt32(Uh_5tlreg42536, Uh_5tlreg42533, 17); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42538 = _Int32ToInt32(Uh_5tlreg42537, 17, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uv_2dy(Uh_5tlreg42538); //gcnl:NodeVarDecl.cpp:1060

//! C2Dincomplete.ulam:118:     return (Unsigned) (dx*dx + dy*dy);
    const u32 Uh_5tlreg42540 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42542 = Uv_2dy.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42543 = _BinOpMultiplyInt32(Uh_5tlreg42542, Uh_5tlreg42540, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42545 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42547 = Uv_2dx.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42548 = _BinOpMultiplyInt32(Uh_5tlreg42547, Uh_5tlreg42545, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42549 = _BinOpAddInt32(Uh_5tlreg42548, Uh_5tlreg42543, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42550 = _Int32ToUnsigned32(Uh_5tlreg42549, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321u<EC> Uh_5tlval42551(Uh_5tlreg42550); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42551); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2Dincomplete.ulam:124:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2Dincomplete.ulam:125:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1096

//! C2Dincomplete.ulam:126:     return euclideanSquaredDistance(origin);
    const u32 Uh_5tlreg42554 = Uv_6origin.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval42555(Uh_5tlreg42554); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_102321u<EC> Uh_5tlval42557 = THE_INSTANCE.Uf_9224euclideanSquaredDistance(uc, ur, Uh_5tlval42555); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42558 = Uh_5tlval42557.read(); //gcnl:Node.cpp:1156
    Ui_Ut_102321u<EC> Uh_5tlval42559(Uh_5tlreg42558); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42559); //gcnl:NodeReturnStatement.cpp:343

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

