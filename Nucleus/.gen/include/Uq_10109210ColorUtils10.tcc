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
#include "Ue_102158EggShell10.h"
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
    const u32 Uh_5tlreg42564 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42565 = _Int32ToUnsigned32(Uh_5tlreg42564, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42566 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42566 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42568(Uv_3ret, Uh_5tlreg42566 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42568.write(Uh_5tlreg42565);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg42569 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42570 = _Int32ToBits32(Uh_5tlreg42569, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42572 = Uv_3red.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42573 = _Bits32ToBits32(Uh_5tlreg42572, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42574 = _BitwiseAndBits32(Uh_5tlreg42573, Uh_5tlreg42570, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42575 = _Bits32ToUnsigned32(Uh_5tlreg42574, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42576 = 1; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42576 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42578(Uv_3ret, Uh_5tlreg42576 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42578.write(Uh_5tlreg42575);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg42579 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42580 = _Int32ToBits32(Uh_5tlreg42579, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42582 = Uv_5green.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42583 = _Bits32ToBits32(Uh_5tlreg42582, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42584 = _BitwiseAndBits32(Uh_5tlreg42583, Uh_5tlreg42580, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42585 = _Bits32ToUnsigned32(Uh_5tlreg42584, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42586 = 2; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42586 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42588(Uv_3ret, Uh_5tlreg42586 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42588.write(Uh_5tlreg42585);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg42589 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42590 = _Int32ToBits32(Uh_5tlreg42589, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42592 = Uv_4blue.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42593 = _Bits32ToBits32(Uh_5tlreg42592, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42594 = _BitwiseAndBits32(Uh_5tlreg42593, Uh_5tlreg42590, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42595 = _Bits32ToUnsigned32(Uh_5tlreg42594, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42596 = 3; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42596 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42598(Uv_3ret, Uh_5tlreg42596 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42598.write(Uh_5tlreg42595);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg42600 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42601(Uh_5tlreg42600); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42601); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg42604 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42605 = _Int32ToBits32(Uh_5tlreg42604, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321t<EC> Uh_5tlval42606(Uh_5tlreg42605); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_14181u<EC> Uh_5tlval42608 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42606); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42609 = Uh_5tlval42608.read(); //gcnl:Node.cpp:1156
    Ui_Ut_14181u<EC> Uh_5tlval42610(Uh_5tlreg42609); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42610); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg42613 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42614 = _Unsigned32ToBits32(Uh_5tlreg42613, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321t<EC> Uh_5tlval42615(Uh_5tlreg42614); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_14181u<EC> Uh_5tlval42617 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42615); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42618 = Uh_5tlval42617.read(); //gcnl:Node.cpp:1156
    Ui_Ut_14181u<EC> Uh_5tlval42619(Uh_5tlreg42618); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42619); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1096

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg42620 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42621 = _Int32ToBits32(Uh_5tlreg42620, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42622 = 24; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42623 = _Int32ToUnsigned32(Uh_5tlreg42622, 6, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42625 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42626 = _ShiftOpRightBits32(Uh_5tlreg42625, Uh_5tlreg42623, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42627 = _BitwiseAndBits32(Uh_5tlreg42626, Uh_5tlreg42621, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42628 = _Bits32ToUnsigned32(Uh_5tlreg42627, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42629 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42629 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42631(Uv_3ret, Uh_5tlreg42629 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42631.write(Uh_5tlreg42628);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg42632 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42633 = _Int32ToBits32(Uh_5tlreg42632, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42634 = 16; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42635 = _Int32ToUnsigned32(Uh_5tlreg42634, 6, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42637 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42638 = _ShiftOpRightBits32(Uh_5tlreg42637, Uh_5tlreg42635, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42639 = _BitwiseAndBits32(Uh_5tlreg42638, Uh_5tlreg42633, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42640 = _Bits32ToUnsigned32(Uh_5tlreg42639, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42641 = 1; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42641 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42643(Uv_3ret, Uh_5tlreg42641 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42643.write(Uh_5tlreg42640);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg42644 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42645 = _Int32ToBits32(Uh_5tlreg42644, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42646 = 8; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42647 = _Int32ToUnsigned32(Uh_5tlreg42646, 5, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42649 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42650 = _ShiftOpRightBits32(Uh_5tlreg42649, Uh_5tlreg42647, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42651 = _BitwiseAndBits32(Uh_5tlreg42650, Uh_5tlreg42645, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42652 = _Bits32ToUnsigned32(Uh_5tlreg42651, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42653 = 2; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42653 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42655(Uv_3ret, Uh_5tlreg42653 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42655.write(Uh_5tlreg42652);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg42656 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42657 = _Int32ToBits32(Uh_5tlreg42656, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42658 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42659 = _Int32ToUnsigned32(Uh_5tlreg42658, 2, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42661 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42662 = _ShiftOpRightBits32(Uh_5tlreg42661, Uh_5tlreg42659, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42663 = _BitwiseAndBits32(Uh_5tlreg42662, Uh_5tlreg42657, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42664 = _Bits32ToUnsigned32(Uh_5tlreg42663, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42665 = 3; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42665 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42667(Uv_3ret, Uh_5tlreg42665 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42667.write(Uh_5tlreg42664);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg42669 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42670(Uh_5tlreg42669); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42670); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg42672 = Uv_7percent.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42673 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42674 = _Int32ToUnsigned32(Uh_5tlreg42673, 8, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42675 = _BinOpSubtractUnsigned32(Uh_5tlreg42674, Uh_5tlreg42672, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg42675); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42676 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42677 = _Int32ToInt32(Uh_5tlreg42676, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42677); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42678 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42679 = _Int32ToInt32(Uh_5tlreg42678, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42681 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42682 = _BinOpCompareLessThanInt32(Uh_5tlreg42681, Uh_5tlreg42679, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42682, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg42684 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42684 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42686(Uv_4this, Uh_5tlreg42684 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42687 = Uh_6tlref42686.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42688 = _Unsigned32ToUnsigned32(Uh_5tlreg42687, 8, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg42688); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg42689 = 100u; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42690 = _Unsigned32ToUnsigned32(Uh_5tlreg42689, 7, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42692 = Uv_7percent.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42693 = 255; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42694 = _Int32ToUnsigned32(Uh_5tlreg42693, 9, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42695 = _BinOpMultiplyUnsigned32(Uh_5tlreg42694, Uh_5tlreg42692, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42697 = Uv_4rest.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42699 = Uv_3old.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42700 = _BinOpMultiplyUnsigned32(Uh_5tlreg42699, Uh_5tlreg42697, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42701 = _BinOpAddUnsigned32(Uh_5tlreg42700, Uh_5tlreg42695, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42702 = _BinOpDivideUnsigned32(Uh_5tlreg42701, Uh_5tlreg42690, 32); //gcnl:NodeBinaryOp.cpp:719
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg42702); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg42704 = Uv_3new.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42705 = _Unsigned32ToUnsigned32(Uh_5tlreg42704, 32, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42707 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42707 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42709(Uv_4this, Uh_5tlreg42707 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42709.write(Uh_5tlreg42705);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop17:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42710 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42712 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42713 = _BinOpAddInt32(Uh_5tlreg42712, Uh_5tlreg42710, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42713); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg42715 = Uv_4this.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42716(Uh_5tlreg42715); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42716); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg42717 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42718 = _Int32ToUnsigned32(Uh_5tlreg42717, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42719 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42719 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42721(Uv_4than, Uh_5tlreg42719 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42721.write(Uh_5tlreg42718);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg42722 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg42723 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg42724 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42725 = _Int32ToInt32(Uh_5tlreg42724, 2, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42726 = 1; //gcnl:NodeTerminal.cpp:721
      if(Uh_5tlreg42726 >= 4) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r10181u<EC> Uh_6tlref42728(Uv_4than, Uh_5tlreg42726 * 8u + 0u, uc); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg42729 = Uh_6tlref42728.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42730 = _Unsigned32ToInt32(Uh_5tlreg42729, 8, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42731 = _BinOpCompareEqEqInt32(Uh_5tlreg42730, Uh_5tlreg42725, 9); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42731, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42732 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42733 = _Int32ToInt32(Uh_5tlreg42732, 2, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42734 = 2; //gcnl:NodeTerminal.cpp:721
        if(Uh_5tlreg42734 >= 4) //gcnl:NodeSquareBracket.cpp:794
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
        Ui_Ut_r10181u<EC> Uh_6tlref42736(Uv_4than, Uh_5tlreg42734 * 8u + 0u, uc); //gcnl:Node.cpp:1303
        const u32 Uh_5tlreg42737 = Uh_6tlref42736.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42738 = _Unsigned32ToInt32(Uh_5tlreg42737, 8, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42739 = _BinOpCompareEqEqInt32(Uh_5tlreg42738, Uh_5tlreg42733, 9); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42723 = Uh_5tlreg42739; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42723, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42740 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42741 = _Int32ToInt32(Uh_5tlreg42740, 2, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42742 = 3; //gcnl:NodeTerminal.cpp:721
        if(Uh_5tlreg42742 >= 4) //gcnl:NodeSquareBracket.cpp:794
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
        Ui_Ut_r10181u<EC> Uh_6tlref42744(Uv_4than, Uh_5tlreg42742 * 8u + 0u, uc); //gcnl:Node.cpp:1303
        const u32 Uh_5tlreg42745 = Uh_6tlref42744.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42746 = _Unsigned32ToInt32(Uh_5tlreg42745, 8, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42747 = _BinOpCompareEqEqInt32(Uh_5tlreg42746, Uh_5tlreg42741, 9); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42722 = Uh_5tlreg42747; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42722, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg42749 = 197379; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42750 = _Int32ToUnsigned32(Uh_5tlreg42749, 19, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval42751(Uh_5tlreg42750); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_14181u<EC> Uh_5tlval42753 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42751); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg42754 = Uh_5tlval42753.read(); //gcnl:Node.cpp:1156
          Ui_Ut_14181u<EC> Uh_5tlval42755(Uh_5tlreg42754); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42755); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42756 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42757 = _Int32ToInt32(Uh_5tlreg42756, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42757); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42758 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42759 = _Int32ToInt32(Uh_5tlreg42758, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42761 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42762 = _BinOpCompareLessThanInt32(Uh_5tlreg42761, Uh_5tlreg42759, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42762, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg42763 = 3; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg42764 = _Int32ToInt32(Uh_5tlreg42763, 3, 9); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg42766 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg42766 >= 4) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10181u<EC> Uh_6tlref42768(Uv_4than, Uh_5tlreg42766 * 8u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg42769 = Uh_6tlref42768.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42770 = _Unsigned32ToInt32(Uh_5tlreg42769, 8, 9); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg42771 = _BinOpCompareLessThanInt32(Uh_5tlreg42770, Uh_5tlreg42764, 9); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg42771, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg42772 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg42773 = _Int32ToUnsigned32(Uh_5tlreg42772, 3, 8); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg42775 = Uv_1i.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg42775 >= 4) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10181u<EC> Uh_6tlref42777(Uv_4than, Uh_5tlreg42775 * 8u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref42777.write(Uh_5tlreg42773);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg42778 = 70; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42779 = _Int32ToInt32(Uh_5tlreg42778, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42781 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42781 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42783(Uv_4than, Uh_5tlreg42781 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42784 = Uh_6tlref42783.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42785 = _Unsigned32ToInt32(Uh_5tlreg42784, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42786 = 100; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42787 = _Int32ToInt32(Uh_5tlreg42786, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42788 = _BinOpMultiplyInt32(Uh_5tlreg42787, Uh_5tlreg42785, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42789 = _BinOpDivideInt32(Uh_5tlreg42788, Uh_5tlreg42779, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42790 = _Int32ToUnsigned32(Uh_5tlreg42789, 17, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42792 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42792 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42794(Uv_4than, Uh_5tlreg42792 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42794.write(Uh_5tlreg42790);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop18:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42795 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42797 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42798 = _BinOpAddInt32(Uh_5tlreg42797, Uh_5tlreg42795, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42798); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg42800 = Uv_4than.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42801(Uh_5tlreg42800); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42801); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg42802 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42803 = _Int32ToUnsigned32(Uh_5tlreg42802, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42804 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42804 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42806(Uv_4than, Uh_5tlreg42804 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42806.write(Uh_5tlreg42803);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg42807 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42808 = _Int32ToInt32(Uh_5tlreg42807, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42808); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42809 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42810 = _Int32ToInt32(Uh_5tlreg42809, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42812 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42813 = _BinOpCompareLessThanInt32(Uh_5tlreg42812, Uh_5tlreg42810, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42813, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg42814 = 100; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42815 = _Int32ToInt32(Uh_5tlreg42814, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42817 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42817 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42819(Uv_4than, Uh_5tlreg42817 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42820 = Uh_6tlref42819.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42821 = _Unsigned32ToInt32(Uh_5tlreg42820, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42822 = 70; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42823 = _Int32ToInt32(Uh_5tlreg42822, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42824 = _BinOpMultiplyInt32(Uh_5tlreg42823, Uh_5tlreg42821, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42825 = _BinOpDivideInt32(Uh_5tlreg42824, Uh_5tlreg42815, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42826 = _Int32ToUnsigned32(Uh_5tlreg42825, 17, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42828 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42828 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42830(Uv_4than, Uh_5tlreg42828 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42830.write(Uh_5tlreg42826);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop19:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg42831 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42833 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42834 = _BinOpAddInt32(Uh_5tlreg42833, Uh_5tlreg42831, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42834); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg42836 = Uv_4than.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42837(Uh_5tlreg42836); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42837); //gcnl:NodeReturnStatement.cpp:343

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

