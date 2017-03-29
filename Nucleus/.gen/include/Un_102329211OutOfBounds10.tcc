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
#include "Uq_10109211ClusterByID10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Un_10411209215SiteVisitorByID10.h"
#include "Ue_102188EggShell10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Un_1035449217SiteVisitorByType10.h"

namespace MFM{

  template<class EC>
  Un_102329211OutOfBounds10<EC>::Un_102329211OutOfBounds10() : UlamTransient<EC>(MFM_UUID_FOR("Un102329211OutOfBounds10", 0))
  { }

  template<class EC>
  Un_102329211OutOfBounds10<EC>::~Un_102329211OutOfBounds10(){} //gcnl:NodeBlockClass.cpp:1826


//! OutOfBounds.ulam:16: 	C2D abs(C2D site){
  template<class EC>
  Ui_Uq_102323C2D10<EC> Un_102329211OutOfBounds10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_4site) const
  {

//! OutOfBounds.ulam:17: 		Int x;
    Ui_Ut_102321i<EC> Uv_1x; //gcnl:NodeVarDecl.cpp:1096

//! OutOfBounds.ulam:18: 		Int y;
    Ui_Ut_102321i<EC> Uv_1y; //gcnl:NodeVarDecl.cpp:1096

//! OutOfBounds.ulam:19: 		if (site.x > 0){
    {

//! OutOfBounds.ulam:19: 		if (site.x > 0){
      const u32 Uh_5tlreg45173 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg45174 = _Int32ToInt32(Uh_5tlreg45173, 2, 16); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg45177 = UlamRef<EC>(0u, 16u, Uv_4site, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg45178 = _BinOpCompareGreaterThanInt32(Uh_5tlreg45177, Uh_5tlreg45174, 16); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg45178, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! OutOfBounds.ulam:20: 			x = site.x;
          const u32 Uh_5tlreg45181 = UlamRef<EC>(0u, 16u, Uv_4site, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg45182 = _Int32ToInt32(Uh_5tlreg45181, 16, 32); //gcnl:NodeCast.cpp:723
          Uv_1x.write(Uh_5tlreg45182); //gcnl:Node.cpp:885
        }
      } // end if
      else
      {
        {

//! OutOfBounds.ulam:23: 			x = site.x*-1;
          const u32 Uh_5tlreg45184 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg45185 = _Int32ToInt32(Uh_5tlreg45184, 2, 18); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg45188 = UlamRef<EC>(0u, 16u, Uv_4site, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg45189 = _Int32ToInt32(Uh_5tlreg45188, 16, 18); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg45190 = _BinOpMultiplyInt32(Uh_5tlreg45189, Uh_5tlreg45185, 18); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg45191 = _Int32ToInt32(Uh_5tlreg45190, 18, 32); //gcnl:NodeCast.cpp:723
          Uv_1x.write(Uh_5tlreg45191); //gcnl:Node.cpp:885
        }
      } //end else
    }

//! OutOfBounds.ulam:25: 		if (site.y > 0){
    {

//! OutOfBounds.ulam:25: 		if (site.y > 0){
      const u32 Uh_5tlreg45193 = 0; //gcnl:NodeTerminal.cpp:721
      const u32 Uh_5tlreg45194 = _Int32ToInt32(Uh_5tlreg45193, 2, 16); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg45197 = UlamRef<EC>(16u, 16u, Uv_4site, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg45198 = _BinOpCompareGreaterThanInt32(Uh_5tlreg45197, Uh_5tlreg45194, 16); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg45198, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! OutOfBounds.ulam:26: 			y = site.y;
          const u32 Uh_5tlreg45201 = UlamRef<EC>(16u, 16u, Uv_4site, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg45202 = _Int32ToInt32(Uh_5tlreg45201, 16, 32); //gcnl:NodeCast.cpp:723
          Uv_1y.write(Uh_5tlreg45202); //gcnl:Node.cpp:885
        }
      } // end if
      else
      {
        {

//! OutOfBounds.ulam:29: 			y = site.y*-1;
          const u32 Uh_5tlreg45204 = (u32) -1; //gcnl:NodeTerminal.cpp:721
          const u32 Uh_5tlreg45205 = _Int32ToInt32(Uh_5tlreg45204, 2, 18); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg45208 = UlamRef<EC>(16u, 16u, Uv_4site, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
          const u32 Uh_5tlreg45209 = _Int32ToInt32(Uh_5tlreg45208, 16, 18); //gcnl:NodeCast.cpp:723
          const u32 Uh_5tlreg45210 = _BinOpMultiplyInt32(Uh_5tlreg45209, Uh_5tlreg45205, 18); //gcnl:NodeBinaryOp.cpp:719
          const u32 Uh_5tlreg45211 = _Int32ToInt32(Uh_5tlreg45210, 18, 32); //gcnl:NodeCast.cpp:723
          Uv_1y.write(Uh_5tlreg45211); //gcnl:Node.cpp:885
        }
      } //end else
    }

//! OutOfBounds.ulam:31: 		C2D val = cd.make((Int(16)) x,(Int(16)) y);
    UlamRef<EC> Uh_3tur45214(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg45216 = Uv_1x.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg45217 = _Int32ToInt32(Uh_5tlreg45216, 32, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg45218 = _Int32ToInt32(Uh_5tlreg45217, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval45219(Uh_5tlreg45218); //func arg& //gcnl:Node.cpp:1128
    const u32 Uh_5tlreg45221 = Uv_1y.read(); //gcnl:Node.cpp:691
    const u32 Uh_5tlreg45222 = _Int32ToInt32(Uh_5tlreg45221, 32, 16); //gcnl:NodeCast.cpp:723
    const u32 Uh_5tlreg45223 = _Int32ToInt32(Uh_5tlreg45222, 16, 32); //gcnl:NodeCast.cpp:723
    Ui_Ut_102321i<EC> Uh_5tlval45224(Uh_5tlreg45223); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval45226 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4make(uc, Uh_3tur45214, Uh_5tlval45219, Uh_5tlval45224); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uv_3val(Uh_5tlval45226.read()); //gcnl:NodeVarDecl.cpp:1060

//! OutOfBounds.ulam:32: 		return val;
    const u32 Uh_5tlreg45228 = Uv_3val.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval45229(Uh_5tlreg45228); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval45229); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! OutOfBounds.ulam:38: 	Bool isOOB(C2D site){
  template<class EC>
  Ui_Ut_10111b<EC> Un_102329211OutOfBounds10<EC>::Uf_5isOOB(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_4site) const
  {

//! OutOfBounds.ulam:39: 		C2D val = abs(site);
    const u32 Uh_5tlreg45232 = Uv_4site.read(); //gcnl:Node.cpp:691
    Ui_Uq_102323C2D10<EC> Uh_5tlval45233(Uh_5tlreg45232); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval45235 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval45233); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uv_3val(Uh_5tlval45235.read()); //gcnl:NodeVarDecl.cpp:1060

//! OutOfBounds.ulam:40: 		Int(16) x;
    Ui_Ut_102161i<EC> Uv_1x; //gcnl:NodeVarDecl.cpp:1096

//! OutOfBounds.ulam:41: 		x = val.x;
    const u32 Uh_5tlreg45238 = UlamRef<EC>(0u, 16u, Uv_3val, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    Uv_1x.write(Uh_5tlreg45238); //gcnl:Node.cpp:885

//! OutOfBounds.ulam:42: 		Int(16) y;
    Ui_Ut_102161i<EC> Uv_1y; //gcnl:NodeVarDecl.cpp:1096

//! OutOfBounds.ulam:43: 		y = val.y;
    const u32 Uh_5tlreg45242 = UlamRef<EC>(16u, 16u, Uv_3val, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:691
    Uv_1y.write(Uh_5tlreg45242); //gcnl:Node.cpp:885

//! OutOfBounds.ulam:45: 		if ((Int(16)) x + (Int(16)) y > (Int(17)) ew.getRadius()){
    {

//! OutOfBounds.ulam:45: 		if ((Int(16)) x + (Int(16)) y > (Int(17)) ew.getRadius()){
      UlamRef<EC> Uh_3tur45245(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
      const Ui_Ut_102321u<EC> Uh_5tlval45247 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_919getRadius(uc, Uh_3tur45245); //gcnl:NodeFunctionCall.cpp:1006
      const u32 Uh_5tlreg45248 = Uh_5tlval45247.read(); //gcnl:Node.cpp:1156
      const u32 Uh_5tlreg45249 = _Unsigned32ToInt32(Uh_5tlreg45248, 32, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg45251 = Uv_1y.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg45252 = _Int32ToInt32(Uh_5tlreg45251, 16, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg45254 = Uv_1x.read(); //gcnl:Node.cpp:691
      const u32 Uh_5tlreg45255 = _Int32ToInt32(Uh_5tlreg45254, 16, 17); //gcnl:NodeCast.cpp:723
      const u32 Uh_5tlreg45256 = _BinOpAddInt32(Uh_5tlreg45255, Uh_5tlreg45252, 17); //gcnl:NodeBinaryOp.cpp:719
      const u32 Uh_5tlreg45257 = _BinOpCompareGreaterThanInt32(Uh_5tlreg45256, Uh_5tlreg45249, 17); //gcnl:NodeBinaryOpCompare.cpp:313
      if(_Bool32ToCbool(Uh_5tlreg45257, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! OutOfBounds.ulam:46: 			 return true;
          const u32 Uh_5tlreg45258 = 1u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval45259(Uh_5tlreg45258); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval45259); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
      else
      {

//! OutOfBounds.ulam:48: 		else return false;
          const u32 Uh_5tlreg45260 = 0u; //gcnl:NodeTerminal.cpp:721
          Ui_Ut_10111b<EC> Uh_5tlval45261(Uh_5tlreg45260); //func arg& //gcnl:Node.cpp:1128
          return (Uh_5tlval45261); //gcnl:NodeReturnStatement.cpp:343
      } //end else
    }

  } // Uf_5isOOB



//! OutOfBounds.ulam:35: 	Bool isOOB(SiteNum site){
  template<class EC>
  Ui_Ut_10111b<EC> Un_102329211OutOfBounds10<EC>::Uf_5isOOB(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_4site) const
  {

//! OutOfBounds.ulam:36: 		return isOOB(ew.getCoord(site));
    UlamRef<EC> Uh_3tur45264(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:923
    const u32 Uh_5tlreg45266 = Uv_4site.read(); //gcnl:Node.cpp:691
    Ui_Ut_10161u<EC> Uh_5tlval45267(Uh_5tlreg45266); //func arg& //gcnl:Node.cpp:1128
    Ui_Uq_102323C2D10<EC> Uh_5tlval45269 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur45264, Uh_5tlval45267); //gcnl:NodeFunctionCall.cpp:1006
    Ui_Uq_102323C2D10<EC> Uh_5tlval45270(Uh_5tlval45269); //func arg& //gcnl:Node.cpp:1128
    const Ui_Ut_10111b<EC> Uh_5tlval45272 = THE_INSTANCE.Uf_5isOOB(uc, ur, Uh_5tlval45270); //gcnl:NodeFunctionCall.cpp:1006
    const u32 Uh_5tlreg45273 = Uh_5tlval45272.read(); //gcnl:Node.cpp:1156
    Ui_Ut_10111b<EC> Uh_5tlval45274(Uh_5tlreg45273); //func arg& //gcnl:Node.cpp:1128
    return (Uh_5tlval45274); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5isOOB


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Un_102329211OutOfBounds10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
      case 1: { static UlamClassDataMemberInfo i("Uq_102323C2D10", "cd", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1119
    }; //end switch //gcnl:NodeBlockClass.cpp:2653
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2656
  } //GetDataMemberInfo

  template<class EC>
  s32 Un_102329211OutOfBounds10<EC>::GetDataMemberCount() const
  {
    return 2; //gcnl:NodeBlockClass.cpp:2720
  } //GetDataMemberCount

  template<class EC>
  const char * Un_102329211OutOfBounds10<EC>::GetMangledClassName() const
  {
    return "Un_102329211OutOfBounds10"; //gcnl:NodeBlockClass.cpp:2771
  } //GetMangledClassName

  template<class EC>
  u32 Un_102329211OutOfBounds10<EC>::GetClassLength( ) const
  {
    return 32; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Un_102329211OutOfBounds10<EC>::GetString(u32 sidx)  const
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
  u32 Un_102329211OutOfBounds10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2603
  } //GetStringLength

  template<class EC>
  void Un_102329211OutOfBounds10<EC>::getDefaultTransient(u32 pos, BitStorage<EC>& bvsref) const
  {
    MFM_API_ASSERT_ARG((pos + bvsref.GetBitSize()) >= 32u); //gcnl:NodeBlockClass.cpp:2219

    // Initialize any data members:
    static const u32 vales[(32 + 31)/32] = { 0x0 }; //gcnl:CompilerState.cpp:1351
    static BitVector<32> initBV; //gcnl:CompilerState.cpp:1357
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1373
      //correct runtime regnum for strings
      const Ui_Uq_102323C2D10<EC> Uh_5tlreg45275; //gcnl:NodeVarDeclDM.cpp:789
      const u32 Uh_5tlreg45276(Uh_5tlreg45275.read()); //gcnl:NodeVarDeclDM.cpp:799
      initBV.Write(0u, 32, Uh_5tlreg45276); //Um_2cd //gcnl:NodeVarDeclDM.cpp:820
    } //gcnl:CompilerState.cpp:1395
    bvsref.WriteBV(pos, initBV); //gcnl:NodeBlockClass.cpp:2233
  } //getDefaultTransient

  template<class EC>
  VfuncPtr Un_102329211OutOfBounds10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2342

  template<class EC>
  VfuncPtr Un_102329211OutOfBounds10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2362
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2365
  }

  template<class EC>
  bool Un_102329211OutOfBounds10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Un_102329211OutOfBounds10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

