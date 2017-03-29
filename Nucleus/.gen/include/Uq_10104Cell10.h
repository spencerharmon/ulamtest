/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* Cell.h - Quark header for ULAM //gcnl:SymbolClass.cpp:750
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

#ifndef UQ_10104CELL10_H
#define UQ_10104CELL10_H

#include "UlamDefs.h"
#include "Uq_10104Cell10_Types.h"
//Forward Defs of other classes: //gcnl:SymbolTableOfClasses.cpp:576
namespace MFM { template <class EC> struct Uq_10106UrSelf10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10106Primer10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10106Random10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109211EventWindow10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109212DecisionTree10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102564Gene10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_1010919AtomUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10104Fail10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10105MDist10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_102323C2D10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109210ColorUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102717Nucleus10; }  //FORWARD
namespace MFM { template <class EC> struct Un_10412489213WindowScanner10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109211ClusterByID10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_1010919SiteUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Un_10411209215SiteVisitorByID10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_102188EggShell10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109210DebugUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109211SiteVisitor10; }  //FORWARD
namespace MFM { template <class EC> struct Un_102329211OutOfBounds10; }  //FORWARD
namespace MFM { template <class EC> struct Un_1035449217SiteVisitorByType10; }  //FORWARD

namespace MFM{

  template <class EC> //gcnl:NodeBlockClass.cpp:1338
  struct Uq_10104Cell10 : public UlamQuark<EC> /*, Uq_10106UrSelf10 */
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

    Uq_10104Cell10(); //gcnl:NodeBlockClass.cpp:1377
    ~Uq_10104Cell10(); //gcnl:NodeBlockClass.cpp:1382

    static Uq_10104Cell10 THE_INSTANCE; //gcnl:NodeBlockClass.cpp:1388

//! Cell.ulam:9: 	Random r;
    typedef Uq_10106Random10<EC> Ut_Um_1r; //offset 0u //gcnl:NodeVarDeclDM.cpp:1065

//! Cell.ulam:10: 	AtomUtils au;
    typedef Uq_1010919AtomUtils10<EC> Ut_Um_2au; //offset 0u //gcnl:NodeVarDeclDM.cpp:1065

//! Cell.ulam:12: 	typedef ColorUtils.Channel Channel;

//! Cell.ulam:13: 	typedef ColorUtils.ARGB ARGB;	

//! Cell.ulam:14: 	typedef Unsigned(10) ID;

//! Cell.ulam:15: 	typedef Unsigned(8) Com;

//! Cell.ulam:16: 	typedef Unsigned(6) Seqno;

//! Cell.ulam:17: 	typedef EventWindow.SiteNum SiteNum;

    Ui_Ut_102961a<EC> Uf_9211makeNucleus(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_5child, Ui_Ut_102101u<EC>& Uv_7parent1, Ui_Ut_102101u<EC>& Uv_7parent2) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_102101u<EC> Uf_5genID(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_102961a<EC> Uf_8copyGene(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_4gene) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_102961a<EC> Uf_9212getGeneSeqno(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5seqno) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_102961a<EC> Uf_8makeGene(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102101u<EC>& Uv_2id, Ui_Ut_10161u<EC>& Uv_5seqno) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_10111b<EC> Uf_919inTheCell(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a, Ui_Ut_102101u<EC>& Uv_2id) const; //gcnl:SymbolFunction.cpp:463

    Ui_Ut_10111b<EC> Uf_9212outOfTheCell(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a, Ui_Ut_102101u<EC>& Uv_2id) const; //gcnl:SymbolFunction.cpp:463

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
  Uq_10104Cell10<EC> Uq_10104Cell10<EC>::THE_INSTANCE;



} //MFM

#include "Uq_10104Cell10.tcc"
#endif //UQ_10104CELL10_H
