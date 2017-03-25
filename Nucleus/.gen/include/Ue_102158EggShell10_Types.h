/**                                      -*- mode:C++ -*- */

//#include "itype.h"
//#include "BitVector.h"
//#include "BitField.h"

#include "UlamDefs.h"

#ifndef Ud_Ui_Ut_r10121i
#define Ud_Ui_Ut_r10121i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10121i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10121i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 2u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10121i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 2u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10121i(const Ui_Ut_r10121i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 2); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10121i */

#ifndef Ud_Ui_Ut_10121i
#define Ud_Ui_Ut_10121i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10121i : public BitVectorBitStorage<EC, BitVector<2u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<2> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 2u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 2u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10121i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10121i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10121i(const Ui_Ut_10121i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10121i(const Ui_Ut_r10121i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10121i */

#ifndef Ud_Ui_Ut_r10131i
#define Ud_Ui_Ut_r10131i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10131i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10131i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 3u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10131i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 3u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10131i(const Ui_Ut_r10131i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 3); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10131i */

#ifndef Ud_Ui_Ut_10131i
#define Ud_Ui_Ut_10131i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10131i : public BitVectorBitStorage<EC, BitVector<3u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<3> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 3u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 3u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10131i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10131i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10131i(const Ui_Ut_10131i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10131i(const Ui_Ut_r10131i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10131i */

#ifndef Ud_Ui_Ut_r10141i
#define Ud_Ui_Ut_r10141i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10141i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10141i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 4u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10141i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 4u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10141i(const Ui_Ut_r10141i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 4); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10141i */

#ifndef Ud_Ui_Ut_10141i
#define Ud_Ui_Ut_10141i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10141i : public BitVectorBitStorage<EC, BitVector<4u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<4> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 4u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 4u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10141i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10141i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10141i(const Ui_Ut_10141i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10141i(const Ui_Ut_r10141i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10141i */

#ifndef Ud_Ui_Ut_r10151i
#define Ud_Ui_Ut_r10151i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10151i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10151i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 5u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10151i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 5u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10151i(const Ui_Ut_r10151i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 5); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10151i */

#ifndef Ud_Ui_Ut_10151i
#define Ud_Ui_Ut_10151i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10151i : public BitVectorBitStorage<EC, BitVector<5u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<5> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 5u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 5u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10151i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10151i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10151i(const Ui_Ut_10151i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10151i(const Ui_Ut_r10151i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10151i */

#ifndef Ud_Ui_Ut_r10161i
#define Ud_Ui_Ut_r10161i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10161i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10161i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 6u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10161i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 6u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10161i(const Ui_Ut_r10161i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 6); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10161i */

#ifndef Ud_Ui_Ut_10161i
#define Ud_Ui_Ut_10161i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10161i : public BitVectorBitStorage<EC, BitVector<6u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<6> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 6u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 6u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10161i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10161i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10161i(const Ui_Ut_10161i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10161i(const Ui_Ut_r10161i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10161i */

#ifndef Ud_Ui_Ut_r10171i
#define Ud_Ui_Ut_r10171i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10171i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10171i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 7u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10171i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 7u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10171i(const Ui_Ut_r10171i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 7); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10171i */

#ifndef Ud_Ui_Ut_10171i
#define Ud_Ui_Ut_10171i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10171i : public BitVectorBitStorage<EC, BitVector<7u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<7> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 7u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 7u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10171i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10171i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10171i(const Ui_Ut_10171i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10171i(const Ui_Ut_r10171i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10171i */

#ifndef Ud_Ui_Ut_r10181i
#define Ud_Ui_Ut_r10181i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10181i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10181i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 8u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10181i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 8u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10181i(const Ui_Ut_r10181i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 8); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10181i */

#ifndef Ud_Ui_Ut_10181i
#define Ud_Ui_Ut_10181i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10181i : public BitVectorBitStorage<EC, BitVector<8u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<8> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 8u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 8u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10181i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10181i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10181i(const Ui_Ut_10181i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10181i(const Ui_Ut_r10181i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10181i */

#ifndef Ud_Ui_Ut_r10191i
#define Ud_Ui_Ut_r10191i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10191i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10191i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 9u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10191i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 9u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10191i(const Ui_Ut_r10191i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 9); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10191i */

#ifndef Ud_Ui_Ut_10191i
#define Ud_Ui_Ut_10191i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10191i : public BitVectorBitStorage<EC, BitVector<9u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<9> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 9u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 9u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10191i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10191i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10191i(const Ui_Ut_10191i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10191i(const Ui_Ut_r10191i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10191i */

#ifndef Ud_Ui_Ut_r102101i
#define Ud_Ui_Ut_r102101i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102101i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102101i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 10u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102101i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 10u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102101i(const Ui_Ut_r102101i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 10); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102101i */

#ifndef Ud_Ui_Ut_102101i
#define Ud_Ui_Ut_102101i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102101i : public BitVectorBitStorage<EC, BitVector<10u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<10> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 10u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 10u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102101i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102101i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102101i(const Ui_Ut_102101i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102101i(const Ui_Ut_r102101i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102101i */

#ifndef Ud_Ui_Ut_r102111i
#define Ud_Ui_Ut_r102111i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102111i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102111i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 11u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102111i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 11u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102111i(const Ui_Ut_r102111i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 11); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102111i */

#ifndef Ud_Ui_Ut_102111i
#define Ud_Ui_Ut_102111i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102111i : public BitVectorBitStorage<EC, BitVector<11u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<11> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 11u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 11u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102111i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102111i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102111i(const Ui_Ut_102111i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102111i(const Ui_Ut_r102111i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102111i */

#ifndef Ud_Ui_Ut_r102121i
#define Ud_Ui_Ut_r102121i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102121i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102121i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 12u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102121i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 12u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102121i(const Ui_Ut_r102121i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 12); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102121i */

#ifndef Ud_Ui_Ut_102121i
#define Ud_Ui_Ut_102121i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102121i : public BitVectorBitStorage<EC, BitVector<12u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<12> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 12u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 12u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102121i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102121i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102121i(const Ui_Ut_102121i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102121i(const Ui_Ut_r102121i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102121i */

#ifndef Ud_Ui_Ut_r102161i
#define Ud_Ui_Ut_r102161i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102161i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102161i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 16u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102161i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 16u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102161i(const Ui_Ut_r102161i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 16); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102161i */

#ifndef Ud_Ui_Ut_102161i
#define Ud_Ui_Ut_102161i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102161i : public BitVectorBitStorage<EC, BitVector<16u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<16> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 16u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 16u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102161i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102161i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102161i(const Ui_Ut_102161i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102161i(const Ui_Ut_r102161i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102161i */

#ifndef Ud_Ui_Ut_r102171i
#define Ud_Ui_Ut_r102171i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102171i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102171i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 17u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102171i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 17u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102171i(const Ui_Ut_r102171i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 17); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102171i */

#ifndef Ud_Ui_Ut_102171i
#define Ud_Ui_Ut_102171i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102171i : public BitVectorBitStorage<EC, BitVector<17u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<17> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 17u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 17u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102171i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102171i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102171i(const Ui_Ut_102171i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102171i(const Ui_Ut_r102171i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102171i */

#ifndef Ud_Ui_Ut_r102181i
#define Ud_Ui_Ut_r102181i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102181i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102181i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 18u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102181i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 18u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102181i(const Ui_Ut_r102181i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 18); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102181i */

#ifndef Ud_Ui_Ut_102181i
#define Ud_Ui_Ut_102181i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102181i : public BitVectorBitStorage<EC, BitVector<18u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<18> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 18u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 18u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102181i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102181i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102181i(const Ui_Ut_102181i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102181i(const Ui_Ut_r102181i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102181i */

#ifndef Ud_Ui_Ut_r102191i
#define Ud_Ui_Ut_r102191i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102191i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102191i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 19u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102191i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 19u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102191i(const Ui_Ut_r102191i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 19); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102191i */

#ifndef Ud_Ui_Ut_102191i
#define Ud_Ui_Ut_102191i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102191i : public BitVectorBitStorage<EC, BitVector<19u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<19> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 19u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 19u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102191i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102191i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102191i(const Ui_Ut_102191i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102191i(const Ui_Ut_r102191i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102191i */

#ifndef Ud_Ui_Ut_r102321i
#define Ud_Ui_Ut_r102321i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102321i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321i(const Ui_Ut_r102321i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321i */

#ifndef Ud_Ui_Ut_102321i
#define Ud_Ui_Ut_102321i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321i : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102321i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102321i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102321i(const Ui_Ut_102321i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102321i(const Ui_Ut_r102321i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102321i */

#ifndef Ud_Ui_Ut_r102641i
#define Ud_Ui_Ut_r102641i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102641i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u64 read() const { return UlamRef<EC>::ReadLong(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u64& targ) { UlamRef<EC>::WriteLong(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102641i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 64u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102641i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 64u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102641i(const Ui_Ut_r102641i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 64); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102641i */

#ifndef Ud_Ui_Ut_102641i
#define Ud_Ui_Ut_102641i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102641i : public BitVectorBitStorage<EC, BitVector<64u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<64> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u64 read() const { return BVS::ReadLong(0u, 64u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u64& v) { BVS::WriteLong(0u, 64u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102641i() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102641i(const u64 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102641i(const Ui_Ut_102641i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102641i(const Ui_Ut_r102641i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102641i */

#ifndef Ud_Ui_Ut_r10111u
#define Ud_Ui_Ut_r10111u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10111u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10111u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 1u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10111u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 1u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10111u(const Ui_Ut_r10111u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 1); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10111u */

