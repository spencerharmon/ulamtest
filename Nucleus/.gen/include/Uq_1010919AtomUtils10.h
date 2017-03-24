/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* AtomUtils.h - Quark header for ULAM //gcnl:SymbolClass.cpp:750
*
**********************************************************************************
* This code is generated by the ULAM programming language compilation system.
*
* The ULAM programming language compilation system is free software:
* you can redistribute it and/or modify it under the terms of the GNU
* General Public License as published by the Free Software
* Foundation, either version 3 of the License, or (at your option)
* any later version.
*
* The ULAM programming language compilation system is distributed in
* the hope that it will be useful, but WITHOUT ANY WARRANTY; without
* even the implied warranty of MERCHANTABILITY or FITNESS FOR A
* PARTICULAR PURPOSE.  See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License
* along with the ULAM programming language compilation system
* software.  If not, see <http://www.gnu.org/licenses/>.
*
* @license GPL-3.0+ <http://spdx.org/licenses/GPL-3.0+>
*/

#ifndef UQ_1010919ATOMUTILS10_H
#define UQ_1010919ATOMUTILS10_H

#include "UlamDefs.h"
#include "Uq_1010919AtomUtils10_Types.h"
//Forward Defs of other classes: //gcnl:SymbolTableOfClasses.cpp:576
namespace MFM { template <class EC> struct Uq_10106UrSelf10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102128EggShell10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_1010919SiteUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109211EventWindow10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109211ClusterByID10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10104Cell10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102717Nucleus10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102574Gene10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109210ColorUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10104Fail10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10105MDist10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_102323C2D10; }  //FORWARD
namespace MFM { template <class EC> struct Un_10412489213WindowScanner10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10106Random10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109210DebugUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109211SiteVisitor10; }  //FORWARD
namespace MFM { template <class EC> struct Un_102329211OutOfBounds10; }  //FORWARD
namespace MFM { template <class EC> struct Un_10411209215SiteVisitorByID10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109212DecisionTree10; }  //FORWARD
namespace MFM { template <class EC> struct Un_1035449217SiteVisitorByType10; }  //FORWARD

namespace MFM{

  template <class EC> //gcnl:NodeBlockClass.cpp:1338
  struct Uq_1010919AtomUtils10 : public UlamQuark<EC> /*, Uq_10106UrSelf10 */
  {

    // Extract short names for parameter types
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<BPA> BV; //gcnl:NodeBlockClass.cpp:1621
    typedef BitField<BitVector<BPA>, VD::BITS, T::ATOM_FIRST_STATE_BIT, 0> BFTYP; //gcnl:NodeBlockClass.cpp:1624

    enum { 
      QUARK_SIZE = 0 /* Requiring quarks to advertise their size in a std way.) */
    }; //gcnl:NodeBlockClass.cpp:1367

    typedef UlamRefFixed<EC, 0u, QUARK_SIZE> Up_Us; //entire quark //gcnl:NodeBlockClass.cpp:1371

    Uq_1010919AtomUtils10(); //gcnl:NodeBlockClass.cpp:1377
    ~Uq_1010919AtomUtils10(); //gcnl:NodeBlockClass.cpp:1382

    static Uq_1010919AtomUtils10 THE_INSTANCE; //gcnl:NodeBlockClass.cpp:1388

//! AtomUtils.ulam:7:   typedef Unsigned(16) Type;

    Ui_Ut_102961a<EC> Uf_3new(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1t) const; //native //gcnl:SymbolFunction.cpp:459

    Ui_Ut_102321i<EC> Uf_7getType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const; //native //gcnl:SymbolFunction.cpp:459

    Ui_Ut_102161u<EC> Uf_9212getValidType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_102161u<EC> Uf_9212getEmptyType(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_10111b<EC> Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_102321t<EC> Uf_4read(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a, Ui_Ut_102321u<EC>& Uv_9210stateIndex, Ui_Ut_102321u<EC>& Uv_9211fieldLength) const; //native //gcnl:SymbolFunction.cpp:459

    Ui_Ut_102961a<EC> Uf_919writeCopy(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a, Ui_Ut_102321t<EC>& Uv_4bits, Ui_Ut_102321u<EC>& Uv_9210stateIndex, Ui_Ut_102321u<EC>& Uv_9211fieldLength) const; //native //gcnl:SymbolFunction.cpp:459

    //BUILT-IN FUNCTIONS:

    const UlamClassDataMemberInfo & GetDataMemberInfo(u32 dataMemberNumber) const; //gcnl:NodeBlockClass.cpp:2664

    s32 GetDataMemberCount() const; //gcnl:NodeBlockClass.cpp:2728

    const char * GetMangledClassName() const; //gcnl:NodeBlockClass.cpp:2779

    virtual u32 GetClassLength() const; //gcnl:NodeBlockClass.cpp:1992

    virtual const unsigned char * GetString(u32 sidx) const; //gcnl:NodeBlockClass.cpp:2509

    virtual u32 GetStringLength(u32 sidx) const; //gcnl:NodeBlockClass.cpp:2579

    virtual u32 getDefaultQuark( ) const; //gcnl:NodeBlockClass.cpp:2134

    static VfuncPtr m_vtable[2]; //gcnl:NodeBlockClass.cpp:2287
    virtual VfuncPtr getVTableEntry(u32 idx) const; //gcnl:NodeBlockClass.cpp:2291

    //helper method not called directly
    bool internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const; //gcnl:NodeBlockClass.cpp:1933

    __inline__ const u32 GetPos() const { return 0u; }
  };

  template<class EC>
  Uq_1010919AtomUtils10<EC> Uq_1010919AtomUtils10<EC>::THE_INSTANCE;



} //MFM

#include "Uq_1010919AtomUtils10.tcc"
#include "Uq_1010919AtomUtils10_native.tcc"
#endif //UQ_1010919ATOMUTILS10_H
