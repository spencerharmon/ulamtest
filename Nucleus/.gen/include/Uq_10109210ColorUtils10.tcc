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
  Uq_10109210ColorUtils10<EC>::Uq_10109210ColorUtils10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109210ColorUtils10", 0))
  { }

  template<class EC>
  Uq_10109210ColorUtils10<EC>::~Uq_10109210ColorUtils10(){} //gcnl:NodeBlockClass.cpp:1784


//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg42275 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42276 = _Int32ToBits32(Uh_5tlreg42275, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321t<EC> Uh_5tlval42277(Uh_5tlreg42276); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_14181u<EC> Uh_5tlval42279 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42277); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42280 = Uh_5tlval42279.read(); //gcnl:Node.cpp:1156
    Ui_Ut_14181u<EC> Uh_5tlval42281(Uh_5tlreg42280); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42281); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg42284 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42285 = _Unsigned32ToBits32(Uh_5tlreg42284, 32, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321t<EC> Uh_5tlval42286(Uh_5tlreg42285); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_14181u<EC> Uh_5tlval42288 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42286); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg42289 = Uh_5tlval42288.read(); //gcnl:Node.cpp:1156
    Ui_Ut_14181u<EC> Uh_5tlval42290(Uh_5tlreg42289); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42290); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:24:   ARGB color(Byte red, Byte green, Byte blue) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181t<EC>& Uv_3red, Ui_Ut_10181t<EC>& Uv_5green, Ui_Ut_10181t<EC>& Uv_4blue) const
  {

//! ColorUtils.ulam:25:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1096

//! ColorUtils.ulam:26:     ret[0] = (Channel) 0xff;
    const u32 Uh_5tlreg42291 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42292 = _Int32ToUnsigned32(Uh_5tlreg42291, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42293 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42293 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42295(Uv_3ret, Uh_5tlreg42293 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42295.write(Uh_5tlreg42292);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg42296 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42297 = _Int32ToBits32(Uh_5tlreg42296, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42299 = Uv_3red.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42300 = _Bits32ToBits32(Uh_5tlreg42299, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42301 = _BitwiseAndBits32(Uh_5tlreg42300, Uh_5tlreg42297, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42302 = _Bits32ToUnsigned32(Uh_5tlreg42301, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42303 = 1; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42303 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42305(Uv_3ret, Uh_5tlreg42303 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42305.write(Uh_5tlreg42302);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg42306 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42307 = _Int32ToBits32(Uh_5tlreg42306, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42309 = Uv_5green.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42310 = _Bits32ToBits32(Uh_5tlreg42309, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42311 = _BitwiseAndBits32(Uh_5tlreg42310, Uh_5tlreg42307, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42312 = _Bits32ToUnsigned32(Uh_5tlreg42311, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42313 = 2; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42313 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42315(Uv_3ret, Uh_5tlreg42313 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42315.write(Uh_5tlreg42312);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg42316 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42317 = _Int32ToBits32(Uh_5tlreg42316, 9, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42319 = Uv_4blue.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42320 = _Bits32ToBits32(Uh_5tlreg42319, 8, 9); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42321 = _BitwiseAndBits32(Uh_5tlreg42320, Uh_5tlreg42317, 9); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42322 = _Bits32ToUnsigned32(Uh_5tlreg42321, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42323 = 3; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42323 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42325(Uv_3ret, Uh_5tlreg42323 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42325.write(Uh_5tlreg42322);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg42327 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42328(Uh_5tlreg42327); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42328); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1096

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg42329 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42330 = _Int32ToBits32(Uh_5tlreg42329, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42331 = 24; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42332 = _Int32ToUnsigned32(Uh_5tlreg42331, 6, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42334 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42335 = _ShiftOpRightBits32(Uh_5tlreg42334, Uh_5tlreg42332, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42336 = _BitwiseAndBits32(Uh_5tlreg42335, Uh_5tlreg42330, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42337 = _Bits32ToUnsigned32(Uh_5tlreg42336, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42338 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42338 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42340(Uv_3ret, Uh_5tlreg42338 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42340.write(Uh_5tlreg42337);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg42341 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42342 = _Int32ToBits32(Uh_5tlreg42341, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42343 = 16; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42344 = _Int32ToUnsigned32(Uh_5tlreg42343, 6, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42346 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42347 = _ShiftOpRightBits32(Uh_5tlreg42346, Uh_5tlreg42344, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42348 = _BitwiseAndBits32(Uh_5tlreg42347, Uh_5tlreg42342, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42349 = _Bits32ToUnsigned32(Uh_5tlreg42348, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42350 = 1; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42350 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42352(Uv_3ret, Uh_5tlreg42350 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42352.write(Uh_5tlreg42349);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg42353 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42354 = _Int32ToBits32(Uh_5tlreg42353, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42355 = 8; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42356 = _Int32ToUnsigned32(Uh_5tlreg42355, 5, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42358 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42359 = _ShiftOpRightBits32(Uh_5tlreg42358, Uh_5tlreg42356, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42360 = _BitwiseAndBits32(Uh_5tlreg42359, Uh_5tlreg42354, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42361 = _Bits32ToUnsigned32(Uh_5tlreg42360, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42362 = 2; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42362 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42364(Uv_3ret, Uh_5tlreg42362 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42364.write(Uh_5tlreg42361);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg42365 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42366 = _Int32ToBits32(Uh_5tlreg42365, 9, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42367 = 0; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42368 = _Int32ToUnsigned32(Uh_5tlreg42367, 2, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42370 = Uv_3hex.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42371 = _ShiftOpRightBits32(Uh_5tlreg42370, Uh_5tlreg42368, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42372 = _BitwiseAndBits32(Uh_5tlreg42371, Uh_5tlreg42366, 32); //gcnl:NodeBinaryOp.cpp:719
    const u32 Uh_5tlreg42373 = _Bits32ToUnsigned32(Uh_5tlreg42372, 32, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42374 = 3; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42374 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42376(Uv_3ret, Uh_5tlreg42374 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42376.write(Uh_5tlreg42373);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg42378 = Uv_3ret.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42379(Uh_5tlreg42378); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42379); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg42381 = Uv_7percent.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg42382 = 100; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42383 = _Int32ToUnsigned32(Uh_5tlreg42382, 8, 32); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42384 = _BinOpSubtractUnsigned32(Uh_5tlreg42383, Uh_5tlreg42381, 32); //gcnl:NodeBinaryOp.cpp:719
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg42384); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42385 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42386 = _Int32ToInt32(Uh_5tlreg42385, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42386); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42387 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42388 = _Int32ToInt32(Uh_5tlreg42387, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42390 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42391 = _BinOpCompareLessThanInt32(Uh_5tlreg42390, Uh_5tlreg42388, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42391, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg42393 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42393 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42395(Uv_4this, Uh_5tlreg42393 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42396 = Uh_6tlref42395.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42397 = _Unsigned32ToUnsigned32(Uh_5tlreg42396, 8, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg42397); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg42398 = 100u; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42399 = _Unsigned32ToUnsigned32(Uh_5tlreg42398, 7, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42401 = Uv_7percent.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42402 = 255; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42403 = _Int32ToUnsigned32(Uh_5tlreg42402, 9, 32); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42404 = _BinOpMultiplyUnsigned32(Uh_5tlreg42403, Uh_5tlreg42401, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42406 = Uv_4rest.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42408 = Uv_3old.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42409 = _BinOpMultiplyUnsigned32(Uh_5tlreg42408, Uh_5tlreg42406, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42410 = _BinOpAddUnsigned32(Uh_5tlreg42409, Uh_5tlreg42404, 32); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42411 = _BinOpDivideUnsigned32(Uh_5tlreg42410, Uh_5tlreg42399, 32); //gcnl:NodeBinaryOp.cpp:719
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg42411); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg42413 = Uv_3new.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42414 = _Unsigned32ToUnsigned32(Uh_5tlreg42413, 32, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42416 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42416 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42418(Uv_4this, Uh_5tlreg42416 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42418.write(Uh_5tlreg42414);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop11:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42419 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42421 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42422 = _BinOpAddInt32(Uh_5tlreg42421, Uh_5tlreg42419, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42422); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg42424 = Uv_4this.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42425(Uh_5tlreg42424); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42425); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg42426 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42427 = _Int32ToUnsigned32(Uh_5tlreg42426, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42428 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42428 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42430(Uv_4than, Uh_5tlreg42428 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42430.write(Uh_5tlreg42427);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg42431 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg42432 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg42433 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42434 = _Int32ToInt32(Uh_5tlreg42433, 2, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42435 = 1; //gcnl:NodeTerminal.cpp:721
      if(Uh_5tlreg42435 >= 4) //gcnl:NodeSquareBracket.cpp:794
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
      Ui_Ut_r10181u<EC> Uh_6tlref42437(Uv_4than, Uh_5tlreg42435 * 8u + 0u, uc); //gcnl:Node.cpp:1303
      const u32 Uh_5tlreg42438 = Uh_6tlref42437.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg42439 = _Unsigned32ToInt32(Uh_5tlreg42438, 8, 9); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg42440 = _BinOpCompareEqEqInt32(Uh_5tlreg42439, Uh_5tlreg42434, 9); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg42440, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42441 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42442 = _Int32ToInt32(Uh_5tlreg42441, 2, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42443 = 2; //gcnl:NodeTerminal.cpp:721
        if(Uh_5tlreg42443 >= 4) //gcnl:NodeSquareBracket.cpp:794
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
        Ui_Ut_r10181u<EC> Uh_6tlref42445(Uv_4than, Uh_5tlreg42443 * 8u + 0u, uc); //gcnl:Node.cpp:1303
        const u32 Uh_5tlreg42446 = Uh_6tlref42445.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42447 = _Unsigned32ToInt32(Uh_5tlreg42446, 8, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42448 = _BinOpCompareEqEqInt32(Uh_5tlreg42447, Uh_5tlreg42442, 9); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42432 = Uh_5tlreg42448; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42432, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42449 = 0; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42450 = _Int32ToInt32(Uh_5tlreg42449, 2, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42451 = 3; //gcnl:NodeTerminal.cpp:721
        if(Uh_5tlreg42451 >= 4) //gcnl:NodeSquareBracket.cpp:794
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
        Ui_Ut_r10181u<EC> Uh_6tlref42453(Uv_4than, Uh_5tlreg42451 * 8u + 0u, uc); //gcnl:Node.cpp:1303
        const u32 Uh_5tlreg42454 = Uh_6tlref42453.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42455 = _Unsigned32ToInt32(Uh_5tlreg42454, 8, 9); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42456 = _BinOpCompareEqEqInt32(Uh_5tlreg42455, Uh_5tlreg42450, 9); //gcnl:NodeBinaryOpCompare.cpp:313
        Uh_5tlreg42431 = Uh_5tlreg42456; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42431, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg42458 = 197379; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42459 = _Int32ToUnsigned32(Uh_5tlreg42458, 19, 32); //gcnl:NodeCast.cpp:723
          Ui_Ut_102321u<EC> Uh_5tlval42460(Uh_5tlreg42459); //func arg& //gcnl:Node.cpp:1128
          const Ui_Ut_14181u<EC> Uh_5tlval42462 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42460); //gcnl:NodeFunctionCall.cpp:1006
          const u32 Uh_5tlreg42463 = Uh_5tlval42462.read(); //gcnl:Node.cpp:1156
          Ui_Ut_14181u<EC> Uh_5tlval42464(Uh_5tlreg42463); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval42464); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42465 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42466 = _Int32ToInt32(Uh_5tlreg42465, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42466); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42467 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42468 = _Int32ToInt32(Uh_5tlreg42467, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42470 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42471 = _BinOpCompareLessThanInt32(Uh_5tlreg42470, Uh_5tlreg42468, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42471, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg42472 = 3; //gcnl:NodeTerminal.cpp:721
            const u32 Uh_5tlreg42473 = _Int32ToInt32(Uh_5tlreg42472, 3, 9); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg42475 = Uv_1i.read(); //gcnl:Node.cpp:691
            if(Uh_5tlreg42475 >= 4) //gcnl:NodeSquareBracket.cpp:794
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
            Ui_Ut_r10181u<EC> Uh_6tlref42477(Uv_4than, Uh_5tlreg42475 * 8u + 0u, uc); //gcnl:Node.cpp:1303
            const u32 Uh_5tlreg42478 = Uh_6tlref42477.read(); //gcnl:Node.cpp:691
            const u32 Uh_5tlreg42479 = _Unsigned32ToInt32(Uh_5tlreg42478, 8, 9); //gcnl:NodeCast.cpp:723
            const u32 Uh_5tlreg42480 = _BinOpCompareLessThanInt32(Uh_5tlreg42479, Uh_5tlreg42473, 9); //gcnl:NodeBinaryOpCompare.cpp:313
            if(_Bool32ToCbool(Uh_5tlreg42480, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg42481 = 3; //gcnl:NodeTerminal.cpp:721
                const u32 Uh_5tlreg42482 = _Int32ToUnsigned32(Uh_5tlreg42481, 3, 8); //gcnl:NodeCast.cpp:723
                const u32 Uh_5tlreg42484 = Uv_1i.read(); //gcnl:Node.cpp:691
                if(Uh_5tlreg42484 >= 4) //gcnl:NodeSquareBracket.cpp:794
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
                Ui_Ut_r10181u<EC> Uh_6tlref42486(Uv_4than, Uh_5tlreg42484 * 8u + 0u, uc); //gcnl:Node.cpp:1303
                Uh_6tlref42486.write(Uh_5tlreg42482);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg42487 = 70; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42488 = _Int32ToInt32(Uh_5tlreg42487, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42490 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42490 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42492(Uv_4than, Uh_5tlreg42490 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42493 = Uh_6tlref42492.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42494 = _Unsigned32ToInt32(Uh_5tlreg42493, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42495 = 100; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42496 = _Int32ToInt32(Uh_5tlreg42495, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42497 = _BinOpMultiplyInt32(Uh_5tlreg42496, Uh_5tlreg42494, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42498 = _BinOpDivideInt32(Uh_5tlreg42497, Uh_5tlreg42488, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42499 = _Int32ToUnsigned32(Uh_5tlreg42498, 17, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42501 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42501 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42503(Uv_4than, Uh_5tlreg42501 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42503.write(Uh_5tlreg42499);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop12:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42504 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42506 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42507 = _BinOpAddInt32(Uh_5tlreg42506, Uh_5tlreg42504, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42507); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg42509 = Uv_4than.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42510(Uh_5tlreg42509); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42510); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg42511 = 255; //gcnl:NodeTerminal.cpp:721
    const u32 Uh_5tlreg42512 = _Int32ToUnsigned32(Uh_5tlreg42511, 9, 8); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg42513 = 0; //gcnl:NodeTerminal.cpp:721
    if(Uh_5tlreg42513 >= 4) //gcnl:NodeSquareBracket.cpp:794
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
    Ui_Ut_r10181u<EC> Uh_6tlref42515(Uv_4than, Uh_5tlreg42513 * 8u + 0u, uc); //gcnl:Node.cpp:1303
    Uh_6tlref42515.write(Uh_5tlreg42512);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg42516 = 1; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg42517 = _Int32ToInt32(Uh_5tlreg42516, 2, 32); //gcnl:NodeCast.cpp:723
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42517); //gcnl:NodeVarDecl.cpp:1060

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42518 = 4; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42519 = _Int32ToInt32(Uh_5tlreg42518, 4, 32); //gcnl:NodeCast.cpp:723
        const u32 Uh_5tlreg42521 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42522 = _BinOpCompareLessThanInt32(Uh_5tlreg42521, Uh_5tlreg42519, 32); //gcnl:NodeBinaryOpCompare.cpp:313

        if(!_Bool32ToCbool(Uh_5tlreg42522, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg42523 = 100; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42524 = _Int32ToInt32(Uh_5tlreg42523, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42526 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42526 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42528(Uv_4than, Uh_5tlreg42526 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          const u32 Uh_5tlreg42529 = Uh_6tlref42528.read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg42530 = _Unsigned32ToInt32(Uh_5tlreg42529, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42531 = 70; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg42532 = _Int32ToInt32(Uh_5tlreg42531, 8, 17); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42533 = _BinOpMultiplyInt32(Uh_5tlreg42532, Uh_5tlreg42530, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42534 = _BinOpDivideInt32(Uh_5tlreg42533, Uh_5tlreg42524, 17); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg42535 = _Int32ToUnsigned32(Uh_5tlreg42534, 17, 8); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg42537 = Uv_1i.read(); //gcnl:Node.cpp:691
          if(Uh_5tlreg42537 >= 4) //gcnl:NodeSquareBracket.cpp:794
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:798
          Ui_Ut_r10181u<EC> Uh_6tlref42539(Uv_4than, Uh_5tlreg42537 * 8u + 0u, uc); //gcnl:Node.cpp:1303
          Uh_6tlref42539.write(Uh_5tlreg42535);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop13:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg42540 = 1; //gcnl:NodeTerminal.cpp:721
        const u32 Uh_5tlreg42542 = Uv_1i.read(); //gcnl:Node.cpp:691
        const u32 Uh_5tlreg42543 = _BinOpAddInt32(Uh_5tlreg42542, Uh_5tlreg42540, 32); //gcnl:NodeBinaryOpEqualArith.cpp:128
        Uv_1i.write(Uh_5tlreg42543); //gcnl:Node.cpp:885
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg42545 = Uv_4than.read(); //gcnl:Node.cpp:691
    Ui_Ut_14181u<EC> Uh_5tlval42546(Uh_5tlreg42545); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval42546); //gcnl:NodeReturnStatement.cpp:343

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

