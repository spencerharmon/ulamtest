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
  Uq_10109210ColorUtils10<EC>::Uq_10109210ColorUtils10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109210ColorUtils10", 0))
  { }

  template<class EC>
  Uq_10109210ColorUtils10<EC>::~Uq_10109210ColorUtils10(){} //gcnl:NodeBlockClass.cpp:1784


//! ColorUtils.ulam:24:   ARGB color(Byte red, Byte green, Byte blue) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181t<EC>& Uv_3red, Ui_Ut_10181t<EC>& Uv_5green, Ui_Ut_10181t<EC>& Uv_4blue) const
  {

//! ColorUtils.ulam:25:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1096

//! ColorUtils.ulam:26:     ret[0] = (Channel) 0xff;
    const u32 Uh_5tlreg42560 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42561 = _Int32ToUnsigned32(Uh_5tlreg42560, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42562 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42562 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42564(Uv_3ret, Uh_5tlreg42562 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42564.write(Uh_5tlreg42561);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg42565 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42566 = _Int32ToBits32(Uh_5tlreg42565, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42568 = Uv_3red.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42569 = _Bits32ToBits32(Uh_5tlreg42568, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42570 = _BitwiseAndBits32(Uh_5tlreg42569, Uh_5tlreg42566, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42571 = _Bits32ToUnsigned32(Uh_5tlreg42570, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42572 = 1; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42572 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42574(Uv_3ret, Uh_5tlreg42572 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42574.write(Uh_5tlreg42571);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg42575 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42576 = _Int32ToBits32(Uh_5tlreg42575, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42578 = Uv_5green.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42579 = _Bits32ToBits32(Uh_5tlreg42578, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42580 = _BitwiseAndBits32(Uh_5tlreg42579, Uh_5tlreg42576, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42581 = _Bits32ToUnsigned32(Uh_5tlreg42580, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42582 = 2; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42582 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42584(Uv_3ret, Uh_5tlreg42582 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42584.write(Uh_5tlreg42581);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg42585 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42586 = _Int32ToBits32(Uh_5tlreg42585, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42588 = Uv_4blue.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42589 = _Bits32ToBits32(Uh_5tlreg42588, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42590 = _BitwiseAndBits32(Uh_5tlreg42589, Uh_5tlreg42586, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42591 = _Bits32ToUnsigned32(Uh_5tlreg42590, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42592 = 3; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42592 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42594(Uv_3ret, Uh_5tlreg42592 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42594.write(Uh_5tlreg42591);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg42596 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42597(Uh_5tlreg42596); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42597); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg42600 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42601 = _Int32ToBits32(Uh_5tlreg42600, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321t<EC> Uh_5tlval42602(Uh_5tlreg42601); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_14181u<EC> Uh_5tlval42604 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42602); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42605 = Uh_5tlval42604.read(); //gcnl:Node.cpp:1156
    Ui_Ut_14181u<EC> Uh_5tlval42606(Uh_5tlreg42605); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42606); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg42609 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42610 = _Unsigned32ToBits32(Uh_5tlreg42609, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321t<EC> Uh_5tlval42611(Uh_5tlreg42610); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_14181u<EC> Uh_5tlval42613 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42611); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42614 = Uh_5tlval42613.read(); //gcnl:Node.cpp:1156
    Ui_Ut_14181u<EC> Uh_5tlval42615(Uh_5tlreg42614); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42615); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1096

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg42616 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42617 = _Int32ToBits32(Uh_5tlreg42616, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42618 = 24; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42619 = _Int32ToUnsigned32(Uh_5tlreg42618, 6, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42621 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42622 = _ShiftOpRightBits32(Uh_5tlreg42621, Uh_5tlreg42619, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42623 = _BitwiseAndBits32(Uh_5tlreg42622, Uh_5tlreg42617, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42624 = _Bits32ToUnsigned32(Uh_5tlreg42623, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42625 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42625 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42627(Uv_3ret, Uh_5tlreg42625 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42627.write(Uh_5tlreg42624);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg42628 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42629 = _Int32ToBits32(Uh_5tlreg42628, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42630 = 16; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42631 = _Int32ToUnsigned32(Uh_5tlreg42630, 6, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42633 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42634 = _ShiftOpRightBits32(Uh_5tlreg42633, Uh_5tlreg42631, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42635 = _BitwiseAndBits32(Uh_5tlreg42634, Uh_5tlreg42629, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42636 = _Bits32ToUnsigned32(Uh_5tlreg42635, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42637 = 1; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42637 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42639(Uv_3ret, Uh_5tlreg42637 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42639.write(Uh_5tlreg42636);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg42640 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42641 = _Int32ToBits32(Uh_5tlreg42640, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42642 = 8; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42643 = _Int32ToUnsigned32(Uh_5tlreg42642, 5, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42645 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42646 = _ShiftOpRightBits32(Uh_5tlreg42645, Uh_5tlreg42643, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42647 = _BitwiseAndBits32(Uh_5tlreg42646, Uh_5tlreg42641, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42648 = _Bits32ToUnsigned32(Uh_5tlreg42647, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42649 = 2; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42649 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42651(Uv_3ret, Uh_5tlreg42649 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42651.write(Uh_5tlreg42648);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg42652 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42653 = _Int32ToBits32(Uh_5tlreg42652, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42654 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42655 = _Int32ToUnsigned32(Uh_5tlreg42654, 2, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42657 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42658 = _ShiftOpRightBits32(Uh_5tlreg42657, Uh_5tlreg42655, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42659 = _BitwiseAndBits32(Uh_5tlreg42658, Uh_5tlreg42653, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42660 = _Bits32ToUnsigned32(Uh_5tlreg42659, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42661 = 3; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42661 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42663(Uv_3ret, Uh_5tlreg42661 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42663.write(Uh_5tlreg42660);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg42665 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42666(Uh_5tlreg42665); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42666); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg42668 = Uv_7percent.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42669 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42670 = _Int32ToUnsigned32(Uh_5tlreg42669, 8, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42671 = _BinOpSubtractUnsigned32(Uh_5tlreg42670, Uh_5tlreg42668, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg42671); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42672 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42673 = _Int32ToInt32(Uh_5tlreg42672, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42673); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42674 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42675 = _Int32ToInt32(Uh_5tlreg42674, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42677 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42678 = _BinOpCompareLessThanInt32(Uh_5tlreg42677, Uh_5tlreg42675, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42678, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg42680 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42680 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42682(Uv_4this, Uh_5tlreg42680 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42683 = Uh_6tlref42682.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42684 = _Unsigned32ToUnsigned32(Uh_5tlreg42683, 8, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg42684); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg42685 = 100u; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42686 = _Unsigned32ToUnsigned32(Uh_5tlreg42685, 7, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42688 = Uv_7percent.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42689 = 255; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42690 = _Int32ToUnsigned32(Uh_5tlreg42689, 9, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42691 = _BinOpMultiplyUnsigned32(Uh_5tlreg42690, Uh_5tlreg42688, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42693 = Uv_4rest.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42695 = Uv_3old.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42696 = _BinOpMultiplyUnsigned32(Uh_5tlreg42695, Uh_5tlreg42693, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42697 = _BinOpAddUnsigned32(Uh_5tlreg42696, Uh_5tlreg42691, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42698 = _BinOpDivideUnsigned32(Uh_5tlreg42697, Uh_5tlreg42686, 32); //gcnl:NodeBinaryOp.cpp:719
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg42698); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg42700 = Uv_3new.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42701 = _Unsigned32ToUnsigned32(Uh_5tlreg42700, 32, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42703 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42703 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42705(Uv_4this, Uh_5tlreg42703 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42705.write(Uh_5tlreg42701);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop17:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42706 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42708 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42709 = _BinOpAddInt32(Uh_5tlreg42708, Uh_5tlreg42706, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42709); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg42711 = Uv_4this.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42712(Uh_5tlreg42711); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42712); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg42713 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42714 = _Int32ToUnsigned32(Uh_5tlreg42713, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42715 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42715 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42717(Uv_4than, Uh_5tlreg42715 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42717.write(Uh_5tlreg42714);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg42718 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg42719 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg42720 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42721 = _Int32ToInt32(Uh_5tlreg42720, 2, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42722 = 1; //gcnl:NodeTerminal.cpp:721
      if(Uh_5tlreg42722 >= 4) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r10181u<EC> Uh_6tlref42724(Uv_4than, Uh_5tlreg42722 * 8u + 0u, uc); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg42725 = Uh_6tlref42724.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42726 = _Unsigned32ToInt32(Uh_5tlreg42725, 8, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42727 = _BinOpCompareEqEqInt32(Uh_5tlreg42726, Uh_5tlreg42721, 9); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42727, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42728 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42729 = _Int32ToInt32(Uh_5tlreg42728, 2, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42730 = 2; //gcnl:NodeTerminal.cpp:721
        if(Uh_5tlreg42730 >= 4) //gcnl:NodeSquareBracket.cpp:794
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
        Ui_Ut_r10181u<EC> Uh_6tlref42732(Uv_4than, Uh_5tlreg42730 * 8u + 0u, uc); //gcnl:Node.cpp:1303
        const u32 Uh_5tlreg42733 = Uh_6tlref42732.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42734 = _Unsigned32ToInt32(Uh_5tlreg42733, 8, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42735 = _BinOpCompareEqEqInt32(Uh_5tlreg42734, Uh_5tlreg42729, 9); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42719 = Uh_5tlreg42735; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42719, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42736 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42737 = _Int32ToInt32(Uh_5tlreg42736, 2, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42738 = 3; //gcnl:NodeTerminal.cpp:721
        if(Uh_5tlreg42738 >= 4) //gcnl:NodeSquareBracket.cpp:794
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
        Ui_Ut_r10181u<EC> Uh_6tlref42740(Uv_4than, Uh_5tlreg42738 * 8u + 0u, uc); //gcnl:Node.cpp:1303
        const u32 Uh_5tlreg42741 = Uh_6tlref42740.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42742 = _Unsigned32ToInt32(Uh_5tlreg42741, 8, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42743 = _BinOpCompareEqEqInt32(Uh_5tlreg42742, Uh_5tlreg42737, 9); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42718 = Uh_5tlreg42743; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42718, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg42745 = 197379; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42746 = _Int32ToUnsigned32(Uh_5tlreg42745, 19, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval42747(Uh_5tlreg42746); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_14181u<EC> Uh_5tlval42749 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42747); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg42750 = Uh_5tlval42749.read(); //gcnl:Node.cpp:1156
          Ui_Ut_14181u<EC> Uh_5tlval42751(Uh_5tlreg42750); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42751); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42752 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42753 = _Int32ToInt32(Uh_5tlreg42752, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42753); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42754 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42755 = _Int32ToInt32(Uh_5tlreg42754, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42757 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42758 = _BinOpCompareLessThanInt32(Uh_5tlreg42757, Uh_5tlreg42755, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42758, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg42759 = 3; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg42760 = _Int32ToInt32(Uh_5tlreg42759, 3, 9); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg42762 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg42762 >= 4) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10181u<EC> Uh_6tlref42764(Uv_4than, Uh_5tlreg42762 * 8u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg42765 = Uh_6tlref42764.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42766 = _Unsigned32ToInt32(Uh_5tlreg42765, 8, 9); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg42767 = _BinOpCompareLessThanInt32(Uh_5tlreg42766, Uh_5tlreg42760, 9); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg42767, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg42768 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg42769 = _Int32ToUnsigned32(Uh_5tlreg42768, 3, 8); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg42771 = Uv_1i.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg42771 >= 4) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10181u<EC> Uh_6tlref42773(Uv_4than, Uh_5tlreg42771 * 8u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref42773.write(Uh_5tlreg42769);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg42774 = 70; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42775 = _Int32ToInt32(Uh_5tlreg42774, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42777 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42777 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42779(Uv_4than, Uh_5tlreg42777 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42780 = Uh_6tlref42779.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42781 = _Unsigned32ToInt32(Uh_5tlreg42780, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42782 = 100; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42783 = _Int32ToInt32(Uh_5tlreg42782, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42784 = _BinOpMultiplyInt32(Uh_5tlreg42783, Uh_5tlreg42781, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42785 = _BinOpDivideInt32(Uh_5tlreg42784, Uh_5tlreg42775, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42786 = _Int32ToUnsigned32(Uh_5tlreg42785, 17, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42788 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42788 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42790(Uv_4than, Uh_5tlreg42788 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42790.write(Uh_5tlreg42786);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop18:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42791 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42793 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42794 = _BinOpAddInt32(Uh_5tlreg42793, Uh_5tlreg42791, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42794); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg42796 = Uv_4than.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42797(Uh_5tlreg42796); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42797); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg42798 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42799 = _Int32ToUnsigned32(Uh_5tlreg42798, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42800 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42800 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42802(Uv_4than, Uh_5tlreg42800 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42802.write(Uh_5tlreg42799);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg42803 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42804 = _Int32ToInt32(Uh_5tlreg42803, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42804); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42805 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42806 = _Int32ToInt32(Uh_5tlreg42805, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42808 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42809 = _BinOpCompareLessThanInt32(Uh_5tlreg42808, Uh_5tlreg42806, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42809, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg42810 = 100; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42811 = _Int32ToInt32(Uh_5tlreg42810, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42813 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42813 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42815(Uv_4than, Uh_5tlreg42813 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42816 = Uh_6tlref42815.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42817 = _Unsigned32ToInt32(Uh_5tlreg42816, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42818 = 70; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42819 = _Int32ToInt32(Uh_5tlreg42818, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42820 = _BinOpMultiplyInt32(Uh_5tlreg42819, Uh_5tlreg42817, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42821 = _BinOpDivideInt32(Uh_5tlreg42820, Uh_5tlreg42811, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42822 = _Int32ToUnsigned32(Uh_5tlreg42821, 17, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42824 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42824 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42826(Uv_4than, Uh_5tlreg42824 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42826.write(Uh_5tlreg42822);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop19:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg42827 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42829 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42830 = _BinOpAddInt32(Uh_5tlreg42829, Uh_5tlreg42827, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42830); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg42832 = Uv_4than.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42833(Uh_5tlreg42832); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42833); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6dimmer


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109210ColorUtils10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109210ColorUtils10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109210ColorUtils10<EC>::GetMangledClassName() const
  {
    return "Uq_10109210ColorUtils10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109210ColorUtils10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109210ColorUtils10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10109210ColorUtils10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  u32 Uq_10109210ColorUtils10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109210ColorUtils10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Uq_10109210ColorUtils10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Uq_10109210ColorUtils10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109210ColorUtils10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

