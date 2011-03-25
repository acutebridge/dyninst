/*
 * Copyright (c) 1996-2009 Barton P. Miller
 * 
 * We provide the Paradyn Parallel Performance Tools (below
 * described as "Paradyn") on an AS IS basis, and do not warrant its
 * validity or performance.  We reserve the right to update, modify,
 * or discontinue this software at any time.  We shall have no
 * obligation to supply such updates or modifications or any other
 * form of support to you.
 * 
 * By your use of Paradyn, you understand and agree that we (or any
 * other person or entity with proprietary rights in Paradyn) are
 * under no obligation to provide either maintenance services,
 * update services, notices of latent defects, or correction of
 * defects for Paradyn.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#if !defined(_R_T_MOVEMENT_ADHOC_H_)
#define _R_T_MOVEMENT_ADHOC_H_

class AddressSpace;

#include "Transformer.h"

#include "dataflowAPI/h/Absloc.h" // MemEmulator analysis


namespace Dyninst {
namespace Relocation {
class RelocInsn;
// Identify PC-relative memory accesses and replace
// them with a dedicated Atom
class adhocMovementTransformer : public Transformer {
  typedef dyn_detail::boost::shared_ptr<RelocInsn> RelocInsnPtr;
 public:
  virtual bool processTrace(TraceList::iterator &, const TraceMap &);

  adhocMovementTransformer(AddressSpace *as) : addrSpace(as) {};

  virtual ~adhocMovementTransformer() {};

 private:
  bool isPCDerefCF(AtomPtr ptr,
                   Address &destPtr);
  bool isPCRelData(AtomPtr ptr,
		   Address &target);
  // Records where PC was stored
  bool isGetPC(AtomPtr ptr,
	       Absloc &aloc,
	       Address &thunkAddr);
  // Used for finding call targets
  AddressSpace *addrSpace;
};

};
};
#endif