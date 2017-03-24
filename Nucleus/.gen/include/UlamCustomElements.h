#ifndef ULAMCUSTOMELEMENTS_H
#define ULAMCUSTOMELEMENTS_H

#include "AbstractDriver.h"

#include "Ue_10105Empty10.h"
#include "Ue_102128EggShell10.h"
#include "Ue_102574Gene10.h"
#include "Ue_102717Nucleus10.h"
#include "Uq_10104Cell10.h"
#include "Uq_10104Fail10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10106Random10.h"
#include "Uq_10106UrSelf10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_1010919SiteUtils10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Uq_10109210DebugUtils10.h"
#include "Uq_10109211ClusterByID10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109211SiteVisitor10.h"
#include "Uq_10109212DecisionTree10.h"
#include "Uq_102323C2D10.h"
#include "Un_102329211OutOfBounds10.h"
#include "Un_1035449217SiteVisitorByType10.h"
#include "Un_10411209215SiteVisitorByID10.h"
#include "Un_10412489213WindowScanner10.h"

/* Metadata for UlamElementInfoForUe_10105Empty10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/usr/lib/ulam/ULAM/bin/../share/ulam/stdlib/Empty.ulam'.
   Make any desired changes there!

   Generated on Fri Mar 24 06:10:22 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10105Empty10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10105Empty10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10105Empty10() { }
    const char * GetName() const { return "Empty"; }
    const char * GetSymbol() const { return "E"; }
    const char * GetSummary() const { return "This stub is linked to the actual Element_Empty by special-case setup code"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff000000; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102128EggShell10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './EggShell.ulam'.
   Make any desired changes there!

   Generated on Fri Mar 24 06:10:22 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102128EggShell10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102128EggShell10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102128EggShell10() { }
    const char * GetName() const { return "EggShell"; }
    const char * GetSymbol() const { return "Eg"; }
    const char * GetSummary() const { return "EggShell (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "Spencer Harmon"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "lgpl"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xffbb5522; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      Random & r = const_cast<UlamContext<EC> &>(uc).GetRandom();
      return r.Create(8);
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102574Gene10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Gene.ulam'.
   Make any desired changes there!

   Generated on Fri Mar 24 06:10:22 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102574Gene10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102574Gene10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102574Gene10() { }
    const char * GetName() const { return "Gene"; }
    const char * GetSymbol() const { return "Ge"; }
    const char * GetSummary() const { return "Gene (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "Spencer Harmon"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "lgpl"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff77eeee; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      Random & r = const_cast<UlamContext<EC> &>(uc).GetRandom();
      return r.Create(8);
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102717Nucleus10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Nucleus.ulam'.
   Make any desired changes there!

   Generated on Fri Mar 24 06:10:22 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102717Nucleus10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102717Nucleus10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102717Nucleus10() { }
    const char * GetName() const { return "Nucleus"; }
    const char * GetSymbol() const { return "Nu"; }
    const char * GetSummary() const { return "Nucleus reads Genes to determine its behavior"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "Spencer Harmon"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "lgpl"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff11ff00; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      Random & r = const_cast<UlamContext<EC> &>(uc).GetRandom();
      return r.Create(8);
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


#endif /* ULAMCUSTOMELEMENTS_H */