#ifndef Ud_Ui_Ut_10111u
#define Ud_Ui_Ut_10111u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10111u : public BitVectorBitStorage<EC, BitVector<1u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<1> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 1u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 1u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10111u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10111u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10111u(const Ui_Ut_10111u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10111u(const Ui_Ut_r10111u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10111u */

#ifndef Ud_Ui_Ut_r10121u
#define Ud_Ui_Ut_r10121u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10121u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10121u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 2u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10121u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 2u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10121u(const Ui_Ut_r10121u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 2); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10121u */

#ifndef Ud_Ui_Ut_10121u
#define Ud_Ui_Ut_10121u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10121u : public BitVectorBitStorage<EC, BitVector<2u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<2> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 2u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 2u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10121u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10121u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10121u(const Ui_Ut_10121u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10121u(const Ui_Ut_r10121u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10121u */

#ifndef Ud_Ui_Ut_r240121u
#define Ud_Ui_Ut_r240121u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r240121u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    Ui_Ut_r240121u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 80u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r240121u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 80u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r240121u(const Ui_Ut_r240121u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 80); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r240121u */

#ifndef Ud_Ui_Ut_240121u
#define Ud_Ui_Ut_240121u
namespace MFM{

  template<class EC>
  struct Ui_Ut_240121u : public BitVectorBitStorage<EC, BitVector<80u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<80> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const BV96 read() const { return BVS::ReadBig(0u, 80u); } //reads entire array //gcnl:UlamTypePrimitive.cpp:560
    void write(const BV96& v) { BVS::WriteBig(0u, 80u, v); } //writes entire array //gcnl:UlamTypePrimitive.cpp:597
    Ui_Ut_240121u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_240121u(const BV96 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_240121u(const u32 d[3]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_240121u(const Ui_Ut_240121u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_240121u(const Ui_Ut_r240121u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_240121u */

#ifndef Ud_Ui_Ut_r10131u
#define Ud_Ui_Ut_r10131u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10131u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10131u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 3u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10131u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 3u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10131u(const Ui_Ut_r10131u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 3); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10131u */

#ifndef Ud_Ui_Ut_10131u
#define Ud_Ui_Ut_10131u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10131u : public BitVectorBitStorage<EC, BitVector<3u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<3> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 3u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 3u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10131u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10131u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10131u(const Ui_Ut_10131u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10131u(const Ui_Ut_r10131u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10131u */

#ifndef Ud_Ui_Ut_r10141u
#define Ud_Ui_Ut_r10141u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10141u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10141u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 4u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10141u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 4u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10141u(const Ui_Ut_r10141u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 4); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10141u */

#ifndef Ud_Ui_Ut_10141u
#define Ud_Ui_Ut_10141u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10141u : public BitVectorBitStorage<EC, BitVector<4u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<4> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 4u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 4u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10141u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10141u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10141u(const Ui_Ut_10141u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10141u(const Ui_Ut_r10141u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10141u */

#ifndef Ud_Ui_Ut_r10151u
#define Ud_Ui_Ut_r10151u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10151u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10151u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 5u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10151u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 5u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10151u(const Ui_Ut_r10151u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 5); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10151u */

#ifndef Ud_Ui_Ut_10151u
#define Ud_Ui_Ut_10151u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10151u : public BitVectorBitStorage<EC, BitVector<5u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<5> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 5u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 5u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10151u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10151u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10151u(const Ui_Ut_10151u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10151u(const Ui_Ut_r10151u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10151u */

#ifndef Ud_Ui_Ut_r10161u
#define Ud_Ui_Ut_r10161u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10161u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10161u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 6u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10161u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 6u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10161u(const Ui_Ut_r10161u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 6); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10161u */

#ifndef Ud_Ui_Ut_10161u
#define Ud_Ui_Ut_10161u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10161u : public BitVectorBitStorage<EC, BitVector<6u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<6> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 6u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 6u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10161u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10161u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10161u(const Ui_Ut_10161u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10161u(const Ui_Ut_r10161u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10161u */

#ifndef Ud_Ui_Ut_r232161u
#define Ud_Ui_Ut_r232161u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r232161u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    Ui_Ut_r232161u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 192u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r232161u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 192u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r232161u(const Ui_Ut_r232161u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 192); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r232161u */

#ifndef Ud_Ui_Ut_232161u
#define Ud_Ui_Ut_232161u
namespace MFM{

  template<class EC>
  struct Ui_Ut_232161u : public BitVectorBitStorage<EC, BitVector<192u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<192> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const BitVector<192> read() const { BitVector<192> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypePrimitive.cpp:574
    void  write(const BitVector<192>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypePrimitive.cpp:609
    Ui_Ut_232161u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_232161u(const BitVector<192> d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_232161u(const u32 d[6]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_232161u(const Ui_Ut_232161u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_232161u(const Ui_Ut_r232161u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_232161u */

#ifndef Ud_Ui_Ut_r240161u
#define Ud_Ui_Ut_r240161u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r240161u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    Ui_Ut_r240161u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 240u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r240161u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 240u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r240161u(const Ui_Ut_r240161u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 240); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r240161u */

#ifndef Ud_Ui_Ut_240161u
#define Ud_Ui_Ut_240161u
namespace MFM{

  template<class EC>
  struct Ui_Ut_240161u : public BitVectorBitStorage<EC, BitVector<240u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<240> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const BitVector<240> read() const { BitVector<240> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypePrimitive.cpp:574
    void  write(const BitVector<240>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypePrimitive.cpp:609
    Ui_Ut_240161u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_240161u(const BitVector<240> d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_240161u(const u32 d[8]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_240161u(const Ui_Ut_240161u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_240161u(const Ui_Ut_r240161u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_240161u */

#ifndef Ud_Ui_Ut_r10171u
#define Ud_Ui_Ut_r10171u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10171u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10171u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 7u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10171u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 7u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10171u(const Ui_Ut_r10171u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 7); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10171u */

#ifndef Ud_Ui_Ut_10171u
#define Ud_Ui_Ut_10171u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10171u : public BitVectorBitStorage<EC, BitVector<7u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<7> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 7u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 7u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10171u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10171u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10171u(const Ui_Ut_10171u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10171u(const Ui_Ut_r10171u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10171u */

#ifndef Ud_Ui_Ut_r10181u
#define Ud_Ui_Ut_r10181u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10181u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10181u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 8u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10181u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 8u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10181u(const Ui_Ut_r10181u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 8); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10181u */

#ifndef Ud_Ui_Ut_10181u
#define Ud_Ui_Ut_10181u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10181u : public BitVectorBitStorage<EC, BitVector<8u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<8> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 8u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 8u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10181u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10181u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10181u(const Ui_Ut_10181u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10181u(const Ui_Ut_r10181u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10181u */

#ifndef Ud_Ui_Ut_r14181u
#define Ud_Ui_Ut_r14181u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r14181u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r14181u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r14181u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r14181u(const Ui_Ut_r14181u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r14181u */

#ifndef Ud_Ui_Ut_14181u
#define Ud_Ui_Ut_14181u
namespace MFM{

  template<class EC>
  struct Ui_Ut_14181u : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 32u); } //reads entire array //gcnl:UlamTypePrimitive.cpp:560
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //writes entire array //gcnl:UlamTypePrimitive.cpp:597
    Ui_Ut_14181u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_14181u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_14181u(const u32 d[1]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_14181u(const Ui_Ut_14181u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_14181u(const Ui_Ut_r14181u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_14181u */

#ifndef Ud_Ui_Ut_r102101u
#define Ud_Ui_Ut_r102101u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102101u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102101u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 10u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102101u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 10u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102101u(const Ui_Ut_r102101u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 10); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102101u */

#ifndef Ud_Ui_Ut_102101u
#define Ud_Ui_Ut_102101u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102101u : public BitVectorBitStorage<EC, BitVector<10u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<10> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 10u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 10u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102101u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102101u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102101u(const Ui_Ut_102101u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102101u(const Ui_Ut_r102101u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102101u */

#ifndef Ud_Ui_Ut_r2322101u
#define Ud_Ui_Ut_r2322101u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r2322101u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    Ui_Ut_r2322101u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 320u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r2322101u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 320u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r2322101u(const Ui_Ut_r2322101u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 320); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r2322101u */

#ifndef Ud_Ui_Ut_2322101u
#define Ud_Ui_Ut_2322101u
namespace MFM{

  template<class EC>
  struct Ui_Ut_2322101u : public BitVectorBitStorage<EC, BitVector<320u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<320> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const BitVector<320> read() const { BitVector<320> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypePrimitive.cpp:574
    void  write(const BitVector<320>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypePrimitive.cpp:609
    Ui_Ut_2322101u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_2322101u(const BitVector<320> d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_2322101u(const u32 d[10]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_2322101u(const Ui_Ut_2322101u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_2322101u(const Ui_Ut_r2322101u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_2322101u */

#ifndef Ud_Ui_Ut_r102121u
#define Ud_Ui_Ut_r102121u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102121u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102121u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 12u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102121u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 12u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102121u(const Ui_Ut_r102121u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 12); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102121u */

#ifndef Ud_Ui_Ut_102121u
#define Ud_Ui_Ut_102121u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102121u : public BitVectorBitStorage<EC, BitVector<12u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<12> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 12u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 12u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102121u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102121u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102121u(const Ui_Ut_102121u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102121u(const Ui_Ut_r102121u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102121u */

#ifndef Ud_Ui_Ut_r102161u
#define Ud_Ui_Ut_r102161u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102161u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102161u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 16u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102161u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 16u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102161u(const Ui_Ut_r102161u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 16); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102161u */

#ifndef Ud_Ui_Ut_102161u
#define Ud_Ui_Ut_102161u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102161u : public BitVectorBitStorage<EC, BitVector<16u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<16> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 16u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 16u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102161u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102161u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102161u(const Ui_Ut_102161u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102161u(const Ui_Ut_r102161u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102161u */

#ifndef Ud_Ui_Ut_r2322161u
#define Ud_Ui_Ut_r2322161u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r2322161u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    Ui_Ut_r2322161u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 512u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r2322161u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 512u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r2322161u(const Ui_Ut_r2322161u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 512); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r2322161u */

#ifndef Ud_Ui_Ut_2322161u
#define Ud_Ui_Ut_2322161u
namespace MFM{

  template<class EC>
  struct Ui_Ut_2322161u : public BitVectorBitStorage<EC, BitVector<512u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<512> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const BitVector<512> read() const { BitVector<512> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypePrimitive.cpp:574
    void  write(const BitVector<512>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypePrimitive.cpp:609
    Ui_Ut_2322161u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_2322161u(const BitVector<512> d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_2322161u(const u32 d[16]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_2322161u(const Ui_Ut_2322161u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_2322161u(const Ui_Ut_r2322161u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_2322161u */

#ifndef Ud_Ui_Ut_r102321u
#define Ud_Ui_Ut_r102321u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102321u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321u(const Ui_Ut_r102321u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321u */

#ifndef Ud_Ui_Ut_102321u
#define Ud_Ui_Ut_102321u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321u : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102321u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102321u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102321u(const Ui_Ut_102321u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102321u(const Ui_Ut_r102321u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102321u */

#ifndef Ud_Ui_Ut_r2322321u
#define Ud_Ui_Ut_r2322321u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r2322321u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    Ui_Ut_r2322321u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 1024u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r2322321u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 1024u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r2322321u(const Ui_Ut_r2322321u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 1024); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r2322321u */

#ifndef Ud_Ui_Ut_2322321u
#define Ud_Ui_Ut_2322321u
namespace MFM{

  template<class EC>
  struct Ui_Ut_2322321u : public BitVectorBitStorage<EC, BitVector<1024u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<1024> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const BitVector<1024> read() const { BitVector<1024> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypePrimitive.cpp:574
    void  write(const BitVector<1024>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypePrimitive.cpp:609
    Ui_Ut_2322321u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_2322321u(const BitVector<1024> d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_2322321u(const u32 d[32]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_2322321u(const Ui_Ut_2322321u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_2322321u(const Ui_Ut_r2322321u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_2322321u */

#ifndef Ud_Ui_Ut_r102641u
#define Ud_Ui_Ut_r102641u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102641u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u64 read() const { return UlamRef<EC>::ReadLong(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u64& targ) { UlamRef<EC>::WriteLong(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102641u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 64u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102641u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 64u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102641u(const Ui_Ut_r102641u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 64); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102641u */

#ifndef Ud_Ui_Ut_102641u
#define Ud_Ui_Ut_102641u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102641u : public BitVectorBitStorage<EC, BitVector<64u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<64> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u64 read() const { return BVS::ReadLong(0u, 64u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u64& v) { BVS::WriteLong(0u, 64u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102641u() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102641u(const u64 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102641u(const Ui_Ut_102641u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102641u(const Ui_Ut_r102641u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102641u */

#ifndef Ud_Ui_Ut_r10111b
#define Ud_Ui_Ut_r10111b
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10111b : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10111b(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 1u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10111b(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 1u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10111b(const Ui_Ut_r10111b<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 1); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10111b */

#ifndef Ud_Ui_Ut_10111b
#define Ud_Ui_Ut_10111b
namespace MFM{

  template<class EC>
  struct Ui_Ut_10111b : public BitVectorBitStorage<EC, BitVector<1u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<1> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 1u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 1u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10111b() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10111b(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10111b(const Ui_Ut_10111b& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10111b(const Ui_Ut_r10111b<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10111b */

#ifndef Ud_Ui_Ut_r232111b
#define Ud_Ui_Ut_r232111b
namespace MFM{
  template<class EC>
  struct Ui_Ut_r232111b : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r232111b(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r232111b(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r232111b(const Ui_Ut_r232111b<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r232111b */

#ifndef Ud_Ui_Ut_232111b
#define Ud_Ui_Ut_232111b
namespace MFM{

  template<class EC>
  struct Ui_Ut_232111b : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 32u); } //reads entire array //gcnl:UlamTypePrimitive.cpp:560
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //writes entire array //gcnl:UlamTypePrimitive.cpp:597
    Ui_Ut_232111b() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_232111b(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_232111b(const u32 d[1]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_232111b(const Ui_Ut_232111b& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_232111b(const Ui_Ut_r232111b<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_232111b */

#ifndef Ud_Ui_Ut_r240111b
#define Ud_Ui_Ut_r240111b
namespace MFM{
  template<class EC>
  struct Ui_Ut_r240111b : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    const u64 read() const { return UlamRef<EC>::ReadLong(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    void write(const u64& targ) { UlamRef<EC>::WriteLong(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r240111b(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 40u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r240111b(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 40u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r240111b(const Ui_Ut_r240111b<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 40); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r240111b */

#ifndef Ud_Ui_Ut_240111b
#define Ud_Ui_Ut_240111b
namespace MFM{

  template<class EC>
  struct Ui_Ut_240111b : public BitVectorBitStorage<EC, BitVector<40u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<40> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u64 read() const { return BVS::ReadLong(0u, 40u); } //reads entire array //gcnl:UlamTypePrimitive.cpp:560
    void write(const u64& v) { BVS::WriteLong(0u, 40u, v); } //writes entire array //gcnl:UlamTypePrimitive.cpp:597
    Ui_Ut_240111b() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_240111b(const u64 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_240111b(const u32 d[2]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_240111b(const Ui_Ut_240111b& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_240111b(const Ui_Ut_r240111b<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_240111b */

#ifndef Ud_Ui_Ut_r10131b
#define Ud_Ui_Ut_r10131b
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10131b : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10131b(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 3u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10131b(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 3u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10131b(const Ui_Ut_r10131b<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 3); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10131b */

#ifndef Ud_Ui_Ut_10131b
#define Ud_Ui_Ut_10131b
namespace MFM{

  template<class EC>
  struct Ui_Ut_10131b : public BitVectorBitStorage<EC, BitVector<3u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<3> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 3u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 3u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10131b() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10131b(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10131b(const Ui_Ut_10131b& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10131b(const Ui_Ut_r10131b<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10131b */

#ifndef Ud_Ui_Ut_r10131y
#define Ud_Ui_Ut_r10131y
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10131y : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10131y(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 3u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10131y(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 3u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10131y(const Ui_Ut_r10131y<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 3); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10131y */

#ifndef Ud_Ui_Ut_10131y
#define Ud_Ui_Ut_10131y
namespace MFM{

  template<class EC>
  struct Ui_Ut_10131y : public BitVectorBitStorage<EC, BitVector<3u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<3> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 3u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 3u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10131y() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10131y(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10131y(const Ui_Ut_10131y& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10131y(const Ui_Ut_r10131y<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10131y */

#ifndef Ud_Ui_Ut_r10141y
#define Ud_Ui_Ut_r10141y
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10141y : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10141y(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 4u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10141y(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 4u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10141y(const Ui_Ut_r10141y<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 4); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10141y */

#ifndef Ud_Ui_Ut_10141y
#define Ud_Ui_Ut_10141y
namespace MFM{

  template<class EC>
  struct Ui_Ut_10141y : public BitVectorBitStorage<EC, BitVector<4u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<4> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 4u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 4u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10141y() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10141y(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10141y(const Ui_Ut_10141y& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10141y(const Ui_Ut_r10141y<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10141y */

#ifndef Ud_Ui_Ut_r102321y
#define Ud_Ui_Ut_r102321y
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321y : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102321y(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321y(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321y(const Ui_Ut_r102321y<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321y */

#ifndef Ud_Ui_Ut_102321y
#define Ud_Ui_Ut_102321y
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321y : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102321y() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102321y(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102321y(const Ui_Ut_102321y& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102321y(const Ui_Ut_r102321y<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102321y */

#ifndef Ud_Ui_Ut_r10121t
#define Ud_Ui_Ut_r10121t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10121t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10121t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 2u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10121t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 2u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10121t(const Ui_Ut_r10121t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 2); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10121t */

#ifndef Ud_Ui_Ut_10121t
#define Ud_Ui_Ut_10121t
namespace MFM{

  template<class EC>
  struct Ui_Ut_10121t : public BitVectorBitStorage<EC, BitVector<2u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<2> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 2u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 2u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10121t() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10121t(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10121t(const Ui_Ut_10121t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10121t(const Ui_Ut_r10121t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10121t */

#ifndef Ud_Ui_Ut_r240121t
#define Ud_Ui_Ut_r240121t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r240121t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:300
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:333
    Ui_Ut_r240121t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 80u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r240121t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 80u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r240121t(const Ui_Ut_r240121t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 80); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r240121t */

#ifndef Ud_Ui_Ut_240121t
#define Ud_Ui_Ut_240121t
namespace MFM{

  template<class EC>
  struct Ui_Ut_240121t : public BitVectorBitStorage<EC, BitVector<80u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<80> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const BV96 read() const { return BVS::ReadBig(0u, 80u); } //reads entire array //gcnl:UlamTypePrimitive.cpp:560
    void write(const BV96& v) { BVS::WriteBig(0u, 80u, v); } //writes entire array //gcnl:UlamTypePrimitive.cpp:597
    Ui_Ut_240121t() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_240121t(const BV96 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_240121t(const u32 d[3]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:502
    Ui_Ut_240121t(const Ui_Ut_240121t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_240121t(const Ui_Ut_r240121t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_240121t */

#ifndef Ud_Ui_Ut_r10181t
#define Ud_Ui_Ut_r10181t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10181t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10181t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 8u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10181t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 8u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10181t(const Ui_Ut_r10181t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 8); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10181t */

#ifndef Ud_Ui_Ut_10181t
#define Ud_Ui_Ut_10181t
namespace MFM{

  template<class EC>
  struct Ui_Ut_10181t : public BitVectorBitStorage<EC, BitVector<8u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<8> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 8u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 8u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10181t() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10181t(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10181t(const Ui_Ut_10181t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10181t(const Ui_Ut_r10181t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10181t */

#ifndef Ud_Ui_Ut_r10191t
#define Ud_Ui_Ut_r10191t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10191t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r10191t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 9u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10191t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 9u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10191t(const Ui_Ut_r10191t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 9); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r10191t */

#ifndef Ud_Ui_Ut_10191t
#define Ud_Ui_Ut_10191t
namespace MFM{

  template<class EC>
  struct Ui_Ut_10191t : public BitVectorBitStorage<EC, BitVector<9u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<9> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 9u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 9u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_10191t() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_10191t(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_10191t(const Ui_Ut_10191t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_10191t(const Ui_Ut_r10191t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_10191t */

#ifndef Ud_Ui_Ut_r102321t
#define Ud_Ui_Ut_r102321t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102321t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321t(const Ui_Ut_r102321t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321t */

#ifndef Ud_Ui_Ut_102321t
#define Ud_Ui_Ut_102321t
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321t : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102321t() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102321t(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102321t(const Ui_Ut_102321t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102321t(const Ui_Ut_r102321t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102321t */

#ifndef Ud_Ui_Ut_r102641t
#define Ud_Ui_Ut_r102641t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102641t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u64 read() const { return UlamRef<EC>::ReadLong(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    void write(const u64& targ) { UlamRef<EC>::WriteLong(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    Ui_Ut_r102641t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 64u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102641t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 64u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102641t(const Ui_Ut_r102641t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 64); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102641t */

#ifndef Ud_Ui_Ut_102641t
#define Ud_Ui_Ut_102641t
namespace MFM{

  template<class EC>
  struct Ui_Ut_102641t : public BitVectorBitStorage<EC, BitVector<64u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<64> BV; //gcnl:UlamTypePrimitive.cpp:467
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:470

    const u64 read() const { return BVS::ReadLong(0u, 64u); } //gcnl:UlamTypePrimitive.cpp:556
    void write(const u64& v) { BVS::WriteLong(0u, 64u, v); } //gcnl:UlamTypePrimitive.cpp:593
    Ui_Ut_102641t() { } //gcnl:UlamTypePrimitive.cpp:483
    Ui_Ut_102641t(const u64 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:491
    Ui_Ut_102641t(const Ui_Ut_102641t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:514
    Ui_Ut_102641t(const Ui_Ut_r102641t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:523
  };
} //MFM
#endif /*Ud_Ui_Ut_102641t */

#ifndef Ud_Ui_Ut_r102961a
#define Ud_Ui_Ut_r102961a
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102961a : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const T read() const { return UlamRef<EC>::ReadAtom(); /* read entire atom */ } //gcnl:UlamTypeAtom.cpp:237
    void write(const T& v) { UlamRef<EC>::WriteAtom(v); /* write entire atom */ } //gcnl:UlamTypeAtom.cpp:250
    void write(const AtomRefBitStorage<EC>& v) { UlamRef<EC>::WriteAtom(v.ReadAtom()); /* write entire atom */ } //gcnl:UlamTypeAtom.cpp:258
    Ui_Ut_r102961a(BitStorage<EC>& targ, u32 startidx, const UlamContext<EC>& uc) : UlamRef<EC>(startidx, BPA, targ, uc.LookupUlamElementTypeFromContext(targ.ReadAtom(startidx).GetType()), UlamRef<EC>::ATOMIC, uc) { } //gcnl:UlamTypeAtom.cpp:195
    Ui_Ut_r102961a(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, BPA, NULL, UlamRef<EC>::ATOMIC) { } //gcnl:UlamTypeAtom.cpp:202
    Ui_Ut_r102961a(const Ui_Ut_r102961a& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), arg.GetEffectiveSelf(), UlamRef<EC>::ATOMIC) { } //gcnl:UlamTypeAtom.cpp:210
  };
} //MFM
#endif /*Ud_Ui_Ut_r102961a */

#ifndef Ud_Ui_Ut_102961a
#define Ud_Ui_Ut_102961a
namespace MFM{

  template<class EC>
  struct Ui_Ut_102961a : public AtomBitStorage<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef AtomRefBitStorage<EC> ABS; //gcnl:UlamTypeAtom.cpp:309

    Ui_Ut_102961a() : AtomBitStorage<EC>(Element_Empty<EC>::THE_INSTANCE.GetDefaultAtom()) { } //gcnl:UlamTypeAtom.cpp:316
    Ui_Ut_102961a(const T& targ) : AtomBitStorage<EC>(targ) { } //gcnl:UlamTypeAtom.cpp:325
    Ui_Ut_102961a(const AtomRefBitStorage<EC>& d) : AtomBitStorage<EC>(d.ReadAtom()) { } //gcnl:UlamTypeAtom.cpp:334
    Ui_Ut_102961a(const Ui_Ut_102961a& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeAtom.cpp:343
    Ui_Ut_102961a(const Ui_Ut_r102961a<EC>& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeAtom.cpp:352
    const T read() const { return ABS::ReadAtom(); } //gcnl:UlamTypeAtom.cpp:384
    void write(const T& v) { ABS::WriteAtom(v); } //gcnl:UlamTypeAtom.cpp:413
    void write(const AtomRefBitStorage<EC>& v) { ABS::WriteAtom(v.ReadAtom()); } //gcnl:UlamTypeAtom.cpp:421
  };
} //MFM
#endif /*Ud_Ui_Ut_102961a */

#ifndef Ud_Ui_Ut_r102321s
#define Ud_Ui_Ut_r102321s
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321s : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:314
    const u32 getRegistrationNumber() const { return UlamRef<EC>(*this, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitiveString.cpp:303
    const u32 getStringIndex() const { return UlamRef<EC>(*this, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitiveString.cpp:313

    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:346
    void setRegistrationNumber(u32 regnum) { UlamRef<EC>(*this, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(regnum); } //gcnl:UlamTypePrimitiveString.cpp:329
    void setStringIndex(u32 sidx) { UlamRef<EC>(*this, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(sidx); } //gcnl:UlamTypePrimitiveString.cpp:337

    Ui_Ut_r102321s(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321s(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321s(const Ui_Ut_r102321s<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321s */

#ifndef Ud_Ui_Ut_102321s
#define Ud_Ui_Ut_102321s
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321s : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitiveString.cpp:401
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitiveString.cpp:404

    enum { REG_NUM_BITS = 16, STR_IDX_BITS = 16, STR_IDX_MASK = 65535}; //gcnl:UlamTypePrimitiveString.cpp:416
    static u32 getRegNum(u32 combinedidx) { return (combinedidx >> REG_NUM_BITS); } //gcnl:UlamTypePrimitiveString.cpp:421
    static u32 getStrIdx(u32 combinedidx) { return (combinedidx & STR_IDX_MASK); } //gcnl:UlamTypePrimitiveString.cpp:424
    static u32 makeCombinedIdx(u32 regnum, u32 stridx) { return ((regnum << REG_NUM_BITS) | (stridx & STR_IDX_MASK)); } //gcnl:UlamTypePrimitiveString.cpp:427
    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:556
    const u32 getRegistrationNumber() const { return BVS::Read(0u, 16u); } //gcnl:UlamTypePrimitiveString.cpp:515
    const u32 getStringIndex() const { return BVS::Read(16u, 16u); } //gcnl:UlamTypePrimitiveString.cpp:525

    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:593
    void setRegistrationNumber(u32 regnum) { BVS::Write(0u, 16u, regnum); } //gcnl:UlamTypePrimitiveString.cpp:541
    void setStringIndex(u32 sidx) { BVS::Write(16u, 16u, sidx); } //gcnl:UlamTypePrimitiveString.cpp:549

    Ui_Ut_102321s() { } //gcnl:UlamTypePrimitiveString.cpp:440
    Ui_Ut_102321s(u32 regnum, u32 sidx) { setRegistrationNumber(regnum); setStringIndex(sidx); } //gcnl:UlamTypePrimitiveString.cpp:452
    Ui_Ut_102321s(const Ui_Ut_102321s& other) { this->write(other.read()); } //gcnl:UlamTypePrimitiveString.cpp:475
    Ui_Ut_102321s(const Ui_Ut_r102321s<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitiveString.cpp:484
  };
} //MFM
#endif /*Ud_Ui_Ut_102321s */

#ifndef Ud_Ui_Uq_r10106UrSelf10
#define Ud_Ui_Uq_r10106UrSelf10
namespace MFM{

  template<class EC> class Uq_10106UrSelf10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10106UrSelf10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10106UrSelf10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10106UrSelf10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10106UrSelf10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10106UrSelf10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10106UrSelf10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10106UrSelf10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10106UrSelf10(const Ui_Uq_r10106UrSelf10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10106UrSelf10 */

#ifndef Ud_Ui_Uq_10106UrSelf10
#define Ud_Ui_Uq_10106UrSelf10
namespace MFM{

  template<class EC> class Uq_10106UrSelf10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10106UrSelf10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10106UrSelf10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10106UrSelf10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10106UrSelf10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10106UrSelf10(const Ui_Uq_10106UrSelf10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10106UrSelf10(const Ui_Uq_r10106UrSelf10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10106UrSelf10 */

#ifndef Ud_Ui_Ue_r10106Primer10
#define Ud_Ui_Ue_r10106Primer10
namespace MFM{

  template<class EC> class Ue_10106Primer10;  //forward
 //gcnl:UlamTypeClassElement.cpp:217
  template<class EC>
  struct Ui_Ue_r10106Primer10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Ue_10106Primer10<EC> Us; //gcnl:UlamTypeClassElement.cpp:239

    const T read() { return UlamRef<EC>::ReadAtom(); /* read entire element ref */ } //gcnl:UlamTypeClassElement.cpp:314
    void write(const T& targ) { if(targ.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(targ); /* write entire element */ } //gcnl:UlamTypeClassElement.cpp:358
    void write(const AtomRefBitStorage<EC>& v) { if(v.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(v.ReadAtom()); /* write entire atom */ } //gcnl:UlamTypeClassElement.cpp:374
    Ui_Ue_r10106Primer10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC> & uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::ELEMENTAL, uc) { } //gcnl:UlamTypeClassElement.cpp:259
    Ui_Ue_r10106Primer10(const Ui_Ue_r10106Primer10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:272
    Ui_Ue_r10106Primer10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:284
  };
} //MFM
#endif /*Ud_Ui_Ue_r10106Primer10 */

#ifndef Ud_Ui_Ue_10106Primer10
#define Ud_Ui_Ue_10106Primer10
namespace MFM{

  template<class EC> class Ue_10106Primer10;  //forward //gcnl:UlamTypeClassElement.cpp:434

  template<class EC>
  struct Ui_Ue_10106Primer10 : public AtomBitStorage<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef AtomRefBitStorage<EC> ABS; //gcnl:UlamTypeClassElement.cpp:454

    typedef Ue_10106Primer10<EC> Us; //gcnl:UlamTypeClassElement.cpp:461

    const T read() const { return ABS::ReadAtom(); } //gcnl:UlamTypeClassElement.cpp:541
    void write(const T& v) { ABS::WriteAtom(v); } //gcnl:UlamTypeClassElement.cpp:582
    Ui_Ue_10106Primer10() : AtomBitStorage<EC>(Us::THE_INSTANCE.GetDefaultAtom()) { } //gcnl:UlamTypeClassElement.cpp:476
    Ui_Ue_10106Primer10(const T& d) : AtomBitStorage<EC>(d) { if(d.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:487
    Ui_Ue_10106Primer10(const Ui_Ue_10106Primer10<EC> & arg) { this->m_stg = arg.m_stg; } //gcnl:UlamTypeClassElement.cpp:495
    Ui_Ue_10106Primer10(const AtomRefBitStorage<EC> & arg) : AtomBitStorage<EC>(arg.ReadAtom()) { if(arg.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:504
    Ui_Ue_10106Primer10(const Ui_Ue_r10106Primer10<EC>& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeClassElement.cpp:513
  };
} //MFM
#endif /*Ud_Ui_Ue_10106Primer10 */

#ifndef Ud_Ui_Uq_r10106Random10
#define Ud_Ui_Uq_r10106Random10
namespace MFM{

  template<class EC> class Uq_10106Random10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10106Random10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10106Random10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10106Random10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10106Random10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10106Random10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10106Random10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10106Random10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10106Random10(const Ui_Uq_r10106Random10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10106Random10 */

#ifndef Ud_Ui_Uq_10106Random10
#define Ud_Ui_Uq_10106Random10
namespace MFM{

  template<class EC> class Uq_10106Random10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10106Random10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10106Random10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10106Random10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10106Random10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10106Random10(const Ui_Uq_10106Random10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10106Random10(const Ui_Uq_r10106Random10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10106Random10 */

#ifndef Ud_Ui_Uq_r10109211EventWindow10
#define Ud_Ui_Uq_r10109211EventWindow10
namespace MFM{

  template<class EC> class Uq_10109211EventWindow10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10109211EventWindow10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10109211EventWindow10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10109211EventWindow10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10109211EventWindow10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10109211EventWindow10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10109211EventWindow10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10109211EventWindow10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10109211EventWindow10(const Ui_Uq_r10109211EventWindow10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
    /* a custom array ('Us' has aref, aset methods) */ //gcnl:UlamTypeClassQuark.cpp:305
  };
} //MFM
#endif /*Ud_Ui_Uq_r10109211EventWindow10 */

#ifndef Ud_Ui_Uq_10109211EventWindow10
#define Ud_Ui_Uq_10109211EventWindow10
namespace MFM{

  template<class EC> class Uq_10109211EventWindow10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10109211EventWindow10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10109211EventWindow10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10109211EventWindow10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10109211EventWindow10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10109211EventWindow10(const Ui_Uq_10109211EventWindow10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10109211EventWindow10(const Ui_Uq_r10109211EventWindow10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10109211EventWindow10 */

#ifndef Ud_Ui_Uq_r10104Cell10
#define Ud_Ui_Uq_r10104Cell10
namespace MFM{

  template<class EC> class Uq_10104Cell10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10104Cell10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10104Cell10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10104Cell10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10104Cell10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10104Cell10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10104Cell10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10104Cell10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10104Cell10(const Ui_Uq_r10104Cell10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10104Cell10 */

#ifndef Ud_Ui_Uq_10104Cell10
#define Ud_Ui_Uq_10104Cell10
namespace MFM{

  template<class EC> class Uq_10104Cell10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10104Cell10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10104Cell10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10104Cell10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10104Cell10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10104Cell10(const Ui_Uq_10104Cell10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10104Cell10(const Ui_Uq_r10104Cell10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10104Cell10 */

#ifndef Ud_Ui_Uq_r10109212DecisionTree10
#define Ud_Ui_Uq_r10109212DecisionTree10
namespace MFM{

  template<class EC> class Uq_10109212DecisionTree10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10109212DecisionTree10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10109212DecisionTree10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10109212DecisionTree10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10109212DecisionTree10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10109212DecisionTree10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10109212DecisionTree10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10109212DecisionTree10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10109212DecisionTree10(const Ui_Uq_r10109212DecisionTree10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10109212DecisionTree10 */

#ifndef Ud_Ui_Uq_10109212DecisionTree10
#define Ud_Ui_Uq_10109212DecisionTree10
namespace MFM{

  template<class EC> class Uq_10109212DecisionTree10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10109212DecisionTree10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10109212DecisionTree10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10109212DecisionTree10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10109212DecisionTree10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10109212DecisionTree10(const Ui_Uq_10109212DecisionTree10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10109212DecisionTree10(const Ui_Uq_r10109212DecisionTree10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10109212DecisionTree10 */

#ifndef Ud_Ui_Ue_r102564Gene10
#define Ud_Ui_Ue_r102564Gene10
namespace MFM{

  template<class EC> class Ue_102564Gene10;  //forward
 //gcnl:UlamTypeClassElement.cpp:217
  template<class EC>
  struct Ui_Ue_r102564Gene10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Ue_102564Gene10<EC> Us; //gcnl:UlamTypeClassElement.cpp:239

    const T read() { return UlamRef<EC>::ReadAtom(); /* read entire element ref */ } //gcnl:UlamTypeClassElement.cpp:314
    void write(const T& targ) { if(targ.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(targ); /* write entire element */ } //gcnl:UlamTypeClassElement.cpp:358
    void write(const AtomRefBitStorage<EC>& v) { if(v.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(v.ReadAtom()); /* write entire atom */ } //gcnl:UlamTypeClassElement.cpp:374
    Ui_Ue_r102564Gene10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC> & uc) : UlamRef<EC>(idx, 56u, targ, effself, UlamRef<EC>::ELEMENTAL, uc) { } //gcnl:UlamTypeClassElement.cpp:259
    Ui_Ue_r102564Gene10(const Ui_Ue_r102564Gene10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:272
    Ui_Ue_r102564Gene10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 56u, effself, UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:284
  };
} //MFM
#endif /*Ud_Ui_Ue_r102564Gene10 */

#ifndef Ud_Ui_Ue_102564Gene10
#define Ud_Ui_Ue_102564Gene10
namespace MFM{

  template<class EC> class Ue_102564Gene10;  //forward //gcnl:UlamTypeClassElement.cpp:434

  template<class EC>
  struct Ui_Ue_102564Gene10 : public AtomBitStorage<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef AtomRefBitStorage<EC> ABS; //gcnl:UlamTypeClassElement.cpp:454

    typedef Ue_102564Gene10<EC> Us; //gcnl:UlamTypeClassElement.cpp:461

    const T read() const { return ABS::ReadAtom(); } //gcnl:UlamTypeClassElement.cpp:541
    void write(const T& v) { ABS::WriteAtom(v); } //gcnl:UlamTypeClassElement.cpp:582
    Ui_Ue_102564Gene10() : AtomBitStorage<EC>(Us::THE_INSTANCE.GetDefaultAtom()) { } //gcnl:UlamTypeClassElement.cpp:476
    Ui_Ue_102564Gene10(const T& d) : AtomBitStorage<EC>(d) { if(d.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:487
    Ui_Ue_102564Gene10(const Ui_Ue_102564Gene10<EC> & arg) { this->m_stg = arg.m_stg; } //gcnl:UlamTypeClassElement.cpp:495
    Ui_Ue_102564Gene10(const AtomRefBitStorage<EC> & arg) : AtomBitStorage<EC>(arg.ReadAtom()) { if(arg.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:504
    Ui_Ue_102564Gene10(const Ui_Ue_r102564Gene10<EC>& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeClassElement.cpp:513
  };
} //MFM
#endif /*Ud_Ui_Ue_102564Gene10 */

#ifndef Ud_Ui_Ue_r10105Empty10
#define Ud_Ui_Ue_r10105Empty10
namespace MFM{

  template<class EC> class Ue_10105Empty10;  //forward
 //gcnl:UlamTypeClassElement.cpp:217
  template<class EC>
  struct Ui_Ue_r10105Empty10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Ue_10105Empty10<EC> Us; //gcnl:UlamTypeClassElement.cpp:239

    const T read() { return UlamRef<EC>::ReadAtom(); /* read entire element ref */ } //gcnl:UlamTypeClassElement.cpp:314
    void write(const T& targ) { if(targ.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(targ); /* write entire element */ } //gcnl:UlamTypeClassElement.cpp:358
    void write(const AtomRefBitStorage<EC>& v) { if(v.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(v.ReadAtom()); /* write entire atom */ } //gcnl:UlamTypeClassElement.cpp:374
    Ui_Ue_r10105Empty10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC> & uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::ELEMENTAL, uc) { } //gcnl:UlamTypeClassElement.cpp:259
    Ui_Ue_r10105Empty10(const Ui_Ue_r10105Empty10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:272
    Ui_Ue_r10105Empty10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:284
  };
} //MFM
#endif /*Ud_Ui_Ue_r10105Empty10 */

#ifndef Ud_Ui_Ue_10105Empty10
#define Ud_Ui_Ue_10105Empty10
namespace MFM{

  template<class EC> class Ue_10105Empty10;  //forward //gcnl:UlamTypeClassElement.cpp:434

  template<class EC>
  struct Ui_Ue_10105Empty10 : public AtomBitStorage<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef AtomRefBitStorage<EC> ABS; //gcnl:UlamTypeClassElement.cpp:454

    typedef Ue_10105Empty10<EC> Us; //gcnl:UlamTypeClassElement.cpp:461

    const T read() const { return ABS::ReadAtom(); } //gcnl:UlamTypeClassElement.cpp:541
    void write(const T& v) { ABS::WriteAtom(v); } //gcnl:UlamTypeClassElement.cpp:582
    Ui_Ue_10105Empty10() : AtomBitStorage<EC>(Us::THE_INSTANCE.GetDefaultAtom()) { } //gcnl:UlamTypeClassElement.cpp:476
    Ui_Ue_10105Empty10(const T& d) : AtomBitStorage<EC>(d) { if(d.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:487
    Ui_Ue_10105Empty10(const Ui_Ue_10105Empty10<EC> & arg) { this->m_stg = arg.m_stg; } //gcnl:UlamTypeClassElement.cpp:495
    Ui_Ue_10105Empty10(const AtomRefBitStorage<EC> & arg) : AtomBitStorage<EC>(arg.ReadAtom()) { if(arg.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:504
    Ui_Ue_10105Empty10(const Ui_Ue_r10105Empty10<EC>& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeClassElement.cpp:513
  };
} //MFM
#endif /*Ud_Ui_Ue_10105Empty10 */

#ifndef Ud_Ui_Uq_r1010919AtomUtils10
#define Ud_Ui_Uq_r1010919AtomUtils10
namespace MFM{

  template<class EC> class Uq_1010919AtomUtils10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r1010919AtomUtils10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_1010919AtomUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r1010919AtomUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r1010919AtomUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r1010919AtomUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r1010919AtomUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r1010919AtomUtils10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r1010919AtomUtils10(const Ui_Uq_r1010919AtomUtils10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r1010919AtomUtils10 */

#ifndef Ud_Ui_Uq_1010919AtomUtils10
#define Ud_Ui_Uq_1010919AtomUtils10
namespace MFM{

  template<class EC> class Uq_1010919AtomUtils10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_1010919AtomUtils10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_1010919AtomUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_1010919AtomUtils10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_1010919AtomUtils10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_1010919AtomUtils10(const Ui_Uq_1010919AtomUtils10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_1010919AtomUtils10(const Ui_Uq_r1010919AtomUtils10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_1010919AtomUtils10 */

#ifndef Ud_Ui_Uq_r10104Fail10
#define Ud_Ui_Uq_r10104Fail10
namespace MFM{

  template<class EC> class Uq_10104Fail10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10104Fail10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10104Fail10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10104Fail10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10104Fail10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10104Fail10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10104Fail10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10104Fail10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10104Fail10(const Ui_Uq_r10104Fail10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10104Fail10 */

#ifndef Ud_Ui_Uq_10104Fail10
#define Ud_Ui_Uq_10104Fail10
namespace MFM{

  template<class EC> class Uq_10104Fail10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10104Fail10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10104Fail10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10104Fail10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10104Fail10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10104Fail10(const Ui_Uq_10104Fail10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10104Fail10(const Ui_Uq_r10104Fail10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10104Fail10 */

#ifndef Ud_Ui_Uq_r10105MDist10
#define Ud_Ui_Uq_r10105MDist10
namespace MFM{

  template<class EC> class Uq_10105MDist10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10105MDist10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10105MDist10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10105MDist10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10105MDist10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10105MDist10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10105MDist10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10105MDist10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10105MDist10(const Ui_Uq_r10105MDist10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10105MDist10 */

#ifndef Ud_Ui_Uq_10105MDist10
#define Ud_Ui_Uq_10105MDist10
namespace MFM{

  template<class EC> class Uq_10105MDist10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10105MDist10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10105MDist10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10105MDist10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10105MDist10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10105MDist10(const Ui_Uq_10105MDist10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10105MDist10(const Ui_Uq_r10105MDist10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10105MDist10 */

#ifndef Ud_Ui_Uq_r102323C2D10
#define Ud_Ui_Uq_r102323C2D10
namespace MFM{

  template<class EC> class Uq_102323C2D10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r102323C2D10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 32}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_102323C2D10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r102323C2D10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r102323C2D10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 32u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r102323C2D10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r102323C2D10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 32u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r102323C2D10(const UlamRef<EC>& r) : UlamRef<EC>(r, 32u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r102323C2D10(const Ui_Uq_r102323C2D10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r102323C2D10 */

#ifndef Ud_Ui_Uq_102323C2D10
#define Ud_Ui_Uq_102323C2D10
namespace MFM{

  template<class EC> class Uq_102323C2D10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_102323C2D10 : public BitVectorBitStorage<EC, BitVector<32> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 32}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<32> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_102323C2D10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_102323C2D10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_102323C2D10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_102323C2D10(const Ui_Uq_102323C2D10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_102323C2D10(const Ui_Uq_r102323C2D10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_102323C2D10 */

#ifndef Ud_Ui_Uq_r10109210ColorUtils10
#define Ud_Ui_Uq_r10109210ColorUtils10
namespace MFM{

  template<class EC> class Uq_10109210ColorUtils10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10109210ColorUtils10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10109210ColorUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10109210ColorUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10109210ColorUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10109210ColorUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10109210ColorUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10109210ColorUtils10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10109210ColorUtils10(const Ui_Uq_r10109210ColorUtils10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10109210ColorUtils10 */

#ifndef Ud_Ui_Uq_10109210ColorUtils10
#define Ud_Ui_Uq_10109210ColorUtils10
namespace MFM{

  template<class EC> class Uq_10109210ColorUtils10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10109210ColorUtils10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10109210ColorUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10109210ColorUtils10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10109210ColorUtils10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10109210ColorUtils10(const Ui_Uq_10109210ColorUtils10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10109210ColorUtils10(const Ui_Uq_r10109210ColorUtils10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10109210ColorUtils10 */

#ifndef Ud_Ui_Ue_r102717Nucleus10
#define Ud_Ui_Ue_r102717Nucleus10
namespace MFM{

  template<class EC> class Ue_102717Nucleus10;  //forward
 //gcnl:UlamTypeClassElement.cpp:217
  template<class EC>
  struct Ui_Ue_r102717Nucleus10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Ue_102717Nucleus10<EC> Us; //gcnl:UlamTypeClassElement.cpp:239

    const T read() { return UlamRef<EC>::ReadAtom(); /* read entire element ref */ } //gcnl:UlamTypeClassElement.cpp:314
    void write(const T& targ) { if(targ.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(targ); /* write entire element */ } //gcnl:UlamTypeClassElement.cpp:358
    void write(const AtomRefBitStorage<EC>& v) { if(v.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(v.ReadAtom()); /* write entire atom */ } //gcnl:UlamTypeClassElement.cpp:374
    Ui_Ue_r102717Nucleus10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC> & uc) : UlamRef<EC>(idx, 71u, targ, effself, UlamRef<EC>::ELEMENTAL, uc) { } //gcnl:UlamTypeClassElement.cpp:259
    Ui_Ue_r102717Nucleus10(const Ui_Ue_r102717Nucleus10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:272
    Ui_Ue_r102717Nucleus10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 71u, effself, UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:284
  };
} //MFM
#endif /*Ud_Ui_Ue_r102717Nucleus10 */

#ifndef Ud_Ui_Ue_102717Nucleus10
#define Ud_Ui_Ue_102717Nucleus10
namespace MFM{

  template<class EC> class Ue_102717Nucleus10;  //forward //gcnl:UlamTypeClassElement.cpp:434

  template<class EC>
  struct Ui_Ue_102717Nucleus10 : public AtomBitStorage<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef AtomRefBitStorage<EC> ABS; //gcnl:UlamTypeClassElement.cpp:454

    typedef Ue_102717Nucleus10<EC> Us; //gcnl:UlamTypeClassElement.cpp:461

    const T read() const { return ABS::ReadAtom(); } //gcnl:UlamTypeClassElement.cpp:541
    void write(const T& v) { ABS::WriteAtom(v); } //gcnl:UlamTypeClassElement.cpp:582
    Ui_Ue_102717Nucleus10() : AtomBitStorage<EC>(Us::THE_INSTANCE.GetDefaultAtom()) { } //gcnl:UlamTypeClassElement.cpp:476
    Ui_Ue_102717Nucleus10(const T& d) : AtomBitStorage<EC>(d) { if(d.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:487
    Ui_Ue_102717Nucleus10(const Ui_Ue_102717Nucleus10<EC> & arg) { this->m_stg = arg.m_stg; } //gcnl:UlamTypeClassElement.cpp:495
    Ui_Ue_102717Nucleus10(const AtomRefBitStorage<EC> & arg) : AtomBitStorage<EC>(arg.ReadAtom()) { if(arg.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:504
    Ui_Ue_102717Nucleus10(const Ui_Ue_r102717Nucleus10<EC>& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeClassElement.cpp:513
  };
} //MFM
#endif /*Ud_Ui_Ue_102717Nucleus10 */

#ifndef Ud_Ui_Un_r10412489213WindowScanner10
#define Ud_Ui_Un_r10412489213WindowScanner10
namespace MFM{

  template<class EC> class Un_10412489213WindowScanner10;  //forward //gcnl:UlamTypeClassTransient.cpp:218

  template<class EC>
  struct Ui_Un_r10412489213WindowScanner10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Un_10412489213WindowScanner10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:240
    typedef UlamRef<EC> Up_Us; //gcnl:UlamTypeClassTransient.cpp:244
    const BitVector<1248> read() const { BitVector<1248> tmpbv; this->GetStorage().ReadBV(this->GetPos(), tmpbv); return tmpbv; /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:332
    void write(const BitVector<1248>& targ) { this->GetStorage().WriteBV(this->GetPos(), targ); /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:367
    Ui_Un_r10412489213WindowScanner10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 1248u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassTransient.cpp:262
    Ui_Un_r10412489213WindowScanner10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 1248u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:274
    Ui_Un_r10412489213WindowScanner10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:285
    Ui_Un_r10412489213WindowScanner10(const Ui_Un_r10412489213WindowScanner10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Un_r10412489213WindowScanner10 */

#ifndef Ud_Ui_Un_10412489213WindowScanner10
#define Ud_Ui_Un_10412489213WindowScanner10
namespace MFM{

  template<class EC>
  struct Ui_Un_10412489213WindowScanner10 : public BitVectorBitStorage<EC, BitVector<1248> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<1248> BV; //gcnl:UlamTypeClassTransient.cpp:447
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassTransient.cpp:450

    typedef Un_10412489213WindowScanner10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:469

    const BitVector<1248> read() const { BitVector<1248> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypeClassTransient.cpp:548
    void  write(const BitVector<1248>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypeClassTransient.cpp:578
    Ui_Un_10412489213WindowScanner10() { Us::THE_INSTANCE.getDefaultTransient(0u, *this); } //gcnl:UlamTypeClassTransient.cpp:483
    Ui_Un_10412489213WindowScanner10(const BitVector<1248>& d) { write(d); } //gcnl:UlamTypeClassTransient.cpp:503
    Ui_Un_10412489213WindowScanner10(const Ui_Un_10412489213WindowScanner10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassTransient.cpp:511
    Ui_Un_10412489213WindowScanner10(const Ui_Un_r10412489213WindowScanner10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassTransient.cpp:519
  };
} //MFM
#endif /*Ud_Ui_Un_10412489213WindowScanner10 */

#ifndef Ud_Ui_Uq_r10109211ClusterByID10
#define Ud_Ui_Uq_r10109211ClusterByID10
namespace MFM{

  template<class EC> class Uq_10109211ClusterByID10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10109211ClusterByID10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10109211ClusterByID10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10109211ClusterByID10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10109211ClusterByID10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10109211ClusterByID10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10109211ClusterByID10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10109211ClusterByID10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10109211ClusterByID10(const Ui_Uq_r10109211ClusterByID10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10109211ClusterByID10 */

#ifndef Ud_Ui_Uq_10109211ClusterByID10
#define Ud_Ui_Uq_10109211ClusterByID10
namespace MFM{

  template<class EC> class Uq_10109211ClusterByID10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10109211ClusterByID10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10109211ClusterByID10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10109211ClusterByID10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10109211ClusterByID10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10109211ClusterByID10(const Ui_Uq_10109211ClusterByID10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10109211ClusterByID10(const Ui_Uq_r10109211ClusterByID10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10109211ClusterByID10 */

#ifndef Ud_Ui_Uq_r1010919SiteUtils10
#define Ud_Ui_Uq_r1010919SiteUtils10
namespace MFM{

  template<class EC> class Uq_1010919SiteUtils10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r1010919SiteUtils10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_1010919SiteUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r1010919SiteUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r1010919SiteUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r1010919SiteUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r1010919SiteUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r1010919SiteUtils10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r1010919SiteUtils10(const Ui_Uq_r1010919SiteUtils10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r1010919SiteUtils10 */

#ifndef Ud_Ui_Uq_1010919SiteUtils10
#define Ud_Ui_Uq_1010919SiteUtils10
namespace MFM{

  template<class EC> class Uq_1010919SiteUtils10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_1010919SiteUtils10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_1010919SiteUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_1010919SiteUtils10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_1010919SiteUtils10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_1010919SiteUtils10(const Ui_Uq_1010919SiteUtils10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_1010919SiteUtils10(const Ui_Uq_r1010919SiteUtils10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_1010919SiteUtils10 */

#ifndef Ud_Ui_Un_r10411209215SiteVisitorByID10
#define Ud_Ui_Un_r10411209215SiteVisitorByID10
namespace MFM{

  template<class EC> class Un_10411209215SiteVisitorByID10;  //forward //gcnl:UlamTypeClassTransient.cpp:218

  template<class EC>
  struct Ui_Un_r10411209215SiteVisitorByID10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Un_10411209215SiteVisitorByID10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:240
    typedef UlamRef<EC> Up_Us; //gcnl:UlamTypeClassTransient.cpp:244
    const BitVector<1120> read() const { BitVector<1120> tmpbv; this->GetStorage().ReadBV(this->GetPos(), tmpbv); return tmpbv; /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:332
    void write(const BitVector<1120>& targ) { this->GetStorage().WriteBV(this->GetPos(), targ); /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:367
    Ui_Un_r10411209215SiteVisitorByID10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 1120u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassTransient.cpp:262
    Ui_Un_r10411209215SiteVisitorByID10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 1120u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:274
    Ui_Un_r10411209215SiteVisitorByID10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:285
    Ui_Un_r10411209215SiteVisitorByID10(const Ui_Un_r10411209215SiteVisitorByID10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Un_r10411209215SiteVisitorByID10 */

#ifndef Ud_Ui_Un_10411209215SiteVisitorByID10
#define Ud_Ui_Un_10411209215SiteVisitorByID10
namespace MFM{

  template<class EC>
  struct Ui_Un_10411209215SiteVisitorByID10 : public BitVectorBitStorage<EC, BitVector<1120> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<1120> BV; //gcnl:UlamTypeClassTransient.cpp:447
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassTransient.cpp:450

    typedef Un_10411209215SiteVisitorByID10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:469

    const BitVector<1120> read() const { BitVector<1120> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypeClassTransient.cpp:548
    void  write(const BitVector<1120>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypeClassTransient.cpp:578
    Ui_Un_10411209215SiteVisitorByID10() { Us::THE_INSTANCE.getDefaultTransient(0u, *this); } //gcnl:UlamTypeClassTransient.cpp:483
    Ui_Un_10411209215SiteVisitorByID10(const BitVector<1120>& d) { write(d); } //gcnl:UlamTypeClassTransient.cpp:503
    Ui_Un_10411209215SiteVisitorByID10(const Ui_Un_10411209215SiteVisitorByID10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassTransient.cpp:511
    Ui_Un_10411209215SiteVisitorByID10(const Ui_Un_r10411209215SiteVisitorByID10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassTransient.cpp:519
  };
} //MFM
#endif /*Ud_Ui_Un_10411209215SiteVisitorByID10 */

#ifndef Ud_Ui_Ue_r102158EggShell10
#define Ud_Ui_Ue_r102158EggShell10
namespace MFM{

  template<class EC> class Ue_102158EggShell10;  //forward
 //gcnl:UlamTypeClassElement.cpp:217
  template<class EC>
  struct Ui_Ue_r102158EggShell10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Ue_102158EggShell10<EC> Us; //gcnl:UlamTypeClassElement.cpp:239

    const T read() { return UlamRef<EC>::ReadAtom(); /* read entire element ref */ } //gcnl:UlamTypeClassElement.cpp:314
    void write(const T& targ) { if(targ.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(targ); /* write entire element */ } //gcnl:UlamTypeClassElement.cpp:358
    void write(const AtomRefBitStorage<EC>& v) { if(v.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); UlamRef<EC>::WriteAtom(v.ReadAtom()); /* write entire atom */ } //gcnl:UlamTypeClassElement.cpp:374
    Ui_Ue_r102158EggShell10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC> & uc) : UlamRef<EC>(idx, 15u, targ, effself, UlamRef<EC>::ELEMENTAL, uc) { } //gcnl:UlamTypeClassElement.cpp:259
    Ui_Ue_r102158EggShell10(const Ui_Ue_r102158EggShell10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:272
    Ui_Ue_r102158EggShell10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 15u, effself, UlamRef<EC>::ELEMENTAL) { } //gcnl:UlamTypeClassElement.cpp:284
  };
} //MFM
#endif /*Ud_Ui_Ue_r102158EggShell10 */

#ifndef Ud_Ui_Ue_102158EggShell10
#define Ud_Ui_Ue_102158EggShell10
namespace MFM{

  template<class EC> class Ue_102158EggShell10;  //forward //gcnl:UlamTypeClassElement.cpp:434

  template<class EC>
  struct Ui_Ue_102158EggShell10 : public AtomBitStorage<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef AtomRefBitStorage<EC> ABS; //gcnl:UlamTypeClassElement.cpp:454

    typedef Ue_102158EggShell10<EC> Us; //gcnl:UlamTypeClassElement.cpp:461

    const T read() const { return ABS::ReadAtom(); } //gcnl:UlamTypeClassElement.cpp:541
    void write(const T& v) { ABS::WriteAtom(v); } //gcnl:UlamTypeClassElement.cpp:582
    Ui_Ue_102158EggShell10() : AtomBitStorage<EC>(Us::THE_INSTANCE.GetDefaultAtom()) { } //gcnl:UlamTypeClassElement.cpp:476
    Ui_Ue_102158EggShell10(const T& d) : AtomBitStorage<EC>(d) { if(d.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:487
    Ui_Ue_102158EggShell10(const Ui_Ue_102158EggShell10<EC> & arg) { this->m_stg = arg.m_stg; } //gcnl:UlamTypeClassElement.cpp:495
    Ui_Ue_102158EggShell10(const AtomRefBitStorage<EC> & arg) : AtomBitStorage<EC>(arg.ReadAtom()) { if(arg.GetType() != Us::THE_INSTANCE.GetType()) FAIL(ILLEGAL_ARGUMENT); } //gcnl:UlamTypeClassElement.cpp:504
    Ui_Ue_102158EggShell10(const Ui_Ue_r102158EggShell10<EC>& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeClassElement.cpp:513
  };
} //MFM
#endif /*Ud_Ui_Ue_102158EggShell10 */

#ifndef Ud_Ui_Uq_r10109210DebugUtils10
#define Ud_Ui_Uq_r10109210DebugUtils10
namespace MFM{

  template<class EC> class Uq_10109210DebugUtils10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10109210DebugUtils10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10109210DebugUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10109210DebugUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10109210DebugUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10109210DebugUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10109210DebugUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10109210DebugUtils10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10109210DebugUtils10(const Ui_Uq_r10109210DebugUtils10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10109210DebugUtils10 */

#ifndef Ud_Ui_Uq_10109210DebugUtils10
#define Ud_Ui_Uq_10109210DebugUtils10
namespace MFM{

  template<class EC> class Uq_10109210DebugUtils10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10109210DebugUtils10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10109210DebugUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10109210DebugUtils10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10109210DebugUtils10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10109210DebugUtils10(const Ui_Uq_10109210DebugUtils10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10109210DebugUtils10(const Ui_Uq_r10109210DebugUtils10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10109210DebugUtils10 */

#ifndef Ud_Ui_Uq_r10109211SiteVisitor10
#define Ud_Ui_Uq_r10109211SiteVisitor10
namespace MFM{

  template<class EC> class Uq_10109211SiteVisitor10;  //forward //gcnl:UlamTypeClassQuark.cpp:202

  template<class EC>
  struct Ui_Uq_r10109211SiteVisitor10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:211
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:223

    typedef Uq_10109211SiteVisitor10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:230
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:334
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:370
    Ui_Uq_r10109211SiteVisitor10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:249
    Ui_Uq_r10109211SiteVisitor10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:261
    Ui_Uq_r10109211SiteVisitor10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:271
    Ui_Uq_r10109211SiteVisitor10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:280
    Ui_Uq_r10109211SiteVisitor10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10109211SiteVisitor10(const Ui_Uq_r10109211SiteVisitor10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Uq_r10109211SiteVisitor10 */

#ifndef Ud_Ui_Uq_10109211SiteVisitor10
#define Ud_Ui_Uq_10109211SiteVisitor10
namespace MFM{

  template<class EC> class Uq_10109211SiteVisitor10; //forward //gcnl:UlamTypeClassQuark.cpp:431

  template<class EC>
  struct Ui_Uq_10109211SiteVisitor10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:456
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:464
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:467

    typedef Uq_10109211SiteVisitor10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:486

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:577
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:634
    Ui_Uq_10109211SiteVisitor10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:503
    Ui_Uq_10109211SiteVisitor10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:529
    Ui_Uq_10109211SiteVisitor10(const Ui_Uq_10109211SiteVisitor10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:538
    Ui_Uq_10109211SiteVisitor10(const Ui_Uq_r10109211SiteVisitor10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:546
  };
} //MFM
#endif /*Ud_Ui_Uq_10109211SiteVisitor10 */

#ifndef Ud_Ui_Un_r102329211OutOfBounds10
#define Ud_Ui_Un_r102329211OutOfBounds10
namespace MFM{

  template<class EC> class Un_102329211OutOfBounds10;  //forward //gcnl:UlamTypeClassTransient.cpp:218

  template<class EC>
  struct Ui_Un_r102329211OutOfBounds10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Un_102329211OutOfBounds10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:240
    typedef UlamRef<EC> Up_Us; //gcnl:UlamTypeClassTransient.cpp:244
    const BitVector<32> read() const { BitVector<32> tmpbv; this->GetStorage().ReadBV(this->GetPos(), tmpbv); return tmpbv; /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:332
    void write(const BitVector<32>& targ) { this->GetStorage().WriteBV(this->GetPos(), targ); /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:367
    Ui_Un_r102329211OutOfBounds10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassTransient.cpp:262
    Ui_Un_r102329211OutOfBounds10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 32u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:274
    Ui_Un_r102329211OutOfBounds10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:285
    Ui_Un_r102329211OutOfBounds10(const Ui_Un_r102329211OutOfBounds10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Un_r102329211OutOfBounds10 */

#ifndef Ud_Ui_Un_102329211OutOfBounds10
#define Ud_Ui_Un_102329211OutOfBounds10
namespace MFM{

  template<class EC>
  struct Ui_Un_102329211OutOfBounds10 : public BitVectorBitStorage<EC, BitVector<32> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypeClassTransient.cpp:447
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassTransient.cpp:450

    typedef Un_102329211OutOfBounds10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:469

    const BitVector<32> read() const { BitVector<32> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypeClassTransient.cpp:548
    void  write(const BitVector<32>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypeClassTransient.cpp:578
    Ui_Un_102329211OutOfBounds10() { Us::THE_INSTANCE.getDefaultTransient(0u, *this); } //gcnl:UlamTypeClassTransient.cpp:483
    Ui_Un_102329211OutOfBounds10(const BitVector<32>& d) { write(d); } //gcnl:UlamTypeClassTransient.cpp:503
    Ui_Un_102329211OutOfBounds10(const Ui_Un_102329211OutOfBounds10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassTransient.cpp:511
    Ui_Un_102329211OutOfBounds10(const Ui_Un_r102329211OutOfBounds10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassTransient.cpp:519
  };
} //MFM
#endif /*Ud_Ui_Un_102329211OutOfBounds10 */

#ifndef Ud_Ui_Un_r1035449217SiteVisitorByType10
#define Ud_Ui_Un_r1035449217SiteVisitorByType10
namespace MFM{

  template<class EC> class Un_1035449217SiteVisitorByType10;  //forward //gcnl:UlamTypeClassTransient.cpp:218

  template<class EC>
  struct Ui_Un_r1035449217SiteVisitorByType10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Un_1035449217SiteVisitorByType10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:240
    typedef UlamRef<EC> Up_Us; //gcnl:UlamTypeClassTransient.cpp:244
    const BitVector<544> read() const { BitVector<544> tmpbv; this->GetStorage().ReadBV(this->GetPos(), tmpbv); return tmpbv; /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:332
    void write(const BitVector<544>& targ) { this->GetStorage().WriteBV(this->GetPos(), targ); /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:367
    Ui_Un_r1035449217SiteVisitorByType10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 544u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassTransient.cpp:262
    Ui_Un_r1035449217SiteVisitorByType10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 544u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:274
    Ui_Un_r1035449217SiteVisitorByType10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:285
    Ui_Un_r1035449217SiteVisitorByType10(const Ui_Un_r1035449217SiteVisitorByType10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:297
  };
} //MFM
#endif /*Ud_Ui_Un_r1035449217SiteVisitorByType10 */

#ifndef Ud_Ui_Un_1035449217SiteVisitorByType10
#define Ud_Ui_Un_1035449217SiteVisitorByType10
namespace MFM{

  template<class EC>
  struct Ui_Un_1035449217SiteVisitorByType10 : public BitVectorBitStorage<EC, BitVector<544> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<544> BV; //gcnl:UlamTypeClassTransient.cpp:447
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassTransient.cpp:450

    typedef Un_1035449217SiteVisitorByType10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:469

    const BitVector<544> read() const { BitVector<544> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypeClassTransient.cpp:548
    void  write(const BitVector<544>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypeClassTransient.cpp:578
    Ui_Un_1035449217SiteVisitorByType10() { Us::THE_INSTANCE.getDefaultTransient(0u, *this); } //gcnl:UlamTypeClassTransient.cpp:483
    Ui_Un_1035449217SiteVisitorByType10(const BitVector<544>& d) { write(d); } //gcnl:UlamTypeClassTransient.cpp:503
    Ui_Un_1035449217SiteVisitorByType10(const Ui_Un_1035449217SiteVisitorByType10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassTransient.cpp:511
    Ui_Un_1035449217SiteVisitorByType10(const Ui_Un_r1035449217SiteVisitorByType10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassTransient.cpp:519
  };
} //MFM
#endif /*Ud_Ui_Un_1035449217SiteVisitorByType10 */

